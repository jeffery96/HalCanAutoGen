/********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: hacg_can0.c
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-03-19 LinXiaobin
********************************************************************************/

#include "build_control.h"
#include "platform_config.h"
#include "io_vars.h"
#include "hacg_can0.h"

void Can0Msg_Pack_0xcff6327(void)
{
    /*Clear Message Buffer first!*/
    VCU_BattPowerAllow_buf[0] = 0x00u;
    VCU_BattPowerAllow_buf[1] = 0x00u;
    VCU_BattPowerAllow_buf[2] = 0x00u;
    VCU_BattPowerAllow_buf[3] = 0x00u;
    VCU_BattPowerAllow_buf[4] = 0x00u;
    VCU_BattPowerAllow_buf[5] = 0x00u;
    VCU_BattPowerAllow_buf[6] = 0x00u;
    VCU_BattPowerAllow_buf[7] = 0x00u;

    /*signalName:pfc_vcuMcuPackCurrent, DataOrder:little_endian, startBit: 0, length: 16 */
    VCU_BattPowerAllow_buf[0] |= ((uint8_t)(pfc_vcuMcuPackCurrent << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[1] |= ((uint8_t)(pfc_vcuMcuPackCurrent >> 8u) & 0xFFu);
    /*signalName:pfc_vcuMcuPackInsideVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    VCU_BattPowerAllow_buf[2] |= ((uint8_t)(pfc_vcuMcuPackInsideVoltage << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[3] |= ((uint8_t)(pfc_vcuMcuPackInsideVoltage >> 8u) & 0xFFu);
    /*signalName:pfc_vcuMcuAllowMaxDischgCurr, DataOrder:little_endian, startBit: 32, length: 16 */
    VCU_BattPowerAllow_buf[4] |= ((uint8_t)(pfc_vcuMcuAllowMaxDischgCurr << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[5] |= ((uint8_t)(pfc_vcuMcuAllowMaxDischgCurr >> 8u) & 0xFFu);
    /*signalName:pfc_vcuMcuAllowMaxChgCurr, DataOrder:little_endian, startBit: 48, length: 16 */
    VCU_BattPowerAllow_buf[6] |= ((uint8_t)(pfc_vcuMcuAllowMaxChgCurr << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[7] |= ((uint8_t)(pfc_vcuMcuAllowMaxChgCurr >> 8u) & 0xFFu);
}

void Can0Msg_Pack_0xcff6127(void)
{
    /*Clear Message Buffer first!*/
    VCU_MCU_Cmd_buf[0] = 0x00u;
    VCU_MCU_Cmd_buf[1] = 0x00u;
    VCU_MCU_Cmd_buf[2] = 0x00u;
    VCU_MCU_Cmd_buf[3] = 0x00u;
    VCU_MCU_Cmd_buf[4] = 0x00u;
    VCU_MCU_Cmd_buf[5] = 0x00u;
    VCU_MCU_Cmd_buf[6] = 0x00u;
    VCU_MCU_Cmd_buf[7] = 0x00u;

    /*signalName:pfc_vcuMcuSystemReady, DataOrder:little_endian, startBit: 0, length: 2 */
    VCU_MCU_Cmd_buf[0] |= ((uint8_t)(pfc_vcuMcuSystemReady << 0u) & 0x03u);
    /*signalName:pfc_vcuMcuParkingSystemState, DataOrder:little_endian, startBit: 2, length: 3 */
    VCU_MCU_Cmd_buf[0] |= ((uint8_t)(pfc_vcuMcuParkingSystemState << 2u) & 0x1Cu);
    /*signalName:pfc_vcuMcuFootBrakeState, DataOrder:little_endian, startBit: 8, length: 1 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_vcuMcuFootBrakeState << 0u) & 0x01u);
    /*signalName:pfc_vcuMcuIGBTEnable, DataOrder:little_endian, startBit: 9, length: 2 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_vcuMcuIGBTEnable << 1u) & 0x06u);
    /*signalName:pfc_vcuMcuControlMode, DataOrder:little_endian, startBit: 11, length: 3 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_vcuMcuControlMode << 3u) & 0x38u);
    /*signalName:pfc_vcuMcuDirection, DataOrder:little_endian, startBit: 14, length: 2 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_vcuMcuDirection << 6u) & 0xC0u);
    /*signalName:pfc_vcuMcuDemandTorque, DataOrder:little_endian, startBit: 16, length: 16 */
    VCU_MCU_Cmd_buf[2] |= ((uint8_t)(pfc_vcuMcuDemandTorque << 0u) & 0xFFu);
    VCU_MCU_Cmd_buf[3] |= ((uint8_t)(pfc_vcuMcuDemandTorque >> 8u) & 0xFFu);
    /*signalName:pfc_vcuMcuDemandSpeed, DataOrder:little_endian, startBit: 32, length: 16 */
    VCU_MCU_Cmd_buf[4] |= ((uint8_t)(pfc_vcuMcuDemandSpeed << 0u) & 0xFFu);
    VCU_MCU_Cmd_buf[5] |= ((uint8_t)(pfc_vcuMcuDemandSpeed >> 8u) & 0xFFu);
    /*signalName:pfc_vcuLifeToMcu1, DataOrder:little_endian, startBit: 56, length: 4 */
    VCU_MCU_Cmd_buf[7] |= ((uint8_t)(pfc_vcuLifeToMcu1 << 0u) & 0x0Fu);
}

void Can0Msg_Pack_0xcff6227(void)
{
    /*Clear Message Buffer first!*/
    VCU_Vehicle_States_buf[0] = 0x00u;
    VCU_Vehicle_States_buf[1] = 0x00u;
    VCU_Vehicle_States_buf[2] = 0x00u;
    VCU_Vehicle_States_buf[3] = 0x00u;
    VCU_Vehicle_States_buf[4] = 0x00u;
    VCU_Vehicle_States_buf[5] = 0x00u;
    VCU_Vehicle_States_buf[6] = 0x00u;
    VCU_Vehicle_States_buf[7] = 0x00u;

    /*signalName:pfc_vcuMcuAccePedalPosition, DataOrder:little_endian, startBit: 0, length: 8 */
    VCU_Vehicle_States_buf[0] |= ((uint8_t)(pfc_vcuMcuAccePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_vcuMcuBrakePedalPosition, DataOrder:little_endian, startBit: 8, length: 8 */
    VCU_Vehicle_States_buf[1] |= ((uint8_t)(pfc_vcuMcuBrakePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_vcuMcuAntiRollBackSwitch, DataOrder:little_endian, startBit: 16, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_vcuMcuAntiRollBackSwitch << 0u) & 0x03u);
    /*signalName:pfc_vcuMcuMotSpeedLimitSwitch, DataOrder:little_endian, startBit: 18, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_vcuMcuMotSpeedLimitSwitch << 2u) & 0x0Cu);
    /*signalName:pfc_vcuMcuSlideSwitch, DataOrder:little_endian, startBit: 20, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_vcuMcuSlideSwitch << 4u) & 0x30u);
    /*signalName:pfc_vcuMcuCrawlOff, DataOrder:little_endian, startBit: 22, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_vcuMcuCrawlOff << 6u) & 0xC0u);
    /*signalName:pfc_vcuMcuVehSpdLimitMotSpd, DataOrder:little_endian, startBit: 24, length: 16 */
    VCU_Vehicle_States_buf[3] |= ((uint8_t)(pfc_vcuMcuVehSpdLimitMotSpd << 0u) & 0xFFu);
    VCU_Vehicle_States_buf[4] |= ((uint8_t)(pfc_vcuMcuVehSpdLimitMotSpd >> 8u) & 0xFFu);
    /*signalName:pfc_vcuLifeToMcu2, DataOrder:little_endian, startBit: 56, length: 4 */
    VCU_Vehicle_States_buf[7] |= ((uint8_t)(pfc_vcuLifeToMcu2 << 0u) & 0x0Fu);
}

void Can0Msg_Unpack_0xcfff3f0(void)
{
    /*signalName:pfc_mcuUnderVoltLv4, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_mcuUnderVoltLv4              =  ((uint8_t)(MCU_Errors1_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_motOverTempLv4, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_motOverTempLv4               =  ((uint8_t)(MCU_Errors1_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_mcuOverTempLv4, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_mcuOverTempLv4               =  ((uint8_t)(MCU_Errors1_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_mcuDCOverVoltLv4, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_mcuDCOverVoltLv4             =  ((uint8_t)(MCU_Errors1_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_motUPhaseOverCurrLv4, DataOrder:little_endian, startBit: 5, length: 1 */
    pfc_motUPhaseOverCurrLv4         =  ((uint8_t)(MCU_Errors1_buf[0] & 0x20u) >> 5u);
    /*signalName:pfc_motVPhaseOverCurrLv4, DataOrder:little_endian, startBit: 6, length: 1 */
    pfc_motVPhaseOverCurrLv4         =  ((uint8_t)(MCU_Errors1_buf[0] & 0x40u) >> 6u);
    /*signalName:pfc_motWPhaseOverCurrLv4, DataOrder:little_endian, startBit: 7, length: 1 */
    pfc_motWPhaseOverCurrLv4         =  ((uint8_t)(MCU_Errors1_buf[0] & 0x80u) >> 7u);
    /*signalName:pfc_motOverSpeedLv4, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_motOverSpeedLv4              =  ((uint8_t)(MCU_Errors1_buf[1] & 0x01u) >> 0u);
    /*signalName:pfc_motInterPhaseSCLv4, DataOrder:little_endian, startBit: 9, length: 1 */
    pfc_motInterPhaseSCLv4           =  ((uint8_t)(MCU_Errors1_buf[1] & 0x02u) >> 1u);
    /*signalName:pfc_mcuDCBusToGndSCLv4, DataOrder:little_endian, startBit: 10, length: 1 */
    pfc_mcuDCBusToGndSCLv4           =  ((uint8_t)(MCU_Errors1_buf[1] & 0x04u) >> 2u);
    /*signalName:pfc_mcuPhaseToGndSCLv4, DataOrder:little_endian, startBit: 11, length: 1 */
    pfc_mcuPhaseToGndSCLv4           =  ((uint8_t)(MCU_Errors1_buf[1] & 0x08u) >> 3u);
    /*signalName:pfc_mcuVcuCanFault, DataOrder:little_endian, startBit: 24, length: 1 */
    pfc_mcuVcuCanFault               =  ((uint8_t)(MCU_Errors1_buf[3] & 0x01u) >> 0u);
    /*signalName:pfc_motCanFault, DataOrder:little_endian, startBit: 25, length: 1 */
    pfc_motCanFault                  =  ((uint8_t)(MCU_Errors1_buf[3] & 0x02u) >> 1u);
    /*signalName:pfc_mcuCanTimeoutFault, DataOrder:little_endian, startBit: 26, length: 1 */
    pfc_mcuCanTimeoutFault           =  ((uint8_t)(MCU_Errors1_buf[3] & 0x04u) >> 2u);
    /*signalName:pfc_mcuCanCRCCheckFault, DataOrder:little_endian, startBit: 27, length: 1 */
    pfc_mcuCanCRCCheckFault          =  ((uint8_t)(MCU_Errors1_buf[3] & 0x08u) >> 3u);
    /*signalName:pfc_mcuCanOfflineFault, DataOrder:little_endian, startBit: 28, length: 1 */
    pfc_mcuCanOfflineFault           =  ((uint8_t)(MCU_Errors1_buf[3] & 0x10u) >> 4u);
    /*signalName:pfc_mcuTempSensFault, DataOrder:little_endian, startBit: 32, length: 1 */
    pfc_mcuTempSensFault             =  ((uint8_t)(MCU_Errors1_buf[4] & 0x01u) >> 0u);
    /*signalName:pfc_motTempSensFault, DataOrder:little_endian, startBit: 33, length: 1 */
    pfc_motTempSensFault             =  ((uint8_t)(MCU_Errors1_buf[4] & 0x02u) >> 1u);
    /*signalName:pfc_mcuUPhaseCurrSensFault, DataOrder:little_endian, startBit: 34, length: 1 */
    pfc_mcuUPhaseCurrSensFault       =  ((uint8_t)(MCU_Errors1_buf[4] & 0x04u) >> 2u);
    /*signalName:pfc_mcuVPhaseCurrSensFault, DataOrder:little_endian, startBit: 35, length: 1 */
    pfc_mcuVPhaseCurrSensFault       =  ((uint8_t)(MCU_Errors1_buf[4] & 0x08u) >> 3u);
    /*signalName:pfc_mcuWPhaseCurrSensFault, DataOrder:little_endian, startBit: 36, length: 1 */
    pfc_mcuWPhaseCurrSensFault       =  ((uint8_t)(MCU_Errors1_buf[4] & 0x10u) >> 4u);
    /*signalName:pfc_mcuUPhaseLossFault, DataOrder:little_endian, startBit: 37, length: 1 */
    pfc_mcuUPhaseLossFault           =  ((uint8_t)(MCU_Errors1_buf[4] & 0x20u) >> 5u);
    /*signalName:pfc_mcuVPhaseLossFault, DataOrder:little_endian, startBit: 38, length: 1 */
    pfc_mcuVPhaseLossFault           =  ((uint8_t)(MCU_Errors1_buf[4] & 0x40u) >> 6u);
    /*signalName:pfc_mcuWPhaseLossFault, DataOrder:little_endian, startBit: 39, length: 1 */
    pfc_mcuWPhaseLossFault           =  ((uint8_t)(MCU_Errors1_buf[4] & 0x80u) >> 7u);
    /*signalName:pfc_mcuLowVoltBattSupFault, DataOrder:little_endian, startBit: 40, length: 1 */
    pfc_mcuLowVoltBattSupFault       =  ((uint8_t)(MCU_Errors1_buf[5] & 0x01u) >> 0u);
    /*signalName:pfc_motRDCFault, DataOrder:little_endian, startBit: 41, length: 1 */
    pfc_motRDCFault                  =  ((uint8_t)(MCU_Errors1_buf[5] & 0x02u) >> 1u);
    /*signalName:pfc_MCUDCVoltSensorFault, DataOrder:little_endian, startBit: 42, length: 1 */
    pfc_MCUDCVoltSensorFault         =  ((uint8_t)(MCU_Errors1_buf[5] & 0x04u) >> 2u);
    /*signalName:pfc_mcuIBGTFault, DataOrder:little_endian, startBit: 43, length: 1 */
    pfc_mcuIBGTFault                 =  ((uint8_t)(MCU_Errors1_buf[5] & 0x08u) >> 3u);
    /*signalName:pfc_motSpdSensFault, DataOrder:little_endian, startBit: 44, length: 1 */
    pfc_motSpdSensFault              =  ((uint8_t)(MCU_Errors1_buf[5] & 0x10u) >> 4u);
    /*signalName:pfc_mcuEEPROMFault, DataOrder:little_endian, startBit: 45, length: 1 */
    pfc_mcuEEPROMFault               =  ((uint8_t)(MCU_Errors1_buf[5] & 0x20u) >> 5u);
    /*signalName:pfc_mcuActiveDisChgFault, DataOrder:little_endian, startBit: 46, length: 1 */
    pfc_mcuActiveDisChgFault         =  ((uint8_t)(MCU_Errors1_buf[5] & 0x40u) >> 6u);
}

void Can0Msg_Unpack_0xcfff4f0(void)
{
    /*signalName:pfc_mcuUnderVoltLvl3, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_mcuUnderVoltLvl3             =  ((uint8_t)(MCU_Errors2_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_motOverTempLv3, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_motOverTempLv3               =  ((uint8_t)(MCU_Errors2_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_mcuOverTempLv3, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_mcuOverTempLv3               =  ((uint8_t)(MCU_Errors2_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_mcuDCOverVoltLv3, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_mcuDCOverVoltLv3             =  ((uint8_t)(MCU_Errors2_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_motUPhaseOverCurrLv3, DataOrder:little_endian, startBit: 5, length: 1 */
    pfc_motUPhaseOverCurrLv3         =  ((uint8_t)(MCU_Errors2_buf[0] & 0x20u) >> 5u);
    /*signalName:pfc_motVPhaseOverCurrLv3, DataOrder:little_endian, startBit: 6, length: 1 */
    pfc_motVPhaseOverCurrLv3         =  ((uint8_t)(MCU_Errors2_buf[0] & 0x40u) >> 6u);
    /*signalName:pfc_motWPhaseOverCurrLv3, DataOrder:little_endian, startBit: 7, length: 1 */
    pfc_motWPhaseOverCurrLv3         =  ((uint8_t)(MCU_Errors2_buf[0] & 0x80u) >> 7u);
    /*signalName:pfc_motOverSpeedLv3, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_motOverSpeedLv3              =  ((uint8_t)(MCU_Errors2_buf[1] & 0x01u) >> 0u);
    /*signalName:pfc_mcuUnderVoltLv2, DataOrder:little_endian, startBit: 33, length: 1 */
    pfc_mcuUnderVoltLv2              =  ((uint8_t)(MCU_Errors2_buf[4] & 0x02u) >> 1u);
    /*signalName:pfc_motOverTempLv2, DataOrder:little_endian, startBit: 34, length: 1 */
    pfc_motOverTempLv2               =  ((uint8_t)(MCU_Errors2_buf[4] & 0x04u) >> 2u);
    /*signalName:pfc_mcuOverTempLv2, DataOrder:little_endian, startBit: 35, length: 1 */
    pfc_mcuOverTempLv2               =  ((uint8_t)(MCU_Errors2_buf[4] & 0x08u) >> 3u);
    /*signalName:pfc_mcuDCOverVoltLv2, DataOrder:little_endian, startBit: 36, length: 1 */
    pfc_mcuDCOverVoltLv2             =  ((uint8_t)(MCU_Errors2_buf[4] & 0x10u) >> 4u);
    /*signalName:pfc_motUPhaseOverCurrLv2, DataOrder:little_endian, startBit: 37, length: 1 */
    pfc_motUPhaseOverCurrLv2         =  ((uint8_t)(MCU_Errors2_buf[4] & 0x20u) >> 5u);
    /*signalName:pfc_motVPhaseOverCurrLv2, DataOrder:little_endian, startBit: 38, length: 1 */
    pfc_motVPhaseOverCurrLv2         =  ((uint8_t)(MCU_Errors2_buf[4] & 0x40u) >> 6u);
    /*signalName:pfc_motWPhaseOverCurrLv2, DataOrder:little_endian, startBit: 39, length: 1 */
    pfc_motWPhaseOverCurrLv2         =  ((uint8_t)(MCU_Errors2_buf[4] & 0x80u) >> 7u);
    /*signalName:pfc_motOverSpeedLevel2, DataOrder:little_endian, startBit: 40, length: 1 */
    pfc_motOverSpeedLevel2           =  ((uint8_t)(MCU_Errors2_buf[5] & 0x01u) >> 0u);
}

void Can0Msg_Unpack_0xcfff5f0(void)
{
    /*signalName:pfc_mcuUnderVoltLv1, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_mcuUnderVoltLv1              =  ((uint8_t)(MCU_Errors3_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_mcuOverTempLvl1, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_mcuOverTempLvl1              =  ((uint8_t)(MCU_Errors3_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_mcuOverTempLv1, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_mcuOverTempLv1               =  ((uint8_t)(MCU_Errors3_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_mcuDCOverVoltLv1, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_mcuDCOverVoltLv1             =  ((uint8_t)(MCU_Errors3_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_motUPhaseOverCurrLv1, DataOrder:little_endian, startBit: 5, length: 1 */
    pfc_motUPhaseOverCurrLv1         =  ((uint8_t)(MCU_Errors3_buf[0] & 0x20u) >> 5u);
    /*signalName:pfc_motVPhaseOverCurrLv1, DataOrder:little_endian, startBit: 6, length: 1 */
    pfc_motVPhaseOverCurrLv1         =  ((uint8_t)(MCU_Errors3_buf[0] & 0x40u) >> 6u);
    /*signalName:pfc_motWPhaseOverCurrLv1, DataOrder:little_endian, startBit: 7, length: 1 */
    pfc_motWPhaseOverCurrLv1         =  ((uint8_t)(MCU_Errors3_buf[0] & 0x80u) >> 7u);
    /*signalName:pfc_motOverSpdLv1, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_motOverSpdLv1                =  ((uint8_t)(MCU_Errors3_buf[1] & 0x01u) >> 0u);
}

void Can0Msg_Unpack_0xcff71f0(void)
{
    /*signalName:pfc_mcuDCCurrent, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_mcuDCCurrent                 =  ((uint16_t)(MCU_States1_buf[0] & 0xFFu) >> 0u);
    pfc_mcuDCCurrent                 |= ((uint16_t)(MCU_States1_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_mcuDCVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_mcuDCVoltage                 =  ((uint16_t)(MCU_States1_buf[2] & 0xFFu) >> 0u);
    pfc_mcuDCVoltage                 |= ((uint16_t)(MCU_States1_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_mcuACCurrent, DataOrder:little_endian, startBit: 32, length: 16 */
    pfc_mcuACCurrent                 =  ((uint16_t)(MCU_States1_buf[4] & 0xFFu) >> 0u);
    pfc_mcuACCurrent                 |= ((uint16_t)(MCU_States1_buf[5] & 0xFFu) << 8u);
    /*signalName:pfc_motTemp, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_motTemp                      =  ((uint8_t)(MCU_States1_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_mcuTemp, DataOrder:little_endian, startBit: 56, length: 8 */
    pfc_mcuTemp                      =  ((uint8_t)(MCU_States1_buf[7] & 0xFFu) >> 0u);
}

void Can0Msg_Unpack_0xcff72f0(void)
{
    /*signalName:pfc_mcuPreChgAllow, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_mcuPreChgAllow               =  ((uint8_t)(MCU_States2_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_mcuActiveDisChgState, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_mcuActiveDisChgState         =  ((uint8_t)(MCU_States2_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_mcuIGBTEnableState, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_mcuIGBTEnableState           =  ((uint8_t)(MCU_States2_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_mcuFunctionsIndicate, DataOrder:little_endian, startBit: 5, length: 3 */
    pfc_mcuFunctionsIndicate         =  ((uint8_t)(MCU_States2_buf[0] & 0xE0u) >> 5u);
    /*signalName:pfc_mcuWorkMode, DataOrder:little_endian, startBit: 8, length: 4 */
    pfc_mcuWorkMode                  =  ((uint8_t)(MCU_States2_buf[1] & 0x0Fu) >> 0u);
    /*signalName:pfc_mcuFaultGrade, DataOrder:little_endian, startBit: 12, length: 4 */
    pfc_mcuFaultGrade                =  ((uint8_t)(MCU_States2_buf[1] & 0xF0u) >> 4u);
    /*signalName:pfc_mcuFaultCode, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_mcuFaultCode                 =  ((uint8_t)(MCU_States2_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_motActualSpeed, DataOrder:little_endian, startBit: 24, length: 16 */
    pfc_motActualSpeed               =  ((uint16_t)(MCU_States2_buf[3] & 0xFFu) >> 0u);
    pfc_motActualSpeed               |= ((uint16_t)(MCU_States2_buf[4] & 0xFFu) << 8u);
    /*signalName:pfc_motActualTorque, DataOrder:little_endian, startBit: 40, length: 16 */
    pfc_motActualTorque              =  ((uint16_t)(MCU_States2_buf[5] & 0xFFu) >> 0u);
    pfc_motActualTorque              |= ((uint16_t)(MCU_States2_buf[6] & 0xFFu) << 8u);
    /*signalName:pfc_mcuLifeToVcu, DataOrder:little_endian, startBit: 56, length: 4 */
    pfc_mcuLifeToVcu                 =  ((uint8_t)(MCU_States2_buf[7] & 0x0Fu) >> 0u);
}

void Can0Msg_Unpack_0xcff73f0(void)
{
    /*signalName:pfc_mcuMaxDriveTorqueAvail, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_mcuMaxDriveTorqueAvail       =  ((uint16_t)(MCU_States3_buf[0] & 0xFFu) >> 0u);
    pfc_mcuMaxDriveTorqueAvail       |= ((uint16_t)(MCU_States3_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_MCUMaxBrakeTorqueAvail, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_MCUMaxBrakeTorqueAvail       =  ((uint16_t)(MCU_States3_buf[2] & 0xFFu) >> 0u);
    pfc_MCUMaxBrakeTorqueAvail       |= ((uint16_t)(MCU_States3_buf[3] & 0xFFu) << 8u);
}


/*-------------------------------------EOF--------------------------------------*/

