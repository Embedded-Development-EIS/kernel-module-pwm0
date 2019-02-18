/*
 * deviceid.hpp
 * 
 */

#ifndef DEVICEID_HPP_
#define DEVICEID_HPP_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef KERNEL_MODULE
#include "m_device.hpp"
#endif

typedef enum
{
	CONTROLLER_DEVICE_ID_BEGIN = 0,
	IRSENSOR,
	FLUSHVALVE_EN,
	FLUSHVALVE_BRK,
	FLUSHVALVE_PWM,
	FLUSHVALVE_DIR,
	FLUSHVALVE_RST,
	FLUSHVALVE_DCY,
	FLUSHVALVE_SLP,
	FLUSHVALVE_IC4,
	FLUSHVALVE_ENB,
	FLUSHVALVE_28V,
	FV,
	FVCL,
	FVOP,
	FVTH,
	DRAINVALVE_OP,
	DRAINVALVE_CL,
	DRVSWCL,
	DRVSWOP,
	SHUTOFFVALVE_OP,
	SHUTOFFVALVE_CL,
	SOVSWCL,
	SOVSWOP,
	DRAINLOCAL,
	DRAINLOCAL_INV,
	DRAINCMD,
	DRAINCMD_INV,
	EMERGENCY,
	APPSELECTION,
	DRAINDELAY,
	VACUUMGEN,
	VACUUMGEN_INV,
	DRAININDICATOR,
	DRAININD_INV,
	LEAKINDICATOR_0,
	LEAKINDICATOR_1,
	LED_0,
	LED_1,
    VACUUMGEN_IN,
    VACUUMGEN_INV_IN,
    FAIL_GND_IN,
    FAIL_IND_OUT,
    FAIL_IND_GND_OUT,
    FVENFAILIN,
    DRAININD_IVS_IN,
    LVLHILED,
    LVLLOLED,
    PINPGM,
    MTEN,
    MREN,
    STEN,
    SREN,
	CONTROLLER_DEVICE_ID_END
} ControllerDeviceIDs;

typedef enum
{
	ADC_DEVICE_ID_BEGIN = 0,
	LEVELSENSOR_0,
	LEVELSENSOR_1,
	ADC_CHANNEL_2,
	ADC_CHANNEL_3,
	LEAKSENSOR_0,
	LEAKSENSOR_1,
	WASTETLEVEL,
	ADC_CHANNEL_7,
	ADC_CHANNEL_8,
	ADC_CHANNEL_9,
	ADC_CHANNEL_10,
	ADC_DEVICE_ID_END
} ADCDeviceIDs;

typedef enum
{
	PWM_DEVICE_ID_BEGIN = 0,
	PWM_0,
	PWM_1,
	PWM_2,
	PWM_DEVICE_ID_END
} PWMDeviceIDs;

typedef enum
{
	ZYBO_DEVICE_ID_BEGIN = 0,
	ZYBO_BUTTONS,
	ZYBO_SWITCHES,
	ZYBO_LEDS,
	ZYBO_DEVICE_ID_END
} ZYBODeviceIDs;

typedef enum
{
	SERIAL_DEVICE_ID_BEGIN = 0,
	SERIAL_0,
	SERIAL_1,
	SERIAL_DEVICE_ID_END
} SerialDeviceIDs;


