from typing import Union, Dict
import os
from datetime import datetime
import cantools
from timeit import timeit


class HalCanAutoGen(object):
    def __init__(self,
                 dbc_file: Dict[Union[str, cantools.database.can.database.Database], str],
                 storage_path: str = './',
                 modifier: str = os.getlogin()
                 ):

        self._dbc = dbc_file
        self._storage_path = storage_path
        self._modifier = modifier

        temp = {}
        for k, v in self._dbc.items():
            if isinstance(k, str):
                p, f = os.path.splitext(k)
                if f == '.dbc':
                    temp[cantools.database.load_file(k)] = self._dbc[k]
                    # self._dbc[cantools.database.load_file(k)] = self._dbc.pop(k)
                elif f == '.xls' or f == '.xlsx':
                    raise TypeError('暂不支持Excel类型通信矩阵')
                else:
                    raise ValueError('不是合法路径或DBC文件')

            elif isinstance(k, cantools.database.can.database.Database):
                temp[k] = self._dbc[k]
                # self._dbc = dbc_file
                pass
            else:
                raise TypeError('DBC文件类型错误')
        # 将字典转化为元组，并根据can通道进行排序
        self._dbc = sorted([(k, v) for k, v in temp.items()], key=lambda x: x[1])

        # 按照can0 can1 can2顺序排序，其中每路can按照VCU发送接收先后排序,仅io_vars.c和io_vars.h使用
        self._messages = []
        for d in self._dbc:
            self._messages += sorted([m for m in d[0].messages if 'VCU' in m.senders], key=lambda x: x.name) + \
                              sorted([m for m in d[0].messages if 'VCU' not in m.senders], key=lambda x: x.name)
        pass

    def generate_iovarsc_file(self):
        with open(self._storage_path + 'io_vars.c', 'w') as f:
            file_comment_part = f'/********************************************************************************\n' \
                                f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                f' * All Rights Reserved.\n' \
                                f' * Dept.:Software Department.\n' \
                                f' * FILE: io_vars.c\n' \
                                f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                                f' * History:\n' \
                                f' * {datetime.now().strftime("%Y-%m-%d")} {self._modifier}\n' \
                                f'********************************************************************************/\n' \
                                f'\n'
            f.write(file_comment_part)
            include_header_part = f'#include "build_control.h"\n' \
                                  f'#include "platform_config.h"\n' \
                                  f'#include "io_vars.h"\n' \
                                  f'\n'
            f.write(include_header_part)

            # BSW CAN Buffer Defination
            for dbc, chn in self._dbc:
                messages = sorted([m for m in dbc.messages if 'VCU' in m.senders], key=lambda x: x.name) + \
                           sorted([m for m in dbc.messages if 'VCU' not in m.senders], key=lambda x: x.name)

                for msg in messages:
                    comment = f'/* CAN Message: {msg.name}_buf */\n'
                    if 'VCU' in msg.senders:
                        # VCU发送的报文
                        var_name1 = f'hld_{chn}_{hex(msg.frame_id)}_msgReady'
                        var_name2 = f'hld_{chn}_{hex(msg.frame_id)}_msgTxFailed'
                        f.write(comment)
                        f.write('uint8_t'.ljust(9) + var_name1.ljust(33) + '= ' + '0u;'+ '\n')
                        f.write('uint8_t'.ljust(9) + var_name2.ljust(33) + '= ' + '0u;'+ '\n')
                        f.write('\n')
                    else:
                        # VCU接收的报文
                        var_name1 = f'hld_{chn}_{hex(msg.frame_id)}_received'
                        var_name2 = f'hld_{chn}_{hex(msg.frame_id)}_msgOverRun'
                        var_name3 = f'hld_{chn}_{hex(msg.frame_id)}_timeout'
                        var_name4 = f'hld_{chn}_{hex(msg.frame_id)}_msgValid'
                        f.write(comment)
                        f.write('uint8_t'.ljust(9) + var_name1.ljust(33) + '= ' + '0u;' + '\n')
                        f.write('uint8_t'.ljust(9) + var_name2.ljust(33) + '= ' + '0u;' + '\n')
                        f.write('uint8_t'.ljust(9) + var_name3.ljust(33) + '= ' + '0u;' + '\n')
                        f.write('uint8_t'.ljust(9) + var_name4.ljust(33) + '= ' + '0u;' + '\n')
                        f.write('\n')

            for msg in self._messages:
                buf_struct = f'uint8_t {msg.name}_buf[8] = \n' + \
                             '{\n' + \
                             '    0, 0, 0, 0, 0, 0, 0, 0\n' + \
                             '};\n'
                if 'ccp' in msg.name or 'uds' in msg.name:
                    buf_struct = buf_struct.replace('_buf', '')
                f.write(buf_struct)
            f.write('\n')

            for msg in self._messages:
                comment = f'/* {msg.name} Message Signals */\n'
                f.write(comment)
                for sig in msg.signals:
                    bsw_var_signal_name = 'pfc_' + sig.name.split("_")[-1]
                    if len(bsw_var_signal_name) >= 32:
                        print('超过长度的变量: ' + bsw_var_signal_name + f'{len(bsw_var_signal_name)}')

                    sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t'
                    sig_initval = (hex(int(-sig.offset / sig.scale))
                                   if sig.initial is None else hex(sig.initial)) + 'u'
                    f.write(
                        f'{sig_type.ljust(9)}{bsw_var_signal_name.ljust(32)} = {sig_initval.rjust(8)};\n')
                f.write('\n')
            f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

    def generate_iovarsh_file(self):
        with open(self._storage_path + 'io_vars.h', 'w') as f:
            file_comment_part = f'/********************************************************************************\n' \
                                f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                f' * All Rights Reserved.\n' \
                                f' * Dept.:Software Department.\n' \
                                f' * FILE: io_vars.h\n' \
                                f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                                f' * History:\n' \
                                f' * {datetime.now().strftime("%Y-%m-%d")} {self._modifier}\n' \
                                f'********************************************************************************/\n' \
                                f'\n'
            f.write(file_comment_part)
            include_header_part = f'#include "build_control.h"\n' \
                                  f'\n' \
                                  f'#ifndef __IO_VARS__\n' \
                                  f'#define __IO_VARS__\n' \
                                  f'\n'
            f.write(include_header_part)
            
            # BSW CAN Buffer Defination
            for dbc, chn in self._dbc:
                messages = sorted([m for m in dbc.messages if 'VCU' in m.senders], key=lambda x: x.name) + \
                           sorted([m for m in dbc.messages if 'VCU' not in m.senders], key=lambda x: x.name)

                for msg in messages:
                    if 'VCU' in msg.senders:
                        # VCU发送的报文
                        comment = f'/* CAN Message: {msg.name}_buf */\n'
                        var_name1 = f'hld_{chn}_{hex(msg.frame_id)}_msgReady;'
                        var_name2 = f'hld_{chn}_{hex(msg.frame_id)}_msgTxFailed;'
                        f.write(comment)
                        f.write('extern uint8_t ' + var_name1.ljust(44) + '\n')
                        f.write('extern uint8_t ' + var_name2.ljust(44) + '\n\n')
                    else:
                        # VCU接收的报文
                        comment = f'/* CAN Message: {msg.name}_buf */\n'
                        var_name1 = f'hld_{chn}_{hex(msg.frame_id)}_received;'
                        var_name2 = f'hld_{chn}_{hex(msg.frame_id)}_msgOverRun;'
                        var_name3 = f'hld_{chn}_{hex(msg.frame_id)}_timeout;'
                        var_name4 = f'hld_{chn}_{hex(msg.frame_id)}_msgValid;'
                        f.write(comment)
                        f.write('extern uint8_t ' + var_name1.ljust(44) + '\n')
                        f.write('extern uint8_t ' + var_name2.ljust(44) + '\n')
                        f.write('extern uint8_t ' + var_name3.ljust(44) + '\n')
                        f.write('extern uint8_t ' + var_name4.ljust(44) + '\n\n')

            for msg in self._messages:
                buf_struct = f'extern uint8_t {msg.name}_buf[8];\n'
                if 'ccp' in msg.name or 'uds' in msg.name:
                    buf_struct = buf_struct.replace('_buf', '')
                f.write(buf_struct)
            f.write('\n')

            for msg in self._messages:
                comment = f'/* {msg.name} Message Signals */\n'
                f.write(comment)
                for sig in msg.signals:
                    sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t'
                    bsw_var_signal_name = 'pfc_' + sig.name.split("_")[-1]
                    f.write(f'extern {sig_type.ljust(8)} {bsw_var_signal_name};\n')
                f.write('\n')
            f.write('\n')

            f.write('#endif /*End of __IO_VARS__*/\n')
            f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

    def generate_hacgcanc_file(self):
        for dbc, chn in self._dbc:
            # 筛选出uds和ccp相关报文并按照VCU和其他节点排序
            messages = sorted([m for m in dbc.messages if 'VCU' in m.senders and 'uds' not in m.name and 'ccp' not in m.name], key=lambda x: x.name) + \
                       sorted([m for m in dbc.messages if 'VCU' not in m.senders and 'uds' not in m.name and 'ccp' not in m.name], key=lambda x: x.name)
            with open(self._storage_path + f'hacg_{chn}.c', 'w') as f:
                file_comment_part = f'/********************************************************************************\n' \
                                    f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                    f' * All Rights Reserved.\n' \
                                    f' * Dept.:Software Department.\n' \
                                    f' * FILE: hacg_{chn}.c\n' \
                                    f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                                    f' * History:\n' \
                                    f' * {datetime.now().strftime("%Y-%m-%d")} {self._modifier}\n' \
                                    f'********************************************************************************/\n' \
                                    f'\n'
                f.write(file_comment_part)
                include_header_part = f'#include "build_control.h"\n' \
                                      f'#include "platform_config.h"\n' \
                                      f'#include "io_vars.h"\n' \
                                      f'#include "hacg_{chn}.h"\n\n'
                f.write(include_header_part)

                for msg in messages:

                    if 'VCU' in msg.senders:

                        clear_buf_part = f'    /*Clear Message Buffer first!*/\n'
                        for i in range(8):
                            clear_buf_part += f'    {msg.name}_buf[{i}] = 0x00u;\n'

                        signal_pack_part = ''
                        for sig in msg.signals:
                            sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t'
                            bsw_var_signal_name = 'pfc_' + sig.name.split("_")[-1]
                            start = sig.start
                            lenth = sig.length
                            end = start + lenth
                            signal_pack_part += f'    /*signalName:{bsw_var_signal_name}, DataOrder:{sig.byte_order}, startBit: {sig.start}, length: {sig.length} */\n'

                            filter_bit_in_64 = '{:064b}'.format(int('1' * lenth, 2) << (start % 8))

                            for i, j in enumerate(range(start, end, 8)):
                                byte_index, _ = divmod(j, 8)
                                filter_bit_in_bin = filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1]
                                filter_bit_in_hex = '0x%02X' % int(filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1], 2)
                                shift_dir = '<<' if i == 0 else '>>'
                                shift_num = len(filter_bit_in_bin) - len(filter_bit_in_bin.rstrip('0'))
                                shift_num = shift_num if i == 0 else 8
                                signal_pack_part += f'    {msg.name}_buf[{byte_index}] |= ((uint8_t)({bsw_var_signal_name} {shift_dir} {shift_num}u) & {filter_bit_in_hex}u);\n'
                        function_body = f'void {chn.capitalize()}Msg_Pack_{hex(msg.frame_id)}(void)\n' \
                                        f'{{\n' \
                                        f'{clear_buf_part}\n' \
                                        f'{signal_pack_part}' \
                                        f'}}\n\n'
                        f.write(function_body)
                    else:
                        signal_unpack_part = ''
                        for sig in msg.signals:
                            sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t' if sig.length <= 32 else 'uint64_t'
                            bsw_var_signal_name = 'pfc_' + sig.name.split("_")[-1]
                            start = sig.start
                            lenth = sig.length
                            end = start + lenth
                            signal_unpack_part += f'    /*signalName:{bsw_var_signal_name}, DataOrder:{sig.byte_order}, startBit: {sig.start}, length: {sig.length} */\n'

                            filter_bit_in_64 = '{:064b}'.format(int('1' * lenth, 2) << (start % 8))
                            for i, j in enumerate(range(start, end, 8)):
                                assignment_symbol = '=' if i == 0 else '|='
                                byte_index, _ = divmod(j, 8)
                                filter_bit_in_bin = filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1]
                                filter_bit_in_hex = '0x%02X' % int(filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1], 2)
                                shift_dir = '>>' if i == 0 else '<<'
                                shift_num = len(filter_bit_in_bin) - len(filter_bit_in_bin.rstrip('0'))
                                shift_num = shift_num if i == 0 else i * 8
                                signal_unpack_part += f'    {bsw_var_signal_name.ljust(32)} {assignment_symbol.ljust(2)} (({sig_type})({msg.name}_buf[{byte_index}] & {filter_bit_in_hex}u) {shift_dir} {shift_num}u);\n'

                        function_body = f'void {chn.capitalize()}Msg_Unpack_{hex(msg.frame_id)}(void)\n' \
                                        f'{{\n' \
                                        f'{signal_unpack_part}' \
                                        f'}}\n\n'
                        f.write(function_body)

                f.write('\n')
                f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

    def generate_hacgcanh_file(self):
        for dbc, chn in self._dbc:
            # 筛选出uds和ccp相关报文并按照VCU和其他节点排序
            messages = sorted([m for m in dbc.messages if 'VCU' in m.senders and 'uds' not in m.name and 'ccp' not in m.name],key=lambda x: x.name) + \
                       sorted([m for m in dbc.messages if'VCU' not in m.senders and 'uds' not in m.name and 'ccp' not in m.name],key=lambda x: x.name)
            with open(self._storage_path + f'hacg_{chn}.h', 'w') as f:
                file_comment_part = f'/********************************************************************************\n' \
                                    f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                    f' * All Rights Reserved.\n' \
                                    f' * Dept.:Software Department.\n' \
                                    f' * FILE: hacg_{chn}.h\n' \
                                    f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                                    f' * History:\n' \
                                    f' * {datetime.now().strftime("%Y-%m-%d")} {self._modifier}\n' \
                                    f'********************************************************************************/\n' \
                                    f'\n'
                f.write(file_comment_part)
                include_header_part = f'#include "build_control.h"\n' \
                                      f'\n' \
                                      f'#ifndef __HACG_{chn.upper()}__\n' \
                                      f'#define __HACG_{chn.upper()}__\n' \
                                      f'\n'
                f.write(include_header_part)

                for msg in messages:
                    if 'VCU' in msg.senders:
                        f.write(
                            f'extern void {chn.capitalize()}Msg_Pack_{hex(msg.frame_id)}(void);\n')
                    else:
                        f.write(
                            f'extern void {chn.capitalize()}Msg_Unpack_{hex(msg.frame_id)}(void);\n')

                f.write('\n')
                f.write(f'#endif /*End of __HACG_{chn.upper()}__*/\n')
                f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

    def generate_platformconfigh_file(self):
        with open(self._storage_path + f'platform_config.h', 'w') as f:
            file_comment_part = f'/********************************************************************************\n' \
                                f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                f' * All Rights Reserved.\n' \
                                f' * Dept.:Software Department.\n' \
                                f' * FILE: platform_config.h\n' \
                                f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                                f' * History:\n' \
                                f' * {datetime.now().strftime("%Y-%m-%d")} {self._modifier}\n' \
                                f'********************************************************************************/\n' \
                                f'\n'
            f.write(file_comment_part)
            include_header_part = f'#include "build_control.h"\n' \
                                  f'\n' \
                                  f'#ifndef __PLATFORM_CONFIG__\n' \
                                  f'#define __PLATFORM_CONFIG__\n' \
                                  f'\n'
            f.write(include_header_part)

            for dbc, chn in self._dbc:
                messages = sorted([m for m in dbc.messages if 'VCU' in m.senders], key=lambda x: x.name) + \
                           sorted([m for m in dbc.messages if 'VCU' not in m.senders], key=lambda x: x.name)

                msg_num = len(messages)
                f.write(f'/*{chn.upper()} Message List Config:*/\n')
                f.write(f'#define {chn.upper()}_MSGS_COUNT ({msg_num}u)\n\n')

                typedef_content = ''.join([f'    {chn.upper()}_MSG_{msg.name.upper()},\n' for msg in messages])
                msg_name_typedef = f'typedef enum __{chn.upper()}_MSG_NAME_T__\n' \
                                   f'{{\n' \
                                   f'{typedef_content}' \
                                   f'}}{chn}msg_name_t;\n\n'

                f.write(msg_name_typedef)

                f.write(f'#define {chn.upper()}_MSGS_CONFIG \\\n')
                for msg in messages:
                    # 参数判断
                    frame_id = hex(msg.frame_id)
                    msg_type = 'MSG_TYPE_NORMAL' if 'uds' not in msg.name and 'ccp' not in msg.name else 'MSG_TYPE_DIAG'
                    extend_format = 'TRUE' if msg.is_extended_frame else 'FALSE'
                    tx = 'TRUE' if 'VCU' in msg.senders else 'FALSE'
                    dlc = '8'
                    valid_len = '8'
                    event = 'FALSE' if 'uds' not in msg.name or 'ccp' not in msg.name else 'TRUE'
                    gateway = 'FALSE'
                    period = f'( 0/10 )' if msg.cycle_time is None else f'( {msg.cycle_time}/10 )'
                    first_tx_delay = '( 10/10 )' if 'VCU' in msg.senders else '(  0/10 )'
                    p_buffer = f'{msg.name}_buf' if 'uds' not in msg.name and 'ccp' not in msg.name else f'{msg.name}'
                    rx_recieved = 'NULL' if 'VCU' in msg.senders else f'&hld_{chn}_{hex(msg.frame_id)}_received'
                    rx_overrun = 'NULL' if 'VCU' in msg.senders else f'&hld_{chn}_{hex(msg.frame_id)}_msgOverRun'
                    rx_timeout = 'NULL' if 'VCU' in msg.senders else f'&hld_{chn}_{hex(msg.frame_id)}_timeout'
                    rx_valid = 'NULL' if 'VCU' in msg.senders else f'&hld_{chn}_{hex(msg.frame_id)}_msgValid'
                    tx_ready = f'&hld_{chn}_{hex(msg.frame_id)}_msgReady' if 'VCU' in msg.senders else 'NULL'
                    tx_failed = f'&hld_{chn}_{hex(msg.frame_id)}_msgTxFailed' if 'VCU' in msg.senders else 'NULL'
                    pack_unpack = f'{chn.capitalize()}Msg_{"Pack" if "VCU" in msg.senders else "Unpack"}_{hex(msg.frame_id)}' \
                                  if 'uds' not in msg.name and 'ccp' not in msg.name else 'NULL'

                    msg_config = f'/* {chn.upper()}_MSG_{msg.name.upper()} */'.ljust(40) + \
                                 f'{{' + \
                                 f'{frame_id}'.rjust(11) + ', ' + \
                                 f'{msg_type}'.rjust(15) + ', ' + \
                                 f'{extend_format}'.rjust(5) + ', ' + \
                                 f'{tx}'.rjust(5) + ', ' + \
                                 f'{dlc}'.rjust(1) + ', ' + \
                                 f'{valid_len}'.rjust(1) + ', ' + \
                                 f'{event}'.rjust(5) + ', ' + \
                                 f'{gateway}'.rjust(5) + ', ' + \
                                 f'{period}'.rjust(11) + ', ' + \
                                 f'{first_tx_delay}'.rjust(11) + ', ' + \
                                 f'{p_buffer}'.rjust(32) + ', ' + \
                                 f'{rx_recieved}'.rjust(33) + ', ' + \
                                 f'{rx_overrun}'.rjust(33) + ', ' + \
                                 f'{rx_timeout}'.rjust(33) + ', ' + \
                                 f'{rx_valid}'.rjust(33) + ', ' + \
                                 f'{tx_ready}'.rjust(33) + ', ' + \
                                 f'{tx_failed}'.rjust(33) + ', ' + \
                                 f'{pack_unpack}'.rjust(32) + \
                                 f'}},\\\n'
                    f.write(msg_config)
                f.write('\n')

                f.write(f'#define {chn.upper()}_MSGS_ADD_CONFIG \\\n')
                for msg in messages:
                    msg_add_config = f'/* {chn.upper()}_MSG_{msg.name.upper()} */'.ljust(40) + \
                                     f'{{FALSE, 0, 0, NULL}},\\\n'
                    f.write(msg_add_config)
                f.write('\n')

            f.write('#endif\n\n')
            f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')
            pass

    def generate_all(self):
        self.generate_iovarsc_file()
        self.generate_iovarsh_file()
        self.generate_hacgcanh_file()
        self.generate_hacgcanc_file()
        self.generate_platformconfigh_file()


