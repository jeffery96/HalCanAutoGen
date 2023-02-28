import cantools

# can0_dbc = cantools.database.load_file(r'./KLNEV-TXXY001_V1.07-0315.dbc', encoding='gb2312')
can0_dbc = cantools.database.load_file(r'./WSD5060HR1EV_P_CAN_v1.0.dbc', encoding='gb2312')

# 对报文排序，VCU发送报文在前
messages = [m for m in can0_dbc.messages if 'VCU' in m.senders] + \
           [m for m in can0_dbc.messages if 'VCU' not in m.senders]

sig_prefix = 'pfc_'
msgbuf_prefix = 'hld_'

chn = 'can0'

with open('./io_vars.c', 'w') as iovars_c_file:

    header_comment = f'/*********************************************************************************\n' \
                     f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                     f' * All Rights Reserved.\n' \
                     f' * Dept.:Software Department.\n' \
                     f' * FILE: io_vars.\n' \
                     f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                     f' * History:\n' \
                     f' * 2023-02-16 Chenhoubo\n' \
                     f'********************************************************************************/\n' \
                     f'\n'

    include_block = f'#include "build_control.h"\n' \
                    f'#include "platform_config.h"\n' \
                    f'#include "io_vars.h"\n' \
                    f'\n'

    iovars_c_file.write(header_comment)
    iovars_c_file.write(include_block)
    # TODO: 缺少uds相关报文结构体设定
    for msg in messages:
        comment = f'/* CAN Message: {msg.name}_buf */\n'
        var_name = f'{msgbuf_prefix}{chn}_{msg.frame_id}'
        if 'VCU' in msg.senders:
            # VCU发送的报文
            iovars_c_file.write(comment)
            iovars_c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgReady'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            iovars_c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgTxFailed'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n\n')
        else:
            # VCU接收的报文
            iovars_c_file.write(comment)
            iovars_c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_received'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            iovars_c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgOverRun'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            iovars_c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_timeout'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            iovars_c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgValid'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n\n')

    for msg in messages:
        iovars_c_file.write(
            f'uint8_t {msg.name}_buf[8] = \n' +
            '{\n' +
            '    0, 0, 0, 0, 0, 0, 0, 0\n' +
            '};\n')
    iovars_c_file.write('\n')

    for msg in messages:

        for sig in msg.signals:
            bsw_var_signal_name = sig_prefix + sig.name.split("_")[-1]
            if len(bsw_var_signal_name) >= 32:
                print('超过长度的变量: ' + bsw_var_signal_name)

            sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t'
            sig_initvalue = hex(int(-sig.offset / sig.scale)) + \
                'u' if sig.initial is None else hex(sig.initial) + 'u'
            iovars_c_file.write(
                f'{sig_type.ljust(12)}{sig_prefix}{sig.name.split("_")[-1].ljust(44)}={sig_initvalue.rjust(12)};\n')
        iovars_c_file.write('\n')
    iovars_c_file.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

