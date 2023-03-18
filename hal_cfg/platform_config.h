/********************************************************************************
 * Copyright 2023 Wisdom (Fujian) Motor Co.,Ltd.
 * All Rights Reserved.
 * Dept.:Software Department.
 * FILE: platform_config.h
 * Description: This file is automatic generate by HalCanAutoGen.
 * History:
 * 2023-03-19 LinXiaobin
********************************************************************************/

#include "build_control.h"

#ifndef __PLATFORM_CONFIG__
#define __PLATFORM_CONFIG__

/*CAN0 Message List Config:*/
#define CAN0_MSGS_COUNT (12u)

typedef enum __CAN0_MSG_NAME_T__
{
    CAN0_MSG_VCU_BATTPOWERALLOW,
    CAN0_MSG_VCU_MCU_CMD,
    CAN0_MSG_VCU_VEHICLE_STATES,
    CAN0_MSG_UDS_TX,
    CAN0_MSG_MCU_ERRORS1,
    CAN0_MSG_MCU_ERRORS2,
    CAN0_MSG_MCU_ERRORS3,
    CAN0_MSG_MCU_STATES1,
    CAN0_MSG_MCU_STATES2,
    CAN0_MSG_MCU_STATES3,
    CAN0_MSG_UDS_RX,
    CAN0_MSG_UDS_RX_FUNC,
}can0msg_name_t;

#define CAN0_MSGS_CONFIG \
/* CAN0_MSG_VCU_BATTPOWERALLOW */       {  0xc00fefe, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 200/10 ),   ( 10/10 ),           VCU_BattPowerAllow_buf,                              NULL,                              NULL,                              NULL,                              NULL,      &hld_can0_0xc00fefe_msgReady,   &hld_can0_0xc00fefe_msgTxFailed,           Can0Msg_Pack_0xc00fefe},\
/* CAN0_MSG_VCU_MCU_CMD */              {  0xcff6127, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,   ( 10/10 ),   ( 10/10 ),                  VCU_MCU_Cmd_buf,                              NULL,                              NULL,                              NULL,                              NULL,      &hld_can0_0xcff6127_msgReady,   &hld_can0_0xcff6127_msgTxFailed,           Can0Msg_Pack_0xcff6127},\
/* CAN0_MSG_VCU_VEHICLE_STATES */       {  0xcff6227, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,   ( 10/10 ),   ( 10/10 ),           VCU_Vehicle_States_buf,                              NULL,                              NULL,                              NULL,                              NULL,      &hld_can0_0xcff6227_msgReady,   &hld_can0_0xcff6227_msgTxFailed,           Can0Msg_Pack_0xcff6227},\
/* CAN0_MSG_UDS_TX */                   { 0x18000701,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                           uds_tx,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can0_0x18000701_msgReady,  &hld_can0_0x18000701_msgTxFailed,                             NULL},\
/* CAN0_MSG_MCU_ERRORS1 */              {  0xcfff3f0, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                  MCU_Errors1_buf,      &hld_can0_0xcfff3f0_received,    &hld_can0_0xcfff3f0_msgOverRun,       &hld_can0_0xcfff3f0_timeout,      &hld_can0_0xcfff3f0_msgValid,                              NULL,                              NULL,         Can0Msg_Unpack_0xcfff3f0},\
/* CAN0_MSG_MCU_ERRORS2 */              {  0xcfff4f0, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                  MCU_Errors2_buf,      &hld_can0_0xcfff4f0_received,    &hld_can0_0xcfff4f0_msgOverRun,       &hld_can0_0xcfff4f0_timeout,      &hld_can0_0xcfff4f0_msgValid,                              NULL,                              NULL,         Can0Msg_Unpack_0xcfff4f0},\
/* CAN0_MSG_MCU_ERRORS3 */              {  0xcfff5f0, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                  MCU_Errors3_buf,      &hld_can0_0xcfff5f0_received,    &hld_can0_0xcfff5f0_msgOverRun,       &hld_can0_0xcfff5f0_timeout,      &hld_can0_0xcfff5f0_msgValid,                              NULL,                              NULL,         Can0Msg_Unpack_0xcfff5f0},\
/* CAN0_MSG_MCU_STATES1 */              {  0xcff71f0, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 200/10 ),   (  0/10 ),                  MCU_States1_buf,      &hld_can0_0xcff71f0_received,    &hld_can0_0xcff71f0_msgOverRun,       &hld_can0_0xcff71f0_timeout,      &hld_can0_0xcff71f0_msgValid,                              NULL,                              NULL,         Can0Msg_Unpack_0xcff71f0},\
/* CAN0_MSG_MCU_STATES2 */              {  0xcff72f0, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,   ( 10/10 ),   (  0/10 ),                  MCU_States2_buf,      &hld_can0_0xcff72f0_received,    &hld_can0_0xcff72f0_msgOverRun,       &hld_can0_0xcff72f0_timeout,      &hld_can0_0xcff72f0_msgValid,                              NULL,                              NULL,         Can0Msg_Unpack_0xcff72f0},\
/* CAN0_MSG_MCU_STATES3 */              {  0xcff73f0, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                  MCU_States3_buf,      &hld_can0_0xcff73f0_received,    &hld_can0_0xcff73f0_msgOverRun,       &hld_can0_0xcff73f0_timeout,      &hld_can0_0xcff73f0_msgValid,                              NULL,                              NULL,         Can0Msg_Unpack_0xcff73f0},\
/* CAN0_MSG_UDS_RX */                   { 0x18000801,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                           uds_rx,     &hld_can0_0x18000801_received,   &hld_can0_0x18000801_msgOverRun,      &hld_can0_0x18000801_timeout,     &hld_can0_0x18000801_msgValid,                              NULL,                              NULL,                             NULL},\
/* CAN0_MSG_UDS_RX_FUNC */              { 0x18000901,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                      uds_rx_func,     &hld_can0_0x18000901_received,   &hld_can0_0x18000901_msgOverRun,      &hld_can0_0x18000901_timeout,     &hld_can0_0x18000901_msgValid,                              NULL,                              NULL,                             NULL},\

