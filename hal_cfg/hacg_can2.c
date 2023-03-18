/********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: hacg_can2.c
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-03-19 LinXiaobin
********************************************************************************/

#include "build_control.h"
#include "platform_config.h"
#include "io_vars.h"
#include "hacg_can2.h"

void Can2Msg_Pack_0x18f10527(void)
{
    /*Clear Message Buffer first!*/
    LVOP_Control_buf[0] = 0x00u;
    LVOP_Control_buf[1] = 0x00u;
    LVOP_Control_buf[2] = 0x00u;
    LVOP_Control_buf[3] = 0x00u;
    LVOP_Control_buf[4] = 0x00u;
    LVOP_Control_buf[5] = 0x00u;
    LVOP_Control_buf[6] = 0x00u;
    LVOP_Control_buf[7] = 0x00u;

    /*signalName:pfc_LVOilPumpEnable, DataOrder:little_endian, startBit: 0, length: 8 */
    LVOP_Control_buf[0] |= ((uint8_t)(pfc_LVOilPumpEnable << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVelocity, DataOrder:little_endian, startBit: 48, length: 8 */
    LVOP_Control_buf[6] |= ((uint8_t)(pfc_VehicleVelocity << 0u) & 0xFFu);
    /*signalName:pfc_LVOilPumpLife, DataOrder:little_endian, startBit: 56, length: 8 */
    LVOP_Control_buf[7] |= ((uint8_t)(pfc_LVOilPumpLife << 0u) & 0xFFu);
}

void Can2Msg_Pack_0x18daf103(void)
{
    /*Clear Message Buffer first!*/
    vin_resp_buf[0] = 0x00u;
    vin_resp_buf[1] = 0x00u;
    vin_resp_buf[2] = 0x00u;
    vin_resp_buf[3] = 0x00u;
    vin_resp_buf[4] = 0x00u;
    vin_resp_buf[5] = 0x00u;
    vin_resp_buf[6] = 0x00u;
    vin_resp_buf[7] = 0x00u;

}

void Can2Msg_Unpack_0xcf603a1(void)
{
    /*signalName:pfc_LVOilPumpRunningState, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_LVOilPumpRunningState        =  ((uint8_t)(LVOP_Status1_buf[0] & 0xFFu) >> 0u);
    /*signalName:pfc_LVOilPumpInputVoltage, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_LVOilPumpInputVoltage        =  ((uint8_t)(LVOP_Status1_buf[1] & 0xFFu) >> 0u);
    /*signalName:pfc_LVOilPumpCurrent, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_LVOilPumpCurrent             =  ((uint8_t)(LVOP_Status1_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_LVOilPumpMotorSpeed, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_LVOilPumpMotorSpeed          =  ((uint8_t)(LVOP_Status1_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_LVOilPumpLife, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_LVOilPumpLife                =  ((uint8_t)(LVOP_Status1_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_LVOilPumpMCUTemp, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_LVOilPumpMCUTemp             =  ((uint8_t)(LVOP_Status1_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_LVOilPumpFaultCode, DataOrder:little_endian, startBit: 56, length: 6 */
    pfc_LVOilPumpFaultCode           =  ((uint8_t)(LVOP_Status1_buf[7] & 0x3Fu) >> 0u);
    /*signalName:pfc_LVOilPumpFaultGrade, DataOrder:little_endian, startBit: 62, length: 2 */
    pfc_LVOilPumpFaultGrade          =  ((uint8_t)(LVOP_Status1_buf[7] & 0xC0u) >> 6u);
}


/*-------------------------------------EOF--------------------------------------*/

