/*2023-10-03T11:13:05-01:00*/

/********************************************************************
 * on_off_valve.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "on_off_valve.h"



/**************************** Variables *****************************/

CB_Index on_off_valve__num = 0;
CB_Mem_Bool *on_off_valve_voltage380;
CB_Mem_Bool *on_off_valve_cmdSupply;
CB_Mem_Bool *on_off_valve_sensorSupply;
CB_Mem_Bool *on_off_valve_openCmd;
CB_Mem_Bool *on_off_valve_closeCmd;
CB_Mem_Float *on_off_valve_inputFlow;
CB_Mem_Bool *on_off_valve_openedSensor;
CB_Mem_Bool *on_off_valve_closedSensor;
CB_Mem_Float *on_off_valve_outputFlow;
CB_Mem_Float *on_off_valve_percentOpening;
CB_Mem_Float *on_off_valve_increment;
CB_Mem_Bool *on_off_valve_memoOpen;
CB_Mem_Bool *on_off_valve_memoClose;
CB_Mem_Bool *on_off_valve_openState;
CB_Mem_Bool *on_off_valve_closeState;
CB_Mem_Float *on_off_valve_openingVal;
CB_Mem_Float *on_off_valve_unit;
CB_Mem_Float *on_off_valve_openingTime;
CB_Mem_Bool *on_off_valve_openedSensorLogic;
CB_Mem_Bool *on_off_valve_closedSensorLogic;
CB_Mem_Float *on_off_valve_flowMax;
CB_Mem_Bool *on_off_valve_flowPerHour;
CB_Mem_Bool *on_off_valve_flowPerMinute;
CB_Mem_Bool *on_off_valve_d_locking;
CB_Mem_Float *on_off_valve_v_d_locking;
CB_Mem_Bool *on_off_valve_d_flow;
CB_Mem_Float *on_off_valve_v_d_flow;
CB_Mem_Bool *on_off_valve_d_electrical;
CB_Mem_Bool *on_off_valve_v_d_electrical;
CB_Mem_Bool *on_off_valve_d_closedSensor;
CB_Mem_Bool *on_off_valve_v_d_closedSensor;
CB_Mem_Bool *on_off_valve_d_openedSensor;
CB_Mem_Bool *on_off_valve_v_d_openedSensor;

/**************************** Variables *****************************/

