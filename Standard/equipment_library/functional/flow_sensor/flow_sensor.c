/*2023-10-03T11:12:57-01:00*/

/********************************************************************
 * flow_sensor.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "flow_sensor.h"



/**************************** Variables *****************************/

CB_Index flow_sensor__num = 0;
CB_Mem_Float *flow_sensor_inputFlow;
CB_Mem_Float *flow_sensor_outputFlow;
CB_Mem_Float *flow_sensor_unit;
CB_Mem_Bool *flow_sensor_flowPerHour;
CB_Mem_Bool *flow_sensor_flowPerMinute;
CB_Mem_Bool *flow_sensor_d_flow;
CB_Mem_Float *flow_sensor_v_d_flow;

/**************************** Variables *****************************/

#define inputFlow (flow_sensor_inputFlow->CB_current_value)
#define outputFlow (flow_sensor_outputFlow->CB_current_value)
#define unit (flow_sensor_unit->CB_current_value)
#define flowPerHour (flow_sensor_flowPerHour->CB_current_value)
#define flowPerMinute (flow_sensor_flowPerMinute->CB_current_value)
#define d_flow (flow_sensor_d_flow->CB_current_value)
#define v_d_flow (flow_sensor_v_d_flow->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__flow_sensor_init(void)
{
	(self.Bool+0)->CB_current_value = 1; /*flowPerHour*/
	self.Bool+=3;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__flow_sensor(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		flow_sensor_unit = self.Float+0;
		flow_sensor_flowPerHour = self.Bool+0;
		flow_sensor_flowPerMinute = self.Bool+1;
		flow_sensor_d_flow = self.Bool+2;
		flow_sensor_v_d_flow = self.Float+1;

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
			/* This module simulates the behaviour of a flow sensor.		*/
			/* The flow is measured in litre / min.					*/
			/* This module should be used with the module flow_compute.		*/
			/* ----------------------------------------------------------------	*/

			if (flowPerHour) unit = 3600.0;
			else if (flowPerMinute) unit = 60.0;
				else unit = 1.0;

			if (!d_flow)
				outputFlow = (inputFlow / CLOCK_PERIOD * 1000000) * unit;
			else
				outputFlow = v_d_flow;


		}

		CB_post_float(flow_sensor_outputFlow);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 3;
	self.Float += 2;

	return 0;
}

