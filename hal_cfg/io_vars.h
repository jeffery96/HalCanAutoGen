/********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: io_vars.h
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-03-19 LinXiaobin
********************************************************************************/

#include "build_control.h"

#ifndef __IO_VARS__
#define __IO_VARS__

/* CAN Message: VCU_BattPowerAllow_buf */
extern uint8_t hld_can0_0xcff6327_msgReady;                
extern uint8_t hld_can0_0xcff6327_msgTxFailed;             

/* CAN Message: VCU_MCU_Cmd_buf */
extern uint8_t hld_can0_0xcff6127_msgReady;                
extern uint8_t hld_can0_0xcff6127_msgTxFailed;             

/* CAN Message: VCU_Vehicle_States_buf */
extern uint8_t hld_can0_0xcff6227_msgReady;                
extern uint8_t hld_can0_0xcff6227_msgTxFailed;             

/* CAN Message: MCU_Errors1_buf */
extern uint8_t hld_can0_0xcfff3f0_received;                
extern uint8_t hld_can0_0xcfff3f0_msgOverRun;              
extern uint8_t hld_can0_0xcfff3f0_timeout;                 
extern uint8_t hld_can0_0xcfff3f0_msgValid;                

/* CAN Message: MCU_Errors2_buf */
extern uint8_t hld_can0_0xcfff4f0_received;                
extern uint8_t hld_can0_0xcfff4f0_msgOverRun;              
extern uint8_t hld_can0_0xcfff4f0_timeout;                 
extern uint8_t hld_can0_0xcfff4f0_msgValid;                

/* CAN Message: MCU_Errors3_buf */
extern uint8_t hld_can0_0xcfff5f0_received;                
extern uint8_t hld_can0_0xcfff5f0_msgOverRun;              
extern uint8_t hld_can0_0xcfff5f0_timeout;                 
extern uint8_t hld_can0_0xcfff5f0_msgValid;                

/* CAN Message: MCU_States1_buf */
extern uint8_t hld_can0_0xcff71f0_received;                
extern uint8_t hld_can0_0xcff71f0_msgOverRun;              
extern uint8_t hld_can0_0xcff71f0_timeout;                 
extern uint8_t hld_can0_0xcff71f0_msgValid;                

/* CAN Message: MCU_States2_buf */
extern uint8_t hld_can0_0xcff72f0_received;                
extern uint8_t hld_can0_0xcff72f0_msgOverRun;              
extern uint8_t hld_can0_0xcff72f0_timeout;                 
extern uint8_t hld_can0_0xcff72f0_msgValid;                

/* CAN Message: MCU_States3_buf */
extern uint8_t hld_can0_0xcff73f0_received;                
extern uint8_t hld_can0_0xcff73f0_msgOverRun;              
extern uint8_t hld_can0_0xcff73f0_timeout;                 
extern uint8_t hld_can0_0xcff73f0_msgValid;                

/* CAN Message: uds_tx */
extern uint8_t hld_can0_0x18000701_msgReady;
extern uint8_t hld_can0_0x18000701_msgTxFailed;

/* CAN Message: uds_rx */
extern uint8_t hld_can0_0x18000801_received;
extern uint8_t hld_can0_0x18000801_msgOverRun;
extern uint8_t hld_can0_0x18000801_timeout;
extern uint8_t hld_can0_0x18000801_msgValid;

/* CAN Message: uds_rx_func */
extern uint8_t hld_can0_0x18000901_received;
extern uint8_t hld_can0_0x18000901_msgOverRun;
extern uint8_t hld_can0_0x18000901_timeout;
extern uint8_t hld_can0_0x18000901_msgValid;

/* CAN Message: CCVS_buf */
extern uint8_t hld_can1_0x18fef100_msgReady;               
extern uint8_t hld_can1_0x18fef100_msgTxFailed;            

/* CAN Message: EVCU3_EACCmd_buf */
extern uint8_t hld_can1_0xcff3e27_msgReady;                
extern uint8_t hld_can1_0xcff3e27_msgTxFailed;             

/* CAN Message: EVCU_MCU1_buf */
extern uint8_t hld_can1_0x18ff3c27_msgReady;               
extern uint8_t hld_can1_0x18ff3c27_msgTxFailed;            

/* CAN Message: EVCU_MCU2_buf */
extern uint8_t hld_can1_0x18ff3d27_msgReady;               
extern uint8_t hld_can1_0x18ff3d27_msgTxFailed;            

/* CAN Message: EVCU_MCU3_buf */
extern uint8_t hld_can1_0x18ff3e27_msgReady;               
extern uint8_t hld_can1_0x18ff3e27_msgTxFailed;            

