/*2023-10-03T11:13:32-01:00*/

/********************************************************************
 * bounded_scale_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "bounded_scale.h"



/**************************** Variables *****************************/

CB_Index bounded_scale__num = 0;
CB_Mem_Float *bounded_scale_inputValue;
CB_Mem_Float *bounded_scale_realValue;
CB_Mem_Int *bounded_scale_dintValue;
CB_Mem_Int *bounded_scale_intValue;
CB_Mem_Float *bounded_scale_a;
CB_Mem_Float *bounded_scale_b;
CB_Mem_Float *bounded_scale_k;
CB_Mem_Float *bounded_scale_minInput;
CB_Mem_Float *bounded_scale_maxInput;
CB_Mem_Float *bounded_scale_minOutput;
CB_Mem_Float *bounded_scale_maxOutput;
CB_Mem_Bool *bounded_scale_d_scale;
CB_Mem_Float *bounded_scale_v_d_scale;

/**************************** Variables *****************************/

#define inputValue (bounded_scale_inputValue->CB_current_value)
#define realValue (bounded_scale_realValue->CB_current_value)
#define dintValue (bounded_scale_dintValue->CB_current_value)
#define intValue (*((short *)&(bounded_scale_intValue->CB_current_value) + ALIGN_OFFSET_SHORT))
#define a (bounded_scale_a->CB_current_value)
#define b (bounded_scale_b->CB_current_value)
#define k (bounded_scale_k->CB_current_value)
#define minInput (bounded_scale_minInput->CB_current_value)
#define maxInput (bounded_scale_maxInput->CB_current_value)
#define minOutput (bounded_scale_minOutput->CB_current_value)
#define maxOutput (bounded_scale_maxOutput->CB_current_value)
#define d_scale (bounded_scale_d_scale->CB_current_value)
#define v_d_scale (bounded_scale_v_d_scale->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__bounded_scale_init(void)
{
	(self.Float+4)->CB_current_value = 100.0; /*maxInput*/
	(self.Float+6)->CB_current_value = 100.0; /*maxOutput*/
	self.Bool+=1;
	self.Float+=8;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__bounded_scale(void)
{
	static char *__comp_name = "equipment_library.bounded_scale";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		bounded_scale_a = self.Float+0;
		bounded_scale_b = self.Float+1;
		bounded_scale_k = self.Float+2;
		bounded_scale_minInput = self.Float+3;
		bounded_scale_maxInput = self.Float+4;
		bounded_scale_minOutput = self.Float+5;
		bounded_scale_maxOutput = self.Float+6;
		bounded_scale_d_scale = self.Bool+0;
		bounded_scale_v_d_scale = self.Float+7;

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
			/*	from bounded inputs and outputs.					*/
			/* Form of the scaling equation is y = k (ax + b).			*/
			/* ----------------------------------------------------------------	*/

			if (d_scale) realValue = v_d_scale;
			else {
				k = maxInput-minInput;
				if ( k != 0 ) {
					/* Calcul des coefficients de mise � l'�chelle */
					a = ( maxOutput - minOutput );
					b = (( minOutput * maxInput ) - ( minInput * maxOutput ));

					/* Mise � l'�chelle	*/
					realValue = 1/k * (( a * inputValue ) + b );
					if ( inputValue >= maxInput ) realValue = maxOutput;              
					if ( inputValue <= minInput ) realValue = minOutput;
					}
				else realValue = k;
				}

			dintValue = realValue;

			if ((dintValue >= -32768) && (dintValue <= 32767)) intValue = dintValue ;
			else intValue  = 0;
		}

		CB_post_float(bounded_scale_realValue);
		CB_post_int(bounded_scale_dintValue);
		CB_post_int(bounded_scale_intValue);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Float += 8;

	return 0;
}

