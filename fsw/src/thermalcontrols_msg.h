/*=======================================================================================
** File Name:  thermalcontrols_msg.h
**
** Title:  Message Definition Header File for THERMALCONTROLS Application
**
** $Author:    Colin John
** $Revision: 1.1 $
** $Date:      2021-11-28
**
** Purpose:  To define THERMALCONTROLS's command and telemetry message defintions 
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2021-11-28 | Colin John | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _THERMALCONTROLS_MSG_H_
#define _THERMALCONTROLS_MSG_H_

/*
** Pragmas
*/

/*
** Include Files
*/

 
#include "thermalcontrols_iload_utils.h"

/*
** Local Defines
*/

/*
** THERMALCONTROLS command codes
*/
#define THERMALCONTROLS_NOOP_CC                 0
#define THERMALCONTROLS_RESET_CC                1

/*
** Local Structure Declarations
*/
typedef struct
{
    uint8              TlmHeader[CFE_SB_TLM_HDR_SIZE];
    uint8              usCmdCnt;
    uint8              usCmdErrCnt;
    uint16	       WISE_Tlm_Packets_Rcvd;
    uint8	       TCA_Current_State;
    uint8              TCA_Logging_State;
    

} THERMALCONTROLS_HkTlm_t;

typedef struct
{
    uint8 	      CmdHeader[CFE_SB_CMD_HDR_SIZE];

} RESET;

typedef struct
{
    uint8 	      CmdHeader[CFE_SB_CMD_HDR_SIZE];

} ENABLE_LOGGING;


#endif /* _THERMALCONTROLS_MSG_H_ */

/*=======================================================================================
** End of file thermalcontrols_msg.h
**=====================================================================================*/
    