/* CAN Message: EVCU_Status1_buf */
extern uint8_t hld_can1_0xcff3f27_msgReady;                
extern uint8_t hld_can1_0xcff3f27_msgTxFailed;             

/* CAN Message: EVCU_Status2_buf */
extern uint8_t hld_can1_0x18ff4027_msgReady;               
extern uint8_t hld_can1_0x18ff4027_msgTxFailed;            

/* CAN Message: EVCU_Status3_buf */
extern uint8_t hld_can1_0xcff4127_msgReady;                
extern uint8_t hld_can1_0xcff4127_msgTxFailed;             

/* CAN Message: V2B_VIN_buf */
extern uint8_t hld_can1_0x18e1f3ef_msgReady;               
extern uint8_t hld_can1_0x18e1f3ef_msgTxFailed;            

/* CAN Message: VCU_Battery_Control_buf */
extern uint8_t hld_can1_0x1802f3ef_msgReady;               
extern uint8_t hld_can1_0x1802f3ef_msgTxFailed;            

/* CAN Message: ABS1_VSO_buf */
extern uint8_t hld_can1_0x180b100b_received;               
extern uint8_t hld_can1_0x180b100b_msgOverRun;             
extern uint8_t hld_can1_0x180b100b_timeout;                
extern uint8_t hld_can1_0x180b100b_msgValid;               

/* CAN Message: B2V_CurrentLimit_buf */
extern uint8_t hld_can1_0x18c4eff3_received;               
extern uint8_t hld_can1_0x18c4eff3_msgOverRun;             
extern uint8_t hld_can1_0x18c4eff3_timeout;                
extern uint8_t hld_can1_0x18c4eff3_msgValid;               

/* CAN Message: B2V_RQ_buf */
extern uint8_t hld_can1_0x1801eff3_received;               
extern uint8_t hld_can1_0x1801eff3_msgOverRun;             
extern uint8_t hld_can1_0x1801eff3_timeout;                
extern uint8_t hld_can1_0x1801eff3_msgValid;               

/* CAN Message: B2V_ST1_buf */
extern uint8_t hld_can1_0x1883eff3_received;               
extern uint8_t hld_can1_0x1883eff3_msgOverRun;             
extern uint8_t hld_can1_0x1883eff3_timeout;                
extern uint8_t hld_can1_0x1883eff3_msgValid;               

/* CAN Message: B2V_ST2_buf */
extern uint8_t hld_can1_0x1884eff3_received;               
extern uint8_t hld_can1_0x1884eff3_msgOverRun;             
extern uint8_t hld_can1_0x1884eff3_timeout;                
extern uint8_t hld_can1_0x1884eff3_msgValid;               

/* CAN Message: DCAC_HV_Oilpump_Status1_buf */
extern uint8_t hld_can1_0x18f00828_received;               
extern uint8_t hld_can1_0x18f00828_msgOverRun;             
extern uint8_t hld_can1_0x18f00828_timeout;                
extern uint8_t hld_can1_0x18f00828_msgValid;               

/* CAN Message: DCAC_HV_Oilpump_Status2_buf */
extern uint8_t hld_can1_0x18f00d28_received;               
extern uint8_t hld_can1_0x18f00d28_msgOverRun;             
extern uint8_t hld_can1_0x18f00d28_timeout;                
extern uint8_t hld_can1_0x18f00d28_msgValid;               

/* CAN Message: DCDC1_Status1_buf */
extern uint8_t hld_can1_0x18f00a28_received;               
extern uint8_t hld_can1_0x18f00a28_msgOverRun;             
extern uint8_t hld_can1_0x18f00a28_timeout;                
extern uint8_t hld_can1_0x18f00a28_msgValid;               

/* CAN Message: DCDC1_Status2_buf */
extern uint8_t hld_can1_0x18f00b28_received;               
extern uint8_t hld_can1_0x18f00b28_msgOverRun;             
extern uint8_t hld_can1_0x18f00b28_timeout;                
extern uint8_t hld_can1_0x18f00b28_msgValid;               

/* CAN Message: DS_AP1_buf */
extern uint8_t hld_can1_0x18fc0011_received;               
extern uint8_t hld_can1_0x18fc0011_msgOverRun;             
extern uint8_t hld_can1_0x18fc0011_timeout;                
extern uint8_t hld_can1_0x18fc0011_msgValid;               

/* CAN Message: EPB_Status_buf */
extern uint8_t hld_can1_0x18fe1264_received;               
extern uint8_t hld_can1_0x18fe1264_msgOverRun;             
extern uint8_t hld_can1_0x18fe1264_timeout;                
extern uint8_t hld_can1_0x18fe1264_msgValid;               

