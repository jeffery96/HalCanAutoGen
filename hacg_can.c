/*********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: hacg_can0.h
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-02-16 Chenhoubo
********************************************************************************/


#include "build_control.h"
#include "platform_config.h"
#include "io_vars.h"
#include "hacg_can0.h"

void Can0Msg_Pack_0xc00fefe(void)
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

    /*signalName:pfc_BattPowerAllow_01B_PackCurrent, DataOrder:little_endian, startBit: 0, length: 16 */
    VCU_BattPowerAllow_buf[0] |= ((uint8_t)(pfc_PackCurrent << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[1] |= ((uint8_t)(pfc_PackCurrent >> 8u) & 0xFFu);
    /*signalName:pfc_BattPowerAllow_23B_PackInsideVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    VCU_BattPowerAllow_buf[2] |= ((uint8_t)(pfc_PackInsideVoltage << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[3] |= ((uint8_t)(pfc_PackInsideVoltage >> 8u) & 0xFFu);
    /*signalName:pfc_BattPowerAllow_45B_AllowMaxDischargeCurr, DataOrder:little_endian, startBit: 32, length: 16 */
    VCU_BattPowerAllow_buf[4] |= ((uint8_t)(pfc_AllowMaxDischargeCurr << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[5] |= ((uint8_t)(pfc_AllowMaxDischargeCurr >> 8u) & 0xFFu);
    /*signalName:pfc_BattPowerAllow_67B_AllowMaxChargeCurr, DataOrder:little_endian, startBit: 48, length: 16 */
    VCU_BattPowerAllow_buf[6] |= ((uint8_t)(pfc_AllowMaxChargeCurr << 0u) & 0xFFu);
    VCU_BattPowerAllow_buf[7] |= ((uint8_t)(pfc_AllowMaxChargeCurr >> 8u) & 0xFFu);
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

    /*signalName:pfc_VCUVehiclStates_0B_AccePedalPosition, DataOrder:little_endian, startBit: 0, length: 8 */
    VCU_Vehicle_States_buf[0] |= ((uint8_t)(pfc_AccePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_VCUVehiclStates_1B_BrakePedalPosition, DataOrder:little_endian, startBit: 8, length: 8 */
    VCU_Vehicle_States_buf[1] |= ((uint8_t)(pfc_BrakePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_VCUVehiclStates_2B01b_AntiRollBackSwitch, DataOrder:little_endian, startBit: 16, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_AntiRollBackSwitch << 0u) & 0x03u);
    /*signalName:pfc_VCUVehiclStates_2B23b_MotorSpeedLimitSwitch, DataOrder:little_endian, startBit: 18, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_MotorSpeedLimitSwitch << 2u) & 0x0Cu);
    /*signalName:pfc_VCUVehiclStates_2B45b_SlideSwitch, DataOrder:little_endian, startBit: 20, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_SlideSwitch << 4u) & 0x30u);
    /*signalName:pfc_VCUVehiclStates_2B67b_VCUCrawlOff, DataOrder:little_endian, startBit: 22, length: 2 */
    VCU_Vehicle_States_buf[2] |= ((uint8_t)(pfc_VCUCrawlOff << 6u) & 0xC0u);
    /*signalName:pfc_VCUVehiclStates_34B_VehicleSpeedLimitMotorSpeed, DataOrder:little_endian, startBit: 24, length: 16 */
    VCU_Vehicle_States_buf[3] |= ((uint8_t)(pfc_VehicleSpeedLimitMotorSpeed << 0u) & 0xFFu);
    VCU_Vehicle_States_buf[4] |= ((uint8_t)(pfc_VehicleSpeedLimitMotorSpeed >> 8u) & 0xFFu);
    /*signalName:pfc_VCUVehiclStates_7B03b_VCULife2ToMCU, DataOrder:little_endian, startBit: 56, length: 4 */
    VCU_Vehicle_States_buf[7] |= ((uint8_t)(pfc_VCULife2ToMCU << 0u) & 0x0Fu);
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

    /*signalName:pfc_VCUMCUCmd_0B01b_SystemReady, DataOrder:little_endian, startBit: 0, length: 2 */
    VCU_MCU_Cmd_buf[0] |= ((uint8_t)(pfc_SystemReady << 0u) & 0x03u);
    /*signalName:pfc_VCUMCUCmd_0B24b_ParkingSystemState, DataOrder:little_endian, startBit: 2, length: 3 */
    VCU_MCU_Cmd_buf[0] |= ((uint8_t)(pfc_ParkingSystemState << 2u) & 0x1Cu);
    /*signalName:pfc_VCUMCUCmd_1B0b_FootBrakeState, DataOrder:little_endian, startBit: 8, length: 1 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_FootBrakeState << 0u) & 0x01u);
    /*signalName:pfc_VCUMCUCmd_1B12b_MCUEnable, DataOrder:little_endian, startBit: 9, length: 2 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_MCUEnable << 1u) & 0x06u);
    /*signalName:pfc_VCUMCUCmd_1B35b_MCUControlMode, DataOrder:little_endian, startBit: 11, length: 3 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_MCUControlMode << 3u) & 0x38u);
    /*signalName:pfc_VCUMCUCmd_1B67b_MCUDirection, DataOrder:little_endian, startBit: 14, length: 2 */
    VCU_MCU_Cmd_buf[1] |= ((uint8_t)(pfc_MCUDirection << 6u) & 0xC0u);
    /*signalName:pfc_VCUMCUCmd_23B_DemandTorque, DataOrder:little_endian, startBit: 16, length: 16 */
    VCU_MCU_Cmd_buf[2] |= ((uint8_t)(pfc_DemandTorque << 0u) & 0xFFu);
    VCU_MCU_Cmd_buf[3] |= ((uint8_t)(pfc_DemandTorque >> 8u) & 0xFFu);
    /*signalName:pfc_VCUMCUCmd_45B_DemandSpeed, DataOrder:little_endian, startBit: 32, length: 16 */
    VCU_MCU_Cmd_buf[4] |= ((uint8_t)(pfc_DemandSpeed << 0u) & 0xFFu);
    VCU_MCU_Cmd_buf[5] |= ((uint8_t)(pfc_DemandSpeed >> 8u) & 0xFFu);
    /*signalName:pfc_VCUMCUCmd_7B03b_VCULife1ToMCU, DataOrder:little_endian, startBit: 56, length: 4 */
    VCU_MCU_Cmd_buf[7] |= ((uint8_t)(pfc_VCULife1ToMCU << 0u) & 0x0Fu);
}

void Can0Msg_Unpack_0xcfff5f0(void)
{
    /*signalName:pfc_MCUUnderVoltLevel1, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_MCUUnderVoltLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_MotorOverTempLevel1, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_MotorOverTempLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_MCUOverTempLevel1, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_MCUOverTempLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_MCUDCOverVoltLevel1, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_MCUDCOverVoltLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_MotorUPhaseOverCurrLevel1, DataOrder:little_endian, startBit: 5, length: 1 */
    pfc_MotorUPhaseOverCurrLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x20u) >> 5u);
    /*signalName:pfc_MotorVPhaseOverCurrLevel1, DataOrder:little_endian, startBit: 6, length: 1 */
    pfc_MotorVPhaseOverCurrLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x40u) >> 6u);
    /*signalName:pfc_MotorWPhaseOverCurrLevel1, DataOrder:little_endian, startBit: 7, length: 1 */
    pfc_MotorWPhaseOverCurrLevel1 = ((uint8_t)(MCU_Errors3_buf[0] & 0x80u) >> 7u);
    /*signalName:pfc_MotorOverSpeedLevel1, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_MotorOverSpeedLevel1 = ((uint8_t)(MCU_Errors3_buf[1] & 0x01u) >> 0u);
}

void Can0Msg_Unpack_0xcfff4f0(void)
{
    /*signalName:pfc_MCUUnderVoltLevel3, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_MCUUnderVoltLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_MotorOverTempLevel3, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_MotorOverTempLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_MCUOverTempLevel3, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_MCUOverTempLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_MCUDCOverVoltLevel3, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_MCUDCOverVoltLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_MotorUPhaseOverCurrLevel3, DataOrder:little_endian, startBit: 5, length: 1 */
    pfc_MotorUPhaseOverCurrLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x20u) >> 5u);
    /*signalName:pfc_MotorVPhaseOverCurrLevel3, DataOrder:little_endian, startBit: 6, length: 1 */
    pfc_MotorVPhaseOverCurrLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x40u) >> 6u);
    /*signalName:pfc_MotorWPhaseOverCurrLevel3, DataOrder:little_endian, startBit: 7, length: 1 */
    pfc_MotorWPhaseOverCurrLevel3 = ((uint8_t)(MCU_Errors2_buf[0] & 0x80u) >> 7u);
    /*signalName:pfc_MotorOverSpeedLevel3, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_MotorOverSpeedLevel3 = ((uint8_t)(MCU_Errors2_buf[1] & 0x01u) >> 0u);
    /*signalName:pfc_MCUUnderVoltLevel2, DataOrder:little_endian, startBit: 33, length: 1 */
    pfc_MCUUnderVoltLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x02u) >> 1u);
    /*signalName:pfc_MotorOverTempLevel2, DataOrder:little_endian, startBit: 34, length: 1 */
    pfc_MotorOverTempLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x04u) >> 2u);
    /*signalName:pfc_MCUOverTempLevel2, DataOrder:little_endian, startBit: 35, length: 1 */
    pfc_MCUOverTempLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x08u) >> 3u);
    /*signalName:pfc_MCUDCOverVoltLevel2, DataOrder:little_endian, startBit: 36, length: 1 */
    pfc_MCUDCOverVoltLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x10u) >> 4u);
    /*signalName:pfc_MotorUPhaseOverCurrLevel2, DataOrder:little_endian, startBit: 37, length: 1 */
    pfc_MotorUPhaseOverCurrLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x20u) >> 5u);
    /*signalName:pfc_MotorVPhaseOverCurrLevel2, DataOrder:little_endian, startBit: 38, length: 1 */
    pfc_MotorVPhaseOverCurrLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x40u) >> 6u);
    /*signalName:pfc_MotorWPhaseOverCurrLevel2, DataOrder:little_endian, startBit: 39, length: 1 */
    pfc_MotorWPhaseOverCurrLevel2 = ((uint8_t)(MCU_Errors2_buf[4] & 0x80u) >> 7u);
    /*signalName:pfc_MotorOverSpeedLevel2, DataOrder:little_endian, startBit: 40, length: 1 */
    pfc_MotorOverSpeedLevel2 = ((uint8_t)(MCU_Errors2_buf[5] & 0x01u) >> 0u);
}