#define voltage380 (on_off_valve_voltage380->CB_current_value)
#define cmdSupply (on_off_valve_cmdSupply->CB_current_value)
#define sensorSupply (on_off_valve_sensorSupply->CB_current_value)
#define openCmd (on_off_valve_openCmd->CB_current_value)
#define closeCmd (on_off_valve_closeCmd->CB_current_value)
#define inputFlow (on_off_valve_inputFlow->CB_current_value)
#define openedSensor (on_off_valve_openedSensor->CB_current_value)
#define closedSensor (on_off_valve_closedSensor->CB_current_value)
#define outputFlow (on_off_valve_outputFlow->CB_current_value)
#define percentOpening (on_off_valve_percentOpening->CB_current_value)
#define increment (on_off_valve_increment->CB_current_value)
#define memoOpen (on_off_valve_memoOpen->CB_current_value)
#define memoClose (on_off_valve_memoClose->CB_current_value)
#define openState (on_off_valve_openState->CB_current_value)
#define closeState (on_off_valve_closeState->CB_current_value)
#define openingVal (on_off_valve_openingVal->CB_current_value)
#define unit (on_off_valve_unit->CB_current_value)
#define openingTime (on_off_valve_openingTime->CB_current_value)
#define openedSensorLogic (on_off_valve_openedSensorLogic->CB_current_value)
#define closedSensorLogic (on_off_valve_closedSensorLogic->CB_current_value)
#define flowMax (on_off_valve_flowMax->CB_current_value)
#define flowPerHour (on_off_valve_flowPerHour->CB_current_value)
#define flowPerMinute (on_off_valve_flowPerMinute->CB_current_value)
#define d_locking (on_off_valve_d_locking->CB_current_value)
#define v_d_locking (on_off_valve_v_d_locking->CB_current_value)
#define d_flow (on_off_valve_d_flow->CB_current_value)
#define v_d_flow (on_off_valve_v_d_flow->CB_current_value)
#define d_electrical (on_off_valve_d_electrical->CB_current_value)
#define v_d_electrical (on_off_valve_v_d_electrical->CB_current_value)
#define d_closedSensor (on_off_valve_d_closedSensor->CB_current_value)
#define v_d_closedSensor (on_off_valve_v_d_closedSensor->CB_current_value)
#define d_openedSensor (on_off_valve_d_openedSensor->CB_current_value)
#define v_d_openedSensor (on_off_valve_v_d_openedSensor->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__on_off_valve_init(void)
{
	(on_off_valve_voltage380)->CB_current_value = 1; /*voltage380*/
	(on_off_valve_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(on_off_valve_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Float+3)->CB_current_value = 2.0; /*openingTime*/
	(self.Bool+4)->CB_current_value = 1; /*openedSensorLogic*/
	(self.Bool+5)->CB_current_value = 1; /*closedSensorLogic*/
	(self.Float+4)->CB_current_value = 10000.0; /*flowMax*/
	(self.Bool+6)->CB_current_value = 1; /*flowPerHour*/
	(self.Float+5)->CB_current_value = 2.0; /*v_d_locking*/
	(self.Float+6)->CB_current_value = 2.0; /*v_d_flow*/
	self.Bool+=16;
	self.Float+=7;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__on_off_valve(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		on_off_valve_increment = self.Float+0;
		on_off_valve_memoOpen = self.Bool+0;
		on_off_valve_memoClose = self.Bool+1;
		on_off_valve_openState = self.Bool+2;
		on_off_valve_closeState = self.Bool+3;
		on_off_valve_openingVal = self.Float+1;
		on_off_valve_unit = self.Float+2;
		on_off_valve_openingTime = self.Float+3;
		on_off_valve_openedSensorLogic = self.Bool+4;
		on_off_valve_closedSensorLogic = self.Bool+5;
		on_off_valve_flowMax = self.Float+4;
		on_off_valve_flowPerHour = self.Bool+6;
		on_off_valve_flowPerMinute = self.Bool+7;
		on_off_valve_d_locking = self.Bool+8;
		on_off_valve_v_d_locking = self.Float+5;
		on_off_valve_d_flow = self.Bool+9;
		on_off_valve_v_d_flow = self.Float+6;
		on_off_valve_d_electrical = self.Bool+10;
		on_off_valve_v_d_electrical = self.Bool+11;
		on_off_valve_d_closedSensor = self.Bool+12;
		on_off_valve_v_d_closedSensor = self.Bool+13;
		on_off_valve_d_openedSensor = self.Bool+14;
		on_off_valve_v_d_openedSensor = self.Bool+15;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Associations - batch					*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates the behaviour of an on/off valve and its 	*/
			/* electrical control logic.						*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command 				*/
			/*     the contactor doesn't understand the control order		*/
			/* ----------------------------------------------------------------	*/
			if (openCmd && !memoClose && cmdSupply) memoOpen = 1;
			if (!openCmd || !cmdSupply) memoOpen = 0;
			if (!memoOpen && closeCmd && cmdSupply) memoClose = 1;
			if (!closeCmd || !cmdSupply) memoClose = 0;

			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of contactor				*/
			/* ----------------------------------------------------------------	*/
			openState = memoOpen & voltage380 & ! d_electrical;
			closeState = memoClose & voltage380 & ! d_electrical;

			/* ----------------------------------------------------------------	*/
			/* Management of opening							*/
			/* ----------------------------------------------------------------	*/

			/* Compute the increment of opening according to the simulation clock	*/
			increment =  (CLOCK_PERIOD/1000000);

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
			if (d_openedSensor ) openedSensor = v_d_openedSensor;
			else
				openedSensor = ((openingVal >= openingTime) ^ ! openedSensorLogic) && sensorSupply;


			if (d_closedSensor ) closedSensor = v_d_closedSensor;
			else
				closedSensor = ((openingVal == 0.0) ^ ! closedSensorLogic) && sensorSupply;



		}

		CB_post_bool(on_off_valve_openedSensor);
		CB_post_bool(on_off_valve_closedSensor);
		CB_post_float(on_off_valve_outputFlow);
		CB_post_float(on_off_valve_percentOpening);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 16;
	self.Float += 7;

	return 0;
}
