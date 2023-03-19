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

    /*signalName:pfc_vcuAbsVehicleVelocity, DataOrder:little_endian, startBit: 8, length: 16 */
    CCVS_buf[1] |= ((uint8_t)(pfc_vcuAbsVehicleVelocity << 0u) & 0xFFu);
    CCVS_buf[2] |= ((uint8_t)(pfc_vcuAbsVehicleVelocity >> 8u) & 0xFFu);
    /*signalName:pfc_vcuAbsHandBrake, DataOrder:little_endian, startBit: 26, length: 2 */
    CCVS_buf[3] |= ((uint8_t)(pfc_vcuAbsHandBrake << 2u) & 0x0Cu);
    /*signalName:pfc_vcuAbsBrakeSwitch, DataOrder:little_endian, startBit: 28, length: 2 */
    CCVS_buf[3] |= ((uint8_t)(pfc_vcuAbsBrakeSwitch << 4u) & 0x30u);
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

    /*signalName:pfc_vcuPduAirConRelayCmd, DataOrder:little_endian, startBit: 0, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_vcuPduAirConRelayCmd << 0u) & 0x03u);
    /*signalName:pfc_vcuPduHvopRelayCmd, DataOrder:little_endian, startBit: 2, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_vcuPduHvopRelayCmd << 2u) & 0x0Cu);
    /*signalName:pfc_vcuPduEdftRelayCmd, DataOrder:little_endian, startBit: 4, length: 2 */
    EVCU3_EACCmd_buf[0] |= ((uint8_t)(pfc_vcuPduEdftRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_vcuPduDcdcEnable, DataOrder:little_endian, startBit: 8, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_vcuPduDcdcEnable << 0u) & 0x03u);
    /*signalName:pfc_vcuPduMainPosiRelayCmd, DataOrder:little_endian, startBit: 12, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_vcuPduMainPosiRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_vcuPduPreChgRelayCmd, DataOrder:little_endian, startBit: 14, length: 2 */
    EVCU3_EACCmd_buf[1] |= ((uint8_t)(pfc_vcuPduPreChgRelayCmd << 6u) & 0xC0u);
    /*signalName:pfc_vcuPduHvopEnable, DataOrder:little_endian, startBit: 16, length: 2 */
    EVCU3_EACCmd_buf[2] |= ((uint8_t)(pfc_vcuPduHvopEnable << 0u) & 0x03u);
    /*signalName:pfc_vcuPduHeaterRelayCmd, DataOrder:little_endian, startBit: 28, length: 2 */
    EVCU3_EACCmd_buf[3] |= ((uint8_t)(pfc_vcuPduHeaterRelayCmd << 4u) & 0x30u);
    /*signalName:pfc_vcuPduPTCRelayCmd, DataOrder:little_endian, startBit: 30, length: 2 */
    EVCU3_EACCmd_buf[3] |= ((uint8_t)(pfc_vcuPduPTCRelayCmd << 6u) & 0xC0u);
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

    /*signalName:pfc_vcuBcuMcuDCCurrent, DataOrder:little_endian, startBit: 0, length: 16 */
    EVCU_MCU1_buf[0] |= ((uint8_t)(pfc_vcuBcuMcuDCCurrent << 0u) & 0xFFu);
    EVCU_MCU1_buf[1] |= ((uint8_t)(pfc_vcuBcuMcuDCCurrent >> 8u) & 0xFFu);
    /*signalName:pfc_vcuBcuMcuDCVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    EVCU_MCU1_buf[2] |= ((uint8_t)(pfc_vcuBcuMcuDCVoltage << 0u) & 0xFFu);
    EVCU_MCU1_buf[3] |= ((uint8_t)(pfc_vcuBcuMcuDCVoltage >> 8u) & 0xFFu);
    /*signalName:pfc_vcuBcuMcuACCurrent, DataOrder:little_endian, startBit: 32, length: 16 */
    EVCU_MCU1_buf[4] |= ((uint8_t)(pfc_vcuBcuMcuACCurrent << 0u) & 0xFFu);
    EVCU_MCU1_buf[5] |= ((uint8_t)(pfc_vcuBcuMcuACCurrent >> 8u) & 0xFFu);
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

    /*signalName:pfc_vcuBcuMot1Speed, DataOrder:little_endian, startBit: 0, length: 16 */
    EVCU_MCU2_buf[0] |= ((uint8_t)(pfc_vcuBcuMot1Speed << 0u) & 0xFFu);
    EVCU_MCU2_buf[1] |= ((uint8_t)(pfc_vcuBcuMot1Speed >> 8u) & 0xFFu);
    /*signalName:pfc_vcuBcuMot1Temp, DataOrder:little_endian, startBit: 16, length: 8 */
    EVCU_MCU2_buf[2] |= ((uint8_t)(pfc_vcuBcuMot1Temp << 0u) & 0xFFu);
    /*signalName:pfc_vcuBcuMcu1Temperature, DataOrder:little_endian, startBit: 24, length: 8 */
    EVCU_MCU2_buf[3] |= ((uint8_t)(pfc_vcuBcuMcu1Temperature << 0u) & 0xFFu);
    /*signalName:pfc_vcuBcuMot1Torque, DataOrder:little_endian, startBit: 32, length: 16 */
    EVCU_MCU2_buf[4] |= ((uint8_t)(pfc_vcuBcuMot1Torque << 0u) & 0xFFu);
    EVCU_MCU2_buf[5] |= ((uint8_t)(pfc_vcuBcuMot1Torque >> 8u) & 0xFFu);
    /*signalName:pfc_vcuBcuMot1TempAlarm, DataOrder:little_endian, startBit: 48, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_vcuBcuMot1TempAlarm << 0u) & 0x03u);
    /*signalName:pfc_vcuBcuMcu1TempAlarm, DataOrder:little_endian, startBit: 50, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_vcuBcuMcu1TempAlarm << 2u) & 0x0Cu);
    /*signalName:pfc_vcuBcuMotNumber, DataOrder:little_endian, startBit: 52, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_vcuBcuMotNumber << 4u) & 0x30u);
    /*signalName:pfc_vcuBcuMotOrderNumber, DataOrder:little_endian, startBit: 54, length: 2 */
    EVCU_MCU2_buf[6] |= ((uint8_t)(pfc_vcuBcuMotOrderNumber << 6u) & 0xC0u);
    /*signalName:pfc_vcuBcuMot1State, DataOrder:little_endian, startBit: 56, length: 2 */
    EVCU_MCU2_buf[7] |= ((uint8_t)(pfc_vcuBcuMot1State << 0u) & 0x03u);
    /*signalName:pfc_vcuBcuMot1FunctionIndicate, DataOrder:little_endian, startBit: 61, length: 3 */
    EVCU_MCU2_buf[7] |= ((uint8_t)(pfc_vcuBcuMot1FunctionIndicate << 5u) & 0xE0u);
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

    /*signalName:pfc_vcuBcuMcuFaultCode, DataOrder:little_endian, startBit: 8, length: 8 */
    EVCU_MCU3_buf[1] |= ((uint8_t)(pfc_vcuBcuMcuFaultCode << 0u) & 0xFFu);
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

    /*signalName:pfc_vcuBcuAccePedalState, DataOrder:little_endian, startBit: 0, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_vcuBcuAccePedalState << 0u) & 0x03u);
    /*signalName:pfc_vcuBcuRegenTorqueState, DataOrder:little_endian, startBit: 2, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_vcuBcuRegenTorqueState << 2u) & 0x0Cu);
    /*signalName:pfc_vcuBcuHandBrake, DataOrder:little_endian, startBit: 4, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_vcuBcuHandBrake << 4u) & 0x30u);
    /*signalName:pfc_vcuBcuFootBrake, DataOrder:little_endian, startBit: 6, length: 2 */
    EVCU_Status1_buf[0] |= ((uint8_t)(pfc_vcuBcuFootBrake << 6u) & 0xC0u);
    /*signalName:pfc_vcuBcuAccePedalPosition, DataOrder:little_endian, startBit: 8, length: 8 */
    EVCU_Status1_buf[1] |= ((uint8_t)(pfc_vcuBcuAccePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_vcuBcuBrakePedalPosition, DataOrder:little_endian, startBit: 24, length: 8 */
    EVCU_Status1_buf[3] |= ((uint8_t)(pfc_vcuBcuBrakePedalPosition << 0u) & 0xFFu);
    /*signalName:pfc_vcuBcuDriveMode, DataOrder:little_endian, startBit: 40, length: 2 */
    EVCU_Status1_buf[5] |= ((uint8_t)(pfc_vcuBcuDriveMode << 0u) & 0x03u);
    /*signalName:pfc_vcuBcuActualGearState, DataOrder:little_endian, startBit: 42, length: 3 */
    EVCU_Status1_buf[5] |= ((uint8_t)(pfc_vcuBcuActualGearState << 2u) & 0x1Cu);
    /*signalName:pfc_vcuBcuChargingMode, DataOrder:little_endian, startBit: 45, length: 2 */
    EVCU_Status1_buf[5] |= ((uint8_t)(pfc_vcuBcuChargingMode << 5u) & 0x60u);
    /*signalName:pfc_vcuBcuEVMode, DataOrder:little_endian, startBit: 48, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_vcuBcuEVMode << 0u) & 0x03u);
    /*signalName:pfc_vcuBcuReadyState, DataOrder:little_endian, startBit: 50, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_vcuBcuReadyState << 2u) & 0x0Cu);
    /*signalName:pfc_vcuBcuMcuFaultGrade, DataOrder:little_endian, startBit: 52, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_vcuBcuMcuFaultGrade << 4u) & 0x30u);
    /*signalName:pfc_vcuBcuDsFault, DataOrder:little_endian, startBit: 54, length: 2 */
    EVCU_Status1_buf[6] |= ((uint8_t)(pfc_vcuBcuDsFault << 6u) & 0xC0u);
    /*signalName:pfc_vcuBcuMcuState, DataOrder:little_endian, startBit: 56, length: 4 */
    EVCU_Status1_buf[7] |= ((uint8_t)(pfc_vcuBcuMcuState << 0u) & 0x0Fu);
    /*signalName:pfc_vcuBcuVehicleInterLockState, DataOrder:little_endian, startBit: 60, length: 4 */
    EVCU_Status1_buf[7] |= ((uint8_t)(pfc_vcuBcuVehicleInterLockState << 4u) & 0xF0u);
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

    /*signalName:pfc_vcuBcuVehicleFaultGrade, DataOrder:little_endian, startBit: 0, length: 4 */
    EVCU_Status2_buf[0] |= ((uint8_t)(pfc_vcuBcuVehicleFaultGrade << 0u) & 0x0Fu);
    /*signalName:pfc_vcuBcuVehicleFaultCode, DataOrder:little_endian, startBit: 8, length: 16 */
    EVCU_Status2_buf[1] |= ((uint8_t)(pfc_vcuBcuVehicleFaultCode << 0u) & 0xFFu);
    EVCU_Status2_buf[2] |= ((uint8_t)(pfc_vcuBcuVehicleFaultCode >> 8u) & 0xFFu);
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

    /*signalName:pfc_vcuBcuVcuWakeUpState, DataOrder:little_endian, startBit: 8, length: 2 */
    EVCU_Status3_buf[1] |= ((uint8_t)(pfc_vcuBcuVcuWakeUpState << 0u) & 0x03u);
    /*signalName:pfc_vcuBcuKeyStartRequest, DataOrder:little_endian, startBit: 10, length: 2 */
    EVCU_Status3_buf[1] |= ((uint8_t)(pfc_vcuBcuKeyStartRequest << 2u) & 0x0Cu);
    /*signalName:pfc_vcuBcuMotCoolFan, DataOrder:little_endian, startBit: 16, length: 8 */
    EVCU_Status3_buf[2] |= ((uint8_t)(pfc_vcuBcuMotCoolFan << 0u) & 0xFFu);
    /*signalName:pfc_vcuLifeToBcu, DataOrder:little_endian, startBit: 48, length: 4 */
    EVCU_Status3_buf[6] |= ((uint8_t)(pfc_vcuLifeToBcu << 0u) & 0x0Fu);
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
    /*signalName:pfc_vcuBmsVehicleVINChar1815, DataOrder:little_endian, startBit: 8, length: 8 */
    V2B_VIN_buf[1] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar1815 << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsVehicleVINChar2916, DataOrder:little_endian, startBit: 16, length: 8 */
    V2B_VIN_buf[2] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar2916 << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsVehicleVINChar31017, DataOrder:little_endian, startBit: 24, length: 8 */
    V2B_VIN_buf[3] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar31017 << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsVehicleVINChar411, DataOrder:little_endian, startBit: 32, length: 8 */
    V2B_VIN_buf[4] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar411 << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsVehicleVINChar512, DataOrder:little_endian, startBit: 40, length: 8 */
    V2B_VIN_buf[5] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar512 << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsVehicleVINChar613, DataOrder:little_endian, startBit: 48, length: 8 */
    V2B_VIN_buf[6] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar613 << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsVehicleVINChar714, DataOrder:little_endian, startBit: 56, length: 8 */
    V2B_VIN_buf[7] |= ((uint8_t)(pfc_vcuBmsVehicleVINChar714 << 0u) & 0xFFu);
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

    /*signalName:pfc_vcuLifeToBms, DataOrder:little_endian, startBit: 0, length: 8 */
    VCU_Battery_Control_buf[0] |= ((uint8_t)(pfc_vcuLifeToBms << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsMainNegaRelayCmd, DataOrder:little_endian, startBit: 8, length: 2 */
    VCU_Battery_Control_buf[1] |= ((uint8_t)(pfc_vcuBmsMainNegaRelayCmd << 0u) & 0x03u);
    /*signalName:pfc_vcuBmsVehicleVelocity, DataOrder:little_endian, startBit: 16, length: 8 */
    VCU_Battery_Control_buf[2] |= ((uint8_t)(pfc_vcuBmsVehicleVelocity << 0u) & 0xFFu);
    /*signalName:pfc_vcuBmsPduMainPosiRelayState, DataOrder:little_endian, startBit: 24, length: 2 */
    VCU_Battery_Control_buf[3] |= ((uint8_t)(pfc_vcuBmsPduMainPosiRelayState << 0u) & 0x03u);
    /*signalName:pfc_vcuBmsPduMainPosiRelayFault, DataOrder:little_endian, startBit: 26, length: 2 */
    VCU_Battery_Control_buf[3] |= ((uint8_t)(pfc_vcuBmsPduMainPosiRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_vcuBmsPduPreChgRelayState, DataOrder:little_endian, startBit: 56, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_vcuBmsPduPreChgRelayState << 0u) & 0x03u);
    /*signalName:pfc_vcuBmsPduPreChgRelayFault, DataOrder:little_endian, startBit: 58, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_vcuBmsPduPreChgRelayFault << 2u) & 0x0Cu);
    /*signalName:pfc_vcuBmsPduEdftRelayState, DataOrder:little_endian, startBit: 60, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_vcuBmsPduEdftRelayState << 4u) & 0x30u);
    /*signalName:pfc_vcuBmsPduEdftRelayFault, DataOrder:little_endian, startBit: 62, length: 2 */
    VCU_Battery_Control_buf[7] |= ((uint8_t)(pfc_vcuBmsPduEdftRelayFault << 6u) & 0xC0u);
}

void Can1Msg_Unpack_0x180b100b(void)
{
    /*signalName:pfc_ABSActive, DataOrder:little_endian, startBit: 0, length: 1 */
    pfc_ABSActive                    =  ((uint8_t)(ABS1_VSO_buf[0] & 0x01u) >> 0u);
}

void Can1Msg_Unpack_0x18c4eff3(void)
{
    /*signalName:pfc_bmsAllowDisChgCurr, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_bmsAllowDisChgCurr           =  ((uint16_t)(B2V_CurrentLimit_buf[0] & 0xFFu) >> 0u);
    pfc_bmsAllowDisChgCurr           |= ((uint16_t)(B2V_CurrentLimit_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_bmsAllowChgCurr, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_bmsAllowChgCurr              =  ((uint16_t)(B2V_CurrentLimit_buf[2] & 0xFFu) >> 0u);
    pfc_bmsAllowChgCurr              |= ((uint16_t)(B2V_CurrentLimit_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_bmsAllowSustainChgCurr, DataOrder:little_endian, startBit: 32, length: 16 */
    pfc_bmsAllowSustainChgCurr       =  ((uint16_t)(B2V_CurrentLimit_buf[4] & 0xFFu) >> 0u);
    pfc_bmsAllowSustainChgCurr       |= ((uint16_t)(B2V_CurrentLimit_buf[5] & 0xFFu) << 8u);
    /*signalName:pfc_bmsAllowSustainDisChgCurr, DataOrder:little_endian, startBit: 48, length: 16 */
    pfc_bmsAllowSustainDisChgCurr    =  ((uint16_t)(B2V_CurrentLimit_buf[6] & 0xFFu) >> 0u);
    pfc_bmsAllowSustainDisChgCurr    |= ((uint16_t)(B2V_CurrentLimit_buf[7] & 0xFFu) << 8u);
}

void Can1Msg_Unpack_0x1801eff3(void)
{
    /*signalName:pfc_bmsRequestVIN, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_bmsRequestVIN                =  ((uint8_t)(B2V_RQ_buf[0] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x1883eff3(void)
{
    /*signalName:pfc_bmsMainNegeRelayState, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_bmsMainNegeRelayState        =  ((uint8_t)(B2V_ST1_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_bmsCurrentHVState, DataOrder:little_endian, startBit: 32, length: 2 */
    pfc_bmsCurrentHVState            =  ((uint8_t)(B2V_ST1_buf[4] & 0x03u) >> 0u);
    /*signalName:pfc_bmsChargeGunConnectState, DataOrder:little_endian, startBit: 35, length: 2 */
    pfc_bmsChargeGunConnectState     =  ((uint8_t)(B2V_ST1_buf[4] & 0x18u) >> 3u);
    /*signalName:pfc_bmsChargeState, DataOrder:little_endian, startBit: 57, length: 2 */
    pfc_bmsChargeState               =  ((uint8_t)(B2V_ST1_buf[7] & 0x06u) >> 1u);
}

void Can1Msg_Unpack_0x1884eff3(void)
{
    /*signalName:pfc_bmsSOC, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_bmsSOC                       =  ((uint8_t)(B2V_ST2_buf[0] & 0xFFu) >> 0u);
    /*signalName:pfc_bmsSOH, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_bmsSOH                       =  ((uint8_t)(B2V_ST2_buf[1] & 0xFFu) >> 0u);
    /*signalName:pfc_bmsMainLoopCurrent, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_bmsMainLoopCurrent           =  ((uint16_t)(B2V_ST2_buf[2] & 0xFFu) >> 0u);
    pfc_bmsMainLoopCurrent           |= ((uint16_t)(B2V_ST2_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_bmsMainLoopVoltage, DataOrder:little_endian, startBit: 32, length: 16 */
    pfc_bmsMainLoopVoltage           =  ((uint16_t)(B2V_ST2_buf[4] & 0xFFu) >> 0u);
    pfc_bmsMainLoopVoltage           |= ((uint16_t)(B2V_ST2_buf[5] & 0xFFu) << 8u);
    /*signalName:pfc_bmsFaultCode, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_bmsFaultCode                 =  ((uint8_t)(B2V_ST2_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_bmsFaultGrade, DataOrder:little_endian, startBit: 56, length: 2 */
    pfc_bmsFaultGrade                =  ((uint8_t)(B2V_ST2_buf[7] & 0x03u) >> 0u);
    /*signalName:pfc_bmsRequestHVPowerOff, DataOrder:little_endian, startBit: 58, length: 2 */
    pfc_bmsRequestHVPowerOff         =  ((uint8_t)(B2V_ST2_buf[7] & 0x0Cu) >> 2u);
    /*signalName:pfc_bmsLifeToVcu, DataOrder:little_endian, startBit: 60, length: 4 */
    pfc_bmsLifeToVcu                 =  ((uint8_t)(B2V_ST2_buf[7] & 0xF0u) >> 4u);
}

void Can1Msg_Unpack_0x18f00828(void)
{
    /*signalName:pfc_hvopFaultGrade, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_hvopFaultGrade               =  ((uint8_t)(DCAC_HV_Oilpump_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_hvopLifeToVcu, DataOrder:little_endian, startBit: 4, length: 4 */
    pfc_hvopLifeToVcu                =  ((uint8_t)(DCAC_HV_Oilpump_Status1_buf[0] & 0xF0u) >> 4u);
    /*signalName:pfc_hvopFaultCode, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_hvopFaultCode                =  ((uint8_t)(DCAC_HV_Oilpump_Status1_buf[1] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18f00d28(void)
{
    /*signalName:pfc_hvopMotSpeed, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_hvopMotSpeed                 =  ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[0] & 0xFFu) >> 0u);
    pfc_hvopMotSpeed                 |= ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_hvopInputVoltage, DataOrder:little_endian, startBit: 16, length: 16 */
    pfc_hvopInputVoltage             =  ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[2] & 0xFFu) >> 0u);
    pfc_hvopInputVoltage             |= ((uint16_t)(DCAC_HV_Oilpump_Status2_buf[3] & 0xFFu) << 8u);
    /*signalName:pfc_hvopCurrent, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_hvopCurrent                  =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_hvopInputMcuTemp, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_hvopInputMcuTemp             =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_hvopInputMotTemp, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_hvopInputMotTemp             =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_hvopPreChgState, DataOrder:little_endian, startBit: 56, length: 2 */
    pfc_hvopPreChgState              =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[7] & 0x03u) >> 0u);
    /*signalName:pfc_hvopRunningState, DataOrder:little_endian, startBit: 58, length: 2 */
    pfc_hvopRunningState             =  ((uint8_t)(DCAC_HV_Oilpump_Status2_buf[7] & 0x0Cu) >> 2u);
}

