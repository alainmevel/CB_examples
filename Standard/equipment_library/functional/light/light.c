/*2023-10-03T11:13:24-01:00*/

/********************************************************************
 * light.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "light.h"


/**************************** Variables *****************************/

CB_Index light__num = 0;
CB_Mem_Bool *light_luminous;

/**************************** Variables *****************************/

#define luminous (light_luminous->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__light_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__light(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

