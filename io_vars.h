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

#ifndef __IO_VARS__
#define __IO_VARS__

/* CAN Message: VCU_BattPowerAllow_buf */
extern uint8_t hld_can0_0xc00fefe_msgReady;                
extern uint8_t hld_can0_0xc00fefe_msgTxFailed;             

/* CAN Message: VCU_Vehicle_States_buf */
extern uint8_t hld_can0_0xcff6227_msgReady;                
extern uint8_t hld_can0_0xcff6227_msgTxFailed;             

/* CAN Message: VCU_MCU_Cmd_buf */
extern uint8_t hld_can0_0xcff6127_msgReady;                
extern uint8_t hld_can0_0xcff6127_msgTxFailed;             

/* CAN Message: MCU_Errors3_buf */
extern uint8_t hld_can0_0xcfff5f0_received;                
extern uint8_t hld_can0_0xcfff5f0_msgOverRun;              
extern uint8_t hld_can0_0xcfff5f0_timeout;                 
extern uint8_t hld_can0_0xcfff5f0_msgValid;                

/* CAN Message: MCU_Errors2_buf */
extern uint8_t hld_can0_0xcfff4f0_received;                
extern uint8_t hld_can0_0xcfff4f0_msgOverRun;              
extern uint8_t hld_can0_0xcfff4f0_timeout;                 
extern uint8_t hld_can0_0xcfff4f0_msgValid;                

/* CAN Message: MCU_Errors1_buf */
extern uint8_t hld_can0_0xcfff3f0_received;                
extern uint8_t hld_can0_0xcfff3f0_msgOverRun;              
extern uint8_t hld_can0_0xcfff3f0_timeout;                 
extern uint8_t hld_can0_0xcfff3f0_msgValid;                

/* CAN Message: MCU_States3_buf */
extern uint8_t hld_can0_0xcff73f0_received;                
extern uint8_t hld_can0_0xcff73f0_msgOverRun;              
extern uint8_t hld_can0_0xcff73f0_timeout;                 
extern uint8_t hld_can0_0xcff73f0_msgValid;                

/* CAN Message: MCU_States2_buf */
extern uint8_t hld_can0_0xcff72f0_received;                
extern uint8_t hld_can0_0xcff72f0_msgOverRun;              
extern uint8_t hld_can0_0xcff72f0_timeout;                 
extern uint8_t hld_can0_0xcff72f0_msgValid;                

/* CAN Message: MCU_States1_buf */
extern uint8_t hld_can0_0xcff71f0_received;                
extern uint8_t hld_can0_0xcff71f0_msgOverRun;              
extern uint8_t hld_can0_0xcff71f0_timeout;                 
extern uint8_t hld_can0_0xcff71f0_msgValid;                

extern uint8_t MCU_Errors3_buf[8];
extern uint8_t MCU_Errors2_buf[8];
extern uint8_t MCU_Errors1_buf[8];
extern uint8_t MCU_States3_buf[8];
extern uint8_t MCU_States2_buf[8];
extern uint8_t MCU_States1_buf[8];
extern uint8_t VCU_BattPowerAllow_buf[8];
extern uint8_t VCU_Vehicle_States_buf[8];
extern uint8_t VCU_MCU_Cmd_buf[8];

extern uint16_t pfc_PackCurrent;
extern uint16_t pfc_PackInsideVoltage;
extern uint16_t pfc_AllowMaxDischargeCurr;
extern uint16_t pfc_AllowMaxChargeCurr;

extern uint8_t  pfc_AccePedalPosition;
extern uint8_t  pfc_BrakePedalPosition;
extern uint8_t  pfc_AntiRollBackSwitch;
extern uint8_t  pfc_MotorSpeedLimitSwitch;
extern uint8_t  pfc_SlideSwitch;
extern uint8_t  pfc_VCUCrawlOff;
extern uint16_t pfc_VehicleSpeedLimitMotorSpeed;
extern uint8_t  pfc_VCULife2ToMCU;

extern uint8_t  pfc_SystemReady;
extern uint8_t  pfc_ParkingSystemState;
extern uint8_t  pfc_FootBrakeState;
extern uint8_t  pfc_MCUEnable;
extern uint8_t  pfc_MCUControlMode;
extern uint8_t  pfc_MCUDirection;
extern uint16_t pfc_DemandTorque;
extern uint16_t pfc_DemandSpeed;
extern uint8_t  pfc_VCULife1ToMCU;

