/*2023-10-03T11:13:27-01:00*/

/********************************************************************
 * average.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "average.h"



/**************************** Variables *****************************/

CB_Index average__num = 0;
CB_Mem_Float *average_input1;
CB_Mem_Float *average_input2;
CB_Mem_Float *average_result;
CB_Mem_Bool *average_d_average;
CB_Mem_Float *average_v_d_average;

/**************************** Variables *****************************/

#define input1 (average_input1->CB_current_value)
#define input2 (average_input2->CB_current_value)
#define result (average_result->CB_current_value)
#define d_average (average_d_average->CB_current_value)
#define v_d_average (average_v_d_average->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__average_init(void)
{
	self.Bool+=1;
	self.Float+=1;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__average(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		average_d_average = self.Bool+0;
		average_v_d_average = self.Float+0;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Toolbox							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018						*/
			/* ----------------------------------------------------------------	*/
			/* This module returns a real. 						*/
			/* This real corresponds to the average value of two real inputs.	*/
			/* ----------------------------------------------------------------	*/

			if (d_average) result = v_d_average;	 /* presetting of the value */
			else result = ( input1 + input2 ) / 2.0;	/* result */
		}

		CB_post_float(average_result);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Float += 1;

	return 0;
}

