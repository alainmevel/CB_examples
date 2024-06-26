/*2023-10-03T11:13:12-01:00*/

/********************************************************************
 * control_valve_32.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "control_valve_32.h"



/**************************** Variables *****************************/

CB_Index control_valve_32__num = 0;
CB_Mem_Bool *control_valve_32_energy;
CB_Mem_Bool *control_valve_32_cmdSupply;
CB_Mem_Bool *control_valve_32_ctrlValve;
CB_Mem_Bool *control_valve_32_pipeWork;
CB_Mem_Bool *control_valve_32_pipeRest;
CB_Mem_Bool *control_valve_32_workingMode;
CB_Mem_Int *control_valve_32_slidePosition;
CB_Mem_Bool *control_valve_32_d_work;
CB_Mem_Bool *control_valve_32_v_d_work;

/**************************** Variables *****************************/

#define energy (control_valve_32_energy->CB_current_value)
#define cmdSupply (control_valve_32_cmdSupply->CB_current_value)
#define ctrlValve (control_valve_32_ctrlValve->CB_current_value)
#define pipeWork (control_valve_32_pipeWork->CB_current_value)
#define pipeRest (control_valve_32_pipeRest->CB_current_value)
#define workingMode (control_valve_32_workingMode->CB_current_value)
#define slidePosition (control_valve_32_slidePosition->CB_current_value)
#define d_work (control_valve_32_d_work->CB_current_value)
#define v_d_work (control_valve_32_v_d_work->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__control_valve_32_init(void)
{
	(control_valve_32_energy)->CB_current_value = 1; /*energy*/
	(control_valve_32_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	self.Bool+=2;
	self.Int+=1;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__control_valve_32(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		control_valve_32_slidePosition = self.Int+0;
		control_valve_32_d_work = self.Bool+0;
		control_valve_32_v_d_work = self.Bool+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Pre-actuators						*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates a three-way, two positions control valve	*/
			/* used to drive a single-acting jack.					*/
			/* ----------------------------------------------------------------	*/
			 
			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command the solenoid 		*/
			/*     control valve doesn't understand the control order.		*/
			/* ----------------------------------------------------------------	*/
			if (cmdSupply && ctrlValve) {
				slidePosition = 1;
				workingMode=1;
			}
			else {
				slidePosition = 0;
				workingMode=0;
			}

			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of the energy in the pipes		*/
			/*     if a fault is required on a pipe, the latter 			*/
			/*		 takes a preset state.					*/
			/*     if there is no energy in input, pipes are not 			*/
			/*	   under pressure.							*/
			/* ----------------------------------------------------------------	*/
			if (d_work)
				pipeWork = v_d_work;
			else
				pipeWork = (slidePosition==1) & energy;



		}

		CB_post_bool(control_valve_32_pipeWork);
		CB_post_bool(control_valve_32_pipeRest);
		CB_post_bool(control_valve_32_workingMode);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 2;
	self.Int += 1;

	return 0;
}