#define CAN0_MSGS_ADD_CONFIG \
/* CAN0_MSG_VCU_BATTPOWERALLOW */       {FALSE, 0, 0, NULL},\
/* CAN0_MSG_VCU_MCU_CMD */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_VCU_VEHICLE_STATES */       {FALSE, 0, 0, NULL},\
/* CAN0_MSG_UDS_TX */                   {FALSE, 0, 0, NULL},\
/* CAN0_MSG_MCU_ERRORS1 */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_MCU_ERRORS2 */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_MCU_ERRORS3 */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_MCU_STATES1 */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_MCU_STATES2 */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_MCU_STATES3 */              {FALSE, 0, 0, NULL},\
/* CAN0_MSG_UDS_RX */                   {FALSE, 0, 0, NULL},\
/* CAN0_MSG_UDS_RX_FUNC */              {FALSE, 0, 0, NULL},\

/*CAN1 Message List Config:*/
#define CAN1_MSGS_COUNT (28u)

typedef enum __CAN1_MSG_NAME_T__
{
    CAN1_MSG_CCVS,
    CAN1_MSG_EVCU3_EACCMD,
    CAN1_MSG_EVCU_MCU1,
    CAN1_MSG_EVCU_MCU2,
    CAN1_MSG_EVCU_MCU3,
    CAN1_MSG_EVCU_STATUS1,
    CAN1_MSG_EVCU_STATUS2,
    CAN1_MSG_EVCU_STATUS3,
    CAN1_MSG_V2B_VIN,
    CAN1_MSG_VCU_BATTERY_CONTROL,
    CAN1_MSG_UDS_TX,
    CAN1_MSG_ABS1_VSO,
    CAN1_MSG_B2V_CURRENTLIMIT,
    CAN1_MSG_B2V_RQ,
    CAN1_MSG_B2V_ST1,
    CAN1_MSG_B2V_ST2,
    CAN1_MSG_DCAC_HV_OILPUMP_STATUS1,
    CAN1_MSG_DCAC_HV_OILPUMP_STATUS2,
    CAN1_MSG_DCDC1_STATUS1,
    CAN1_MSG_DCDC1_STATUS2,
    CAN1_MSG_DS_AP1,
    CAN1_MSG_EPB_STATUS,
    CAN1_MSG_IC_STATUS1,
    CAN1_MSG_IC_STATUS5,
    CAN1_MSG_LVOP_STATUS1,
    CAN1_MSG_PDU_STATUS1,
    CAN1_MSG_UDS_RX,
    CAN1_MSG_UDS_RX_FUNC,
}can1msg_name_t;