void Can1Msg_Unpack_0x18f00a28(void)
{
    /*signalName:pfc_dcdcFaultGrade, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_dcdcFaultGrade               =  ((uint8_t)(DCDC1_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_dcdcLifeToVcu, DataOrder:little_endian, startBit: 4, length: 4 */
    pfc_dcdcLifeToVcu                =  ((uint8_t)(DCDC1_Status1_buf[0] & 0xF0u) >> 4u);
    /*signalName:pfc_dcdcFaultCode, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_dcdcFaultCode                =  ((uint8_t)(DCDC1_Status1_buf[1] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18f00b28(void)
{
    /*signalName:pfc_dcdcInputVoltage, DataOrder:little_endian, startBit: 0, length: 16 */
    pfc_dcdcInputVoltage             =  ((uint16_t)(DCDC1_Status2_buf[0] & 0xFFu) >> 0u);
    pfc_dcdcInputVoltage             |= ((uint16_t)(DCDC1_Status2_buf[1] & 0xFFu) << 8u);
    /*signalName:pfc_dcdcInputCurrent, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_dcdcInputCurrent             =  ((uint8_t)(DCDC1_Status2_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_dcdcOutputCurrent, DataOrder:little_endian, startBit: 24, length: 8 */
    pfc_dcdcOutputCurrent            =  ((uint8_t)(DCDC1_Status2_buf[3] & 0xFFu) >> 0u);
    /*signalName:pfc_dcdcTemp, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_dcdcTemp                     =  ((uint8_t)(DCDC1_Status2_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_dcdcOutputVoltage, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_dcdcOutputVoltage            =  ((uint8_t)(DCDC1_Status2_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_dcdcPreChgState, DataOrder:little_endian, startBit: 48, length: 2 */
    pfc_dcdcPreChgState              =  ((uint8_t)(DCDC1_Status2_buf[6] & 0x03u) >> 0u);
    /*signalName:pfc_dcdcRunningState, DataOrder:little_endian, startBit: 50, length: 2 */
    pfc_dcdcRunningState             =  ((uint8_t)(DCDC1_Status2_buf[6] & 0x0Cu) >> 2u);
    /*signalName:pfc_dcdcFaultState, DataOrder:little_endian, startBit: 52, length: 2 */
    pfc_dcdcFaultState               =  ((uint8_t)(DCDC1_Status2_buf[6] & 0x30u) >> 4u);
    /*signalName:pfc_dcdcTempFault, DataOrder:little_endian, startBit: 54, length: 2 */
    pfc_dcdcTempFault                =  ((uint8_t)(DCDC1_Status2_buf[6] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x18fc0011(void)
{
    /*signalName:pfc_dsSelfCheckState, DataOrder:little_endian, startBit: 0, length: 4 */
    pfc_dsSelfCheckState             =  ((uint8_t)(DS_AP1_buf[0] & 0x0Fu) >> 0u);
    /*signalName:pfc_dsGearD, DataOrder:little_endian, startBit: 8, length: 1 */
    pfc_dsGearD                      =  ((uint8_t)(DS_AP1_buf[1] & 0x01u) >> 0u);
    /*signalName:pfc_dsGearN, DataOrder:little_endian, startBit: 9, length: 1 */
    pfc_dsGearN                      =  ((uint8_t)(DS_AP1_buf[1] & 0x02u) >> 1u);
    /*signalName:pfc_dsGearR, DataOrder:little_endian, startBit: 10, length: 1 */
    pfc_dsGearR                      =  ((uint8_t)(DS_AP1_buf[1] & 0x04u) >> 2u);
    /*signalName:pfc_dsLifeToVcu, DataOrder:little_endian, startBit: 56, length: 8 */
    pfc_dsLifeToVcu                  =  ((uint8_t)(DS_AP1_buf[7] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0x18fe1264(void)
{
    /*signalName:pfc_epbParkLampState, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_epbParkLampState             =  ((uint8_t)(EPB_Status_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_epbSystemFault, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_epbSystemFault               =  ((uint8_t)(EPB_Status_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_epbEmgBrakeLampRequest, DataOrder:little_endian, startBit: 6, length: 2 */
    pfc_epbEmgBrakeLampRequest       =  ((uint8_t)(EPB_Status_buf[0] & 0xC0u) >> 6u);
    /*signalName:pfc_epbWorkMode, DataOrder:little_endian, startBit: 8, length: 2 */
    pfc_epbWorkMode                  =  ((uint8_t)(EPB_Status_buf[1] & 0x03u) >> 0u);
    /*signalName:pfc_epbSwitchState, DataOrder:little_endian, startBit: 10, length: 2 */
    pfc_epbSwitchState               =  ((uint8_t)(EPB_Status_buf[1] & 0x0Cu) >> 2u);
    /*signalName:pfc_epbSystemState, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_epbSystemState               =  ((uint8_t)(EPB_Status_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_epbFaultCode, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_epbFaultCode                 =  ((uint8_t)(EPB_Status_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_epbLifeToVcu, DataOrder:little_endian, startBit: 56, length: 4 */
    pfc_epbLifeToVcu                 =  ((uint8_t)(EPB_Status_buf[7] & 0x0Fu) >> 0u);
    /*signalName:pfc_epbCheckSum, DataOrder:little_endian, startBit: 60, length: 4 */
    pfc_epbCheckSum                  =  ((uint8_t)(EPB_Status_buf[7] & 0xF0u) >> 4u);
}

void Can1Msg_Unpack_0x18ffe342(void)
{
    /*signalName:pfc_bcuDriverDoorState, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_bcuDriverDoorState           =  ((uint8_t)(IC_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_bcuRearHatchState, DataOrder:little_endian, startBit: 6, length: 2 */
    pfc_bcuRearHatchState            =  ((uint8_t)(IC_Status1_buf[0] & 0xC0u) >> 6u);
    /*signalName:pfc_bcuAccePedalInterLockState, DataOrder:little_endian, startBit: 46, length: 2 */
    pfc_bcuAccePedalInterLockState   =  ((uint8_t)(IC_Status1_buf[5] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x18ffe742(void)
{
    /*signalName:pfc_bcuMotInputCoolingWaterTemp, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_bcuMotInputCoolingWaterTemp  =  ((uint8_t)(IC_Status5_buf[1] & 0xFFu) >> 0u);
}

void Can1Msg_Unpack_0xcf603a1(void)
{
    /*signalName:pfc_lvopRunningStateToCCan, DataOrder:little_endian, startBit: 0, length: 8 */
    pfc_lvopRunningStateToCCan       =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[0] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopInputVoltageToCCan, DataOrder:little_endian, startBit: 8, length: 8 */
    pfc_lvopInputVoltageToCCan       =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[1] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopCurrentToCCan, DataOrder:little_endian, startBit: 16, length: 8 */
    pfc_lvopCurrentToCCan            =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[2] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopMotSpeedToCCan, DataOrder:little_endian, startBit: 32, length: 8 */
    pfc_lvopMotSpeedToCCan           =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[4] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopLifeToVcuToCCan, DataOrder:little_endian, startBit: 40, length: 8 */
    pfc_lvopLifeToVcuToCCan          =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[5] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopMcuTempToCCan, DataOrder:little_endian, startBit: 48, length: 8 */
    pfc_lvopMcuTempToCCan            =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[6] & 0xFFu) >> 0u);
    /*signalName:pfc_lvopFaultCodeToCCan, DataOrder:little_endian, startBit: 56, length: 6 */
    pfc_lvopFaultCodeToCCan          =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[7] & 0x3Fu) >> 0u);
    /*signalName:pfc_lvopFaultGradeToCCan, DataOrder:little_endian, startBit: 62, length: 2 */
    pfc_lvopFaultGradeToCCan         =  ((uint8_t)(LVOP_Status1_To_C_CAN_buf[7] & 0xC0u) >> 6u);
}

void Can1Msg_Unpack_0x1802f328(void)
{
    /*signalName:pfc_pduDcdcRelayState, DataOrder:little_endian, startBit: 0, length: 2 */
    pfc_pduDcdcRelayState            =  ((uint8_t)(PDU_Status1_buf[0] & 0x03u) >> 0u);
    /*signalName:pfc_pduDcdcRelayFault, DataOrder:little_endian, startBit: 2, length: 2 */
    pfc_pduDcdcRelayFault            =  ((uint8_t)(PDU_Status1_buf[0] & 0x0Cu) >> 2u);
    /*signalName:pfc_pduHeaterRelayState, DataOrder:little_endian, startBit: 8, length: 2 */
    pfc_pduHeaterRelayState          =  ((uint8_t)(PDU_Status1_buf[1] & 0x03u) >> 0u);
    /*signalName:pfc_pduHeaterRelayFault, DataOrder:little_endian, startBit: 10, length: 2 */
    pfc_pduHeaterRelayFault          =  ((uint8_t)(PDU_Status1_buf[1] & 0x0Cu) >> 2u);
    /*signalName:pfc_pduPTCRelayState, DataOrder:little_endian, startBit: 12, length: 2 */
    pfc_pduPTCRelayState             =  ((uint8_t)(PDU_Status1_buf[1] & 0x30u) >> 4u);
    /*signalName:pfc_pduPTCRelayFault, DataOrder:little_endian, startBit: 14, length: 2 */
    pfc_pduPTCRelayFault             =  ((uint8_t)(PDU_Status1_buf[1] & 0xC0u) >> 6u);
    /*signalName:pfc_pduAirConRelayState, DataOrder:little_endian, startBit: 44, length: 2 */
    pfc_pduAirConRelayState          =  ((uint8_t)(PDU_Status1_buf[5] & 0x30u) >> 4u);
    /*signalName:pfc_pduAirConRelayFault, DataOrder:little_endian, startBit: 46, length: 2 */
    pfc_pduAirConRelayFault          =  ((uint8_t)(PDU_Status1_buf[5] & 0xC0u) >> 6u);
    /*signalName:pfc_pduEdftRelayState, DataOrder:little_endian, startBit: 48, length: 2 */
    pfc_pduEdftRelayState            =  ((uint8_t)(PDU_Status1_buf[6] & 0x03u) >> 0u);
    /*signalName:pfc_pduEdftRelayFault, DataOrder:little_endian, startBit: 50, length: 2 */
    pfc_pduEdftRelayFault            =  ((uint8_t)(PDU_Status1_buf[6] & 0x0Cu) >> 2u);
    /*signalName:pfc_pduMainPosiRelayState, DataOrder:little_endian, startBit: 56, length: 2 */
    pfc_pduMainPosiRelayState        =  ((uint8_t)(PDU_Status1_buf[7] & 0x03u) >> 0u);
    /*signalName:pfc_pduMainPosiRelayFault, DataOrder:little_endian, startBit: 58, length: 2 */
    pfc_pduMainPosiRelayFault        =  ((uint8_t)(PDU_Status1_buf[7] & 0x0Cu) >> 2u);
    /*signalName:pfc_pduPreChgRelayState, DataOrder:little_endian, startBit: 60, length: 2 */
    pfc_pduPreChgRelayState          =  ((uint8_t)(PDU_Status1_buf[7] & 0x30u) >> 4u);
    /*signalName:pfc_pduPreChgRelayFault, DataOrder:little_endian, startBit: 62, length: 2 */
    pfc_pduPreChgRelayFault          =  ((uint8_t)(PDU_Status1_buf[7] & 0xC0u) >> 6u);
}


/*-------------------------------------EOF--------------------------------------*/