/* CAN Message: IC_Status1_buf */
extern uint8_t hld_can1_0x18ffe342_received;               
extern uint8_t hld_can1_0x18ffe342_msgOverRun;             
extern uint8_t hld_can1_0x18ffe342_timeout;                
extern uint8_t hld_can1_0x18ffe342_msgValid;               

/* CAN Message: IC_Status5_buf */
extern uint8_t hld_can1_0x18ffe742_received;               
extern uint8_t hld_can1_0x18ffe742_msgOverRun;             
extern uint8_t hld_can1_0x18ffe742_timeout;                
extern uint8_t hld_can1_0x18ffe742_msgValid;               

/* CAN Message: LVOP_Status1_To_C_CAN_buf */
extern uint8_t hld_can1_0xcf603a1_received;                
extern uint8_t hld_can1_0xcf603a1_msgOverRun;              
extern uint8_t hld_can1_0xcf603a1_timeout;                 
extern uint8_t hld_can1_0xcf603a1_msgValid;                

/* CAN Message: PDU_Status1_buf */
extern uint8_t hld_can1_0x1802f328_received;               
extern uint8_t hld_can1_0x1802f328_msgOverRun;             
extern uint8_t hld_can1_0x1802f328_timeout;                
extern uint8_t hld_can1_0x1802f328_msgValid;               

/* CAN Message: Tbox_Time_buf */
extern uint8_t hld_can1_0x18102001_received;
extern uint8_t hld_can1_0x18102001_msgOverRun;
extern uint8_t hld_can1_0x18102001_timeout;
extern uint8_t hld_can1_0x18102001_msgValid;

/* CAN Message: Tbox_VIN_buf */
extern uint8_t hld_can1_0x18102101_received;
extern uint8_t hld_can1_0x18102101_msgOverRun;
extern uint8_t hld_can1_0x18102101_timeout;
extern uint8_t hld_can1_0x18102101_msgValid;

/* CAN Message: Monitor_VCU_buf */
extern uint8_t hld_can1_0x701_received;
extern uint8_t hld_can1_0x701_msgOverRun;
extern uint8_t hld_can1_0x701_timeout;
extern uint8_t hld_can1_0x701_msgValid;

/* CAN Message: Monitor_VCU2_buf */
extern uint8_t hld_can1_0x702_received;
extern uint8_t hld_can1_0x702_msgOverRun;
extern uint8_t hld_can1_0x702_timeout;
extern uint8_t hld_can1_0x702_msgValid;

/* CAN Message: VCU_Monitor_buf */
extern uint8_t hld_can1_0x703_msgReady;
extern uint8_t hld_can1_0x703_msgTxFailed;

/* CAN Message: uds_tx */
extern uint8_t hld_can1_0x18102201_msgReady;
extern uint8_t hld_can1_0x18102201_msgTxFailed;

/* CAN Message: uds_rx */
extern uint8_t hld_can1_0x18102301_received;
extern uint8_t hld_can1_0x18102301_msgOverRun;
extern uint8_t hld_can1_0x18102301_timeout;
extern uint8_t hld_can1_0x18102301_msgValid;

/* CAN Message: uds_rx_func */
extern uint8_t hld_can1_0x18102401_received;
extern uint8_t hld_can1_0x18102401_msgOverRun;
extern uint8_t hld_can1_0x18102401_timeout;
extern uint8_t hld_can1_0x18102401_msgValid;

/* CAN Message: VCU15_MmData_Monitor_buf */
extern uint8_t hld_can1_0x18102501_msgReady;
extern uint8_t hld_can1_0x18102501_msgTxFailed;

/* CAN Message: VCU13_Meter_VIN_buf */
extern uint8_t hld_can1_0x18102601_msgReady;
extern uint8_t hld_can1_0x18102601_msgTxFailed;

/* CAN Message: LVOP_Control_buf */
extern uint8_t hld_can2_0x18f10527_msgReady;               
extern uint8_t hld_can2_0x18f10527_msgTxFailed;            

/* CAN Message: LVOP_Status1_buf */
extern uint8_t hld_can2_0xcf603a1_received;                
extern uint8_t hld_can2_0xcf603a1_msgOverRun;              
extern uint8_t hld_can2_0xcf603a1_timeout;                 
extern uint8_t hld_can2_0xcf603a1_msgValid;                

/* CAN Message: ccp_daq_0 */
extern uint8_t hld_can2_0x219_0_msgReady;
extern uint8_t hld_can2_0x219_0_msgTxFailed;

/* CAN Message: ccp_daq_1 */
extern uint8_t hld_can2_0x219_1_msgReady;
extern uint8_t hld_can2_0x219_1_msgTxFailed;

