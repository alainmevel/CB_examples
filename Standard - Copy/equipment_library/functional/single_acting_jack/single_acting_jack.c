/*2023-10-03T11:13:08-01:00*/

/********************************************************************
 * single_acting_jack.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "single_acting_jack.h"



/**************************** Variables *****************************/

CB_Index single_acting_jack__num = 0;
CB_Mem_Bool *single_acting_jack_energy;
CB_Mem_Bool *single_acting_jack_cmdSupply;
CB_Mem_Bool *single_acting_jack_sensorSupply;
CB_Mem_Bool *single_acting_jack_valveWork;
CB_Mem_Bool *single_acting_jack_outletSensor;
CB_Mem_Bool *single_acting_jack_inletSensor;
CB_Mem_Float *single_acting_jack_rodPosition;
CB_Mem_Float *single_acting_jack_rodPercent;
CB_Mem_Float *single_acting_jack_incrementValue;
CB_Mem_Int *single_acting_jack_slidePosition;
CB_Mem_Bool *single_acting_jack_pipeWork;
CB_Mem_Bool *single_acting_jack_pipeRest;
CB_Mem_Float *single_acting_jack_increment;
CB_Mem_Bool *single_acting_jack_outletSensorLogic;
CB_Mem_Bool *single_acting_jack_inletSensorLogic;
CB_Mem_Float *single_acting_jack_rodLength;
CB_Mem_Float *single_acting_jack_time2extend;
CB_Mem_Bool *single_acting_jack_d_locking;
CB_Mem_Float *single_acting_jack_v_d_locking;
CB_Mem_Bool *single_acting_jack_d_inletSensor;
CB_Mem_Bool *single_acting_jack_v_d_inletSensor;
CB_Mem_Bool *single_acting_jack_d_outletSensor;
CB_Mem_Bool *single_acting_jack_v_d_outletSensor;

/**************************** Variables *****************************/

#define energy (single_acting_jack_energy->CB_current_value)
#define cmdSupply (single_acting_jack_cmdSupply->CB_current_value)
#define sensorSupply (single_acting_jack_sensorSupply->CB_current_value)
#define valveWork (single_acting_jack_valveWork->CB_current_value)
#define outletSensor (single_acting_jack_outletSensor->CB_current_value)
#define inletSensor (single_acting_jack_inletSensor->CB_current_value)
#define rodPosition (single_acting_jack_rodPosition->CB_current_value)
#define rodPercent (single_acting_jack_rodPercent->CB_current_value)
#define incrementValue (single_acting_jack_incrementValue->CB_current_value)
#define slidePosition (single_acting_jack_slidePosition->CB_current_value)
#define pipeWork (single_acting_jack_pipeWork->CB_current_value)
#define pipeRest (single_acting_jack_pipeRest->CB_current_value)
#define increment (single_acting_jack_increment->CB_current_value)
#define outletSensorLogic (single_acting_jack_outletSensorLogic->CB_current_value)
#define inletSensorLogic (single_acting_jack_inletSensorLogic->CB_current_value)
#define rodLength (single_acting_jack_rodLength->CB_current_value)
#define time2extend (single_acting_jack_time2extend->CB_current_value)
#define d_locking (single_acting_jack_d_locking->CB_current_value)
#define v_d_locking (single_acting_jack_v_d_locking->CB_current_value)
#define d_inletSensor (single_acting_jack_d_inletSensor->CB_current_value)
#define v_d_inletSensor (single_acting_jack_v_d_inletSensor->CB_current_value)
#define d_outletSensor (single_acting_jack_d_outletSensor->CB_current_value)
#define v_d_outletSensor (single_acting_jack_v_d_outletSensor->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__single_acting_jack_init(void)
{
	(single_acting_jack_energy)->CB_current_value = 1; /*energy*/
	(single_acting_jack_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(single_acting_jack_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
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

int equipment_library__single_acting_jack(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		single_acting_jack_slidePosition = self.Int+0;
		single_acting_jack_pipeWork = self.Bool+0;
		single_acting_jack_pipeRest = self.Bool+1;
		single_acting_jack_increment = self.Float+0;
		single_acting_jack_outletSensorLogic = self.Bool+2;
		single_acting_jack_inletSensorLogic = self.Bool+3;
		single_acting_jack_rodLength = self.Float+1;
		single_acting_jack_time2extend = self.Float+2;
		single_acting_jack_d_locking = self.Bool+4;
		single_acting_jack_v_d_locking = self.Float+3;
		single_acting_jack_d_inletSensor = self.Bool+5;
		single_acting_jack_v_d_inletSensor = self.Bool+6;
		single_acting_jack_d_outletSensor = self.Bool+7;
		single_acting_jack_v_d_outletSensor = self.Bool+8;

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
			/* This module simulates a single-acting jack driven by a   		*/
			/* three-way, two positions control valve .				*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command the solenoid 		*/
			/*     control valve doesn't understand the control order.		*/
			/* ----------------------------------------------------------------	*/
			if (cmdSupply && valveWork) slidePosition = 1;
			else slidePosition = 0;

			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of the energy in the pipes		*/
			/*     if there is no energy in input, pipes are not 			*/
			/*	   under pressure.							*/
			/* ----------------------------------------------------------------	*/
			pipeWork = (slidePosition==1) & energy;
			pipeRest = 0;

			/* ----------------------------------------------------------------	*/
			/* Management of the rod evolution						*/
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
				else {
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

		CB_post_bool(single_acting_jack_outletSensor);
		CB_post_bool(single_acting_jack_inletSensor);
		CB_post_float(single_acting_jack_rodPosition);
		CB_post_float(single_acting_jack_rodPercent);
		CB_post_float(single_acting_jack_incrementValue);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 9;
	self.Int += 1;
	self.Float += 4;

	return 0;
}