with open('./io_vars.h', 'w') as iovars_h_file:

    header_comment = f'/*********************************************************************************\n' \
                     f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                     f' * All Rights Reserved.\n' \
                     f' * Dept.:Software Department.\n' \
                     f' * FILE: io_vars.\n' \
                     f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                     f' * History:\n' \
                     f' * 2023-02-16 Chenhoubo\n' \
                     f'********************************************************************************/\n' \
                     f'\n'

    include_block = f'#include "build_control.h"\n' \
                    f'\n' \
                    f'#ifndef __IO_VARS__\n' \
                    f'#define __IO_VARS__\n' \
                    f'\n'

    iovars_h_file.write(header_comment)
    iovars_h_file.write(include_block)

    for msg in messages:
        comment = f'/* CAN Message: {msg.name}_buf */\n'
        var_name = f'{msgbuf_prefix}{chn}_{msg.frame_id}'
        if 'VCU' in msg.senders:
            # VCU发送的报文
            iovars_h_file.write(comment)
            iovars_h_file.write(
                'extern uint8_t ' +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgReady;'.ljust(44) + '\n')
            iovars_h_file.write(
                'extern uint8_t ' +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgTxFailed;'.ljust(44) + '\n\n')
        else:
            # VCU接收的报文
            iovars_h_file.write(comment)
            iovars_h_file.write(
                'extern uint8_t ' +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_received;'.ljust(44) + '\n')
            iovars_h_file.write(
                'extern uint8_t ' +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgOverRun;'.ljust(44) + '\n')
            iovars_h_file.write(
                'extern uint8_t ' +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_timeout;'.ljust(44) + '\n')
            iovars_h_file.write(
                'extern uint8_t ' +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgValid;'.ljust(44) + '\n\n')

    for msg in can0_dbc.messages:
        iovars_h_file.write(f'extern uint8_t {msg.name}_buf[8];\n')
    iovars_h_file.write('\n')

    for msg in messages:
        for sig in msg.signals:
            sig_type = 'extern uint8_t' if sig.length <= 8 else 'extern uint16_t' if sig.length <= 16 else 'extern uint32_t'
            sig_initvalue = hex(int(-sig.offset / sig.scale)) + \
                'u' if sig.initial is None else hex(sig.initial) + 'u'
            iovars_h_file.write(
                f'{sig_type.ljust(16)}{sig_prefix}{sig.name.split("_")[-1]};\n')
        iovars_h_file.write('\n')
    iovars_h_file.write('\n\n')

    iovars_h_file.write('#endif /*End of __IO_VARS__*/\n'
                 '/*-------------------------------------EOF--------------------------------------*/\n\n')

with open('./hacg_can.c', 'w') as hacg_can_c_file:

    header_comment = f'/*********************************************************************************\n' \
                     f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                     f' * All Rights Reserved.\n' \
                     f' * Dept.:Software Department.\n' \
                     f' * FILE: hacg_can0.h\n' \
                     f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                     f' * History:\n' \
                     f' * 2023-02-16 Chenhoubo\n' \
                     f'********************************************************************************/\n' \
                     f'\n\n'

    include_block = f'#include "build_control.h"\n' \
                    f'#include "platform_config.h"\n' \
                    f'#include "io_vars.h"\n' \
                    f'#include "hacg_can0.h"\n\n' \

    hacg_can_c_file.write(header_comment)
    hacg_can_c_file.write(include_block)

    # msgs = [can0_dbc.get_message_by_name('VCU1_TM2_Command'), can0_dbc.get_message_by_name('TM_STATUS_1')]
    # sig = msgs[0].signals

    # /*signalName:pfc_PreChg_Relay_Status, DataOrder:Intel, startBit: 0, length: 2 */
    # pfc_PreChg_Relay_Status = ((uint8_t)(HVCM_buf[0] & 0x03u) >> 0u);
    for msg in messages:
        if 'VCU' in msg.senders:
            hacg_can_c_file.write(f'void Can0Msg_Pack_{hex(msg.frame_id)}(void)\n'
                                  f'{{\n')
            # Clear Message Buffer first!
            hacg_can_c_file.write(f'    /*Clear Message Buffer first!*/\n')
            for i in range(8):
                hacg_can_c_file.write(f'    {msg.name}_buf[{i}] = 0x00u;\n')
            hacg_can_c_file.write('\n')

            for sig in msg.signals:
                sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t'
                start = sig.start
                lenth = sig.length
                end = start + lenth
                hacg_can_c_file.write(f'    /*signalName:pfc_{sig.name}, DataOrder:{sig.byte_order}, startBit: {sig.start}, length: {sig.length} */\n')

                filter_bit_in_64 = '{:064b}'.format(int('1' * lenth, 2) << (start % 8))

                for i, j in enumerate(range(start, end, 8)):
                    byte_index, _ = divmod(j, 8)
                    filter_bit_in_bin = filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1]
                    filter_bit_in_hex = '0x%02X' % int(filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1], 2)
                    shift_dir = '<<' if i == 0 else '>>'
                    shift_num = len(filter_bit_in_bin) - len(filter_bit_in_bin.rstrip('0'))
                    shift_num = shift_num if i == 0 else 8

                    hacg_can_c_file.write(f'    {msg.name}_buf[{byte_index}] |= ((uint8_t)(pfc_{sig.name.split("_")[-1]} {shift_dir} {shift_num}u) & {filter_bit_in_hex}u);\n')

            hacg_can_c_file.write(f'}}\n\n')
        else:
            # / *signalName: pfc_PM_Motor_Torque, DataOrder: Intel, startBit: 0, length: 16 * /
            # pfc_PM_Motor_Torque = ((uint16_t)(PMtoVMS_STATUS1_buf[0] & 0xFFu) >> 0u);
            # pfc_PM_Motor_Torque |= ((uint16_t)(PMtoVMS_STATUS1_buf[1] & 0xFFu) << 8u);
            hacg_can_c_file.write(f'void Can0Msg_Unpack_{hex(msg.frame_id)}(void)\n'
                                  f'{{\n')
            for sig in msg.signals:
                sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t' if sig.length <= 32 else 'uint64_t'
                start = sig.start
                lenth = sig.length
                end = start + lenth
                hacg_can_c_file.write(
                    f'    /*signalName:pfc_{sig.name.split("_")[-1]}, DataOrder:{sig.byte_order}, startBit: {sig.start}, length: {sig.length} */\n')

                filter_bit_in_64 = '{:064b}'.format(int('1' * lenth, 2) << (start % 8))
                for i, j in enumerate(range(start, end, 8)):
                    # print(i, j, divmod(j, 8)[0])

                    assignment_symbol = '=' if i == 0 else '|='
                    byte_index, _ = divmod(j, 8)
                    filter_bit_in_bin = filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1]
                    filter_bit_in_hex = '0x%02X' % int(filter_bit_in_64[::-1][i * 8:(i + 1) * 8][::-1], 2)
                    shift_dir = '>>' if i == 0 else '<<'
                    shift_num = len(filter_bit_in_bin) - len(filter_bit_in_bin.rstrip('0'))
                    shift_num = shift_num if i == 0 else i*8
                    # print(shift_num)
                    hacg_can_c_file.write(f'    pfc_{sig.name.split("_")[-1]} {assignment_symbol} (({sig_type})({msg.name}_buf[{byte_index}] & {filter_bit_in_hex}u) {shift_dir} {shift_num}u);\n')

            hacg_can_c_file.write(f'}}\n\n')
    hacg_can_c_file.write('\n')
    hacg_can_c_file.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

with open('./hacg_can.h', 'w') as hacg_can_h_file:

    header_comment = f'/*********************************************************************************\n' \
                     f' * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.\n' \
                     f' * All Rights Reserved.\n' \
                     f' * Dept.:Software Department.\n' \
                     f' * FILE: hacg_can0.\n' \
                     f' * Description: This file is automatic generate by HalCanAutoGen.\n' \
                     f' * History:\n' \
                     f' * 2023-02-16 Chenhoubo\n' \
                     f'********************************************************************************/\n' \
                     f'\n\n'

    include_block = f'#include "build_control.h"\n' \
                    f'\n' \
                    f'#ifndef __HACG_CAN0__\n' \
                    f'#define __HACG_CAN0__\n'

    hacg_can_h_file.write(header_comment)
    hacg_can_h_file.write(include_block)

    for msg in messages:
        if 'VCU' in msg.senders:
            hacg_can_h_file.write(f'extern void Can0Msg_pack_{hex(msg.frame_id)}(void);\n')
        else:
            hacg_can_h_file.write(f'extern void Can0Msg_Unpack_{hex(msg.frame_id)}(void);\n')

    hacg_can_h_file.write('\n')
    hacg_can_h_file.write('#endif /*End of __HACG_CAN1__*/\n')
    hacg_can_h_file.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

    pass

pass

# TODO: TMProMsg3_07B_TMSerialNum 这个信号长度为64，处理存在问题
