from typing import Union, Dict
import os
from datetime import datetime
import cantools


# TODO: 解决DBC和CAN通道映射关系
class HalCanAutoGen(object):
    def __init__(self,
                 dbc_file: Dict[Union[str, cantools.database.can.database.Database], str],
                 storage_path: str = './',
                 modifier: str = os.getlogin()
                 ):

        self._dbc = dbc_file
        self._storage_path = storage_path
        self._modifier = modifier
        self._chn = 'can0'

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
        self._dbc = temp
        # TODO: 先排序can0报文，再排序can1报文
        self._messages = sorted([m for d in self._dbc for m in d.messages if 'VCU' in m.senders], key=lambda x: x.name) + \
                         sorted([m for d in self._dbc for m in d.messages if 'VCU' not in m.senders], key=lambda x: x.name)
        pass
        # self._messages = sorted([m for m in self._dbc.messages if 'VCU' in m.senders], key=lambda x: x.name) + \
        #                  sorted([m for m in self._dbc.messages if 'VCU' not in m.senders], key=lambda x: x.name)

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
            for msg in self._messages:
                comment = f'/* CAN Message: {msg.name}_buf */\n'

                if 'VCU' in msg.senders:
                    # VCU发送的报文
                    var_name1 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgReady'
                    var_name2 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgTxFailed'
                    f.write(comment)
                    f.write('uint8_t'.ljust(12) + var_name1.ljust(44) + '=' + '0u;'.rjust(12) + '\n')
                    f.write('uint8_t'.ljust(12) + var_name2.ljust(44) + '=' + '0u;'.rjust(12) + '\n')
                    f.write('\n')
                else:
                    # VCU接收的报文
                    var_name1 = f'hld_{self._chn}_{hex(msg.frame_id)}_received'
                    var_name2 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgOverRun'
                    var_name3 = f'hld_{self._chn}_{hex(msg.frame_id)}_timeout'
                    var_name4 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgValid'
                    f.write(comment)
                    f.write('uint8_t'.ljust(12) + var_name1.ljust(44) + '=' + '0u;'.rjust(12) + '\n')
                    f.write('uint8_t'.ljust(12) + var_name2.ljust(44) + '=' + '0u;'.rjust(12) + '\n')
                    f.write('uint8_t'.ljust(12) + var_name3.ljust(44) + '=' + '0u;'.rjust(12) + '\n')
                    f.write('uint8_t'.ljust(12) + var_name4.ljust(44) + '=' + '0u;'.rjust(12) + '\n')
                    f.write('\n')
            ccp_uds_part = '''/* CAN Message: ccp_daq_0 */
uint8_t hld_can2_0x219_0_msgReady = 0u;
uint8_t hld_can2_0x219_0_msgTxFailed = 0u;

/* CAN Message: ccp_daq_1 */
uint8_t hld_can2_0x219_1_msgReady = 0u;
uint8_t hld_can2_0x219_1_msgTxFailed = 0u;

/* CAN Message: ccp_daq_2 */
uint8_t hld_can2_0x219_2_msgReady = 0u;
uint8_t hld_can2_0x219_2_msgTxFailed = 0u;

/* CAN Message: ccp_daq_3 */
uint8_t hld_can2_0x219_3_msgReady = 0u;
uint8_t hld_can2_0x219_3_msgTxFailed = 0u;

/* CAN Message: ccp_daq_4 */
uint8_t hld_can2_0x219_4_msgReady = 0u;
uint8_t hld_can2_0x219_4_msgTxFailed = 0u;

/* CAN Message: ccp_daq_5 */
uint8_t hld_can2_0x219_5_msgReady = 0u;
uint8_t hld_can2_0x219_5_msgTxFailed = 0u;

/* CAN Message: ccp_daq_6 */
uint8_t hld_can2_0x219_6_msgReady = 0u;
uint8_t hld_can2_0x219_6_msgTxFailed = 0u;

/* CAN Message: ccp_daq_7 */
uint8_t hld_can2_0x219_7_msgReady = 0u;
uint8_t hld_can2_0x219_7_msgTxFailed = 0u;

/* CAN Message: ccp_daq_8 */
uint8_t hld_can2_0x219_8_msgReady = 0u;
uint8_t hld_can2_0x219_8_msgTxFailed = 0u;

/* CAN Message: ccp_tx */
uint8_t hld_can2_0x739_msgReady = 0u;
uint8_t hld_can2_0x739_msgTxFailed = 0u;

/* CAN Message: ccp_rx */
uint8_t hld_can2_0x729_received = 0u;
uint8_t hld_can2_0x729_msgOverRun = 0u;
uint8_t hld_can2_0x729_timeout = 0u;
uint8_t hld_can2_0x729_msgValid = 0u;

/* CAN Message: uds_tx */
uint8_t hld_can2_0x18DAF110_msgReady = 0u;
uint8_t hld_can2_0x18DAF110_msgTxFailed = 0u;

/* CAN Message: uds_rx */
uint8_t hld_can2_0x18DA10F1_received = 0u;
uint8_t hld_can2_0x18DA10F1_msgOverRun = 0u;
uint8_t hld_can2_0x18DA10F1_timeout = 0u;
uint8_t hld_can2_0x18DA10F1_msgValid = 0u;

/* CAN Message: uds_rx_func */
uint8_t hld_can2_0x18DB33F1_received = 0u;
uint8_t hld_can2_0x18DB33F1_msgOverRun = 0u;
uint8_t hld_can2_0x18DB33F1_timeout = 0u;
uint8_t hld_can2_0x18DB33F1_msgValid = 0u;

/* CAN Message: vin_resp_buf */
uint8_t hld_can2_0x18DAF103_msgReady = 0u;
uint8_t hld_can2_0x18DAF103_msgTxFailed = 0u;

'''
            # f.write(ccp_uds_part)

            # BSW CAN Buffer Struct Defination
            for msg in self._messages:
                buf_struct = f'uint8_t {msg.name}_buf[8] = \n' + \
                             '{\n' + \
                             '    0, 0, 0, 0, 0, 0, 0, 0\n' + \
                             '};\n'
                f.write(buf_struct)
            f.write('\n')
            ccp_uds_part = '''uint8_t ccp_daq_0[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_1[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_2[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_3[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_4[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_5[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_6[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_7[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_daq_8[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_tx[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t ccp_rx[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t vin_resp_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};

'''
            # f.write(ccp_uds_part)

            # BSW Signal Defination
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
                        f'{sig_type.ljust(12)}{bsw_var_signal_name.ljust(44)}={sig_initval.rjust(12)};\n')
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

            for msg in self._messages:
                if 'VCU' in msg.senders:
                    # VCU发送的报文
                    comment = f'/* CAN Message: {msg.name}_buf */\n'
                    var_name1 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgReady;'
                    var_name2 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgTxFailed;'
                    f.write(comment)
                    f.write('extern uint8_t ' + var_name1.ljust(44) + '\n')
                    f.write('extern uint8_t ' + var_name2.ljust(44) + '\n\n')
                else:
                    # VCU接收的报文
                    comment = f'/* CAN Message: {msg.name}_buf */\n'
                    var_name1 = f'hld_{self._chn}_{hex(msg.frame_id)}_received;'
                    var_name2 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgOverRun;'
                    var_name3 = f'hld_{self._chn}_{hex(msg.frame_id)}_timeout;'
                    var_name4 = f'hld_{self._chn}_{hex(msg.frame_id)}_msgValid;'
                    f.write(comment)
                    f.write('extern uint8_t ' + var_name1.ljust(44) + '\n')
                    f.write('extern uint8_t ' + var_name2.ljust(44) + '\n')
                    f.write('extern uint8_t ' + var_name3.ljust(44) + '\n')
                    f.write('extern uint8_t ' + var_name4.ljust(44) + '\n\n')

            for msg in self._messages:
                f.write(f'extern uint8_t {msg.name}_buf[8];\n')
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
        with open(self._storage_path + 'hacg_can.c', 'w') as f:
            file_comment_part = f'/********************************************************************************\n' \
                                f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                f' * All Rights Reserved.\n' \
                                f' * Dept.:Software Department.\n' \
                                f' * FILE: hacg_can.c\n' \
                                f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                                f' * History:\n' \
                                f' * {datetime.now().strftime("%Y-%m-%d")} {self._modifier}\n' \
                                f'********************************************************************************/\n' \
                                f'\n'
            f.write(file_comment_part)
            include_header_part = f'#include "build_control.h"\n' \
                                  f'#include "platform_config.h"\n' \
                                  f'#include "io_vars.h"\n' \
                                  f'#include "hacg_can0.h"\n\n'
            f.write(include_header_part)

            for msg in self._messages:
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
                    function_body = f'void Can0Msg_Pack_{hex(msg.frame_id)}(void)\n' \
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
                            signal_unpack_part += f'    {bsw_var_signal_name.ljust(32)} {assignment_symbol} (({sig_type})({msg.name}_buf[{byte_index}] & {filter_bit_in_hex}u) {shift_dir} {shift_num}u);\n'

                    function_body = f'void Can0Msg_Unpack_{hex(msg.frame_id)}(void)\n' \
                                    f'{{\n' \
                                    f'{signal_unpack_part}' \
                                    f'}}\n\n'
                    f.write(function_body)

            f.write('\n')
            f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

    def generate_hacgcanh_file(self):
        with open(self._storage_path + 'hacg_can.h', 'w') as f:
            file_comment_part = f'/********************************************************************************\n' \
                                f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                                f' * All Rights Reserved.\n' \
                                f' * Dept.:Software Department.\n' \
                                f' * FILE: hacg_can.h\n' \
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

            for msg in self._messages:
                if 'VCU' in msg.senders:
                    f.write(
                        f'extern void Can0Msg_pack_{hex(msg.frame_id)}(void);\n')
                else:
                    f.write(
                        f'extern void Can0Msg_Unpack_{hex(msg.frame_id)}(void);\n')

            f.write('\n')
            f.write('#endif /*End of __HACG_CAN1__*/\n')
            f.write('/*-------------------------------------EOF--------------------------------------*/\n\n')


if __name__ == '__main__':
    can0_dbc = cantools.database.load_file(r'./WSD5060HR1EV_P_CAN_v1.0.dbc', encoding='gb2312')
    h = HalCanAutoGen({can0_dbc: 'can0', r'./WSD5060HR1EV_C_CAN_v1.0.dbc': 'can1'}, modifier='LinXiaobin')
    h.generate_iovarsc_file()
    h.generate_iovarsh_file()
    h.generate_hacgcanh_file()
    h.generate_hacgcanc_file()
