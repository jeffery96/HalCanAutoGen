/********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: hacg_can1.c
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-03-19 LinXiaobin
********************************************************************************/

#include "build_control.h"
#include "platform_config.h"
#include "io_vars.h"
#include "hacg_can1.h"

void Can1Msg_Pack_0x18fef100(void)
{
    /*Clear Message Buffer first!*/
    CCVS_buf[0] = 0x00u;
    CCVS_buf[1] = 0x00u;
    CCVS_buf[2] = 0x00u;
    CCVS_buf[3] = 0x00u;
    CCVS_buf[4] = 0x00u;
    CCVS_buf[5] = 0x00u;
    CCVS_buf[6] = 0x00u;
    CCVS_buf[7] = 0x00u;

    /*signalName:pfc_WheelBasedVehicleVelocity, DataOrder:little_endian, startBit: 8, length: 16 */
    CCVS_buf[1] |= ((uint8_t)(pfc_WheelBasedVehicleVelocity << 0u) & 0xFFu);
    CCVS_buf[2] |= ((uint8_t)(pfc_WheelBasedVehicleVelocity >> 8u) & 0xFFu);
    /*signalName:pfc_HandBrake, DataOrder:little_endian, startBit: 26, length: 2 */
    CCVS_buf[3] |= ((uint8_t)(pfc_HandBrake << 2u) & 0x0Cu);
    /*signalName:pfc_BrakeSwitch, DataOrder:little_endian, startBit: 28, length: 2 */
    CCVS_buf[3] |= ((uint8_t)(pfc_BrakeSwitch << 4u) & 0x30u);
}

