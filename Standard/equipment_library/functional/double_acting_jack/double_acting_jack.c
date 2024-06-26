/*2023-10-03T11:13:07-01:00*/

/********************************************************************
 * double_acting_jack.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "double_acting_jack.h"



/**************************** Variables *****************************/

CB_Index double_acting_jack__num = 0;
CB_Mem_Bool *double_acting_jack_energy;
CB_Mem_Bool *double_acting_jack_cmdSupply;
CB_Mem_Bool *double_acting_jack_sensorSupply;
CB_Mem_Bool *double_acting_jack_valveWork;
CB_Mem_Bool *double_acting_jack_valveRest;
CB_Mem_Bool *double_acting_jack_outletSensor;
CB_Mem_Bool *double_acting_jack_inletSensor;
CB_Mem_Float *double_acting_jack_rodPosition;
CB_Mem_Float *double_acting_jack_rodPercent;
CB_Mem_Float *double_acting_jack_incrementValue;
CB_Mem_Int *double_acting_jack_slidePosition;
CB_Mem_Bool *double_acting_jack_pipeWork;
CB_Mem_Bool *double_acting_jack_pipeRest;
CB_Mem_Float *double_acting_jack_increment;
CB_Mem_Bool *double_acting_jack_outletSensorLogic;
CB_Mem_Bool *double_acting_jack_inletSensorLogic;
CB_Mem_Float *double_acting_jack_rodLength;
CB_Mem_Float *double_acting_jack_time2extend;
CB_Mem_Bool *double_acting_jack_d_locking;
CB_Mem_Float *double_acting_jack_v_d_locking;
CB_Mem_Bool *double_acting_jack_d_inletSensor;
CB_Mem_Bool *double_acting_jack_v_d_inletSensor;
CB_Mem_Bool *double_acting_jack_d_outletSensor;
CB_Mem_Bool *double_acting_jack_v_d_outletSensor;

/**************************** Variables *****************************/