void Can0Msg_Unpack_0xcfff3f0(void)
{
    /*signalName:pfc_MCUUnderVoltLevel4, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_MCUUnderVoltLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_MotorOverTempLevel4, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_MotorOverTempLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_MCUOverTempLevel4, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_MCUOverTempLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_MCUDCOverVoltLevel4, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_MCUDCOverVoltLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_MotorUPhaseOverCurrLevel4, DataOrder:little_endian, startBit: 5, length: 1 */
    pfc_MotorUPhaseOverCurrLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x20u) >> 5u);
    /*signalName:pfc_MotorVPhaseOverCurrLevel4, DataOrder:little_endian, startBit: 6, length: 1 */
    pfc_MotorVPhaseOverCurrLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x40u) >> 6u);
    /*signalName:pfc_MotorWPhaseOverCurrLevel4, DataOrder:little_endian, startBit: 7, length: 1 */
    pfc_MotorWPhaseOverCurrLevel4 = ((uint8_t)(MCU_Errors1_buf[0] & 0x80u) >> 7u);
    /*signalName:pfc_MotorOverSpeedLevel4, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_MotorOverSpeedLevel4 = ((uint8_t)(MCU_Errors1_buf[1] & 0x01u) >> 0u);
    /*signalName:pfc_MotorInterPhaseShortCircLevel4, DataOrder:little_endian, startBit: 9, length: 1 */
    pfc_MotorInterPhaseShortCircLevel4 = ((uint8_t)(MCU_Errors1_buf[1] & 0x02u) >> 1u);
    /*signalName:pfc_MCUDCShortCircGNDLevel4, DataOrder:little_endian, startBit: 10, length: 1 */
    pfc_MCUDCShortCircGNDLevel4 = ((uint8_t)(MCU_Errors1_buf[1] & 0x04u) >> 2u);
    /*signalName:pfc_MCUPhaseShortCircGNDLevel4, DataOrder:little_endian, startBit: 11, length: 1 */
    pfc_MCUPhaseShortCircGNDLevel4 = ((uint8_t)(MCU_Errors1_buf[1] & 0x08u) >> 3u);
    /*signalName:pfc_VehicleCANFault, DataOrder:little_endian, startBit: 24, length: 1 */
    pfc_VehicleCANFault = ((uint8_t)(MCU_Errors1_buf[3] & 0x01u) >> 0u);
    /*signalName:pfc_MotorCANFault, DataOrder:little_endian, startBit: 25, length: 1 */
    pfc_MotorCANFault = ((uint8_t)(MCU_Errors1_buf[3] & 0x02u) >> 1u);
    /*signalName:pfc_CANTimeoutFault, DataOrder:little_endian, startBit: 26, length: 1 */
    pfc_CANTimeoutFault = ((uint8_t)(MCU_Errors1_buf[3] & 0x04u) >> 2u);
    /*signalName:pfc_CANCRCCheckFault, DataOrder:little_endian, startBit: 27, length: 1 */
    pfc_CANCRCCheckFault = ((uint8_t)(MCU_Errors1_buf[3] & 0x08u) >> 3u);
    /*signalName:pfc_CANOfflineFault, DataOrder:little_endian, startBit: 28, length: 1 */
    pfc_CANOfflineFault = ((uint8_t)(MCU_Errors1_buf[3] & 0x10u) >> 4u);
    /*signalName:pfc_MCUTempSensorFault, DataOrder:little_endian, startBit: 32, length: 1 */
    pfc_MCUTempSensorFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x01u) >> 0u);
    /*signalName:pfc_MotorTempSensorFault, DataOrder:little_endian, startBit: 33, length: 1 */
    pfc_MotorTempSensorFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x02u) >> 1u);
    /*signalName:pfc_MCUUPhaseCurrSensorFault, DataOrder:little_endian, startBit: 34, length: 1 */
    pfc_MCUUPhaseCurrSensorFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x04u) >> 2u);
    /*signalName:pfc_MCUVPhaseCurrSensorFault, DataOrder:little_endian, startBit: 35, length: 1 */
    pfc_MCUVPhaseCurrSensorFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x08u) >> 3u);
    /*signalName:pfc_MCUWPhaseCurrSensorFault, DataOrder:little_endian, startBit: 36, length: 1 */
    pfc_MCUWPhaseCurrSensorFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x10u) >> 4u);
    /*signalName:pfc_MCUUPhaseLossFault, DataOrder:little_endian, startBit: 37, length: 1 */
    pfc_MCUUPhaseLossFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x20u) >> 5u);
    /*signalName:pfc_MCUVPhaseLossFault, DataOrder:little_endian, startBit: 38, length: 1 */
    pfc_MCUVPhaseLossFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x40u) >> 6u);
    /*signalName:pfc_MCUWPhaseLossFault, DataOrder:little_endian, startBit: 39, length: 1 */
    pfc_MCUWPhaseLossFault = ((uint8_t)(MCU_Errors1_buf[4] & 0x80u) >> 7u);
    /*signalName:pfc_LowVoltBatteryFault, DataOrder:little_endian, startBit: 40, length: 1 */
    pfc_LowVoltBatteryFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x01u) >> 0u);
    /*signalName:pfc_MotorRDCFault, DataOrder:little_endian, startBit: 41, length: 1 */
    pfc_MotorRDCFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x02u) >> 1u);
    /*signalName:pfc_MCUDCVoltSensorFault, DataOrder:little_endian, startBit: 42, length: 1 */
    pfc_MCUDCVoltSensorFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x04u) >> 2u);
    /*signalName:pfc_MCUIBGTFault, DataOrder:little_endian, startBit: 43, length: 1 */
    pfc_MCUIBGTFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x08u) >> 3u);
    /*signalName:pfc_MotorSpeedSensorFault, DataOrder:little_endian, startBit: 44, length: 1 */
    pfc_MotorSpeedSensorFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x10u) >> 4u);
    /*signalName:pfc_MCUEEPROMFault, DataOrder:little_endian, startBit: 45, length: 1 */
    pfc_MCUEEPROMFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x20u) >> 5u);
    /*signalName:pfc_MCUActiveDisChargeFault, DataOrder:little_endian, startBit: 46, length: 1 */
    pfc_MCUActiveDisChargeFault = ((uint8_t)(MCU_Errors1_buf[5] & 0x40u) >> 6u);
}

