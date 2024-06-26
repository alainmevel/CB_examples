/*2023-10-03T11:13:02-01:00*/

/********************************************************************
 * flow_compute.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "flow_compute.h"



/**************************** Variables *****************************/

CB_Index flow_compute__num = 0;
CB_Mem_Float *flow_compute_inputFlow;
CB_Mem_Float *flow_compute_outputFlow;
CB_Mem_Float *flow_compute_unit;
CB_Mem_Float *flow_compute_flowMax;
CB_Mem_Bool *flow_compute_flowPerHour;
CB_Mem_Bool *flow_compute_flowPerMinute;

/**************************** Variables *****************************/

#define inputFlow (flow_compute_inputFlow->CB_current_value)
#define outputFlow (flow_compute_outputFlow->CB_current_value)
#define unit (flow_compute_unit->CB_current_value)
#define flowMax (flow_compute_flowMax->CB_current_value)
#define flowPerHour (flow_compute_flowPerHour->CB_current_value)
#define flowPerMinute (flow_compute_flowPerMinute->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__flow_compute_init(void)
{
	(self.Float+1)->CB_current_value = 200.0; /*flowMax*/
	(self.Bool+0)->CB_current_value = 1; /*flowPerHour*/
	self.Bool+=2;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__flow_compute(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		flow_compute_unit = self.Float+0;
		flow_compute_flowMax = self.Float+1;
		flow_compute_flowPerHour = self.Bool+0;
		flow_compute_flowPerMinute = self.Bool+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* -----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Catégorie :   batch							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* -----------------------------------------------------------------	*/
			/* This module computes the flow in litre / min.			*/
			/* It should be set at the inlet of the circuit or at the outlet of	*/
			/* a tank.									*/
			/* ----------------------------------------------------------------	*/

			if (flowPerHour) unit = 3600.0;
			else if (flowPerMinute) unit = 60.0;
				else unit = 1.0;

			outputFlow = (flowMax * CLOCK_PERIOD / 1000000) / unit;

			if (inputFlow < outputFlow)
				outputFlow = inputFlow;

		}

		CB_post_float(flow_compute_outputFlow);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 2;
	self.Float += 2;

	return 0;
}

