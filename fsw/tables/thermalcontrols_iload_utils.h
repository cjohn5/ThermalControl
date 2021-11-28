/*=======================================================================================
** File Name:  thermalcontrols_iload_utils.h
**
** Title:  ILoad Tables' Utility Header File for THERMALCONTROLS Application
**
** $Author:    Colin John
** $Revision: 1.1 $
** $Date:      2021-11-28
**
** Purpose:  To define THERMALCONTROLS's ILoad table-related utility functions
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2021-11-28 | Colin John | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _THERMALCONTROLS_ILOAD_UTILS_H_
#define _THERMALCONTROLS_ILOAD_UTILS_H_

/*
** Pragmas
*/

/*
** Include Files
*/
#include "thermalcontrols_app.h"

/*
** Local Defines
*/

/*
** Local Structure Declarations
*/

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
int32  THERMALCONTROLS_InitILoadTbl(void);
int32  THERMALCONTROLS_ValidateILoadTbl(THERMALCONTROLS_ILoadTblEntry_t*);
void   THERMALCONTROLS_ProcessNewILoadTbl(void);

#endif /* _THERMALCONTROLS_ILOAD_UTILS_H_ */

/*=======================================================================================
** End of file thermalcontrols_iload_utils.h
**=====================================================================================*/
    