/* CAN Message: ccp_daq_2 */
extern uint8_t hld_can2_0x219_2_msgReady;
extern uint8_t hld_can2_0x219_2_msgTxFailed;

/* CAN Message: ccp_daq_3 */
extern uint8_t hld_can2_0x219_3_msgReady;
extern uint8_t hld_can2_0x219_3_msgTxFailed;

/* CAN Message: ccp_daq_4 */
extern uint8_t hld_can2_0x219_4_msgReady;
extern uint8_t hld_can2_0x219_4_msgTxFailed;

/* CAN Message: ccp_daq_5 */
extern uint8_t hld_can2_0x219_5_msgReady;
extern uint8_t hld_can2_0x219_5_msgTxFailed;

/* CAN Message: ccp_daq_6 */
extern uint8_t hld_can2_0x219_6_msgReady;
extern uint8_t hld_can2_0x219_6_msgTxFailed;

/* CAN Message: ccp_daq_7 */
extern uint8_t hld_can2_0x219_7_msgReady;
extern uint8_t hld_can2_0x219_7_msgTxFailed;

/* CAN Message: ccp_daq_8 */
extern uint8_t hld_can2_0x219_8_msgReady;
extern uint8_t hld_can2_0x219_8_msgTxFailed;

/* CAN Message: ccp_tx */
extern uint8_t hld_can2_0x739_msgReady;
extern uint8_t hld_can2_0x739_msgTxFailed;

/* CAN Message: ccp_rx */
extern uint8_t hld_can2_0x729_received;
extern uint8_t hld_can2_0x729_msgOverRun;
extern uint8_t hld_can2_0x729_timeout;
extern uint8_t hld_can2_0x729_msgValid;

/* CAN Message: uds_tx */
extern uint8_t hld_can2_0x18DAF110_msgReady;
extern uint8_t hld_can2_0x18DAF110_msgTxFailed;

/* CAN Message: uds_rx */
extern uint8_t hld_can2_0x18DA10F1_received;
extern uint8_t hld_can2_0x18DA10F1_msgOverRun;
extern uint8_t hld_can2_0x18DA10F1_timeout;
extern uint8_t hld_can2_0x18DA10F1_msgValid;

/* CAN Message: uds_rx_func */
extern uint8_t hld_can2_0x18DB33F1_received;
extern uint8_t hld_can2_0x18DB33F1_msgOverRun;
extern uint8_t hld_can2_0x18DB33F1_timeout;
extern uint8_t hld_can2_0x18DB33F1_msgValid;

/* CAN Message: vin_resp_buf */
extern uint8_t hld_can2_0x18DAF103_msgReady;
extern uint8_t hld_can2_0x18DAF103_msgTxFailed;


extern uint8_t VCU_BattPowerAllow_buf[8];
extern uint8_t VCU_MCU_Cmd_buf[8];
extern uint8_t VCU_Vehicle_States_buf[8];
extern uint8_t MCU_Errors1_buf[8];
extern uint8_t MCU_Errors2_buf[8];
extern uint8_t MCU_Errors3_buf[8];
extern uint8_t MCU_States1_buf[8];
extern uint8_t MCU_States2_buf[8];
extern uint8_t MCU_States3_buf[8];
extern uint8_t uds_tx[8];
extern uint8_t uds_rx[8];
extern uint8_t uds_rx_func[8];
extern uint8_t CCVS_buf[8];
extern uint8_t EVCU3_EACCmd_buf[8];
extern uint8_t EVCU_MCU1_buf[8];
extern uint8_t EVCU_MCU2_buf[8];
extern uint8_t EVCU_MCU3_buf[8];
extern uint8_t EVCU_Status1_buf[8];
extern uint8_t EVCU_Status2_buf[8];
extern uint8_t EVCU_Status3_buf[8];
extern uint8_t V2B_VIN_buf[8];
extern uint8_t VCU_Battery_Control_buf[8];
extern uint8_t ABS1_VSO_buf[8];
extern uint8_t B2V_CurrentLimit_buf[8];
extern uint8_t B2V_RQ_buf[8];
extern uint8_t B2V_ST1_buf[8];
extern uint8_t B2V_ST2_buf[8];
extern uint8_t DCAC_HV_Oilpump_Status1_buf[8];
extern uint8_t DCAC_HV_Oilpump_Status2_buf[8];
extern uint8_t DCDC1_Status1_buf[8];
extern uint8_t DCDC1_Status2_buf[8];
extern uint8_t DS_AP1_buf[8];
extern uint8_t EPB_Status_buf[8];
extern uint8_t IC_Status1_buf[8];
extern uint8_t IC_Status5_buf[8];
extern uint8_t LVOP_Status1_To_C_CAN_buf[8];
extern uint8_t PDU_Status1_buf[8];
extern uint8_t Tbox_Time_buf[8];
extern uint8_t Tbox_VIN_buf[8];
extern uint8_t Monitor_VCU_buf[8];
extern uint8_t Monitor_VCU2_buf[8];
extern uint8_t VCU_Monitor_buf[8];
extern uint8_t VCU15_MmData_Monitor_buf[8];
extern uint8_t VCU13_Meter_VIN_buf[8];
extern uint8_t LVOP_Control_buf[8];
extern uint8_t LVOP_Status1_buf[8];
extern uint8_t ccp_daq_0[8];
extern uint8_t ccp_daq_1[8];
extern uint8_t ccp_daq_2[8];
extern uint8_t ccp_daq_3[8];
extern uint8_t ccp_daq_4[8];
extern uint8_t ccp_daq_5[8];
extern uint8_t ccp_daq_6[8];
extern uint8_t ccp_daq_7[8];
extern uint8_t ccp_daq_8[8];
extern uint8_t ccp_tx[8];
extern uint8_t ccp_rx[8];
extern uint8_t vin_resp_buf[8];