if __name__ == '__main__':
    can0_dbc = cantools.database.load_file(r'./WSD5060HR1EV_P_CAN_v1.0.dbc', encoding='gb2312')
    can1_dbc = cantools.database.load_file(r'./WSD5060HR1EV_C_CAN_v1.0.dbc', encoding='gb2312')
    can2_dbc = cantools.database.load_file(r'./WSD5060HR1EV_B_CAN_v1.0.dbc', encoding='gb2312')
    h = HalCanAutoGen({can0_dbc: 'can0', can1_dbc: 'can1', can2_dbc: 'can2'}, modifier='LinXiaobin', storage_path='./hal_cfg/')
    h.generate_all()

    # def timeitall():
    #     can0_dbc = cantools.database.load_file(r'./WSD5060HR1EV_P_CAN_v1.0.dbc', encoding='gb2312')
    #     can1_dbc = cantools.database.load_file(r'./WSD5060HR1EV_C_CAN_v1.0.dbc', encoding='gb2312')
    #     can2_dbc = cantools.database.load_file(r'./WSD5060HR1EV_B_CAN_v1.0.dbc', encoding='gb2312')
    #     h = HalCanAutoGen({can0_dbc: 'can0', can1_dbc: 'can1', can2_dbc: 'can2'}, modifier='LinXiaobin',
    #                       storage_path='./hal_cfg/')
    #     h.generate_all()
    # print(timeit(stmt='timeitall()', setup='from __main__ import timeitall', number=10))
