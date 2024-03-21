/*2023-10-03T11:13:01-01:00*/

/********************************************************************
 * on_off_pump_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "on_off_pump.h"



/**************************** Variables *****************************/

CB_Index on_off_pump__num = 0;
CB_Mem_Bool *on_off_pump_voltage380;
CB_Mem_Bool *on_off_pump_cmdSupply;
CB_Mem_Bool *on_off_pump_sensorSupply;
CB_Mem_Bool *on_off_pump_onCmd;
CB_Mem_Float *on_off_pump_inputFlow;
CB_Mem_Bool *on_off_pump_onFB;
CB_Mem_Bool *on_off_pump_thermal;
CB_Mem_Float *on_off_pump_speedVal;
CB_Mem_Float *on_off_pump_outputFlow;
CB_Mem_Float *on_off_pump_increment;
CB_Mem_Bool *on_off_pump_onState;
CB_Mem_Float *on_off_pump_speedSetpoint;
CB_Mem_Float *on_off_pump_unit;
CB_Mem_Float *on_off_pump_nominalTime;
CB_Mem_Bool *on_off_pump_thermalLogic;
CB_Mem_Bool *on_off_pump_onFbLogic;
CB_Mem_Float *on_off_pump_flowMax;
CB_Mem_Float *on_off_pump_nominalSpeed;
CB_Mem_Bool *on_off_pump_flowPerHour;
CB_Mem_Bool *on_off_pump_flowPerMinute;
CB_Mem_Bool *on_off_pump_d_locking;
CB_Mem_Float *on_off_pump_v_d_locking;
CB_Mem_Bool *on_off_pump_d_flow;
CB_Mem_Float *on_off_pump_v_d_flow;
CB_Mem_Bool *on_off_pump_d_electrical;
CB_Mem_Bool *on_off_pump_v_d_electrical;
CB_Mem_Bool *on_off_pump_d_onFB;
CB_Mem_Bool *on_off_pump_v_d_onFB;

/**************************** Variables *****************************/

