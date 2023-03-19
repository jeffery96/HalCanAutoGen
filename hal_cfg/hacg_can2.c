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

    /*signalName:pfc_vcuLvopEnable, DataOrder:little_endian, startBit: 0, length: 8 */
    LVOP_Control_buf[0] |= ((uint8_t)(pfc_vcuLvopEnable << 0u) & 0xFFu);
    /*signalName:pfc_vcuLvopVehicleVelocity, DataOrder:little_endian, startBit: 48, length: 8 */
    LVOP_Control_buf[6] |= ((uint8_t)(pfc_vcuLvopVehicleVelocity << 0u) & 0xFFu);
    /*signalName:pfc_vcuLifeToLvop, DataOrder:little_endian, startBit: 56, length: 8 */
    LVOP_Control_buf[7] |= ((uint8_t)(pfc_vcuLifeToLvop << 0u) & 0xFFu);
}

void Can2Msg_Unpack_0xcf603a1(void)
{
    /*signalName:pfc_lvopRunningState, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_lvopRunningState             =  ((uint8_t)(LVOP_Status1_buf[0] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopInputVoltage, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_lvopInputVoltage             =  ((uint8_t)(LVOP_Status1_buf[1] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopCurrent, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_lvopCurrent                  =  ((uint8_t)(LVOP_Status1_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopMotSpeed, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_lvopMotSpeed                 =  ((uint8_t)(LVOP_Status1_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopLifeToVcu, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_lvopLifeToVcu                =  ((uint8_t)(LVOP_Status1_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopMcuTemp, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_lvopMcuTemp                  =  ((uint8_t)(LVOP_Status1_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopFaultCode, DataOrder:little_endian, startBit: 56, length: 6 */
    pfc_lvopFaultCode                =  ((uint8_t)(LVOP_Status1_buf[7] & 0x3Fu) >> 0u);
    /*signalName:pfc_lvopFaultGrade, DataOrder:little_endian, startBit: 62, length: 2 */
    pfc_lvopFaultGrade               =  ((uint8_t)(LVOP_Status1_buf[7] & 0xC0u) >> 6u);
}


/*-------------------------------------EOF--------------------------------------*/

