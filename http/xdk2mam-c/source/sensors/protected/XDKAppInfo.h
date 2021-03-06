

#ifndef XDK_APPINFO_H
#define XDK_APPINFO_H

/* own header files*/
#include "XdkCommonInfo.h"
#include "BCDS_Retcode.h"


#define TASK_PRIO_MAIN_CMD_PROCESSOR                (UINT32_C(1))
#define TASK_STACK_SIZE_MAIN_CMD_PROCESSOR          (UINT16_C(700))
#define TASK_Q_LEN_MAIN_CMD_PROCESSOR               (UINT32_C(10))

#define TASK_PRIORITY_SERVALPAL_CMD_PROC            UINT32_C(3)
#define TASK_STACK_SIZE_SERVALPAL_CMD_PROC          UINT32_C(600)
#define TASK_QUEUE_LEN_SERVALPAL_CMD_PROC           UINT32_C(10)

#define TASK_PRIO_HTTP_REQ							(UINT32_C(2))
#define TASK_STACK_SIZE_HTTP_REQ                    (UINT16_C(700))

/**
 * @brief BCDS_APP_MODULE_ID for Application C module of XDK
 * @info  usage:
 *      #undef BCDS_APP_MODULE_ID
 *      #define BCDS_APP_MODULE_ID BCDS_APP_MODULE_ID_xxx
 */
enum XDK_App_ModuleID_E
{
    XDK_APP_MODULE_ID_MAIN= XDK_COMMON_ID_OVERFLOW,
    XDK_APP_MODULE_ID_HTTP_XDK2MAM_CLIENT,
    XDK_APP_MODULE_ID_ENVIRONMENTAL_SENSOR,
	XDK_APP_MODULE_ID_ACCELEROMETER_SENSOR,
	XDK_APP_MODULE_ID_GYROSCOPE_SENSOR,
	XDK_APP_MODULE_ID_INERTIAL_SENSOR,
	XDK_APP_MODULE_ID_LIGHT_SENSOR,
	XDK_APP_MODULE_ID_MAGNETOMETER_SENSOR
/* Define next module ID here and assign a value to it! */
};

enum XDK_App_Retcode_E
{
    RETCODE_PUSH_REQUEST_FAILED = RETCODE_FIRST_CUSTOM_CODE,
    RETCODE_INIT_REQUEST_FAILED,
    RETCODE_SET_REQURL_FAILED,
    RETCODE_SET_HOST_FAILED,
	RETCODE_INIT_CA_REQUEST_FAILED
};

#endif /* XDK_APPINFO_H_ */
