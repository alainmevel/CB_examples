/*2023-10-03T11:13:04-01:00*/

/********************************************************************
 * single_acting_valve_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "single_acting_valve.h"



/**************************** Variables *****************************/

CB_Index single_acting_valve__num = 0;
CB_Mem_Bool *single_acting_valve_voltage380;
CB_Mem_Bool *single_acting_valve_cmdSupply;
CB_Mem_Bool *single_acting_valve_sensorSupply;
CB_Mem_Bool *single_acting_valve_openCmd;
CB_Mem_Float *single_acting_valve_inputFlow;
CB_Mem_Bool *single_acting_valve_openedSensor;
CB_Mem_Bool *single_acting_valve_closedSensor;
CB_Mem_Float *single_acting_valve_outputFlow;
CB_Mem_Float *single_acting_valve_percentOpening;
CB_Mem_Float *single_acting_valve_increment;
CB_Mem_Bool *single_acting_valve_openState;
CB_Mem_Bool *single_acting_valve_closeState;
CB_Mem_Float *single_acting_valve_openingVal;
CB_Mem_Float *single_acting_valve_unit;
CB_Mem_Float *single_acting_valve_openingTime;
CB_Mem_Bool *single_acting_valve_openedSensorLogic;
CB_Mem_Bool *single_acting_valve_closedSensorLogic;
CB_Mem_Float *single_acting_valve_flowMax;
CB_Mem_Bool *single_acting_valve_flowPerHour;
CB_Mem_Bool *single_acting_valve_flowPerMinute;
CB_Mem_Bool *single_acting_valve_d_locking;
CB_Mem_Float *single_acting_valve_v_d_locking;
CB_Mem_Bool *single_acting_valve_d_flow;
CB_Mem_Float *single_acting_valve_v_d_flow;
CB_Mem_Bool *single_acting_valve_d_electrical;
CB_Mem_Bool *single_acting_valve_v_d_electrical;
CB_Mem_Bool *single_acting_valve_d_openedSensor;
CB_Mem_Bool *single_acting_valve_v_d_openedSensor;
CB_Mem_Bool *single_acting_valve_d_closedSensor;
CB_Mem_Bool *single_acting_valve_v_d_closedSensor;

/**************************** Variables *****************************/