/* VCU_BattPowerAllow Message Signals */
extern uint16_t pfc_vcuMcuPackCurrent;
extern uint16_t pfc_vcuMcuPackInsideVoltage;
extern uint16_t pfc_vcuMcuAllowMaxDischgCurr;
extern uint16_t pfc_vcuMcuAllowMaxChgCurr;

/* VCU_MCU_Cmd Message Signals */
extern uint8_t  pfc_vcuMcuSystemReady;
extern uint8_t  pfc_vcuMcuParkingSystemState;
extern uint8_t  pfc_vcuMcuFootBrakeState;
extern uint8_t  pfc_vcuMcuIGBTEnable;
extern uint8_t  pfc_vcuMcuControlMode;
extern uint8_t  pfc_vcuMcuDirection;
extern uint16_t pfc_vcuMcuDemandTorque;
extern uint16_t pfc_vcuMcuDemandSpeed;
extern uint8_t  pfc_vcuLifeToMcu1;

/* VCU_Vehicle_States Message Signals */
extern uint8_t  pfc_vcuMcuAccePedalPosition;
extern uint8_t  pfc_vcuMcuBrakePedalPosition;
extern uint8_t  pfc_vcuMcuAntiRollBackSwitch;
extern uint8_t  pfc_vcuMcuMotSpeedLimitSwitch;
extern uint8_t  pfc_vcuMcuSlideSwitch;
extern uint8_t  pfc_vcuMcuCrawlOff;
extern uint16_t pfc_vcuMcuVehSpdLimitMotSpd;
extern uint8_t  pfc_vcuLifeToMcu2;

/* MCU_Errors1 Message Signals */
extern uint8_t  pfc_mcuUnderVoltLv4;
extern uint8_t  pfc_motOverTempLv4;
extern uint8_t  pfc_mcuOverTempLv4;
extern uint8_t  pfc_mcuDCOverVoltLv4;
extern uint8_t  pfc_motUPhaseOverCurrLv4;
extern uint8_t  pfc_motVPhaseOverCurrLv4;
extern uint8_t  pfc_motWPhaseOverCurrLv4;
extern uint8_t  pfc_motOverSpeedLv4;
extern uint8_t  pfc_motInterPhaseSCLv4;
extern uint8_t  pfc_mcuDCBusToGndSCLv4;
extern uint8_t  pfc_mcuPhaseToGndSCLv4;
extern uint8_t  pfc_mcuVcuCanFault;
extern uint8_t  pfc_motCanFault;
extern uint8_t  pfc_mcuCanTimeoutFault;
extern uint8_t  pfc_mcuCanCRCCheckFault;
extern uint8_t  pfc_mcuCanOfflineFault;
extern uint8_t  pfc_mcuTempSensFault;
extern uint8_t  pfc_motTempSensFault;
extern uint8_t  pfc_mcuUPhaseCurrSensFault;
extern uint8_t  pfc_mcuVPhaseCurrSensFault;
extern uint8_t  pfc_mcuWPhaseCurrSensFault;
extern uint8_t  pfc_mcuUPhaseLossFault;
extern uint8_t  pfc_mcuVPhaseLossFault;
extern uint8_t  pfc_mcuWPhaseLossFault;
extern uint8_t  pfc_mcuLowVoltBattSupFault;
extern uint8_t  pfc_motRDCFault;
extern uint8_t  pfc_MCUDCVoltSensorFault;
extern uint8_t  pfc_mcuIBGTFault;
extern uint8_t  pfc_motSpdSensFault;
extern uint8_t  pfc_mcuEEPROMFault;
extern uint8_t  pfc_mcuActiveDisChgFault;

