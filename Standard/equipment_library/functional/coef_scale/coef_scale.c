/*2023-10-03T11:13:32-01:00*/

/********************************************************************
 * coef_scale.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "coef_scale.h"



/**************************** Variables *****************************/

CB_Index coef_scale__num = 0;
CB_Mem_Float *coef_scale_inputValue;
CB_Mem_Float *coef_scale_outputValue;
CB_Mem_Float *coef_scale_coefficient;
CB_Mem_Bool *coef_scale_d_scale;
CB_Mem_Float *coef_scale_v_d_scale;

/**************************** Variables *****************************/

#define inputValue (coef_scale_inputValue->CB_current_value)
#define outputValue (coef_scale_outputValue->CB_current_value)
#define coefficient (coef_scale_coefficient->CB_current_value)
#define d_scale (coef_scale_d_scale->CB_current_value)
#define v_d_scale (coef_scale_v_d_scale->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__coef_scale_init(void)
{
	(self.Float+0)->CB_current_value = 1.0; /*coefficient*/
	self.Bool+=1;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__coef_scale(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		coef_scale_coefficient = self.Float+0;
		coef_scale_d_scale = self.Bool+0;
		coef_scale_v_d_scale = self.Float+1;

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
			/* This module simulates the scaling of real variables			*/
			/*	by multiplying it by a parameter coefficient.			*/
			/* Form of the scaling equation is y = k x .				*/
			/* ----------------------------------------------------------------	*/

			if (d_scale)
				outputValue = v_d_scale;
			else
				outputValue = inputValue * coefficient;
		}

		CB_post_float(coef_scale_outputValue);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Float += 2;

	return 0;
}