DeviceIdentity id_PINPGM		    = {PINPGM, 		    "PINPGM"   		  	};
DeviceIdentity id_MTEN       		= {MTEN,       		"MTEN"	      		};
DeviceIdentity id_MREN       		= {MREN,       		"MREN"      		};
DeviceIdentity id_STEN       		= {STEN,       		"STEN"      		};
DeviceIdentity id_SREN       		= {SREN,       		"SREN"      		};
DeviceIdentity id_LEVELSENSOR_0  	= {LEVELSENSOR_0,   "LEVELSENSOR_0" 	};
DeviceIdentity id_LEVELSENSOR_1  	= {LEVELSENSOR_1,   "LEVELSENSOR_1" 	};
DeviceIdentity id_WASTETLEVEL    	= {WASTETLEVEL,     "WASTETLEVEL"  		};
DeviceIdentity id_LEAKSENSOR_0   	= {LEAKSENSOR_0,    "LEAKSENSOR_0"		};
DeviceIdentity id_LEAKSENSOR_1   	= {LEAKSENSOR_1,    "LEAKSENSOR_1" 		};
DeviceIdentity id_IRSENSOR       	= {IRSENSOR,        "IRSENSOR"      	};
DeviceIdentity id_FLUSHVALVE_EN   	= {FLUSHVALVE_EN,   "FLUSHVALVE_EN"  	};
DeviceIdentity id_FLUSHVALVE_BRK  	= {FLUSHVALVE_BRK,  "FLUSHVALVE_BRK" 	};
DeviceIdentity id_FLUSHVALVE_PWM    = {FLUSHVALVE_PWM,  "FLUSHVALVE_PWM"    };
DeviceIdentity id_FLUSHVALVE_DIR    = {FLUSHVALVE_DIR,  "FLUSHVALVE_DIR"    };
DeviceIdentity id_FLUSHVALVE_ENB   	= {FLUSHVALVE_ENB,  "FLUSHVALVE_ENB"  	};
DeviceIdentity id_FLUSHVALVE_SLP  	= {FLUSHVALVE_SLP,  "FLUSHVALVE_SLP" 	};
DeviceIdentity id_FLUSHVALVE_RST    = {FLUSHVALVE_RST,  "FLUSHVALVE_RST"    };
DeviceIdentity id_FLUSHVALVE_28V    = {FLUSHVALVE_28V,  "FLUSHVALVE_28V"    };
DeviceIdentity id_FLUSHVALVE_IC4   	= {FLUSHVALVE_IC4,  "FLUSHVALVE_IC4"  	};
DeviceIdentity id_FLUSHVALVE_DCY  	= {FLUSHVALVE_DCY,  "FLUSHVALVE_DCY" 	};
DeviceIdentity id_FV			    = {FV,  			"FV"    			};
DeviceIdentity id_DRAINVALVE_OP  	= {DRAINVALVE_OP,   "DRAINVALVE_OP" 	};
DeviceIdentity id_DRAINVALVE_CL  	= {DRAINVALVE_CL,   "DRAINVALVE_CL" 	};
DeviceIdentity id_SHUTOFFVALVE_OP 	= {SHUTOFFVALVE_OP, "SHUTOFFVALVE_OP" 	};
DeviceIdentity id_SHUTOFFVALVE_CL 	= {SHUTOFFVALVE_CL, "SHUTOFFVALVE_CL" 	};
DeviceIdentity id_DRAINLOCAL     	= {DRAINLOCAL,      "DRAINLOCAL"    	};
DeviceIdentity id_DRAINLOCAL_INV   	= {DRAINLOCAL_INV,  "DRAINLOCAL_INV"   	};
DeviceIdentity id_DRAINCMD  		= {DRAINCMD,   		"DRAINCMD" 			};
DeviceIdentity id_DRAINCMD_INV 		= {DRAINCMD_INV,  	"DRAINCMD_INV"		};
DeviceIdentity id_EMERGENCY      	= {EMERGENCY,       "EMERGENCY"     	};
DeviceIdentity id_APPSELECTION   	= {APPSELECTION,    "APPSELECTION"  	};
DeviceIdentity id_DRAINDELAY     	= {DRAINDELAY,      "DRAINDELAY"    	};
DeviceIdentity id_VACUUMGEN      	= {VACUUMGEN,       "VACUUMGEN"     	};
DeviceIdentity id_VACUUMGEN_INV     = {VACUUMGEN_INV,   "VACUUMGEN_INV"     };
DeviceIdentity id_DRAININDICATOR 	= {DRAININDICATOR,  "DRAININDICATOR"	};
DeviceIdentity id_DRAININD_INV		= {DRAININD_INV,    "DRAININD_INV"    	};
DeviceIdentity id_LEAKINDICATOR_0  	= {LEAKINDICATOR_0, "LEAKINDICATOR_0"	};
DeviceIdentity id_LEAKINDICATOR_1  	= {LEAKINDICATOR_1, "LEAKINDICATOR_1" 	};
DeviceIdentity id_PWM_0          	= {PWM_0,           "PWM_0"         	};
DeviceIdentity id_PWM_1          	= {PWM_1,           "PWM_1"         	};
DeviceIdentity id_PWM_2          	= {PWM_2,           "PWM_2"         	};
DeviceIdentity id_ADC_CHANNEL_2  	= {ADC_CHANNEL_2,   "ADC_CHANNEL_2" 	};
DeviceIdentity id_ADC_CHANNEL_3  	= {ADC_CHANNEL_3,   "ADC_CHANNEL_3" 	};
DeviceIdentity id_ADC_CHANNEL_7  	= {ADC_CHANNEL_7,   "ADC_CHANNEL_7" 	};
DeviceIdentity id_ADC_CHANNEL_8  	= {ADC_CHANNEL_8,   "ADC_CHANNEL_8" 	};
DeviceIdentity id_ADC_CHANNEL_9  	= {ADC_CHANNEL_9,   "ADC_CHANNEL_9" 	};
DeviceIdentity id_ADC_CHANNEL_10 	= {ADC_CHANNEL_10,  "ADC_CHANNEL_10"	};
DeviceIdentity id_ZYBO_BUTTONS   	= {ZYBO_BUTTONS,    "ZYBO_BUTTONS"  	};
DeviceIdentity id_ZYBO_SWITCHES  	= {ZYBO_SWITCHES,   "ZYBO_SWITCHES" 	};
DeviceIdentity id_ZYBO_LEDS      	= {ZYBO_LEDS,       "ZYBO_LEDS"     	};
DeviceIdentity id_LED_0  			= {LED_0,   		"LED_0" 			};
DeviceIdentity id_LED_1  			= {LED_1,   		"LED_1" 			};
DeviceIdentity id_SOVSWCL       	= {SOVSWCL,         "SOVSWCL"     	 	};
DeviceIdentity id_SOVSWOP       	= {SOVSWOP,         "SOVSWOP"     	 	};
DeviceIdentity id_DRVSWCL       	= {DRVSWCL,         "DRVSWCL"     	 	};
DeviceIdentity id_DRVSWOP       	= {DRVSWOP,         "DRVSWOP"     	 	};
DeviceIdentity id_FVCL       		= {FVCL,    	    "FVCL"      	 	};
DeviceIdentity id_FVOP       		= {FVOP,    	    "FVOP"      	 	};
DeviceIdentity id_FVTH       		= {FVTH,    	    "FVTH"      	 	};
DeviceIdentity id_VACUUMGEN_IN		= {VACUUMGEN_IN,    "VACUUMGEN_IN"    	};
DeviceIdentity id_VACUUMGEN_INV_IN 	= {VACUUMGEN_INV_IN, "VACUUMGEN_INV_IN" };
DeviceIdentity id_FAIL_GND_IN		= {FAIL_GND_IN,     "FAIL_GND_IN"    	};
DeviceIdentity id_FAIL_IND_OUT		= {FAIL_IND_OUT,    "FAIL_IND_OUT"    	};
DeviceIdentity id_FAIL_IND_GND_OUT 	= {FAIL_IND_GND_OUT, "FAIL_IND_GND_OUT" };
DeviceIdentity id_FVENFAILIN		= {FVENFAILIN,      "FVENFAILIN"    	};
DeviceIdentity id_DRAININD_IVS_IN	= {DRAININD_IVS_IN, "DRAININD_IVS_IN"   };
DeviceIdentity id_LVLHILED       	= {LVLHILED,        "LVLHILED"      	};
DeviceIdentity id_LVLLOLED       	= {LVLLOLED,        "LVLLOLED"      	};
DeviceIdentity id_SERIAL_0       	= {SERIAL_0,        "SERIAL_0"      	};
DeviceIdentity id_SERIAL_1       	= {SERIAL_1,        "SERIAL_1"      	};
#ifdef __cplusplus
}
#endif

#endif /* DEVICEID_HPP_ */
