/*2024-04-12T15:40:51-01:00*/

/********************************************************************
 * ap_master2.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "ap_master2.h"


/**************************** Variables *****************************/

CB_Index ap_master2__num = 0;

/**************************** Variables *****************************/



/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _ap_master2__ap_master2_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

int ap_master2__ap_master2(void)
{
	if (exec_mac_node(self_num)) {

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