#define CAN1_MSGS_CONFIG \
/* CAN1_MSG_CCVS */                     { 0x18fef100, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 100/10 ),   ( 10/10 ),                         CCVS_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18fef100_msgReady,  &hld_can1_0x18fef100_msgTxFailed,          Can1Msg_Pack_0x18fef100},\
/* CAN1_MSG_EVCU3_EACCMD */             {  0xcff3e27, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,   ( 50/10 ),   ( 10/10 ),                 EVCU3_EACCmd_buf,                              NULL,                              NULL,                              NULL,                              NULL,      &hld_can1_0xcff3e27_msgReady,   &hld_can1_0xcff3e27_msgTxFailed,           Can1Msg_Pack_0xcff3e27},\
/* CAN1_MSG_EVCU_MCU1 */                { 0x18ff3c27, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 200/10 ),   ( 10/10 ),                    EVCU_MCU1_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18ff3c27_msgReady,  &hld_can1_0x18ff3c27_msgTxFailed,          Can1Msg_Pack_0x18ff3c27},\
/* CAN1_MSG_EVCU_MCU2 */                { 0x18ff3d27, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 200/10 ),   ( 10/10 ),                    EVCU_MCU2_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18ff3d27_msgReady,  &hld_can1_0x18ff3d27_msgTxFailed,          Can1Msg_Pack_0x18ff3d27},\
/* CAN1_MSG_EVCU_MCU3 */                { 0x18ff3e27, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 500/10 ),   ( 10/10 ),                    EVCU_MCU3_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18ff3e27_msgReady,  &hld_can1_0x18ff3e27_msgTxFailed,          Can1Msg_Pack_0x18ff3e27},\
/* CAN1_MSG_EVCU_STATUS1 */             {  0xcff3f27, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,   ( 50/10 ),   ( 10/10 ),                 EVCU_Status1_buf,                              NULL,                              NULL,                              NULL,                              NULL,      &hld_can1_0xcff3f27_msgReady,   &hld_can1_0xcff3f27_msgTxFailed,           Can1Msg_Pack_0xcff3f27},\
/* CAN1_MSG_EVCU_STATUS2 */             { 0x18ff4027, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 500/10 ),   ( 10/10 ),                 EVCU_Status2_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18ff4027_msgReady,  &hld_can1_0x18ff4027_msgTxFailed,          Can1Msg_Pack_0x18ff4027},\
/* CAN1_MSG_EVCU_STATUS3 */             {  0xcff4127, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,   ( 50/10 ),   ( 10/10 ),                 EVCU_Status3_buf,                              NULL,                              NULL,                              NULL,                              NULL,      &hld_can1_0xcff4127_msgReady,   &hld_can1_0xcff4127_msgTxFailed,           Can1Msg_Pack_0xcff4127},\
/* CAN1_MSG_V2B_VIN */                  { 0x18e1f3ef, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE, ( 1000/10 ),   ( 10/10 ),                      V2B_VIN_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18e1f3ef_msgReady,  &hld_can1_0x18e1f3ef_msgTxFailed,          Can1Msg_Pack_0x18e1f3ef},\
/* CAN1_MSG_VCU_BATTERY_CONTROL */      { 0x1802f3ef, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 100/10 ),   ( 10/10 ),          VCU_Battery_Control_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x1802f3ef_msgReady,  &hld_can1_0x1802f3ef_msgTxFailed,          Can1Msg_Pack_0x1802f3ef},\
/* CAN1_MSG_UDS_TX */                   { 0x18102201,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                           uds_tx,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can1_0x18102201_msgReady,  &hld_can1_0x18102201_msgTxFailed,                             NULL},\
/* CAN1_MSG_ABS1_VSO */                 { 0x180b100b, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,   ( 20/10 ),   (  0/10 ),                     ABS1_VSO_buf,     &hld_can1_0x180b100b_received,   &hld_can1_0x180b100b_msgOverRun,      &hld_can1_0x180b100b_timeout,     &hld_can1_0x180b100b_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x180b100b},\
/* CAN1_MSG_B2V_CURRENTLIMIT */         { 0x18c4fef3, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 200/10 ),   (  0/10 ),             B2V_CurrentLimit_buf,     &hld_can1_0x18c4fef3_received,   &hld_can1_0x18c4fef3_msgOverRun,      &hld_can1_0x18c4fef3_timeout,     &hld_can1_0x18c4fef3_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18c4fef3},\
/* CAN1_MSG_B2V_RQ */                   { 0x1801eff3, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),                       B2V_RQ_buf,     &hld_can1_0x1801eff3_received,   &hld_can1_0x1801eff3_msgOverRun,      &hld_can1_0x1801eff3_timeout,     &hld_can1_0x1801eff3_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x1801eff3},\
/* CAN1_MSG_B2V_ST1 */                  { 0x1883eff3, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                      B2V_ST1_buf,     &hld_can1_0x1883eff3_received,   &hld_can1_0x1883eff3_msgOverRun,      &hld_can1_0x1883eff3_timeout,     &hld_can1_0x1883eff3_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x1883eff3},\
/* CAN1_MSG_B2V_ST2 */                  { 0x1884eff3, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 200/10 ),   (  0/10 ),                      B2V_ST2_buf,     &hld_can1_0x1884eff3_received,   &hld_can1_0x1884eff3_msgOverRun,      &hld_can1_0x1884eff3_timeout,     &hld_can1_0x1884eff3_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x1884eff3},\
/* CAN1_MSG_DCAC_HV_OILPUMP_STATUS1 */  { 0x18f00828, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),      DCAC_HV_Oilpump_Status1_buf,     &hld_can1_0x18f00828_received,   &hld_can1_0x18f00828_msgOverRun,      &hld_can1_0x18f00828_timeout,     &hld_can1_0x18f00828_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18f00828},\
/* CAN1_MSG_DCAC_HV_OILPUMP_STATUS2 */  { 0x18f00d28, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),      DCAC_HV_Oilpump_Status2_buf,     &hld_can1_0x18f00d28_received,   &hld_can1_0x18f00d28_msgOverRun,      &hld_can1_0x18f00d28_timeout,     &hld_can1_0x18f00d28_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18f00d28},\
/* CAN1_MSG_DCDC1_STATUS1 */            { 0x18f00a28, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),                DCDC1_Status1_buf,     &hld_can1_0x18f00a28_received,   &hld_can1_0x18f00a28_msgOverRun,      &hld_can1_0x18f00a28_timeout,     &hld_can1_0x18f00a28_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18f00a28},\
/* CAN1_MSG_DCDC1_STATUS2 */            { 0x18f00b28, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),                DCDC1_Status2_buf,     &hld_can1_0x18f00b28_received,   &hld_can1_0x18f00b28_msgOverRun,      &hld_can1_0x18f00b28_timeout,     &hld_can1_0x18f00b28_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18f00b28},\
/* CAN1_MSG_DS_AP1 */                   { 0x18fc0011, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),                       DS_AP1_buf,     &hld_can1_0x18fc0011_received,   &hld_can1_0x18fc0011_msgOverRun,      &hld_can1_0x18fc0011_timeout,     &hld_can1_0x18fc0011_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18fc0011},\
/* CAN1_MSG_EPB_STATUS */               { 0x18fe1264, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                   EPB_Status_buf,     &hld_can1_0x18fe1264_received,   &hld_can1_0x18fe1264_msgOverRun,      &hld_can1_0x18fe1264_timeout,     &hld_can1_0x18fe1264_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18fe1264},\
/* CAN1_MSG_IC_STATUS1 */               { 0x18ffe342, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                   IC_Status1_buf,     &hld_can1_0x18ffe342_received,   &hld_can1_0x18ffe342_msgOverRun,      &hld_can1_0x18ffe342_timeout,     &hld_can1_0x18ffe342_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18ffe342},\
/* CAN1_MSG_IC_STATUS5 */               { 0x18ffe742, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 500/10 ),   (  0/10 ),                   IC_Status5_buf,     &hld_can1_0x18ffe742_received,   &hld_can1_0x18ffe742_msgOverRun,      &hld_can1_0x18ffe742_timeout,     &hld_can1_0x18ffe742_msgValid,                              NULL,                              NULL,        Can1Msg_Unpack_0x18ffe742},\
/* CAN1_MSG_LVOP_STATUS1 */             {  0xcf603a1, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 200/10 ),   (  0/10 ),                 LVOP_Status1_buf,      &hld_can1_0xcf603a1_received,    &hld_can1_0xcf603a1_msgOverRun,       &hld_can1_0xcf603a1_timeout,      &hld_can1_0xcf603a1_msgValid,                              NULL,                              NULL,         Can1Msg_Unpack_0xcf603a1},\
/* CAN1_MSG_PDU_STATUS1 */              {  0xc00fefe, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 100/10 ),   (  0/10 ),                  PDU_Status1_buf,      &hld_can1_0xc00fefe_received,    &hld_can1_0xc00fefe_msgOverRun,       &hld_can1_0xc00fefe_timeout,      &hld_can1_0xc00fefe_msgValid,                              NULL,                              NULL,         Can1Msg_Unpack_0xc00fefe},\
/* CAN1_MSG_UDS_RX */                   { 0x18102301,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                           uds_rx,     &hld_can1_0x18102301_received,   &hld_can1_0x18102301_msgOverRun,      &hld_can1_0x18102301_timeout,     &hld_can1_0x18102301_msgValid,                              NULL,                              NULL,                             NULL},\
/* CAN1_MSG_UDS_RX_FUNC */              { 0x18102401,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                      uds_rx_func,     &hld_can1_0x18102401_received,   &hld_can1_0x18102401_msgOverRun,      &hld_can1_0x18102401_timeout,     &hld_can1_0x18102401_msgValid,                              NULL,                              NULL,                             NULL},\

