/***********************************************************************************************************************
* Copyright (c) Hands Free Team. All rights reserved.
* FileName: main_config.h
* Contact:  QQ Exchange Group -- 521037187
* Version:  V2.0
*
* LICENSING TERMS:
* The Hands Free is licensed generally under a permissive 3-clause BSD license. 
* Contributions are requiredto be made under the same license.
*
* History:
* <author>      <time>      <version>      <desc>
* mawenke      2015.10.1    V1.0          creat this file
*
* Description:   syetem include  file
***********************************************************************************************************************/
#ifndef __main_includes_H__
#define __main_includes_H__

/*******************************************************processor.h****************************************************/
#include "BSP_TOP.h"

/******************************************************package.h*******************************************************/
#include "base_math_top.h"
#include "imu_top.h"
/**********************************************************************************************************************/


/*****************************************************OS.h*************************************************************/

//GUI/EMWIN
#if SYSTEM_SUPPORT_GUI == 1
#include "GUI.h"
#include "GUIDEMO.h"
#endif

//RTOS
#if SYSTEM_SUPPORT_OS==1
#include "includes.h"
#endif

/**********************************************************************************************************************/



/*****************************************************API.h************************************************************/


/**********************************************************************************************************************/


#endif