void Can0Msg_Unpack_0xcff73f0(void)
{
    /*signalName:pfc_MCUMaxDriveTorqueAvailable, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_MCUMaxDriveTorqueAvailable = ((uint16_t)(MCU_States3_buf[0] & 0xFFu) >> 0u);
    pfc_MCUMaxDriveTorqueAvailable |= ((uint16_t)(MCU_States3_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_MCUMaxBrakeTorqueAvailable, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_MCUMaxBrakeTorqueAvailable = ((uint16_t)(MCU_States3_buf[2] & 0xFFu) >> 0u);
    pfc_MCUMaxBrakeTorqueAvailable |= ((uint16_t)(MCU_States3_buf[3] & 0xFFu) << 8u);
}

void Can0Msg_Unpack_0xcff72f0(void)
{
    /*signalName:pfc_MCUPreChargeAllow, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_MCUPreChargeAllow = ((uint8_t)(MCU_States2_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_MCUActiveDisChargeFeedback, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_MCUActiveDisChargeFeedback = ((uint8_t)(MCU_States2_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_MCUIGBTEnableFeedback, DataOrder:little_endian, startBit: 4, length: 1 */
    pfc_MCUIGBTEnableFeedback = ((uint8_t)(MCU_States2_buf[0] & 0x10u) >> 4u);
    /*signalName:pfc_MCUFunctionsIndicate, DataOrder:little_endian, startBit: 5, length: 3 */
    pfc_MCUFunctionsIndicate = ((uint8_t)(MCU_States2_buf[0] & 0xE0u) >> 5u);
    /*signalName:pfc_MCUWorkMode, DataOrder:little_endian, startBit: 8, length: 4 */
    pfc_MCUWorkMode = ((uint8_t)(MCU_States2_buf[1] & 0x0Fu) >> 0u);
    /*signalName:pfc_MCUFaultGrade, DataOrder:little_endian, startBit: 12, length: 4 */
    pfc_MCUFaultGrade = ((uint8_t)(MCU_States2_buf[1] & 0xF0u) >> 4u);
    /*signalName:pfc_MCUFaultCode, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_MCUFaultCode = ((uint8_t)(MCU_States2_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_MCUActualMotorSpeed, DataOrder:little_endian, startBit: 24, length: 16 */
    pfc_MCUActualMotorSpeed = ((uint16_t)(MCU_States2_buf[3] & 0xFFu) >> 0u);
    pfc_MCUActualMotorSpeed |= ((uint16_t)(MCU_States2_buf[4] & 0xFFu) << 8u);
    /*signalName:pfc_MCUActualMotorTorque, DataOrder:little_endian, startBit: 40, length: 16 */
    pfc_MCUActualMotorTorque = ((uint16_t)(MCU_States2_buf[5] & 0xFFu) >> 0u);
    pfc_MCUActualMotorTorque |= ((uint16_t)(MCU_States2_buf[6] & 0xFFu) << 8u);
    /*signalName:pfc_VCULife3ToMCU, DataOrder:little_endian, startBit: 56, length: 4 */
    pfc_VCULife3ToMCU = ((uint8_t)(MCU_States2_buf[7] & 0x0Fu) >> 0u);
}

void Can0Msg_Unpack_0xcff71f0(void)
{
    /*signalName:pfc_MCUDCCurrent, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_MCUDCCurrent = ((uint16_t)(MCU_States1_buf[0] & 0xFFu) >> 0u);
    pfc_MCUDCCurrent |= ((uint16_t)(MCU_States1_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_MCUDCVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_MCUDCVoltage = ((uint16_t)(MCU_States1_buf[2] & 0xFFu) >> 0u);
    pfc_MCUDCVoltage |= ((uint16_t)(MCU_States1_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_MCUACCurrent, DataOrder:little_endian, startBit: 32, length: 16 */
    pfc_MCUACCurrent = ((uint16_t)(MCU_States1_buf[4] & 0xFFu) >> 0u);
    pfc_MCUACCurrent |= ((uint16_t)(MCU_States1_buf[5] & 0xFFu) << 8u);
    /*signalName:pfc_MotorTemperature, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_MotorTemperature = ((uint8_t)(MCU_States1_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_MCUTemperature, DataOrder:little_endian, startBit: 56, length: 8 */
    pfc_MCUTemperature = ((uint8_t)(MCU_States1_buf[7] & 0xFFu) >> 0u);
}


/*-------------------------------------EOF--------------------------------------*/