#define CAN1_MSGS_ADD_CONFIG \
/* CAN1_MSG_CCVS */                     {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU3_EACCMD */             {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU_MCU1 */                {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU_MCU2 */                {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU_MCU3 */                {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU_STATUS1 */             {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU_STATUS2 */             {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EVCU_STATUS3 */             {FALSE, 0, 0, NULL},\
/* CAN1_MSG_V2B_VIN */                  {FALSE, 0, 0, NULL},\
/* CAN1_MSG_VCU_BATTERY_CONTROL */      {FALSE, 0, 0, NULL},\
/* CAN1_MSG_UDS_TX */                   {FALSE, 0, 0, NULL},\
/* CAN1_MSG_ABS1_VSO */                 {FALSE, 0, 0, NULL},\
/* CAN1_MSG_B2V_CURRENTLIMIT */         {FALSE, 0, 0, NULL},\
/* CAN1_MSG_B2V_RQ */                   {FALSE, 0, 0, NULL},\
/* CAN1_MSG_B2V_ST1 */                  {FALSE, 0, 0, NULL},\
/* CAN1_MSG_B2V_ST2 */                  {FALSE, 0, 0, NULL},\
/* CAN1_MSG_DCAC_HV_OILPUMP_STATUS1 */  {FALSE, 0, 0, NULL},\
/* CAN1_MSG_DCAC_HV_OILPUMP_STATUS2 */  {FALSE, 0, 0, NULL},\
/* CAN1_MSG_DCDC1_STATUS1 */            {FALSE, 0, 0, NULL},\
/* CAN1_MSG_DCDC1_STATUS2 */            {FALSE, 0, 0, NULL},\
/* CAN1_MSG_DS_AP1 */                   {FALSE, 0, 0, NULL},\
/* CAN1_MSG_EPB_STATUS */               {FALSE, 0, 0, NULL},\
/* CAN1_MSG_IC_STATUS1 */               {FALSE, 0, 0, NULL},\
/* CAN1_MSG_IC_STATUS5 */               {FALSE, 0, 0, NULL},\
/* CAN1_MSG_LVOP_STATUS1 */             {FALSE, 0, 0, NULL},\
/* CAN1_MSG_PDU_STATUS1 */              {FALSE, 0, 0, NULL},\
/* CAN1_MSG_UDS_RX */                   {FALSE, 0, 0, NULL},\
/* CAN1_MSG_UDS_RX_FUNC */              {FALSE, 0, 0, NULL},\

/*CAN2 Message List Config:*/
#define CAN2_MSGS_COUNT (17u)

typedef enum __CAN2_MSG_NAME_T__
{
    CAN2_MSG_LVOP_CONTROL,
    CAN2_MSG_CCP_DAQ_0,
    CAN2_MSG_CCP_DAQ_1,
    CAN2_MSG_CCP_DAQ_2,
    CAN2_MSG_CCP_DAQ_3,
    CAN2_MSG_CCP_DAQ_4,
    CAN2_MSG_CCP_DAQ_5,
    CAN2_MSG_CCP_DAQ_6,
    CAN2_MSG_CCP_DAQ_7,
    CAN2_MSG_CCP_DAQ_8,
    CAN2_MSG_CCP_RX,
    CAN2_MSG_UDS_TX,
    CAN2_MSG_VIN_RESP,
    CAN2_MSG_LVOP_STATUS1,
    CAN2_MSG_CCP_TX,
    CAN2_MSG_UDS_RX,
    CAN2_MSG_UDS_RX_FUNC,
}can2msg_name_t;

#define CAN2_MSGS_CONFIG \
/* CAN2_MSG_LVOP_CONTROL */             { 0x18f10527, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,  ( 100/10 ),   ( 10/10 ),                 LVOP_Control_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can2_0x18f10527_msgReady,  &hld_can2_0x18f10527_msgTxFailed,          Can2Msg_Pack_0x18f10527},\
/* CAN2_MSG_CCP_DAQ_0 */                {      0x219,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_0,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x219_msgReady,       &hld_can2_0x219_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_1 */                {      0x220,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_1,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x220_msgReady,       &hld_can2_0x220_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_2 */                {      0x221,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_2,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x221_msgReady,       &hld_can2_0x221_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_3 */                {      0x222,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_3,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x222_msgReady,       &hld_can2_0x222_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_4 */                {      0x223,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_4,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x223_msgReady,       &hld_can2_0x223_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_5 */                {      0x224,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_5,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x224_msgReady,       &hld_can2_0x224_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_6 */                {      0x225,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_6,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x225_msgReady,       &hld_can2_0x225_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_7 */                {      0x226,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_7,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x226_msgReady,       &hld_can2_0x226_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_DAQ_8 */                {      0x227,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                        ccp_daq_8,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x227_msgReady,       &hld_can2_0x227_msgTxFailed,                             NULL},\
/* CAN2_MSG_CCP_RX */                   {      0x729,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                           ccp_rx,                              NULL,                              NULL,                              NULL,                              NULL,          &hld_can2_0x729_msgReady,       &hld_can2_0x729_msgTxFailed,                             NULL},\
/* CAN2_MSG_UDS_TX */                   { 0x18daf110,   MSG_TYPE_DIAG,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                           uds_tx,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can2_0x18daf110_msgReady,  &hld_can2_0x18daf110_msgTxFailed,                             NULL},\
/* CAN2_MSG_VIN_RESP */                 { 0x18daf103, MSG_TYPE_NORMAL,  TRUE,  TRUE, 8, 8, FALSE, FALSE,    ( 0/10 ),   ( 10/10 ),                     vin_resp_buf,                              NULL,                              NULL,                              NULL,                              NULL,     &hld_can2_0x18daf103_msgReady,  &hld_can2_0x18daf103_msgTxFailed,          Can2Msg_Pack_0x18daf103},\
/* CAN2_MSG_LVOP_STATUS1 */             {  0xcf603a1, MSG_TYPE_NORMAL,  TRUE, FALSE, 8, 8, FALSE, FALSE,  ( 200/10 ),   (  0/10 ),                 LVOP_Status1_buf,      &hld_can2_0xcf603a1_received,    &hld_can2_0xcf603a1_msgOverRun,       &hld_can2_0xcf603a1_timeout,      &hld_can2_0xcf603a1_msgValid,                              NULL,                              NULL,         Can2Msg_Unpack_0xcf603a1},\
/* CAN2_MSG_CCP_TX */                   {      0x739,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                           ccp_tx,          &hld_can2_0x739_received,        &hld_can2_0x739_msgOverRun,           &hld_can2_0x739_timeout,          &hld_can2_0x739_msgValid,                              NULL,                              NULL,                             NULL},\
/* CAN2_MSG_UDS_RX */                   { 0x18da10f1,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                           uds_rx,     &hld_can2_0x18da10f1_received,   &hld_can2_0x18da10f1_msgOverRun,      &hld_can2_0x18da10f1_timeout,     &hld_can2_0x18da10f1_msgValid,                              NULL,                              NULL,                             NULL},\
/* CAN2_MSG_UDS_RX_FUNC */              { 0x18db33f1,   MSG_TYPE_DIAG,  TRUE, FALSE, 8, 8, FALSE, FALSE,    ( 0/10 ),   (  0/10 ),                      uds_rx_func,     &hld_can2_0x18db33f1_received,   &hld_can2_0x18db33f1_msgOverRun,      &hld_can2_0x18db33f1_timeout,     &hld_can2_0x18db33f1_msgValid,                              NULL,                              NULL,                             NULL},\

#define CAN2_MSGS_ADD_CONFIG \
/* CAN2_MSG_LVOP_CONTROL */             {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_0 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_1 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_2 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_3 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_4 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_5 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_6 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_7 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_DAQ_8 */                {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_RX */                   {FALSE, 0, 0, NULL},\
/* CAN2_MSG_UDS_TX */                   {FALSE, 0, 0, NULL},\
/* CAN2_MSG_VIN_RESP */                 {FALSE, 0, 0, NULL},\
/* CAN2_MSG_LVOP_STATUS1 */             {FALSE, 0, 0, NULL},\
/* CAN2_MSG_CCP_TX */                   {FALSE, 0, 0, NULL},\
/* CAN2_MSG_UDS_RX */                   {FALSE, 0, 0, NULL},\
/* CAN2_MSG_UDS_RX_FUNC */              {FALSE, 0, 0, NULL},\

#endif

/*-------------------------------------EOF--------------------------------------*/

