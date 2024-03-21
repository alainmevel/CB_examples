/*2023-10-03T11:13:26-01:00*/

/********************************************************************
 * average_5.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "average_5.h"



/**************************** Variables *****************************/

CB_Index average_5__num = 0;
CB_Mem_Float *average_5_input1;
CB_Mem_Float *average_5_input2;
CB_Mem_Float *average_5_input3;
CB_Mem_Float *average_5_input4;
CB_Mem_Float *average_5_input5;
CB_Mem_Float *average_5_result;
CB_Mem_Int *average_5_nbInputs;
CB_Mem_Bool *average_5_d_average;
CB_Mem_Float *average_5_v_d_average;

/**************************** Variables *****************************/

#define input1 (average_5_input1->CB_current_value)
#define input2 (average_5_input2->CB_current_value)
#define input3 (average_5_input3->CB_current_value)
#define input4 (average_5_input4->CB_current_value)
#define input5 (average_5_input5->CB_current_value)
#define result (average_5_result->CB_current_value)
#define nbInputs (average_5_nbInputs->CB_current_value)
#define d_average (average_5_d_average->CB_current_value)
#define v_d_average (average_5_v_d_average->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__average_5_init(void)
{
	(self.Int+0)->CB_current_value = 2; /*nbInputs*/
	self.Bool+=1;
	self.Int+=1;
	self.Float+=1;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__average_5(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		average_5_nbInputs = self.Int+0;
		average_5_d_average = self.Bool+0;
		average_5_v_d_average = self.Float+0;

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
			/* This real corresponds to the average value of real inputs.		*/
			/* Number of inputs can gone from 2 to 5. 				*/
			/* ----------------------------------------------------------------	*/

			if (d_average) result = v_d_average;
			else {
				switch(nbInputs) {
					case 2 : result = input1 + input2;
						break;
					case 3 : result = input1 + input2 + input3;
						break;
					case 4 : result = input1 + input2 + input3 + input4;
						break;
					case 5 : result = input1 + input2 + input3 + input4 + input5; 
						break;
					default : result = 0.0;
					
						break;
				}

				if (nbInputs > 0) result = result / nbInputs;
			}
		}

		CB_post_float(average_5_result);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Int += 1;
	self.Float += 1;

	return 0;
}