/* MCU_Errors2 Message Signals */
extern uint8_t  pfc_mcuUnderVoltLvl3;
extern uint8_t  pfc_motOverTempLv3;
extern uint8_t  pfc_mcuOverTempLv3;
extern uint8_t  pfc_mcuDCOverVoltLv3;
extern uint8_t  pfc_motUPhaseOverCurrLv3;
extern uint8_t  pfc_motVPhaseOverCurrLv3;
extern uint8_t  pfc_motWPhaseOverCurrLv3;
extern uint8_t  pfc_motOverSpeedLv3;
extern uint8_t  pfc_mcuUnderVoltLv2;
extern uint8_t  pfc_motOverTempLv2;
extern uint8_t  pfc_mcuOverTempLv2;
extern uint8_t  pfc_mcuDCOverVoltLv2;
extern uint8_t  pfc_motUPhaseOverCurrLv2;
extern uint8_t  pfc_motVPhaseOverCurrLv2;
extern uint8_t  pfc_motWPhaseOverCurrLv2;
extern uint8_t  pfc_motOverSpeedLevel2;

/* MCU_Errors3 Message Signals */
extern uint8_t  pfc_mcuUnderVoltLv1;
extern uint8_t  pfc_mcuOverTempLvl1;
extern uint8_t  pfc_mcuOverTempLv1;
extern uint8_t  pfc_mcuDCOverVoltLv1;
extern uint8_t  pfc_motUPhaseOverCurrLv1;
extern uint8_t  pfc_motVPhaseOverCurrLv1;
extern uint8_t  pfc_motWPhaseOverCurrLv1;
extern uint8_t  pfc_motOverSpdLv1;

/* MCU_States1 Message Signals */
extern uint16_t pfc_mcuDCCurrent;
extern uint16_t pfc_mcuDCVoltage;
extern uint16_t pfc_mcuACCurrent;
extern uint8_t  pfc_motTemp;
extern uint8_t  pfc_mcuTemp;

/* MCU_States2 Message Signals */
extern uint8_t  pfc_mcuPreChgAllow;
extern uint8_t  pfc_mcuActiveDisChgState;
extern uint8_t  pfc_mcuIGBTEnableState;
extern uint8_t  pfc_mcuFunctionsIndicate;
extern uint8_t  pfc_mcuWorkMode;
extern uint8_t  pfc_mcuFaultGrade;
extern uint8_t  pfc_mcuFaultCode;
extern uint16_t pfc_motActualSpeed;
extern uint16_t pfc_motActualTorque;
extern uint8_t  pfc_mcuLifeToVcu;

/* MCU_States3 Message Signals */
extern uint16_t pfc_mcuMaxDriveTorqueAvail;
extern uint16_t pfc_MCUMaxBrakeTorqueAvail;

/* CCVS Message Signals */
extern uint16_t pfc_vcuAbsVehicleVelocity;
extern uint8_t  pfc_vcuAbsHandBrake;
extern uint8_t  pfc_vcuAbsBrakeSwitch;

/* EVCU3_EACCmd Message Signals */
extern uint8_t  pfc_vcuPduAirConRelayCmd;
extern uint8_t  pfc_vcuPduHvopRelayCmd;
extern uint8_t  pfc_vcuPduEdftRelayCmd;
extern uint8_t  pfc_vcuPduDcdcEnable;
extern uint8_t  pfc_vcuPduMainPosiRelayCmd;
extern uint8_t  pfc_vcuPduPreChgRelayCmd;
extern uint8_t  pfc_vcuPduHvopEnable;
extern uint8_t  pfc_vcuPduHeaterRelayCmd;
extern uint8_t  pfc_vcuPduPTCRelayCmd;

/* EVCU_MCU1 Message Signals */
extern uint16_t pfc_vcuBcuMcuDCCurrent;
extern uint16_t pfc_vcuBcuMcuDCVoltage;
extern uint16_t pfc_vcuBcuMcuACCurrent;

/* EVCU_MCU2 Message Signals */
extern uint16_t pfc_vcuBcuMot1Speed;
extern uint8_t  pfc_vcuBcuMot1Temp;
extern uint8_t  pfc_vcuBcuMcu1Temperature;
extern uint16_t pfc_vcuBcuMot1Torque;
extern uint8_t  pfc_vcuBcuMot1TempAlarm;
extern uint8_t  pfc_vcuBcuMcu1TempAlarm;
extern uint8_t  pfc_vcuBcuMotNumber;
extern uint8_t  pfc_vcuBcuMotOrderNumber;
extern uint8_t  pfc_vcuBcuMot1State;
extern uint8_t  pfc_vcuBcuMot1FunctionIndicate;