void Can1Msg_Pack_0xcff3e27(void)
{
    /*Clear Message Buffer first!*/
    EVCU3_EACCmd_buf[0] = 0x00u;
    EVCU3_EACCmd_buf[1] = 0x00u;
    EVCU3_EACCmd_buf[2] = 0x00u;
    EVCU3_EACCmd_buf[3] = 0x00u;
    EVCU3_EACCmd_buf[4] = 0x00u;
    EVCU3_EACCmd_buf[5] = 0x00u;
    EVCU3_EACCmd_buf[6] = 0x00u;
    EVCU3_EACCmd_buf[7] = 0x00u;

    /*signalName:pfc_V10PDUAirConditionRelayCmd, DataOrder:little_endian, startBit: 0, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_V10PDUAirConditionRelayCmd << 0u) & 0x03u);
    /*signalName:pfc_V10PDUOilPumpRelayCmd, DataOrder:little_endian, startBit: 2, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_V10PDUOilPumpRelayCmd << 2u) & 0x0Cu);
    /*signalName:pfc_V10PDUDefrostingRelayCmd, DataOrder:little_endian, startBit: 4, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_V10PDUDefrostingRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_V10PDUSUDCDCRelayCmd, DataOrder:little_endian, startBit: 6, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_V10PDUSUDCDCRelayCmd << 6u) & 0xC0u);
    /*signalName:pfc_V10PDUSDDCDCEnable, DataOrder:little_endian, startBit: 8, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_V10PDUSDDCDCEnable << 0u) & 0x03u);
    /*signalName:pfc_V10PDUAirPumpEnable, DataOrder:little_endian, startBit: 10, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_V10PDUAirPumpEnable << 2u) & 0x0Cu);
    /*signalName:pfc_V10PDUMainPositiveRelayCmd, DataOrder:little_endian, startBit: 12, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_V10PDUMainPositiveRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_V10PDUPreChargeRelayCmd, DataOrder:little_endian, startBit: 14, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_V10PDUPreChargeRelayCmd << 6u) & 0xC0u);
    /*signalName:pfc_V10PDUOilPumpEnable, DataOrder:little_endian, startBit: 16, length: 2 */
    EVCU3_EACCmd_buf[2] |= ((uint8_t)(pfc_V10PDUOilPumpEnable << 0u) & 0x03u);
    /*signalName:pfc_V10PDUPumpPreChargeRelayCmd, DataOrder:little_endian, startBit: 18, length: 2 */
    EVCU3_EACCmd_buf[2] |= ((uint8_t)(pfc_V10PDUPumpPreChargeRelayCmd << 2u) & 0x0Cu);
    /*signalName:pfc_V10PDUAirPumpRelayCmd, DataOrder:little_endian, startBit: 24, length: 2 */
    EVCU3_EACCmd_buf[3] |= ((uint8_t)(pfc_V10PDUAirPumpRelayCmd << 0u) & 0x03u);
    /*signalName:pfc_V10PDUSDDCDCRelayCmd, DataOrder:little_endian, startBit: 26, length: 2 */
    EVCU3_EACCmd_buf[3] |= ((uint8_t)(pfc_V10PDUSDDCDCRelayCmd << 2u) & 0x0Cu);
    /*signalName:pfc_V10PDUHeaterRelayCmd, DataOrder:little_endian, startBit: 28, length: 2 */
    EVCU3_EACCmd_buf[3] |= ((uint8_t)(pfc_V10PDUHeaterRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_V10PDUPTCRelayCmd, DataOrder:little_endian, startBit: 30, length: 2 */
    EVCU3_EACCmd_buf[3] |= ((uint8_t)(pfc_V10PDUPTCRelayCmd << 6u) & 0xC0u);
}

void Can1Msg_Pack_0x18ff3c27(void)
{
    /*Clear Message Buffer first!*/
    EVCU_MCU1_buf[0] = 0x00u;
    EVCU_MCU1_buf[1] = 0x00u;
    EVCU_MCU1_buf[2] = 0x00u;
    EVCU_MCU1_buf[3] = 0x00u;
    EVCU_MCU1_buf[4] = 0x00u;
    EVCU_MCU1_buf[5] = 0x00u;
    EVCU_MCU1_buf[6] = 0x00u;
    EVCU_MCU1_buf[7] = 0x00u;

    /*signalName:pfc_V04MCUDCCurrent, DataOrder:little_endian, startBit: 0, length: 16 */
    EVCU_MCU1_buf[0] |= ((uint8_t)(pfc_V04MCUDCCurrent << 0u) & 0xFFu);
    EVCU_MCU1_buf[1] |= ((uint8_t)(pfc_V04MCUDCCurrent >> 8u) & 0xFFu);
    /*signalName:pfc_V04MCUDCVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    EVCU_MCU1_buf[2] |= ((uint8_t)(pfc_V04MCUDCVoltage << 0u) & 0xFFu);
    EVCU_MCU1_buf[3] |= ((uint8_t)(pfc_V04MCUDCVoltage >> 8u) & 0xFFu);
    /*signalName:pfc_V04MCUACCurrent, DataOrder:little_endian, startBit: 32, length: 16 */
    EVCU_MCU1_buf[4] |= ((uint8_t)(pfc_V04MCUACCurrent << 0u) & 0xFFu);
    EVCU_MCU1_buf[5] |= ((uint8_t)(pfc_V04MCUACCurrent >> 8u) & 0xFFu);
}

void Can1Msg_Pack_0x18ff3d27(void)
{
    /*Clear Message Buffer first!*/
    EVCU_MCU2_buf[0] = 0x00u;
    EVCU_MCU2_buf[1] = 0x00u;
    EVCU_MCU2_buf[2] = 0x00u;
    EVCU_MCU2_buf[3] = 0x00u;
    EVCU_MCU2_buf[4] = 0x00u;
    EVCU_MCU2_buf[5] = 0x00u;
    EVCU_MCU2_buf[6] = 0x00u;
    EVCU_MCU2_buf[7] = 0x00u;

    /*signalName:pfc_V05Motor1Speed, DataOrder:little_endian, startBit: 0, length: 16 */
    EVCU_MCU2_buf[0] |= ((uint8_t)(pfc_V05Motor1Speed << 0u) & 0xFFu);
    EVCU_MCU2_buf[1] |= ((uint8_t)(pfc_V05Motor1Speed >> 8u) & 0xFFu);
    /*signalName:pfc_V05Motor1Temperature, DataOrder:little_endian, startBit: 16, length: 8 */
    EVCU_MCU2_buf[2] |= ((uint8_t)(pfc_V05Motor1Temperature << 0u) & 0xFFu);
    /*signalName:pfc_V05MCU1Temperature, DataOrder:little_endian, startBit: 24, length: 8 */
    EVCU_MCU2_buf[3] |= ((uint8_t)(pfc_V05MCU1Temperature << 0u) & 0xFFu);
    /*signalName:pfc_V05Motor1Torque, DataOrder:little_endian, startBit: 32, length: 16 */
    EVCU_MCU2_buf[4] |= ((uint8_t)(pfc_V05Motor1Torque << 0u) & 0xFFu);
    EVCU_MCU2_buf[5] |= ((uint8_t)(pfc_V05Motor1Torque >> 8u) & 0xFFu);
    /*signalName:pfc_V05Motor1TempAlarm, DataOrder:little_endian, startBit: 48, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_V05Motor1TempAlarm << 0u) & 0x03u);
    /*signalName:pfc_V05MCU1TempAlarm, DataOrder:little_endian, startBit: 50, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_V05MCU1TempAlarm << 2u) & 0x0Cu);
    /*signalName:pfc_V05MotorNumber, DataOrder:little_endian, startBit: 52, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_V05MotorNumber << 4u) & 0x30u);
    /*signalName:pfc_V05MotorOrderNumber, DataOrder:little_endian, startBit: 54, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_V05MotorOrderNumber << 6u) & 0xC0u);
    /*signalName:pfc_V05Motor1State, DataOrder:little_endian, startBit: 56, length: 2 */
    EVCU_MCU2_buf[7] |= ((uint8_t)(pfc_V05Motor1State << 0u) & 0x03u);
    /*signalName:pfc_V05Motor1FunctionIndicate, DataOrder:little_endian, startBit: 61, length: 3 */
    EVCU_MCU2_buf[7] |= ((uint8_t)(pfc_V05Motor1FunctionIndicate << 5u) & 0xE0u);
}

void Can1Msg_Pack_0x18ff3e27(void)
{
    /*Clear Message Buffer first!*/
    EVCU_MCU3_buf[0] = 0x00u;
    EVCU_MCU3_buf[1] = 0x00u;
    EVCU_MCU3_buf[2] = 0x00u;
    EVCU_MCU3_buf[3] = 0x00u;
    EVCU_MCU3_buf[4] = 0x00u;
    EVCU_MCU3_buf[5] = 0x00u;
    EVCU_MCU3_buf[6] = 0x00u;
    EVCU_MCU3_buf[7] = 0x00u;

    /*signalName:pfc_V06MCUFaultCode, DataOrder:little_endian, startBit: 8, length: 8 */
    EVCU_MCU3_buf[1] |= ((uint8_t)(pfc_V06MCUFaultCode << 0u) & 0xFFu);
}

void Can1Msg_Pack_0xcff3f27(void)
{
    /*Clear Message Buffer first!*/
    EVCU_Status1_buf[0] = 0x00u;
    EVCU_Status1_buf[1] = 0x00u;
    EVCU_Status1_buf[2] = 0x00u;
    EVCU_Status1_buf[3] = 0x00u;
    EVCU_Status1_buf[4] = 0x00u;
    EVCU_Status1_buf[5] = 0x00u;
    EVCU_Status1_buf[6] = 0x00u;
    EVCU_Status1_buf[7] = 0x00u;

    /*signalName:pfc_V11AccePedalState, DataOrder:little_endian, startBit: 0, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_V11AccePedalState << 0u) & 0x03u);
    /*signalName:pfc_V11RegenTorqueState, DataOrder:little_endian, startBit: 2, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_V11RegenTorqueState << 2u) & 0x0Cu);
    /*signalName:pfc_V11HandBrake, DataOrder:little_endian, startBit: 4, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_V11HandBrake << 4u) & 0x30u);
    /*signalName:pfc_V11FootBrake, DataOrder:little_endian, startBit: 6, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_V11FootBrake << 6u) & 0xC0u);
    /*signalName:pfc_V11AccePedalPosition, DataOrder:little_endian, startBit: 8, length: 8 */
    EVCU_Status1_buf[1] |= ((uint8_t)(pfc_V11AccePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_V11BrakePedalPosition, DataOrder:little_endian, startBit: 24, length: 8 */
    EVCU_Status1_buf[3] |= ((uint8_t)(pfc_V11BrakePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_V11DriveMode, DataOrder:little_endian, startBit: 40, length: 2 */
    EVCU_Status1_buf[5] |= ((uint8_t)(pfc_V11DriveMode << 0u) & 0x03u);
    /*signalName:pfc_V11ActualGearDNRState, DataOrder:little_endian, startBit: 42, length: 3 */
    EVCU_Status1_buf[5] |= ((uint8_t)(pfc_V11ActualGearDNRState << 2u) & 0x1Cu);
    /*signalName:pfc_V11ChargingMode, DataOrder:little_endian, startBit: 45, length: 2 */
    EVCU_Status1_buf[5] |= ((uint8_t)(pfc_V11ChargingMode << 5u) & 0x60u);
    /*signalName:pfc_V11EVMode, DataOrder:little_endian, startBit: 48, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_V11EVMode << 0u) & 0x03u);
    /*signalName:pfc_V11ReadyState, DataOrder:little_endian, startBit: 50, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_V11ReadyState << 2u) & 0x0Cu);
    /*signalName:pfc_V11MCUFaultGrade, DataOrder:little_endian, startBit: 52, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_V11MCUFaultGrade << 4u) & 0x30u);
    /*signalName:pfc_V11DSFault, DataOrder:little_endian, startBit: 54, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_V11DSFault << 6u) & 0xC0u);
    /*signalName:pfc_V11MCUState, DataOrder:little_endian, startBit: 56, length: 4 */
    EVCU_Status1_buf[7] |= ((uint8_t)(pfc_V11MCUState << 0u) & 0x0Fu);
    /*signalName:pfc_V11VehicleInterLockState, DataOrder:little_endian, startBit: 60, length: 4 */
    EVCU_Status1_buf[7] |= ((uint8_t)(pfc_V11VehicleInterLockState << 4u) & 0xF0u);
}

void Can1Msg_Pack_0x18ff4027(void)
{
    /*Clear Message Buffer first!*/
    EVCU_Status2_buf[0] = 0x00u;
    EVCU_Status2_buf[1] = 0x00u;
    EVCU_Status2_buf[2] = 0x00u;
    EVCU_Status2_buf[3] = 0x00u;
    EVCU_Status2_buf[4] = 0x00u;
    EVCU_Status2_buf[5] = 0x00u;
    EVCU_Status2_buf[6] = 0x00u;
    EVCU_Status2_buf[7] = 0x00u;

    /*signalName:pfc_V12VehicleFaultGrade, DataOrder:little_endian, startBit: 0, length: 4 */
    EVCU_Status2_buf[0] |= ((uint8_t)(pfc_V12VehicleFaultGrade << 0u) & 0x0Fu);
    /*signalName:pfc_V12VehicleFaultCode, DataOrder:little_endian, startBit: 8, length: 16 */
    EVCU_Status2_buf[1] |= ((uint8_t)(pfc_V12VehicleFaultCode << 0u) & 0xFFu);
    EVCU_Status2_buf[2] |= ((uint8_t)(pfc_V12VehicleFaultCode >> 8u) & 0xFFu);
}

void Can1Msg_Pack_0xcff4127(void)
{
    /*Clear Message Buffer first!*/
    EVCU_Status3_buf[0] = 0x00u;
    EVCU_Status3_buf[1] = 0x00u;
    EVCU_Status3_buf[2] = 0x00u;
    EVCU_Status3_buf[3] = 0x00u;
    EVCU_Status3_buf[4] = 0x00u;
    EVCU_Status3_buf[5] = 0x00u;
    EVCU_Status3_buf[6] = 0x00u;
    EVCU_Status3_buf[7] = 0x00u;

    /*signalName:pfc_V13VCUWakeUpState, DataOrder:little_endian, startBit: 8, length: 2 */
    EVCU_Status3_buf[1] |= ((uint8_t)(pfc_V13VCUWakeUpState << 0u) & 0x03u);
    /*signalName:pfc_V13KeyStartRequest, DataOrder:little_endian, startBit: 10, length: 2 */
    EVCU_Status3_buf[1] |= ((uint8_t)(pfc_V13KeyStartRequest << 2u) & 0x0Cu);
    /*signalName:pfc_V13MotorCoolFan, DataOrder:little_endian, startBit: 16, length: 8 */
    EVCU_Status3_buf[2] |= ((uint8_t)(pfc_V13MotorCoolFan << 0u) & 0xFFu);
    /*signalName:pfc_V13VCULife, DataOrder:little_endian, startBit: 48, length: 4 */
    EVCU_Status3_buf[6] |= ((uint8_t)(pfc_V13VCULife << 0u) & 0x0Fu);
}

void Can1Msg_Pack_0x18e1f3ef(void)
{
    /*Clear Message Buffer first!*/
    V2B_VIN_buf[0] = 0x00u;
    V2B_VIN_buf[1] = 0x00u;
    V2B_VIN_buf[2] = 0x00u;
    V2B_VIN_buf[3] = 0x00u;
    V2B_VIN_buf[4] = 0x00u;
    V2B_VIN_buf[5] = 0x00u;
    V2B_VIN_buf[6] = 0x00u;
    V2B_VIN_buf[7] = 0x00u;

    /*signalName:pfc_SerialNumberOfFrameVIN, DataOrder:little_endian, startBit: 0, length: 8 */
    V2B_VIN_buf[0] |= ((uint8_t)(pfc_SerialNumberOfFrameVIN << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter1815, DataOrder:little_endian, startBit: 8, length: 8 */
    V2B_VIN_buf[1] |= ((uint8_t)(pfc_VehicleVINCharacter1815 << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter2916, DataOrder:little_endian, startBit: 16, length: 8 */
    V2B_VIN_buf[2] |= ((uint8_t)(pfc_VehicleVINCharacter2916 << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter31017, DataOrder:little_endian, startBit: 24, length: 8 */
    V2B_VIN_buf[3] |= ((uint8_t)(pfc_VehicleVINCharacter31017 << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter411, DataOrder:little_endian, startBit: 32, length: 8 */
    V2B_VIN_buf[4] |= ((uint8_t)(pfc_VehicleVINCharacter411 << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter512, DataOrder:little_endian, startBit: 40, length: 8 */
    V2B_VIN_buf[5] |= ((uint8_t)(pfc_VehicleVINCharacter512 << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter613, DataOrder:little_endian, startBit: 48, length: 8 */
    V2B_VIN_buf[6] |= ((uint8_t)(pfc_VehicleVINCharacter613 << 0u) & 0xFFu);
    /*signalName:pfc_VehicleVINCharacter714, DataOrder:little_endian, startBit: 56, length: 8 */
    V2B_VIN_buf[7] |= ((uint8_t)(pfc_VehicleVINCharacter714 << 0u) & 0xFFu);
}

void Can1Msg_Pack_0x18102601(void)
{
    /*Clear Message Buffer first!*/
    VCU13_Meter_VIN_buf[0] = 0x00u;
    VCU13_Meter_VIN_buf[1] = 0x00u;
    VCU13_Meter_VIN_buf[2] = 0x00u;
    VCU13_Meter_VIN_buf[3] = 0x00u;
    VCU13_Meter_VIN_buf[4] = 0x00u;
    VCU13_Meter_VIN_buf[5] = 0x00u;
    VCU13_Meter_VIN_buf[6] = 0x00u;
    VCU13_Meter_VIN_buf[7] = 0x00u;

}

void Can1Msg_Pack_0x18102501(void)
{
    /*Clear Message Buffer first!*/
    VCU15_MmData_Monitor_buf[0] = 0x00u;
    VCU15_MmData_Monitor_buf[1] = 0x00u;
    VCU15_MmData_Monitor_buf[2] = 0x00u;
    VCU15_MmData_Monitor_buf[3] = 0x00u;
    VCU15_MmData_Monitor_buf[4] = 0x00u;
    VCU15_MmData_Monitor_buf[5] = 0x00u;
    VCU15_MmData_Monitor_buf[6] = 0x00u;
    VCU15_MmData_Monitor_buf[7] = 0x00u;

}

void Can1Msg_Pack_0x1802f3ef(void)
{
    /*Clear Message Buffer first!*/
    VCU_Battery_Control_buf[0] = 0x00u;
    VCU_Battery_Control_buf[1] = 0x00u;
    VCU_Battery_Control_buf[2] = 0x00u;
    VCU_Battery_Control_buf[3] = 0x00u;
    VCU_Battery_Control_buf[4] = 0x00u;
    VCU_Battery_Control_buf[5] = 0x00u;
    VCU_Battery_Control_buf[6] = 0x00u;
    VCU_Battery_Control_buf[7] = 0x00u;

    /*signalName:pfc_V07VCULife, DataOrder:little_endian, startBit: 0, length: 8 */
    VCU_Battery_Control_buf[0] |= ((uint8_t)(pfc_V07VCULife << 0u) & 0xFFu);
    /*signalName:pfc_V07BMSMainNegaRelayCmd, DataOrder:little_endian, startBit: 8, length: 2 */
    VCU_Battery_Control_buf[1] |= ((uint8_t)(pfc_V07BMSMainNegaRelayCmd << 0u) & 0x03u);
    /*signalName:pfc_V07BMSDCACRelayCmd, DataOrder:little_endian, startBit: 10, length: 2 */
    VCU_Battery_Control_buf[1] |= ((uint8_t)(pfc_V07BMSDCACRelayCmd << 2u) & 0x0Cu);
    /*signalName:pfc_V07BMSSUDCDCRelayCmd, DataOrder:little_endian, startBit: 12, length: 2 */
    VCU_Battery_Control_buf[1] |= ((uint8_t)(pfc_V07BMSSUDCDCRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_V07BMSSDDCDCRelayCmd, DataOrder:little_endian, startBit: 14, length: 2 */
    VCU_Battery_Control_buf[1] |= ((uint8_t)(pfc_V07BMSSDDCDCRelayCmd << 6u) & 0xC0u);
    /*signalName:pfc_V07VehicleVelocity, DataOrder:little_endian, startBit: 16, length: 8 */
    VCU_Battery_Control_buf[2] |= ((uint8_t)(pfc_V07VehicleVelocity << 0u) & 0xFFu);
    /*signalName:pfc_V07BMSMainPosiRelayState, DataOrder:little_endian, startBit: 24, length: 2 */
    VCU_Battery_Control_buf[3] |= ((uint8_t)(pfc_V07BMSMainPosiRelayState << 0u) & 0x03u);
    /*signalName:pfc_V07BMSMainPosiRelayFault, DataOrder:little_endian, startBit: 26, length: 2 */
    VCU_Battery_Control_buf[3] |= ((uint8_t)(pfc_V07BMSMainPosiRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_V07BMSMainNegaRelayState, DataOrder:little_endian, startBit: 28, length: 2 */
    VCU_Battery_Control_buf[3] |= ((uint8_t)(pfc_V07BMSMainNegaRelayState << 4u) & 0x30u);
    /*signalName:pfc_V07BMSMainNegaRelayFault, DataOrder:little_endian, startBit: 30, length: 2 */
    VCU_Battery_Control_buf[3] |= ((uint8_t)(pfc_V07BMSMainNegaRelayFault << 6u) & 0xC0u);
    /*signalName:pfc_V07BMSChargePosiRelayState, DataOrder:little_endian, startBit: 32, length: 2 */
    VCU_Battery_Control_buf[4] |= ((uint8_t)(pfc_V07BMSChargePosiRelayState << 0u) & 0x03u);
    /*signalName:pfc_V07BMSChargePosiRelayFault, DataOrder:little_endian, startBit: 34, length: 2 */
    VCU_Battery_Control_buf[4] |= ((uint8_t)(pfc_V07BMSChargePosiRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_V07BMSHeaterPosiRelayState, DataOrder:little_endian, startBit: 36, length: 2 */
    VCU_Battery_Control_buf[4] |= ((uint8_t)(pfc_V07BMSHeaterPosiRelayState << 4u) & 0x30u);
    /*signalName:pfc_V07BMSHeaterPosiRelayFault, DataOrder:little_endian, startBit: 38, length: 2 */
    VCU_Battery_Control_buf[4] |= ((uint8_t)(pfc_V07BMSHeaterPosiRelayFault << 6u) & 0xC0u);
    /*signalName:pfc_V07BMSHeaterNegaRelayState, DataOrder:little_endian, startBit: 40, length: 2 */
    VCU_Battery_Control_buf[5] |= ((uint8_t)(pfc_V07BMSHeaterNegaRelayState << 0u) & 0x03u);
    /*signalName:pfc_V07BMSHeaterNegaRelayFault, DataOrder:little_endian, startBit: 42, length: 2 */
    VCU_Battery_Control_buf[5] |= ((uint8_t)(pfc_V07BMSHeaterNegaRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_V07BMSSDDCDCRelayState, DataOrder:little_endian, startBit: 44, length: 2 */
    VCU_Battery_Control_buf[5] |= ((uint8_t)(pfc_V07BMSSDDCDCRelayState << 4u) & 0x30u);
    /*signalName:pfc_V07BMSSDDCDCRelayFault, DataOrder:little_endian, startBit: 46, length: 2 */
    VCU_Battery_Control_buf[5] |= ((uint8_t)(pfc_V07BMSSDDCDCRelayFault << 6u) & 0xC0u);
    /*signalName:pfc_V07BMSOilPumpRelayState, DataOrder:little_endian, startBit: 48, length: 2 */
    VCU_Battery_Control_buf[6] |= ((uint8_t)(pfc_V07BMSOilPumpRelayState << 0u) & 0x03u);
    /*signalName:pfc_V07BMSOilPumpRelayFault, DataOrder:little_endian, startBit: 50, length: 2 */
    VCU_Battery_Control_buf[6] |= ((uint8_t)(pfc_V07BMSOilPumpRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_V07BMSAirPumpRelayState, DataOrder:little_endian, startBit: 52, length: 2 */
    VCU_Battery_Control_buf[6] |= ((uint8_t)(pfc_V07BMSAirPumpRelayState << 4u) & 0x30u);
    /*signalName:pfc_V07BMSAirPumpRelayFault, DataOrder:little_endian, startBit: 54, length: 2 */
    VCU_Battery_Control_buf[6] |= ((uint8_t)(pfc_V07BMSAirPumpRelayFault << 6u) & 0xC0u);
    /*signalName:pfc_V07BMSPreChargeRelayState, DataOrder:little_endian, startBit: 56, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_V07BMSPreChargeRelayState << 0u) & 0x03u);
    /*signalName:pfc_V07BMSPreChargeRelayFault, DataOrder:little_endian, startBit: 58, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_V07BMSPreChargeRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_V07BMSDefrostingRelayState, DataOrder:little_endian, startBit: 60, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_V07BMSDefrostingRelayState << 4u) & 0x30u);
    /*signalName:pfc_V07BMSDefrostingRelayFault, DataOrder:little_endian, startBit: 62, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_V07BMSDefrostingRelayFault << 6u) & 0xC0u);
}

void Can1Msg_Pack_0x703(void)
{
    /*Clear Message Buffer first!*/
    VCU_Monitor_buf[0] = 0x00u;
    VCU_Monitor_buf[1] = 0x00u;
    VCU_Monitor_buf[2] = 0x00u;
    VCU_Monitor_buf[3] = 0x00u;
    VCU_Monitor_buf[4] = 0x00u;
    VCU_Monitor_buf[5] = 0x00u;
    VCU_Monitor_buf[6] = 0x00u;
    VCU_Monitor_buf[7] = 0x00u;

}

void Can1Msg_Unpack_0x180b100b(void)
{
    /*signalName:pfc_ABSActive, DataOrder:little_endian, startBit: 0, length: 1 */
    pfc_ABSActive                    =  ((uint8_t)(ABS1_VSO_buf[0] & 0x01u) >> 0u);
    /*signalName:pfc_ABSEBDActive, DataOrder:little_endian, startBit: 1, length: 1 */
    pfc_ABSEBDActive                 =  ((uint8_t)(ABS1_VSO_buf[0] & 0x02u) >> 1u);
    /*signalName:pfc_ABSEBDFault, DataOrder:little_endian, startBit: 2, length: 1 */
    pfc_ABSEBDFault                  =  ((uint8_t)(ABS1_VSO_buf[0] & 0x04u) >> 2u);
    /*signalName:pfc_ABSFault, DataOrder:little_endian, startBit: 3, length: 1 */
    pfc_ABSFault                     =  ((uint8_t)(ABS1_VSO_buf[0] & 0x08u) >> 3u);
    /*signalName:pfc_ABSVehicleVelocity, DataOrder:little_endian, startBit: 8, length: 13 */
    pfc_ABSVehicleVelocity           =  ((uint16_t)(ABS1_VSO_buf[1] & 0xFFu) >> 0u);
    pfc_ABSVehicleVelocity           |= ((uint16_t)(ABS1_VSO_buf[2] & 0x1Fu) << 8u);
    /*signalName:pfc_ABSVehicleVelocityValid, DataOrder:little_endian, startBit: 21, length: 2 */
    pfc_ABSVehicleVelocityValid      =  ((uint8_t)(ABS1_VSO_buf[2] & 0x60u) >> 5u);
    /*signalName:pfc_ABSNOEVFlag, DataOrder:little_endian, startBit: 48, length: 1 */
    pfc_ABSNOEVFlag                  =  ((uint8_t)(ABS1_VSO_buf[6] & 0x01u) >> 0u);
    /*signalName:pfc_ABSLife1, DataOrder:little_endian, startBit: 52, length: 4 */
    pfc_ABSLife1                     =  ((uint8_t)(ABS1_VSO_buf[6] & 0xF0u) >> 4u);
    /*signalName:pfc_ABSChecksum1, DataOrder:little_endian, startBit: 56, length: 8 */
    pfc_ABSChecksum1                 =  ((uint8_t)(ABS1_VSO_buf[7] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18c4eff3(void)
{
    /*signalName:pfc_BMSAllowDisChargeCurr, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_BMSAllowDisChargeCurr        =  ((uint16_t)(B2V_CurrentLimit_buf[0] & 0xFFu) >> 0u);
    pfc_BMSAllowDisChargeCurr        |= ((uint16_t)(B2V_CurrentLimit_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_BMSAllowChargeCurr, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_BMSAllowChargeCurr           =  ((uint16_t)(B2V_CurrentLimit_buf[2] & 0xFFu) >> 0u);
    pfc_BMSAllowChargeCurr           |= ((uint16_t)(B2V_CurrentLimit_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_BMSAllowSustainChargeCurr, DataOrder:little_endian, startBit: 32, length: 16 */
    pfc_BMSAllowSustainChargeCurr    =  ((uint16_t)(B2V_CurrentLimit_buf[4] & 0xFFu) >> 0u);
    pfc_BMSAllowSustainChargeCurr    |= ((uint16_t)(B2V_CurrentLimit_buf[5] & 0xFFu) << 8u);
    /*signalName:pfc_BMSAllowSustainDisChargeCurr, DataOrder:little_endian, startBit: 48, length: 16 */
    pfc_BMSAllowSustainDisChargeCurr =  ((uint16_t)(B2V_CurrentLimit_buf[6] & 0xFFu) >> 0u);
    pfc_BMSAllowSustainDisChargeCurr |= ((uint16_t)(B2V_CurrentLimit_buf[7] & 0xFFu) << 8u);
}

void Can1Msg_Unpack_0x1801eff3(void)
{
    /*signalName:pfc_BMSRequestVIN, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_BMSRequestVIN                =  ((uint8_t)(B2V_RQ_buf[0] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x1883eff3(void)
{
    /*signalName:pfc_BMSMainNegeRelayState, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_BMSMainNegeRelayState        =  ((uint8_t)(B2V_ST1_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_BMSChargePosiRelay1State, DataOrder:little_endian, startBit: 6, length: 2 */
    pfc_BMSChargePosiRelay1State     =  ((uint8_t)(B2V_ST1_buf[0] & 0xC0u) >> 6u);
    /*signalName:pfc_BMSChargeNegaRelay1State, DataOrder:little_endian, startBit: 8, length: 2 */
    pfc_BMSChargeNegaRelay1State     =  ((uint8_t)(B2V_ST1_buf[1] & 0x03u) >> 0u);
    /*signalName:pfc_BMSChargePosiRelay2State, DataOrder:little_endian, startBit: 10, length: 2 */
    pfc_BMSChargePosiRelay2State     =  ((uint8_t)(B2V_ST1_buf[1] & 0x0Cu) >> 2u);
    /*signalName:pfc_BMSChargeNegaRelay2State, DataOrder:little_endian, startBit: 12, length: 2 */
    pfc_BMSChargeNegaRelay2State     =  ((uint8_t)(B2V_ST1_buf[1] & 0x30u) >> 4u);
    /*signalName:pfc_BMSHeaterPosiRelayState, DataOrder:little_endian, startBit: 14, length: 2 */
    pfc_BMSHeaterPosiRelayState      =  ((uint8_t)(B2V_ST1_buf[1] & 0xC0u) >> 6u);
    /*signalName:pfc_BMSHeaterNegaRelayState, DataOrder:little_endian, startBit: 16, length: 2 */
    pfc_BMSHeaterNegaRelayState      =  ((uint8_t)(B2V_ST1_buf[2] & 0x03u) >> 0u);
    /*signalName:pfc_BMSCurrentHighVoltageState, DataOrder:little_endian, startBit: 32, length: 2 */
    pfc_BMSCurrentHighVoltageState   =  ((uint8_t)(B2V_ST1_buf[4] & 0x03u) >> 0u);
    /*signalName:pfc_BMSChargeGunConnectState, DataOrder:little_endian, startBit: 35, length: 2 */
    pfc_BMSChargeGunConnectState     =  ((uint8_t)(B2V_ST1_buf[4] & 0x18u) >> 3u);
    /*signalName:pfc_BMSChargeState, DataOrder:little_endian, startBit: 57, length: 2 */
    pfc_BMSChargeState               =  ((uint8_t)(B2V_ST1_buf[7] & 0x06u) >> 1u);
}

void Can1Msg_Unpack_0x1884eff3(void)
{
    /*signalName:pfc_BMSSOC, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_BMSSOC                       =  ((uint8_t)(B2V_ST2_buf[0] & 0xFFu) >> 0u);
    /*signalName:pfc_BMSSOH, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_BMSSOH                       =  ((uint8_t)(B2V_ST2_buf[1] & 0xFFu) >> 0u);
    /*signalName:pfc_BMSCurrent, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_BMSCurrent                   =  ((uint16_t)(B2V_ST2_buf[2] & 0xFFu) >> 0u);
    pfc_BMSCurrent                   |= ((uint16_t)(B2V_ST2_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_BMSVoltage, DataOrder:little_endian, startBit: 32, length: 16 */
    pfc_BMSVoltage                   =  ((uint16_t)(B2V_ST2_buf[4] & 0xFFu) >> 0u);
    pfc_BMSVoltage                   |= ((uint16_t)(B2V_ST2_buf[5] & 0xFFu) << 8u);
    /*signalName:pfc_BMSFaultCode, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_BMSFaultCode                 =  ((uint8_t)(B2V_ST2_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_BMSHighestFaultGrade, DataOrder:little_endian, startBit: 56, length: 2 */
    pfc_BMSHighestFaultGrade         =  ((uint8_t)(B2V_ST2_buf[7] & 0x03u) >> 0u);
    /*signalName:pfc_BMSRequestHighVoltPowerOff, DataOrder:little_endian, startBit: 58, length: 2 */
    pfc_BMSRequestHighVoltPowerOff   =  ((uint8_t)(B2V_ST2_buf[7] & 0x0Cu) >> 2u);
    /*signalName:pfc_BMSLife, DataOrder:little_endian, startBit: 60, length: 4 */
    pfc_BMSLife                      =  ((uint8_t)(B2V_ST2_buf[7] & 0xF0u) >> 4u);
}

void Can1Msg_Unpack_0x18f00828(void)
{
    /*signalName:pfc_OilPumpFaultGrade, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_OilPumpFaultGrade            =  ((uint8_t)(DCAC_HV_Oilpump_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_OilPumpLife, DataOrder:little_endian, startBit: 4, length: 4 */
    pfc_OilPumpLife                  =  ((uint8_t)(DCAC_HV_Oilpump_Status1_buf[0] & 0xF0u) >> 4u);
    /*signalName:pfc_OilPumpFaultCode, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_OilPumpFaultCode             =  ((uint8_t)(DCAC_HV_Oilpump_Status1_buf[1] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18f00d28(void)
{
    /*signalName:pfc_OilPumpSpeed, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_OilPumpSpeed                 =  ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[0] & 0xFFu) >> 0u);
    pfc_OilPumpSpeed                 |= ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_OilPumpInputVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_OilPumpInputVoltage          =  ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[2] & 0xFFu) >> 0u);
    pfc_OilPumpInputVoltage          |= ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_OilPumpCurrent, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_OilPumpCurrent               =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_OilPumpInputMCUTemp, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_OilPumpInputMCUTemp          =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_OilPumpInputMotorTemp, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_OilPumpInputMotorTemp        =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_OilPumpPreChargeState, DataOrder:little_endian, startBit: 56, length: 2 */
    pfc_OilPumpPreChargeState        =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[7] & 0x03u) >> 0u);
    /*signalName:pfc_OilPumpRunningState, DataOrder:little_endian, startBit: 58, length: 2 */
    pfc_OilPumpRunningState          =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[7] & 0x0Cu) >> 2u);
}

void Can1Msg_Unpack_0x18f00a28(void)
{
    /*signalName:pfc_SDDCDCFaultGrade, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_SDDCDCFaultGrade             =  ((uint8_t)(DCDC1_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_SDDCDCLife, DataOrder:little_endian, startBit: 4, length: 4 */
    pfc_SDDCDCLife                   =  ((uint8_t)(DCDC1_Status1_buf[0] & 0xF0u) >> 4u);
    /*signalName:pfc_SDDCDCFaultCode, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_SDDCDCFaultCode              =  ((uint8_t)(DCDC1_Status1_buf[1] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18f00b28(void)
{
    /*signalName:pfc_SDDCDCInputVoltage, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_SDDCDCInputVoltage           =  ((uint16_t)(DCDC1_Status2_buf[0] & 0xFFu) >> 0u);
    pfc_SDDCDCInputVoltage           |= ((uint16_t)(DCDC1_Status2_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_SDDCDCInputCurrent, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_SDDCDCInputCurrent           =  ((uint8_t)(DCDC1_Status2_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_SDDCDCOutputCurrent, DataOrder:little_endian, startBit: 24, length: 8 */
    pfc_SDDCDCOutputCurrent          =  ((uint8_t)(DCDC1_Status2_buf[3] & 0xFFu) >> 0u);
    /*signalName:pfc_SDDCDCTemp, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_SDDCDCTemp                   =  ((uint8_t)(DCDC1_Status2_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_SDDCDCOutputVoltage, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_SDDCDCOutputVoltage          =  ((uint8_t)(DCDC1_Status2_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_SDDCDCPreChargeState, DataOrder:little_endian, startBit: 48, length: 2 */
    pfc_SDDCDCPreChargeState         =  ((uint8_t)(DCDC1_Status2_buf[6] & 0x03u) >> 0u);
    /*signalName:pfc_SDDCDCRunningState, DataOrder:little_endian, startBit: 50, length: 2 */
    pfc_SDDCDCRunningState           =  ((uint8_t)(DCDC1_Status2_buf[6] & 0x0Cu) >> 2u);
    /*signalName:pfc_SDDCDCFaultState, DataOrder:little_endian, startBit: 52, length: 2 */
    pfc_SDDCDCFaultState             =  ((uint8_t)(DCDC1_Status2_buf[6] & 0x30u) >> 4u);
    /*signalName:pfc_SDDCDCTempFault, DataOrder:little_endian, startBit: 54, length: 2 */
    pfc_SDDCDCTempFault              =  ((uint8_t)(DCDC1_Status2_buf[6] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x18fc0011(void)
{
    /*signalName:pfc_DSSelfCheckState, DataOrder:little_endian, startBit: 0, length: 4 */
    pfc_DSSelfCheckState             =  ((uint8_t)(DS_AP1_buf[0] & 0x0Fu) >> 0u);
    /*signalName:pfc_DSGearD, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_DSGearD                      =  ((uint8_t)(DS_AP1_buf[1] & 0x01u) >> 0u);
    /*signalName:pfc_DSGearN, DataOrder:little_endian, startBit: 9, length: 1 */
    pfc_DSGearN                      =  ((uint8_t)(DS_AP1_buf[1] & 0x02u) >> 1u);
    /*signalName:pfc_DSGearR, DataOrder:little_endian, startBit: 10, length: 1 */
    pfc_DSGearR                      =  ((uint8_t)(DS_AP1_buf[1] & 0x04u) >> 2u);
    /*signalName:pfc_DSLife, DataOrder:little_endian, startBit: 56, length: 8 */
    pfc_DSLife                       =  ((uint8_t)(DS_AP1_buf[7] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18fe1264(void)
{
    /*signalName:pfc_EPBParkLampState, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_EPBParkLampState             =  ((uint8_t)(EPB_Status_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_EPBSystemFault, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_EPBSystemFault               =  ((uint8_t)(EPB_Status_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_EPBEmgBrakeLampRequest, DataOrder:little_endian, startBit: 6, length: 2 */
    pfc_EPBEmgBrakeLampRequest       =  ((uint8_t)(EPB_Status_buf[0] & 0xC0u) >> 6u);
    /*signalName:pfc_EPBWorkMode, DataOrder:little_endian, startBit: 8, length: 2 */
    pfc_EPBWorkMode                  =  ((uint8_t)(EPB_Status_buf[1] & 0x03u) >> 0u);
    /*signalName:pfc_EPBSwitchState, DataOrder:little_endian, startBit: 10, length: 2 */
    pfc_EPBSwitchState               =  ((uint8_t)(EPB_Status_buf[1] & 0x0Cu) >> 2u);
    /*signalName:pfc_EPBSystemState, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_EPBSystemState               =  ((uint8_t)(EPB_Status_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_EPBFaultCode, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_EPBFaultCode                 =  ((uint8_t)(EPB_Status_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_EPBLife, DataOrder:little_endian, startBit: 56, length: 4 */
    pfc_EPBLife                      =  ((uint8_t)(EPB_Status_buf[7] & 0x0Fu) >> 0u);
    /*signalName:pfc_EPBCheckSum, DataOrder:little_endian, startBit: 60, length: 4 */
    pfc_EPBCheckSum                  =  ((uint8_t)(EPB_Status_buf[7] & 0xF0u) >> 4u);
}

void Can1Msg_Unpack_0x18ffe342(void)
{
    /*signalName:pfc_DriverDoorState, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_DriverDoorState              =  ((uint8_t)(IC_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_RearHatchState, DataOrder:little_endian, startBit: 6, length: 2 */
    pfc_RearHatchState               =  ((uint8_t)(IC_Status1_buf[0] & 0xC0u) >> 6u);
    /*signalName:pfc_AccePedalInterLockState, DataOrder:little_endian, startBit: 46, length: 2 */
    pfc_AccePedalInterLockState      =  ((uint8_t)(IC_Status1_buf[5] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x18ffe742(void)
{
    /*signalName:pfc_MotorInputCoolingWaterTemp, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_MotorInputCoolingWaterTemp   =  ((uint8_t)(IC_Status5_buf[1] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0xcf603a1(void)
{
    /*signalName:pfc_oLVOilPumpRunningState, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_oLVOilPumpRunningState       =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[0] & 0xFFu) >> 0u);
    /*signalName:pfc_oLVOilPumpInputVoltage, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_oLVOilPumpInputVoltage       =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[1] & 0xFFu) >> 0u);
    /*signalName:pfc_oLVOilPumpCurrent, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_oLVOilPumpCurrent            =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_oLVOilPumpMotorSpeed, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_oLVOilPumpMotorSpeed         =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_oLVOilPumpLife, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_oLVOilPumpLife               =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_oLVOilPumpMCUTemp, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_oLVOilPumpMCUTemp            =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_oLVOilPumpFaultCode, DataOrder:little_endian, startBit: 56, length: 6 */
    pfc_oLVOilPumpFaultCode          =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[7] & 0x3Fu) >> 0u);
    /*signalName:pfc_oLVOilPumpFaultGrade, DataOrder:little_endian, startBit: 62, length: 2 */
    pfc_oLVOilPumpFaultGrade         =  ((uint8_t)(LVOP_Status1_IN_C_CAN_buf[7] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x701(void)
{
}

void Can1Msg_Unpack_0x702(void)
{
}

void Can1Msg_Unpack_0x1802f328(void)
{
    /*signalName:pfc_PDUSDDCDCRelayState, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_PDUSDDCDCRelayState          =  ((uint8_t)(PDU_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_PDUSDDCDCRelayFault, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_PDUSDDCDCRelayFault          =  ((uint8_t)(PDU_Status1_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_PDUAirPumpRelayState, DataOrder:little_endian, startBit: 4, length: 2 */
    pfc_PDUAirPumpRelayState         =  ((uint8_t)(PDU_Status1_buf[0] & 0x30u) >> 4u);
    /*signalName:pfc_PDUAirPumpRelayFault, DataOrder:little_endian, startBit: 6, length: 2 */
    pfc_PDUAirPumpRelayFault         =  ((uint8_t)(PDU_Status1_buf[0] & 0xC0u) >> 6u);
    /*signalName:pfc_PDUHeaterRelayState, DataOrder:little_endian, startBit: 8, length: 2 */
    pfc_PDUHeaterRelayState          =  ((uint8_t)(PDU_Status1_buf[1] & 0x03u) >> 0u);
    /*signalName:pfc_PDUHeaterRelayFault, DataOrder:little_endian, startBit: 10, length: 2 */
    pfc_PDUHeaterRelayFault          =  ((uint8_t)(PDU_Status1_buf[1] & 0x0Cu) >> 2u);
    /*signalName:pfc_PDUPTCRelayState, DataOrder:little_endian, startBit: 12, length: 2 */
    pfc_PDUPTCRelayState             =  ((uint8_t)(PDU_Status1_buf[1] & 0x30u) >> 4u);
    /*signalName:pfc_PDUPTCRelayFault, DataOrder:little_endian, startBit: 14, length: 2 */
    pfc_PDUPTCRelayFault             =  ((uint8_t)(PDU_Status1_buf[1] & 0xC0u) >> 6u);
    /*signalName:pfc_PDUPumpPreChargeRelayState, DataOrder:little_endian, startBit: 16, length: 2 */
    pfc_PDUPumpPreChargeRelayState   =  ((uint8_t)(PDU_Status1_buf[2] & 0x03u) >> 0u);
    /*signalName:pfc_PDUPumpPreChargeRelayFault, DataOrder:little_endian, startBit: 18, length: 2 */
    pfc_PDUPumpPreChargeRelayFault   =  ((uint8_t)(PDU_Status1_buf[2] & 0x0Cu) >> 2u);
    /*signalName:pfc_PDUSUDCDCRelayState, DataOrder:little_endian, startBit: 40, length: 2 */
    pfc_PDUSUDCDCRelayState          =  ((uint8_t)(PDU_Status1_buf[5] & 0x03u) >> 0u);
    /*signalName:pfc_PDUSUDCDCRelayFault, DataOrder:little_endian, startBit: 42, length: 2 */
    pfc_PDUSUDCDCRelayFault          =  ((uint8_t)(PDU_Status1_buf[5] & 0x0Cu) >> 2u);
    /*signalName:pfc_PDUAirConditionRelayState, DataOrder:little_endian, startBit: 44, length: 2 */
    pfc_PDUAirConditionRelayState    =  ((uint8_t)(PDU_Status1_buf[5] & 0x30u) >> 4u);
    /*signalName:pfc_PDUAirConditionRelayFault, DataOrder:little_endian, startBit: 46, length: 2 */
    pfc_PDUAirConditionRelayFault    =  ((uint8_t)(PDU_Status1_buf[5] & 0xC0u) >> 6u);
    /*signalName:pfc_PDUDefrostingRelayState, DataOrder:little_endian, startBit: 48, length: 2 */
    pfc_PDUDefrostingRelayState      =  ((uint8_t)(PDU_Status1_buf[6] & 0x03u) >> 0u);
    /*signalName:pfc_PDUDefrostingRelayFault, DataOrder:little_endian, startBit: 50, length: 2 */
    pfc_PDUDefrostingRelayFault      =  ((uint8_t)(PDU_Status1_buf[6] & 0x0Cu) >> 2u);
    /*signalName:pfc_PDUOilPumpRelayState, DataOrder:little_endian, startBit: 52, length: 2 */
    pfc_PDUOilPumpRelayState         =  ((uint8_t)(PDU_Status1_buf[6] & 0x30u) >> 4u);
    /*signalName:pfc_PDUOilPumpRelayFault, DataOrder:little_endian, startBit: 54, length: 2 */
    pfc_PDUOilPumpRelayFault         =  ((uint8_t)(PDU_Status1_buf[6] & 0xC0u) >> 6u);
    /*signalName:pfc_PDUMainPosiRelayState, DataOrder:little_endian, startBit: 56, length: 2 */
    pfc_PDUMainPosiRelayState        =  ((uint8_t)(PDU_Status1_buf[7] & 0x03u) >> 0u);
    /*signalName:pfc_PDUMainPosiRelayFault, DataOrder:little_endian, startBit: 58, length: 2 */
    pfc_PDUMainPosiRelayFault        =  ((uint8_t)(PDU_Status1_buf[7] & 0x0Cu) >> 2u);
    /*signalName:pfc_PDUPreChargeRelayState, DataOrder:little_endian, startBit: 60, length: 2 */
    pfc_PDUPreChargeRelayState       =  ((uint8_t)(PDU_Status1_buf[7] & 0x30u) >> 4u);
    /*signalName:pfc_PDUPreChargeRelayFault, DataOrder:little_endian, startBit: 62, length: 2 */
    pfc_PDUPreChargeRelayFault       =  ((uint8_t)(PDU_Status1_buf[7] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x18102101(void)
{
}


/*-------------------------------------EOF--------------------------------------*/