extern uint8_t  pfc_MCUUnderVoltLevel1;
extern uint8_t  pfc_MotorOverTempLevel1;
extern uint8_t  pfc_MCUOverTempLevel1;
extern uint8_t  pfc_MCUDCOverVoltLevel1;
extern uint8_t  pfc_MotorUPhaseOverCurrLevel1;
extern uint8_t  pfc_MotorVPhaseOverCurrLevel1;
extern uint8_t  pfc_MotorWPhaseOverCurrLevel1;
extern uint8_t  pfc_MotorOverSpeedLevel1;

extern uint8_t  pfc_MCUUnderVoltLevel3;
extern uint8_t  pfc_MotorOverTempLevel3;
extern uint8_t  pfc_MCUOverTempLevel3;
extern uint8_t  pfc_MCUDCOverVoltLevel3;
extern uint8_t  pfc_MotorUPhaseOverCurrLevel3;
extern uint8_t  pfc_MotorVPhaseOverCurrLevel3;
extern uint8_t  pfc_MotorWPhaseOverCurrLevel3;
extern uint8_t  pfc_MotorOverSpeedLevel3;
extern uint8_t  pfc_MCUUnderVoltLevel2;
extern uint8_t  pfc_MotorOverTempLevel2;
extern uint8_t  pfc_MCUOverTempLevel2;
extern uint8_t  pfc_MCUDCOverVoltLevel2;
extern uint8_t  pfc_MotorUPhaseOverCurrLevel2;
extern uint8_t  pfc_MotorVPhaseOverCurrLevel2;
extern uint8_t  pfc_MotorWPhaseOverCurrLevel2;
extern uint8_t  pfc_MotorOverSpeedLevel2;

extern uint8_t  pfc_MCUUnderVoltLevel4;
extern uint8_t  pfc_MotorOverTempLevel4;
extern uint8_t  pfc_MCUOverTempLevel4;
extern uint8_t  pfc_MCUDCOverVoltLevel4;
extern uint8_t  pfc_MotorUPhaseOverCurrLevel4;
extern uint8_t  pfc_MotorVPhaseOverCurrLevel4;
extern uint8_t  pfc_MotorWPhaseOverCurrLevel4;
extern uint8_t  pfc_MotorOverSpeedLevel4;
extern uint8_t  pfc_MotorInterPhaseShortCircLevel4;
extern uint8_t  pfc_MCUDCShortCircGNDLevel4;
extern uint8_t  pfc_MCUPhaseShortCircGNDLevel4;
extern uint8_t  pfc_VehicleCANFault;
extern uint8_t  pfc_MotorCANFault;
extern uint8_t  pfc_CANTimeoutFault;
extern uint8_t  pfc_CANCRCCheckFault;
extern uint8_t  pfc_CANOfflineFault;
extern uint8_t  pfc_MCUTempSensorFault;
extern uint8_t  pfc_MotorTempSensorFault;
extern uint8_t  pfc_MCUUPhaseCurrSensorFault;
extern uint8_t  pfc_MCUVPhaseCurrSensorFault;
extern uint8_t  pfc_MCUWPhaseCurrSensorFault;
extern uint8_t  pfc_MCUUPhaseLossFault;
extern uint8_t  pfc_MCUVPhaseLossFault;
extern uint8_t  pfc_MCUWPhaseLossFault;
extern uint8_t  pfc_LowVoltBatteryFault;
extern uint8_t  pfc_MotorRDCFault;
extern uint8_t  pfc_MCUDCVoltSensorFault;
extern uint8_t  pfc_MCUIBGTFault;
extern uint8_t  pfc_MotorSpeedSensorFault;
extern uint8_t  pfc_MCUEEPROMFault;
extern uint8_t  pfc_MCUActiveDisChargeFault;

extern uint16_t pfc_MCUMaxDriveTorqueAvailable;
extern uint16_t pfc_MCUMaxBrakeTorqueAvailable;

extern uint8_t  pfc_MCUPreChargeAllow;
extern uint8_t  pfc_MCUActiveDisChargeFeedback;
extern uint8_t  pfc_MCUIGBTEnableFeedback;
extern uint8_t  pfc_MCUFunctionsIndicate;
extern uint8_t  pfc_MCUWorkMode;
extern uint8_t  pfc_MCUFaultGrade;
extern uint8_t  pfc_MCUFaultCode;
extern uint16_t pfc_MCUActualMotorSpeed;
extern uint16_t pfc_MCUActualMotorTorque;
extern uint8_t  pfc_VCULife3ToMCU;

extern uint16_t pfc_MCUDCCurrent;
extern uint16_t pfc_MCUDCVoltage;
extern uint16_t pfc_MCUACCurrent;
extern uint8_t  pfc_MotorTemperature;
extern uint8_t  pfc_MCUTemperature;



#endif /*End of __IO_VARS__*/
/*-------------------------------------EOF--------------------------------------*/