/* EVCU_MCU3 Message Signals */
extern uint8_t  pfc_vcuBcuMcuFaultCode;

/* EVCU_Status1 Message Signals */
extern uint8_t  pfc_vcuBcuAccePedalState;
extern uint8_t  pfc_vcuBcuRegenTorqueState;
extern uint8_t  pfc_vcuBcuHandBrake;
extern uint8_t  pfc_vcuBcuFootBrake;
extern uint8_t  pfc_vcuBcuAccePedalPosition;
extern uint8_t  pfc_vcuBcuBrakePedalPosition;
extern uint8_t  pfc_vcuBcuDriveMode;
extern uint8_t  pfc_vcuBcuActualGearState;
extern uint8_t  pfc_vcuBcuChargingMode;
extern uint8_t  pfc_vcuBcuEVMode;
extern uint8_t  pfc_vcuBcuReadyState;
extern uint8_t  pfc_vcuBcuMcuFaultGrade;
extern uint8_t  pfc_vcuBcuDsFault;
extern uint8_t  pfc_vcuBcuMcuState;
extern uint8_t  pfc_vcuBcuVehicleInterLockState;

/* EVCU_Status2 Message Signals */
extern uint8_t  pfc_vcuBcuVehicleFaultGrade;
extern uint16_t pfc_vcuBcuVehicleFaultCode;

/* EVCU_Status3 Message Signals */
extern uint8_t  pfc_vcuBcuVcuWakeUpState;
extern uint8_t  pfc_vcuBcuKeyStartRequest;
extern uint8_t  pfc_vcuBcuMotCoolFan;
extern uint8_t  pfc_vcuLifeToBcu;

/* V2B_VIN Message Signals */
extern uint8_t  pfc_SerialNumberOfFrameVIN;
extern uint8_t  pfc_vcuBmsVehicleVINChar1815;
extern uint8_t  pfc_vcuBmsVehicleVINChar2916;
extern uint8_t  pfc_vcuBmsVehicleVINChar31017;
extern uint8_t  pfc_vcuBmsVehicleVINChar411;
extern uint8_t  pfc_vcuBmsVehicleVINChar512;
extern uint8_t  pfc_vcuBmsVehicleVINChar613;
extern uint8_t  pfc_vcuBmsVehicleVINChar714;

/* VCU_Battery_Control Message Signals */
extern uint8_t  pfc_vcuLifeToBms;
extern uint8_t  pfc_vcuBmsMainNegaRelayCmd;
extern uint8_t  pfc_vcuBmsVehicleVelocity;
extern uint8_t  pfc_vcuBmsPduMainPosiRelayState;
extern uint8_t  pfc_vcuBmsPduMainPosiRelayFault;
extern uint8_t  pfc_vcuBmsPduPreChgRelayState;
extern uint8_t  pfc_vcuBmsPduPreChgRelayFault;
extern uint8_t  pfc_vcuBmsPduEdftRelayState;
extern uint8_t  pfc_vcuBmsPduEdftRelayFault;

/* ABS1_VSO Message Signals */
extern uint8_t  pfc_ABSActive;

/* B2V_CurrentLimit Message Signals */
extern uint16_t pfc_bmsAllowDisChgCurr;
extern uint16_t pfc_bmsAllowChgCurr;
extern uint16_t pfc_bmsAllowSustainChgCurr;
extern uint16_t pfc_bmsAllowSustainDisChgCurr;

/* B2V_RQ Message Signals */
extern uint8_t  pfc_bmsRequestVIN;

/* B2V_ST1 Message Signals */
extern uint8_t  pfc_bmsMainNegeRelayState;
extern uint8_t  pfc_bmsCurrentHVState;
extern uint8_t  pfc_bmsChargeGunConnectState;
extern uint8_t  pfc_bmsChargeState;

/* B2V_ST2 Message Signals */
extern uint8_t  pfc_bmsSOC;
extern uint8_t  pfc_bmsSOH;
extern uint16_t pfc_bmsMainLoopCurrent;
extern uint16_t pfc_bmsMainLoopVoltage;
extern uint8_t  pfc_bmsFaultCode;
extern uint8_t  pfc_bmsFaultGrade;
extern uint8_t  pfc_bmsRequestHVPowerOff;
extern uint8_t  pfc_bmsLifeToVcu;

/* DCAC_HV_Oilpump_Status1 Message Signals */
extern uint8_t  pfc_hvopFaultGrade;
extern uint8_t  pfc_hvopLifeToVcu;
extern uint8_t  pfc_hvopFaultCode;

