import cantools

can0_dbc = cantools.database.load_file(
    r'./KLNEV-TXXY001_V1.07-0315.dbc',
    encoding='gb2312')


# /* CAN Message: VCU_CMD_MCU_buf */
# uint8_t hld_can0_0x18000201_msgReady = 0u;
# uint8_t hld_can0_0x18000201_msgTxFailed = 0u;

# /* CAN Message: PMtoVMS_STATUS1_buf */
# uint8_t hld_can0_0x18000301_received = 0u;
# uint8_t hld_can0_0x18000301_msgOverRun = 0u;
# uint8_t hld_can0_0x18000301_timeout = 0u;
# uint8_t hld_can0_0x18000301_msgValid = 0u;

header_comment = '''/*********************************************************************************
 * Copyright 2022 @ Xiamen King Long Motor New Energy Technology Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: io_vars.c
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-02-16 Chenhoubo
 ********************************************************************************/\n'''

include_block = '''#include "build_control.h"
#include "platform_config.h"
#include "io_vars.h"\n\n'''

sig_prefix = 'pfc_'
msgbuf_prefix = 'hld_'

chn = 'can0'

with open('./test.c', 'w') as c_file:

    header_comment = '''/*********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: io_vars.c
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-02-16 Chenhoubo
 ********************************************************************************/\n\n'''
    c_file.write(header_comment)
    c_file.write(include_block)
    # TODO: 缺少uds相关报文结构体设定
    for msg in can0_dbc.messages:
        comment = f'/* CAN Message: {msg.name}_buf */\n'
        var_name = f'{msgbuf_prefix}{chn}_{msg.frame_id}'
        if 'VCU' in msg.senders:
            # VCU发送的报文
            c_file.write(comment)
            c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgReady'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgTxFailed'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n\n')
        else:
            # VCU接收的报文
            c_file.write(comment)
            c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_received'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgOverRun'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_timeout'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n')
            c_file.write(
                'uint8_t'.ljust(12) +
                f'{msgbuf_prefix}{chn}_{hex(msg.frame_id)}_msgValid'.ljust(44) +
                '=' +
                '0u;'.rjust(12) +
                '\n\n')

    for msg in can0_dbc.messages:
        c_file.write(
            f'uint8_t {msg.name}_buf[8] = \n' +
            '{\n' +
            '    0, 0, 0, 0, 0, 0, 0, 0\n' +
            '};\n')
    c_file.write('\n')

    for msg in can0_dbc.messages:
        print(msg)
        for sig in msg.signals:
            print(sig)
            sig_type = 'uint8_t' if sig.length <= 8 else 'uint16_t' if sig.length <= 16 else 'uint32_t'
            sig_initvalue = hex(int(-sig.offset / sig.scale)) + \
                'u' if sig.initial is None else hex(sig.initial) + 'u'
            c_file.write(
                f'{sig_type.ljust(12)}{sig_prefix}{sig.name.ljust(44)}={sig_initvalue.rjust(12)};\n')
        c_file.write('\n')
    c_file.write('/*-------------------------------------EOF--------------------------------------*/\n\n')

pass
