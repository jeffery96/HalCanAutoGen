/*********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: io_vars.
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-02-16 Chenhoubo
********************************************************************************/

#include "build_control.h"
#include "platform_config.h"
#include "io_vars.h"

/* CAN Message: VCU_BattPowerAllow_buf */
uint8_t     hld_can0_0xc00fefe_msgReady                 =         0u;
uint8_t     hld_can0_0xc00fefe_msgTxFailed              =         0u;

/* CAN Message: VCU_Vehicle_States_buf */
uint8_t     hld_can0_0xcff6227_msgReady                 =         0u;
uint8_t     hld_can0_0xcff6227_msgTxFailed              =         0u;

/* CAN Message: VCU_MCU_Cmd_buf */
uint8_t     hld_can0_0xcff6127_msgReady                 =         0u;
uint8_t     hld_can0_0xcff6127_msgTxFailed              =         0u;

/* CAN Message: MCU_Errors3_buf */
uint8_t     hld_can0_0xcfff5f0_received                 =         0u;
uint8_t     hld_can0_0xcfff5f0_msgOverRun               =         0u;
uint8_t     hld_can0_0xcfff5f0_timeout                  =         0u;
uint8_t     hld_can0_0xcfff5f0_msgValid                 =         0u;

/* CAN Message: MCU_Errors2_buf */
uint8_t     hld_can0_0xcfff4f0_received                 =         0u;
uint8_t     hld_can0_0xcfff4f0_msgOverRun               =         0u;
uint8_t     hld_can0_0xcfff4f0_timeout                  =         0u;
uint8_t     hld_can0_0xcfff4f0_msgValid                 =         0u;

/* CAN Message: MCU_Errors1_buf */
uint8_t     hld_can0_0xcfff3f0_received                 =         0u;
uint8_t     hld_can0_0xcfff3f0_msgOverRun               =         0u;
uint8_t     hld_can0_0xcfff3f0_timeout                  =         0u;
uint8_t     hld_can0_0xcfff3f0_msgValid                 =         0u;

/* CAN Message: MCU_States3_buf */
uint8_t     hld_can0_0xcff73f0_received                 =         0u;
uint8_t     hld_can0_0xcff73f0_msgOverRun               =         0u;
uint8_t     hld_can0_0xcff73f0_timeout                  =         0u;
uint8_t     hld_can0_0xcff73f0_msgValid                 =         0u;

/* CAN Message: MCU_States2_buf */
uint8_t     hld_can0_0xcff72f0_received                 =         0u;
uint8_t     hld_can0_0xcff72f0_msgOverRun               =         0u;
uint8_t     hld_can0_0xcff72f0_timeout                  =         0u;
uint8_t     hld_can0_0xcff72f0_msgValid                 =         0u;

/* CAN Message: MCU_States1_buf */
uint8_t     hld_can0_0xcff71f0_received                 =         0u;
uint8_t     hld_can0_0xcff71f0_msgOverRun               =         0u;
uint8_t     hld_can0_0xcff71f0_timeout                  =         0u;
uint8_t     hld_can0_0xcff71f0_msgValid                 =         0u;

uint8_t VCU_BattPowerAllow_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t VCU_Vehicle_States_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t VCU_MCU_Cmd_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t MCU_Errors3_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t MCU_Errors2_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t MCU_Errors1_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t MCU_States3_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t MCU_States2_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};
uint8_t MCU_States1_buf[8] = 
{
    0, 0, 0, 0, 0, 0, 0, 0
};

uint16_t    pfc_PackCurrent                                 =     0x2710u;
uint16_t    pfc_PackInsideVoltage                           =        0x0u;
uint16_t    pfc_AllowMaxDischargeCurr                       =     0x2710u;
uint16_t    pfc_AllowMaxChargeCurr                          =     0x2710u;

uint8_t     pfc_AccePedalPosition                           =        0x0u;
uint8_t     pfc_BrakePedalPosition                          =        0x0u;
uint8_t     pfc_AntiRollBackSwitch                          =        0x0u;
uint8_t     pfc_MotorSpeedLimitSwitch                       =        0x0u;
uint8_t     pfc_SlideSwitch                                 =        0x0u;
uint8_t     pfc_VCUCrawlOff                                 =        0x0u;
uint16_t    pfc_VehicleSpeedLimitMotorSpeed                 =     0x3a98u;
uint8_t     pfc_VCULife2ToMCU                               =        0x0u;

uint8_t     pfc_SystemReady                                 =        0x0u;
uint8_t     pfc_ParkingSystemState                          =        0x0u;
uint8_t     pfc_FootBrakeState                              =        0x0u;
uint8_t     pfc_MCUEnable                                   =        0x0u;
uint8_t     pfc_MCUControlMode                              =        0x0u;
uint8_t     pfc_MCUDirection                                =        0x0u;
uint16_t    pfc_DemandTorque                                =     0x7530u;
uint16_t    pfc_DemandSpeed                                 =     0x3a98u;
uint8_t     pfc_VCULife1ToMCU                               =        0x0u;

uint8_t     pfc_MCUUnderVoltLevel1                          =        0x0u;
uint8_t     pfc_MotorOverTempLevel1                         =        0x0u;
uint8_t     pfc_MCUOverTempLevel1                           =        0x0u;
uint8_t     pfc_MCUDCOverVoltLevel1                         =        0x0u;
uint8_t     pfc_MotorUPhaseOverCurrLevel1                   =        0x0u;
uint8_t     pfc_MotorVPhaseOverCurrLevel1                   =        0x0u;
uint8_t     pfc_MotorWPhaseOverCurrLevel1                   =        0x0u;
uint8_t     pfc_MotorOverSpeedLevel1                        =        0x0u;