#define energy (double_acting_jack_energy->CB_current_value)
#define cmdSupply (double_acting_jack_cmdSupply->CB_current_value)
#define sensorSupply (double_acting_jack_sensorSupply->CB_current_value)
#define valveWork (double_acting_jack_valveWork->CB_current_value)
#define valveRest (double_acting_jack_valveRest->CB_current_value)
#define outletSensor (double_acting_jack_outletSensor->CB_current_value)
#define inletSensor (double_acting_jack_inletSensor->CB_current_value)
#define rodPosition (double_acting_jack_rodPosition->CB_current_value)
#define rodPercent (double_acting_jack_rodPercent->CB_current_value)
#define incrementValue (double_acting_jack_incrementValue->CB_current_value)
#define slidePosition (double_acting_jack_slidePosition->CB_current_value)
#define pipeWork (double_acting_jack_pipeWork->CB_current_value)
#define pipeRest (double_acting_jack_pipeRest->CB_current_value)
#define increment (double_acting_jack_increment->CB_current_value)
#define outletSensorLogic (double_acting_jack_outletSensorLogic->CB_current_value)
#define inletSensorLogic (double_acting_jack_inletSensorLogic->CB_current_value)
#define rodLength (double_acting_jack_rodLength->CB_current_value)
#define time2extend (double_acting_jack_time2extend->CB_current_value)
#define d_locking (double_acting_jack_d_locking->CB_current_value)
#define v_d_locking (double_acting_jack_v_d_locking->CB_current_value)
#define d_inletSensor (double_acting_jack_d_inletSensor->CB_current_value)
#define v_d_inletSensor (double_acting_jack_v_d_inletSensor->CB_current_value)
#define d_outletSensor (double_acting_jack_d_outletSensor->CB_current_value)
#define v_d_outletSensor (double_acting_jack_v_d_outletSensor->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__double_acting_jack_init(void)
{
	(double_acting_jack_energy)->CB_current_value = 1; /*energy*/
	(double_acting_jack_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(double_acting_jack_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Bool+1)->CB_current_value = 1; /*pipeRest*/
	(self.Bool+2)->CB_current_value = 1; /*outletSensorLogic*/
	(self.Bool+3)->CB_current_value = 1; /*inletSensorLogic*/
	(self.Float+1)->CB_current_value = 1000.0; /*rodLength*/
	(self.Float+2)->CB_current_value = 2.0; /*time2extend*/
	(self.Float+3)->CB_current_value = 2.0; /*v_d_locking*/
	self.Bool+=9;
	self.Int+=1;
	self.Float+=4;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__double_acting_jack(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		double_acting_jack_slidePosition = self.Int+0;
		double_acting_jack_pipeWork = self.Bool+0;
		double_acting_jack_pipeRest = self.Bool+1;
		double_acting_jack_increment = self.Float+0;
		double_acting_jack_outletSensorLogic = self.Bool+2;
		double_acting_jack_inletSensorLogic = self.Bool+3;
		double_acting_jack_rodLength = self.Float+1;
		double_acting_jack_time2extend = self.Float+2;
		double_acting_jack_d_locking = self.Bool+4;
		double_acting_jack_v_d_locking = self.Float+3;
		double_acting_jack_d_inletSensor = self.Bool+5;
		double_acting_jack_v_d_inletSensor = self.Bool+6;
		double_acting_jack_d_outletSensor = self.Bool+7;
		double_acting_jack_v_d_outletSensor = self.Bool+8;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Associations - Jacks					*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates a double-acting jack driven by a   		*/
			/* five-way, two positions control valve .				*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command the solenoid 		*/
			/*     control valve doesn't understand the control order.		*/
			/* Hypothesis : if the two control valves are excited at the 		*/
			/* same time, only the first is taken into account.			*/
			/* ----------------------------------------------------------------	*/
			if (cmdSupply && valveWork && ! valveRest) slidePosition=1;
			if (cmdSupply &&  ! valveWork && valveRest) slidePosition=0;

			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of the energy in the pipes		*/
			/*     if there is no energy in input, pipes are not 			*/
			/*	   under pressure.							*/
			/* ----------------------------------------------------------------	*/
			pipeWork = (slidePosition==1) & energy;
			pipeRest = (slidePosition==0) & energy;

			/* ----------------------------------------------------------------	*/
			/* Management of the rod evolution						*/
			/* the rod stays in its current position if there is no pressure 	*/
			/* in the two chambers. 							*/
			/* ----------------------------------------------------------------	*/
			incrementValue = 0;
			if (! d_locking)  {
				if (time2extend > 0.0)
					increment = (rodLength/time2extend)*(CLOCK_PERIOD/1000000);
				if (pipeWork && ! pipeRest) {
					if ( rodPosition < rodLength ) {
						(rodPosition) += increment;
						incrementValue = increment;
					}
					if ( rodPosition > rodLength ) {
						incrementValue -= rodPosition - rodLength;
						rodPosition = rodLength;
					}
				}
				if (pipeRest && ! pipeWork) {
					if ( rodPosition > 0 ) {
						(rodPosition) -= increment;
						incrementValue = increment * -1.0;
					}
					if ( rodPosition < 0.0 ) {
						incrementValue -= rodPosition;
						rodPosition = 0.0;
					}
				}
			}

			/* ----------------------------------------------------------------	*/
			/* Calculation of the rod position in percentage			*/
			/* ----------------------------------------------------------------	*/
			if (rodLength != 0.0)
				rodPercent = ((rodPosition/rodLength)*100);

			/* ----------------------------------------------------------------	*/
			/* Management of the sensors state						*/
			/* ----------------------------------------------------------------	*/
			if (d_outletSensor) outletSensor = v_d_outletSensor;
			else
				outletSensor = ((rodPosition >= rodLength) ^ ! outletSensorLogic) && sensorSupply;


			if (d_inletSensor) inletSensor = v_d_inletSensor;
			else
				inletSensor = ((rodPosition <= 0) ^ ! inletSensorLogic) && sensorSupply;



		}

		CB_post_bool(double_acting_jack_outletSensor);
		CB_post_bool(double_acting_jack_inletSensor);
		CB_post_float(double_acting_jack_rodPosition);
		CB_post_float(double_acting_jack_rodPercent);
		CB_post_float(double_acting_jack_incrementValue);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 9;
	self.Int += 1;
	self.Float += 4;

	return 0;
}