/* DCAC_HV_Oilpump_Status2 Message Signals */
extern uint16_t pfc_hvopMotSpeed;
extern uint16_t pfc_hvopInputVoltage;
extern uint8_t  pfc_hvopCurrent;
extern uint8_t  pfc_hvopInputMcuTemp;
extern uint8_t  pfc_hvopInputMotTemp;
extern uint8_t  pfc_hvopPreChgState;
extern uint8_t  pfc_hvopRunningState;

/* DCDC1_Status1 Message Signals */
extern uint8_t  pfc_dcdcFaultGrade;
extern uint8_t  pfc_dcdcLifeToVcu;
extern uint8_t  pfc_dcdcFaultCode;

/* DCDC1_Status2 Message Signals */
extern uint16_t pfc_dcdcInputVoltage;
extern uint8_t  pfc_dcdcInputCurrent;
extern uint8_t  pfc_dcdcOutputCurrent;
extern uint8_t  pfc_dcdcTemp;
extern uint8_t  pfc_dcdcOutputVoltage;
extern uint8_t  pfc_dcdcPreChgState;
extern uint8_t  pfc_dcdcRunningState;
extern uint8_t  pfc_dcdcFaultState;
extern uint8_t  pfc_dcdcTempFault;

/* DS_AP1 Message Signals */
extern uint8_t  pfc_dsSelfCheckState;
extern uint8_t  pfc_dsGearD;
extern uint8_t  pfc_dsGearN;
extern uint8_t  pfc_dsGearR;
extern uint8_t  pfc_dsLifeToVcu;

/* EPB_Status Message Signals */
extern uint8_t  pfc_epbParkLampState;
extern uint8_t  pfc_epbSystemFault;
extern uint8_t  pfc_epbEmgBrakeLampRequest;
extern uint8_t  pfc_epbWorkMode;
extern uint8_t  pfc_epbSwitchState;
extern uint8_t  pfc_epbSystemState;
extern uint8_t  pfc_epbFaultCode;
extern uint8_t  pfc_epbLifeToVcu;
extern uint8_t  pfc_epbCheckSum;

/* IC_Status1 Message Signals */
extern uint8_t  pfc_bcuDriverDoorState;
extern uint8_t  pfc_bcuRearHatchState;
extern uint8_t  pfc_bcuAccePedalInterLockState;

/* IC_Status5 Message Signals */
extern uint8_t  pfc_bcuMotInputCoolingWaterTemp;

/* LVOP_Status1_To_C_CAN Message Signals */
extern uint8_t  pfc_lvopRunningStateToCCan;
extern uint8_t  pfc_lvopInputVoltageToCCan;
extern uint8_t  pfc_lvopCurrentToCCan;
extern uint8_t  pfc_lvopMotSpeedToCCan;
extern uint8_t  pfc_lvopLifeToVcuToCCan;
extern uint8_t  pfc_lvopMcuTempToCCan;
extern uint8_t  pfc_lvopFaultCodeToCCan;
extern uint8_t  pfc_lvopFaultGradeToCCan;

/* PDU_Status1 Message Signals */
extern uint8_t  pfc_pduDcdcRelayState;
extern uint8_t  pfc_pduDcdcRelayFault;
extern uint8_t  pfc_pduHeaterRelayState;
extern uint8_t  pfc_pduHeaterRelayFault;
extern uint8_t  pfc_pduPTCRelayState;
extern uint8_t  pfc_pduPTCRelayFault;
extern uint8_t  pfc_pduAirConRelayState;
extern uint8_t  pfc_pduAirConRelayFault;
extern uint8_t  pfc_pduEdftRelayState;
extern uint8_t  pfc_pduEdftRelayFault;
extern uint8_t  pfc_pduMainPosiRelayState;
extern uint8_t  pfc_pduMainPosiRelayFault;
extern uint8_t  pfc_pduPreChgRelayState;
extern uint8_t  pfc_pduPreChgRelayFault;

/* LVOP_Control Message Signals */
extern uint8_t  pfc_vcuLvopEnable;
extern uint8_t  pfc_vcuLvopVehicleVelocity;
extern uint8_t  pfc_vcuLifeToLvop;

/* LVOP_Status1 Message Signals */
extern uint8_t  pfc_lvopRunningState;
extern uint8_t  pfc_lvopInputVoltage;
extern uint8_t  pfc_lvopCurrent;
extern uint8_t  pfc_lvopMotSpeed;
extern uint8_t  pfc_lvopLifeToVcu;
extern uint8_t  pfc_lvopMcuTemp;
extern uint8_t  pfc_lvopFaultCode;
extern uint8_t  pfc_lvopFaultGrade;


#endif /*End of __IO_VARS__*/
/*-------------------------------------EOF--------------------------------------*/