#define voltage380 (single_acting_valve_voltage380->CB_current_value)
#define cmdSupply (single_acting_valve_cmdSupply->CB_current_value)
#define sensorSupply (single_acting_valve_sensorSupply->CB_current_value)
#define openCmd (single_acting_valve_openCmd->CB_current_value)
#define inputFlow (single_acting_valve_inputFlow->CB_current_value)
#define openedSensor (single_acting_valve_openedSensor->CB_current_value)
#define closedSensor (single_acting_valve_closedSensor->CB_current_value)
#define outputFlow (single_acting_valve_outputFlow->CB_current_value)
#define percentOpening (single_acting_valve_percentOpening->CB_current_value)
#define increment (single_acting_valve_increment->CB_current_value)
#define openState (single_acting_valve_openState->CB_current_value)
#define closeState (single_acting_valve_closeState->CB_current_value)
#define openingVal (single_acting_valve_openingVal->CB_current_value)
#define unit (single_acting_valve_unit->CB_current_value)
#define openingTime (single_acting_valve_openingTime->CB_current_value)
#define openedSensorLogic (single_acting_valve_openedSensorLogic->CB_current_value)
#define closedSensorLogic (single_acting_valve_closedSensorLogic->CB_current_value)
#define flowMax (single_acting_valve_flowMax->CB_current_value)
#define flowPerHour (single_acting_valve_flowPerHour->CB_current_value)
#define flowPerMinute (single_acting_valve_flowPerMinute->CB_current_value)
#define d_locking (single_acting_valve_d_locking->CB_current_value)
#define v_d_locking (single_acting_valve_v_d_locking->CB_current_value)
#define d_flow (single_acting_valve_d_flow->CB_current_value)
#define v_d_flow (single_acting_valve_v_d_flow->CB_current_value)
#define d_electrical (single_acting_valve_d_electrical->CB_current_value)
#define v_d_electrical (single_acting_valve_v_d_electrical->CB_current_value)
#define d_openedSensor (single_acting_valve_d_openedSensor->CB_current_value)
#define v_d_openedSensor (single_acting_valve_v_d_openedSensor->CB_current_value)
#define d_closedSensor (single_acting_valve_d_closedSensor->CB_current_value)
#define v_d_closedSensor (single_acting_valve_v_d_closedSensor->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__single_acting_valve_init(void)
{
	(single_acting_valve_voltage380)->CB_current_value = 1; /*voltage380*/
	(single_acting_valve_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(single_acting_valve_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Float+3)->CB_current_value = 2.0; /*openingTime*/
	(self.Bool+2)->CB_current_value = 1; /*openedSensorLogic*/
	(self.Bool+3)->CB_current_value = 1; /*closedSensorLogic*/
	(self.Float+4)->CB_current_value = 10000.0; /*flowMax*/
	(self.Bool+4)->CB_current_value = 1; /*flowPerHour*/
	self.Bool+=14;
	self.Float+=7;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__single_acting_valve(void)
{
	static char *__comp_name = "equipment_library.single_acting_valve";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		single_acting_valve_increment = self.Float+0;
		single_acting_valve_openState = self.Bool+0;
		single_acting_valve_closeState = self.Bool+1;
		single_acting_valve_openingVal = self.Float+1;
		single_acting_valve_unit = self.Float+2;
		single_acting_valve_openingTime = self.Float+3;
		single_acting_valve_openedSensorLogic = self.Bool+2;
		single_acting_valve_closedSensorLogic = self.Bool+3;
		single_acting_valve_flowMax = self.Float+4;
		single_acting_valve_flowPerHour = self.Bool+4;
		single_acting_valve_flowPerMinute = self.Bool+5;
		single_acting_valve_d_locking = self.Bool+6;
		single_acting_valve_v_d_locking = self.Float+5;
		single_acting_valve_d_flow = self.Bool+7;
		single_acting_valve_v_d_flow = self.Float+6;
		single_acting_valve_d_electrical = self.Bool+8;
		single_acting_valve_v_d_electrical = self.Bool+9;
		single_acting_valve_d_openedSensor = self.Bool+10;
		single_acting_valve_v_d_openedSensor = self.Bool+11;
		single_acting_valve_d_closedSensor = self.Bool+12;
		single_acting_valve_v_d_closedSensor = self.Bool+13;

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
			/* This module simulates the behaviour of a single acting valve and	*/
			/* its electrical control logic.						*/
			/* ----------------------------------------------------------------	*/


			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command 				*/
			/*     the contactor doesn't understand the control order		*/
			/* ----------------------------------------------------------------	*/
			if (d_electrical) 
				openState=v_d_electrical;
			else
				openState = openCmd & cmdSupply & voltage380;
				
			closeState = !openState;


			/* ----------------------------------------------------------------	*/
			/* Management of opening							*/
			/* ----------------------------------------------------------------	*/

			/* Compute the increment of opening according to the simulation clock	*/
			increment = CLOCK_PERIOD/1000000;

			/* Compute the opening	*/
			if (! d_locking) {
				if (openState) {
					openingVal += increment;
					if (openingVal > openingTime)
						openingVal = openingTime;
				}
				if (closeState) {
					openingVal -= increment;
					if (openingVal < 0.0)
						openingVal = 0.0;
				}
			}

			/* ----------------------------------------------------------------	*/
			/* Computation of percentage of opening					*/
			/* ----------------------------------------------------------------	*/
			if (openingTime != 0.0)
				percentOpening = ((openingVal / openingTime) * 100);

			/* ----------------------------------------------------------------	*/
			/* Management of flow rate							*/
			/* ----------------------------------------------------------------	*/
			if (d_flow)
				outputFlow = v_d_flow;
			else {
				if (flowPerHour) unit = 3600.0;
				else if (flowPerMinute) unit = 60.0;
					else unit = 1.0;
				
				outputFlow = ((flowMax * CLOCK_PERIOD / 1000000)  / unit) * (percentOpening  /100.0);
				if (outputFlow > inputFlow) outputFlow = inputFlow;
					
			}


			/* ----------------------------------------------------------------	*/
			/* Management of the state of sensors					*/
			/* ----------------------------------------------------------------	*/
			if (d_openedSensor) openedSensor = v_d_openedSensor;
			else
				openedSensor = ((openingVal >= openingTime) ^ ! openedSensorLogic) && sensorSupply;

			if (d_closedSensor) closedSensor = v_d_closedSensor;
			else
				closedSensor = ((openingVal == 0.0) ^ ! closedSensorLogic) && sensorSupply;




		}

		CB_post_bool(single_acting_valve_openedSensor);
		CB_post_bool(single_acting_valve_closedSensor);
		CB_post_float(single_acting_valve_outputFlow);
		CB_post_float(single_acting_valve_percentOpening);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 14;
	self.Float += 7;

	return 0;
}