#define voltage380 (on_off_pump_voltage380->CB_current_value)
#define cmdSupply (on_off_pump_cmdSupply->CB_current_value)
#define sensorSupply (on_off_pump_sensorSupply->CB_current_value)
#define onCmd (on_off_pump_onCmd->CB_current_value)
#define inputFlow (on_off_pump_inputFlow->CB_current_value)
#define onFB (on_off_pump_onFB->CB_current_value)
#define thermal (on_off_pump_thermal->CB_current_value)
#define speedVal (on_off_pump_speedVal->CB_current_value)
#define outputFlow (on_off_pump_outputFlow->CB_current_value)
#define increment (on_off_pump_increment->CB_current_value)
#define onState (on_off_pump_onState->CB_current_value)
#define speedSetpoint (on_off_pump_speedSetpoint->CB_current_value)
#define unit (on_off_pump_unit->CB_current_value)
#define nominalTime (on_off_pump_nominalTime->CB_current_value)
#define thermalLogic (on_off_pump_thermalLogic->CB_current_value)
#define onFbLogic (on_off_pump_onFbLogic->CB_current_value)
#define flowMax (on_off_pump_flowMax->CB_current_value)
#define nominalSpeed (on_off_pump_nominalSpeed->CB_current_value)
#define flowPerHour (on_off_pump_flowPerHour->CB_current_value)
#define flowPerMinute (on_off_pump_flowPerMinute->CB_current_value)
#define d_locking (on_off_pump_d_locking->CB_current_value)
#define v_d_locking (on_off_pump_v_d_locking->CB_current_value)
#define d_flow (on_off_pump_d_flow->CB_current_value)
#define v_d_flow (on_off_pump_v_d_flow->CB_current_value)
#define d_electrical (on_off_pump_d_electrical->CB_current_value)
#define v_d_electrical (on_off_pump_v_d_electrical->CB_current_value)
#define d_onFB (on_off_pump_d_onFB->CB_current_value)
#define v_d_onFB (on_off_pump_v_d_onFB->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__on_off_pump_init(void)
{
	(on_off_pump_voltage380)->CB_current_value = 1; /*voltage380*/
	(on_off_pump_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(on_off_pump_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Float+3)->CB_current_value = 2.0; /*nominalTime*/
	(self.Bool+2)->CB_current_value = 1; /*onFbLogic*/
	(self.Float+4)->CB_current_value = 10000.0; /*flowMax*/
	(self.Float+5)->CB_current_value = 3600.0; /*nominalSpeed*/
	(self.Bool+3)->CB_current_value = 1; /*flowPerHour*/
	self.Bool+=11;
	self.Float+=8;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__on_off_pump(void)
{
	static char *__comp_name = "equipment_library.on_off_pump";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		on_off_pump_increment = self.Float+0;
		on_off_pump_onState = self.Bool+0;
		on_off_pump_speedSetpoint = self.Float+1;
		on_off_pump_unit = self.Float+2;
		on_off_pump_nominalTime = self.Float+3;
		on_off_pump_thermalLogic = self.Bool+1;
		on_off_pump_onFbLogic = self.Bool+2;
		on_off_pump_flowMax = self.Float+4;
		on_off_pump_nominalSpeed = self.Float+5;
		on_off_pump_flowPerHour = self.Bool+3;
		on_off_pump_flowPerMinute = self.Bool+4;
		on_off_pump_d_locking = self.Bool+5;
		on_off_pump_v_d_locking = self.Float+6;
		on_off_pump_d_flow = self.Bool+6;
		on_off_pump_v_d_flow = self.Float+7;
		on_off_pump_d_electrical = self.Bool+7;
		on_off_pump_v_d_electrical = self.Bool+8;
		on_off_pump_d_onFB = self.Bool+9;
		on_off_pump_v_d_onFB = self.Bool+10;

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
			/* This module simulates the behaviour of an on/off pump and its	*/
			/* electrical control logic.						*/
			/* ----------------------------------------------------------------	*/


			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command 				*/
			/*     the contactor doesn't understand the control order		*/
			/* ----------------------------------------------------------------	*/
			if (d_electrical) 
				onState=v_d_electrical;
			else
				onState = onCmd & cmdSupply & voltage380;

			/* ----------------------------------------------------------------	*/
			/* Management of  the rotation speed					*/
			/* ----------------------------------------------------------------	*/
			if (d_locking) speedVal=v_d_locking;
			else {
				/* Compute the increment of speed according to the simulation clock	*/
				if (nominalTime > 0.0)
					increment = (nominalSpeed/nominalTime) * (CLOCK_PERIOD/1000000.0);

				/* Compute the rotation speed	*/
				if (onState) speedSetpoint = nominalSpeed;
				else speedSetpoint = 0.0;

				if ( speedVal < speedSetpoint) {
					speedVal += increment;
					if ( speedVal > speedSetpoint) speedVal = speedSetpoint;
				}
				if ( speedVal > speedSetpoint) {
					speedVal -= increment;
					if (speedVal < 0.0) speedVal = 0.0;
				}
			}

			/* ----------------------------------------------------------------	*/
			/* Management of the thermal feedback					*/
			/* ----------------------------------------------------------------	*/
			if (d_electrical) thermal = v_d_electrical;
			else
				thermal = ! thermalLogic && sensorSupply;


			/* ----------------------------------------------------------------	*/
			/* Management of feedback to Control Part					*/
			/*     if a fault is required, the contactor feed-back 		*/
			/*		 takes a preset state.					*/
			/*	if there is no power supply for sensors 				*/
			/*         contactor feed-back returns nothing				*/
			/*     else contactor feed-back returns the contactor state combined	*/
			/*	    with wiring logic.						*/
			/* ----------------------------------------------------------------	*/
			if (d_onFB) onFB = v_d_onFB;
			else
				onFB = (onCmd ^ ! onFbLogic) && sensorSupply;

			/* ----------------------------------------------------------------	*/
			/* Management of the flow at the outlet of the pump			*/
			/* The flow is computed according to the rotation speed of the pump	*/
			/* and the flow at the inlet of the pump.					*/
			/* This theorical flow rate is upper bounded with the maximal 	*/
			/* manufacturer's flow.							*/
			/* ----------------------------------------------------------------	*/

			if (d_flow)
				outputFlow = v_d_flow;
			else {
				if (nominalSpeed  > 0.0) {	
					if (flowPerHour) unit = 3600.0;
					else if (flowPerMinute) unit = 60.0;
						else unit = 1.0;
						
					outputFlow = ((flowMax * CLOCK_PERIOD / 1000000)  / unit) * (speedSetpoint / nominalSpeed  );
					if (outputFlow > inputFlow) outputFlow = inputFlow;		
				}
				else outputFlow =0.0;
			}


		}

		CB_post_bool(on_off_pump_onFB);
		CB_post_bool(on_off_pump_thermal);
		CB_post_float(on_off_pump_speedVal);
		CB_post_float(on_off_pump_outputFlow);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 11;
	self.Float += 8;

	return 0;
}