uint8_t     pfc_MCUUnderVoltLevel3                          =        0x0u;
uint8_t     pfc_MotorOverTempLevel3                         =        0x0u;
uint8_t     pfc_MCUOverTempLevel3                           =        0x0u;
uint8_t     pfc_MCUDCOverVoltLevel3                         =        0x0u;
uint8_t     pfc_MotorUPhaseOverCurrLevel3                   =        0x0u;
uint8_t     pfc_MotorVPhaseOverCurrLevel3                   =        0x0u;
uint8_t     pfc_MotorWPhaseOverCurrLevel3                   =        0x0u;
uint8_t     pfc_MotorOverSpeedLevel3                        =        0x0u;
uint8_t     pfc_MCUUnderVoltLevel2                          =        0x0u;
uint8_t     pfc_MotorOverTempLevel2                         =        0x0u;
uint8_t     pfc_MCUOverTempLevel2                           =        0x0u;
uint8_t     pfc_MCUDCOverVoltLevel2                         =        0x0u;
uint8_t     pfc_MotorUPhaseOverCurrLevel2                   =        0x0u;
uint8_t     pfc_MotorVPhaseOverCurrLevel2                   =        0x0u;
uint8_t     pfc_MotorWPhaseOverCurrLevel2                   =        0x0u;
uint8_t     pfc_MotorOverSpeedLevel2                        =        0x0u;

uint8_t     pfc_MCUUnderVoltLevel4                          =        0x0u;
uint8_t     pfc_MotorOverTempLevel4                         =        0x0u;
uint8_t     pfc_MCUOverTempLevel4                           =        0x0u;
uint8_t     pfc_MCUDCOverVoltLevel4                         =        0x0u;
uint8_t     pfc_MotorUPhaseOverCurrLevel4                   =        0x0u;
uint8_t     pfc_MotorVPhaseOverCurrLevel4                   =        0x0u;
uint8_t     pfc_MotorWPhaseOverCurrLevel4                   =        0x0u;
uint8_t     pfc_MotorOverSpeedLevel4                        =        0x0u;
uint8_t     pfc_MotorInterPhaseShortCircLevel4              =        0x0u;
uint8_t     pfc_MCUDCShortCircGNDLevel4                     =        0x0u;
uint8_t     pfc_MCUPhaseShortCircGNDLevel4                  =        0x0u;
uint8_t     pfc_VehicleCANFault                             =        0x0u;
uint8_t     pfc_MotorCANFault                               =        0x0u;
uint8_t     pfc_CANTimeoutFault                             =        0x0u;
uint8_t     pfc_CANCRCCheckFault                            =        0x0u;
uint8_t     pfc_CANOfflineFault                             =        0x0u;
uint8_t     pfc_MCUTempSensorFault                          =        0x0u;
uint8_t     pfc_MotorTempSensorFault                        =        0x0u;
uint8_t     pfc_MCUUPhaseCurrSensorFault                    =        0x0u;
uint8_t     pfc_MCUVPhaseCurrSensorFault                    =        0x0u;
uint8_t     pfc_MCUWPhaseCurrSensorFault                    =        0x0u;
uint8_t     pfc_MCUUPhaseLossFault                          =        0x0u;
uint8_t     pfc_MCUVPhaseLossFault                          =        0x0u;
uint8_t     pfc_MCUWPhaseLossFault                          =        0x0u;
uint8_t     pfc_LowVoltBatteryFault                         =        0x0u;
uint8_t     pfc_MotorRDCFault                               =        0x0u;
uint8_t     pfc_MCUDCVoltSensorFault                        =        0x0u;
uint8_t     pfc_MCUIBGTFault                                =        0x0u;
uint8_t     pfc_MotorSpeedSensorFault                       =        0x0u;
uint8_t     pfc_MCUEEPROMFault                              =        0x0u;
uint8_t     pfc_MCUActiveDisChargeFault                     =        0x0u;

uint16_t    pfc_MCUMaxDriveTorqueAvailable                  =        0x0u;
uint16_t    pfc_MCUMaxBrakeTorqueAvailable                  =     0x7530u;

uint8_t     pfc_MCUPreChargeAllow                           =        0x0u;
uint8_t     pfc_MCUActiveDisChargeFeedback                  =        0x0u;
uint8_t     pfc_MCUIGBTEnableFeedback                       =        0x0u;
uint8_t     pfc_MCUFunctionsIndicate                        =        0x0u;
uint8_t     pfc_MCUWorkMode                                 =        0x0u;
uint8_t     pfc_MCUFaultGrade                               =        0x0u;
uint8_t     pfc_MCUFaultCode                                =        0x0u;
uint16_t    pfc_MCUActualMotorSpeed                         =     0x3a98u;
uint16_t    pfc_MCUActualMotorTorque                        =     0x7530u;
uint8_t     pfc_VCULife3ToMCU                               =        0x0u;

uint16_t    pfc_MCUDCCurrent                                =     0x2710u;
uint16_t    pfc_MCUDCVoltage                                =        0x0u;
uint16_t    pfc_MCUACCurrent                                =        0x0u;
uint8_t     pfc_MotorTemperature                            =       0x28u;
uint8_t     pfc_MCUTemperature                              =       0x28u;

/*-------------------------------------EOF--------------------------------------*/

