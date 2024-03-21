/*2023-10-03T11:13:30-01:00*/

/********************************************************************
 * linear_function.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "linear_function.h"



/**************************** Variables *****************************/

CB_Index linear_function__num = 0;
CB_Mem_Float *linear_function_input;
CB_Mem_Float *linear_function_output;
CB_Mem_Float *linear_function_a;
CB_Mem_Float *linear_function_b;

/**************************** Variables *****************************/

#define input (linear_function_input->CB_current_value)
#define output (linear_function_output->CB_current_value)
#define a (linear_function_a->CB_current_value)
#define b (linear_function_b->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__linear_function_init(void)
{
	(self.Float+0)->CB_current_value = 1.0; /*a*/
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__linear_function(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		linear_function_a = self.Float+0;
		linear_function_b = self.Float+1;

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
			/* This module simulates the evolution of a  ramp 			*/
			/*	in function of a real input.					*/
			/* The equation's form is y = ax + b.					*/
			/* ----------------------------------------------------------------	*/

			output =a*input + b;
		}

		CB_post_float(linear_function_output);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Float += 2;

	return 0;
}
