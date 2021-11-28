/*=======================================================================================
** File Name:  thermalcontrols_app.h
**
** Title:  Header File for THERMALCONTROLS Application
**
** $Author:    Colin John
** $Revision: 1.1 $
** $Date:      2021-11-28
**
** Purpose:  To define THERMALCONTROLS's internal macros, data types, global variables and
**           function prototypes
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2021-11-28 | Colin John | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _THERMALCONTROLS_APP_H_
#define _THERMALCONTROLS_APP_H_

/*
** Pragmas
*/

/*
** Include Files
*/
#include <errno.h>
#include <string.h>
#include <unistd.h>

#include "thermalcontrols_platform_cfg.h"
#include "thermalcontrols_mission_cfg.h"
#include "thermalcontrols_private_ids.h"
#include "thermalcontrols_private_types.h"
#include "thermalcontrols_perfids.h"
#include "thermalcontrols_msgids.h"
#include "thermalcontrols_msg.h"

 
#include "thermalcontrols_iload_utils.h"

/*
** Local Defines
*/
#define THERMALCONTROLS_TIMEOUT_MSEC    1000

/*
** Local Structure Declarations
*/
typedef struct
{
    /* CFE Event table */
    CFE_EVS_BinFilter_t  EventTbl[THERMALCONTROLS_EVT_CNT];

    /* CFE scheduling pipe */
    CFE_SB_PipeId_t  SchPipeId; 
    uint16           usSchPipeDepth;
    char             cSchPipeName[OS_MAX_API_NAME];

    /* CFE command pipe */
    CFE_SB_PipeId_t  CmdPipeId;
    uint16           usCmdPipeDepth;
    char             cCmdPipeName[OS_MAX_API_NAME];
    
    /* CFE telemetry pipe */
    CFE_SB_PipeId_t  TlmPipeId;
    uint16           usTlmPipeDepth;
    char             cTlmPipeName[OS_MAX_API_NAME];

    /* Task-related */
    uint32  uiRunStatus;
    
    /* ILoad table-related */
    CFE_TBL_Handle_t  ILoadTblHdl;
    THERMALCONTROLS_ILoadTblEntry_t*  ILoadTblPtr;
    
    /* Input data - from I/O devices or subscribed from other apps' output data.
       Data structure should be defined in thermalcontrols/fsw/src/thermalcontrols_private_types.h */
    THERMALCONTROLS_InData_t   InData;

    /* Output data - to be published at the end of a Wakeup cycle.
       Data structure should be defined in thermalcontrols/fsw/src/thermalcontrols_private_types.h */
    THERMALCONTROLS_OutData_t  OutData;

    /* Housekeeping telemetry - for downlink only.
       Data structure should be defined in thermalcontrols/fsw/src/thermalcontrols_msg.h */
    THERMALCONTROLS_HkTlm_t  HkTlm;

    /* TODO:  Add declarations for additional private data here */
} THERMALCONTROLS_AppData_t;

/*
** External Global Variables
*/

/*
** Global Variables
*/

/*
** Local Variables
*/

/*
** Local Function Prototypes
*/
int32  THERMALCONTROLS_InitApp(void);
int32  THERMALCONTROLS_InitEvent(void);
int32  THERMALCONTROLS_InitData(void);
int32  THERMALCONTROLS_InitPipe(void);

void  THERMALCONTROLS_AppMain(void);

void  THERMALCONTROLS_CleanupCallback(void);

int32  THERMALCONTROLS_RcvMsg(int32 iBlocking);

void  THERMALCONTROLS_ProcessNewData(void);
void  THERMALCONTROLS_ProcessNewCmds(void);
void  THERMALCONTROLS_ProcessNewAppCmds(CFE_SB_Msg_t*);

void  THERMALCONTROLS_ReportHousekeeping(void);
void  THERMALCONTROLS_SendOutData(void);

boolean  THERMALCONTROLS_VerifyCmdLength(CFE_SB_Msg_t*, uint16);

#endif /* _THERMALCONTROLS_APP_H_ */

/*=======================================================================================
** End of file thermalcontrols_app.h
**=====================================================================================*/
    