/*=======================================================================================
** File Name:  thermalcontrols_tbldefs.h
**
** Title:  Header File for THERMALCONTROLS Application's tables
**
** $Author:    Colin John
** $Revision: 1.1 $
** $Date:      2021-11-28
**
** Purpose:  This header file contains declarations and definitions of data structures
**           used in THERMALCONTROLS's tables.
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2021-11-28 | Colin John | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _THERMALCONTROLS_TBLDEFS_H_
#define _THERMALCONTROLS_TBLDEFS_H_

/*
** Pragmas
*/

/*
** Include Files
*/
#include "common_types.h"
#include "thermalcontrols_mission_cfg.h"

/*
** Local Defines
*/
#define THERMALCONTROLS_ILOAD_MAX_ENTRIES  1
#define THERMALCONTROLS_ILOAD_FILENAME     "/cf/apps/thermalcontrols_iloads.tbl"
#define THERMALCONTROLS_ILOAD_TABLENAME    "ILOAD_TBL"


/*
** Local Structure Declarations
*/ 
/* Definition for Iload table entry */
typedef struct
{
    int32  iParam;

    /* TODO:  Add type declaration for ILoad parameters here.
    **
    ** Examples:
    **    int8/char            cParam;
    **    int8/char            cParams[16];
    **    uint8/unsigned char  ucParam;
    **    uint8/unsigned char  ucParams[16];
    **
    **    int16   sParam;
    **    int16   sParams[8];
    **    uint16  usParam;
    **    uint16  usParams[8];
    **
    **    int32   iParam;
    **    int32   iParams[5];
    **    uint32  uiParam;
    **    uint32  uiParams[5];
    **
    **    float  fParam;
    **    float  fParams[3];
    **
    **    double  dParam;
    **    double  dParams[3];
    */
} THERMALCONTROLS_ILoadTblEntry_t;
    
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

#endif /* _THERMALCONTROLS_TBLDEFS_H_ */

/*=======================================================================================
** End of file thermalcontrols_tbldefs.h
**=====================================================================================*/
    