/*
 * Project Name: fx3_uvc_16bit.cyfx
 * Time : 03/22/2019 22:48:08
 * Device Type: FX3
 * Project Type: GPIF2
 *
 *
 *
 *
 * This is a generated file and should not be modified
 * This file need to be included only once in the firmware
 * This file is generated by Gpif2 designer tool version - 1.0.1198.2
 * 
 */

#ifndef _INCLUDED__
#define _INCLUDED__
#include "cyu3types.h"
#include "cyu3gpif.h"

/* Summary
   Number of states in the state machine
 */
#define CY_NUMBER_OF_STATES 20

/* Summary
   Mapping of user defined state names to state indices
 */
#define START_SCK0 0
#define IDLE_SCK0 1
#define START_SCK1 3
#define IDLE_SCK1 4
#define WAIT_FOR_FRAME_START_0 2
#define WAIT_FOR_FRAME_START_1 5
#define PUSH_DATA_SCK0 6
#define PUSH_DATA_SCK1 7
#define LINE_END_SCK0 8
#define LINE_END_SCK1 9
#define WAIT_TO_FILL_SCK0 10
#define WAIT_TO_FILL_SCK1 12
#define WAIT_FULL_SCK0 11
#define WAIT_FULL_SCK1 13
#define PARTIAL_BUF_IN_SCK0 14
#define PARTIAL_BUF_IN_SCK1 15
#define FULL_BUF_IN_SCK0 16
#define FULL_BUF_IN_SCK1 17
#define FRAME_END_SCK0 18
#define FRAME_END_SCK1 19


/* Summary
   Initial value of early outputs from the state machine.
 */
#define ALPHA_START_SCK0 0x0
#define ALPHA_START_SCK1 0x0


/* Summary
   Transition function values used in the state machine.
 */
uint16_t CyFxGpifTransition[]  = {
    0x0000, 0x5555, 0x8888, 0xAAAA, 0x3333
};

/* Summary
   Table containing the transition information for various states. 
   This table has to be stored in the WAVEFORM Registers.
   This array consists of non-replicated waveform descriptors and acts as a 
   waveform table. 
 */
CyU3PGpifWaveData CyFxGpifWavedata[]  = {
    {{0x1E738C01,0x00000000,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x2E716C02,0x00000100,0x800000A0},{0x00000000,0x00000000,0x00000000}},
    {{0x2E728B06,0x20000102,0x80000060},{0x00000000,0x00000000,0x00000000}},
    {{0x1E738C04,0x00000000,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x2E716C05,0x00000100,0x800000A0},{0x00000000,0x00000000,0x00000000}},
    {{0x2E726B07,0x24000102,0x80000090},{0x00000000,0x00000000,0x00000000}},
    {{0x2E726B07,0x24000102,0x80000090},{0x1E739408,0x00000006,0x80000000}},
    {{0x2E728B06,0x20000102,0x80000060},{0x1E739309,0x00000006,0x80000000}},
    {{0x3E718B0A,0x00000108,0x80000000},{0x3E718B0B,0x00000108,0x80000000}},
    {{0x3E718B0C,0x00000108,0x80000000},{0x3E718B0D,0x00000108,0x80000000}},
    {{0x2E728B06,0x20000102,0x80000060},{0x3E739E0E,0x00000000,0x80000100}},
    {{0x2E726B07,0x24000102,0x80000090},{0x3E739E10,0x00000000,0x80000100}},
    {{0x2E726B07,0x24000102,0x80000090},{0x3E739E0F,0x00000000,0x80000100}},
    {{0x2E728B06,0x20000102,0x80000060},{0x3E739E11,0x00000000,0x80000100}},
    {{0x1E739E12,0x00000000,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x1E739E13,0x00000000,0x80000000},{0x00000000,0x00000000,0x00000000}}
};

/* Summary
   Table that maps state indices to the descriptor table indices.
 */
uint8_t CyFxGpifWavedataPosition[]  = {
    0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,14,15,3,0
};

/* Summary
   GPIF II configuration register values.
 */
uint32_t CyFxGpifRegValue[]  = {
    0x80008300,  /*  CY_U3P_PIB_GPIF_CONFIG */
    0x00000067,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG2 */
    0x00000046,  /*  CY_U3P_PIB_GPIF_AD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATUS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INTR */
    0x00000002,  /*  CY_U3P_PIB_GPIF_INTR_MASK */
    0x00000082,  /*  CY_U3P_PIB_GPIF_SERIAL_IN_CONFIG */
    0x00000782,  /*  CY_U3P_PIB_GPIF_SERIAL_OUT_CONFIG */
    0x00000400,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DIRECTION */
    0x0000E7FF,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DEFAULT */
    0x00000020,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_POLARITY */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_TOGGLE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000006,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_LIMIT */
    0x00000109,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_RESET */
    0x00001FF7,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_CONFIG */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_LIMIT */
    0x00000109,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_RESET */
    0x00001FF7,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_CTRL */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x80010400,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010401,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010402,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010403,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_LAMBDA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ALPHA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_BETA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_CTRL_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH_TIMEOUT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_DATA */
    0xFFFFFFC1  /*  CY_U3P_PIB_GPIF_BETA_DEASSERT */
};

/* Summary
   This structure holds all the configuration inputs for the GPIF II. 
 */
const CyU3PGpifConfig_t CyFxGpifConfig  = {
    (uint16_t)(sizeof(CyFxGpifWavedataPosition)/sizeof(uint8_t)),
    CyFxGpifWavedata,
    CyFxGpifWavedataPosition,
    (uint16_t)(sizeof(CyFxGpifTransition)/sizeof(uint16_t)),
    CyFxGpifTransition,
    (uint16_t)(sizeof(CyFxGpifRegValue)/sizeof(uint32_t)),
    CyFxGpifRegValue
};

#endif   /* _INCLUDED__ */
