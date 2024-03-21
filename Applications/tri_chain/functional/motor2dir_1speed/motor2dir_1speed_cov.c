/*2023-10-03T11:13:54-01:00*/

/********************************************************************
 * motor2dir_1speed_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "motor2dir_1speed.h"



/**************************** Variables *****************************/

CB_Index motor2dir_1speed__num = 0;
CB_Mem_Bool *motor2dir_1speed_forward;
CB_Mem_Bool *motor2dir_1speed_backward;
CB_Mem_Bool *motor2dir_1speed_cmdSupply;
CB_Mem_Bool *motor2dir_1speed_sensorSupply;
CB_Mem_Bool *motor2dir_1speed_voltage380;
CB_Mem_Float *motor2dir_1speed_speedVal;
CB_Mem_Float *motor2dir_1speed_speedPercent;
CB_Mem_Bool *motor2dir_1speed_thermal;
CB_Mem_Bool *motor2dir_1speed_backwardFB;
CB_Mem_Bool *motor2dir_1speed_forwardFB;
CB_Mem_Float *motor2dir_1speed_increment;
CB_Mem_Bool *motor2dir_1speed_memoFwd;
CB_Mem_Bool *motor2dir_1speed_memoBwd;
CB_Mem_Bool *motor2dir_1speed_forwardState;
CB_Mem_Bool *motor2dir_1speed_backwardState;
CB_Mem_Float *motor2dir_1speed_wantedSpeed;
CB_Mem_Float *motor2dir_1speed_nominalSpeed;
CB_Mem_Float *motor2dir_1speed_nominalTime;
CB_Mem_Bool *motor2dir_1speed_thermalLogic;
CB_Mem_Bool *motor2dir_1speed_fwdFbLogic;
CB_Mem_Bool *motor2dir_1speed_bwdFbLogic;
CB_Mem_Bool *motor2dir_1speed_d_locking;
CB_Mem_Float *motor2dir_1speed_v_d_locking;
CB_Mem_Bool *motor2dir_1speed_d_electrical;
CB_Mem_Bool *motor2dir_1speed_v_d_electrical;
CB_Mem_Bool *motor2dir_1speed_d_backwardFB;
CB_Mem_Bool *motor2dir_1speed_v_d_backwardFB;
CB_Mem_Bool *motor2dir_1speed_d_forwardFB;
CB_Mem_Bool *motor2dir_1speed_v_d_forwardFB;

/**************************** Variables *****************************/

#define forward (motor2dir_1speed_forward->CB_current_value)
#define backward (motor2dir_1speed_backward->CB_current_value)
#define cmdSupply (motor2dir_1speed_cmdSupply->CB_current_value)
#define sensorSupply (motor2dir_1speed_sensorSupply->CB_current_value)
#define voltage380 (motor2dir_1speed_voltage380->CB_current_value)
#define speedVal (motor2dir_1speed_speedVal->CB_current_value)
#define speedPercent (motor2dir_1speed_speedPercent->CB_current_value)
#define thermal (motor2dir_1speed_thermal->CB_current_value)
#define backwardFB (motor2dir_1speed_backwardFB->CB_current_value)
#define forwardFB (motor2dir_1speed_forwardFB->CB_current_value)
#define increment (motor2dir_1speed_increment->CB_current_value)
#define memoFwd (motor2dir_1speed_memoFwd->CB_current_value)
#define memoBwd (motor2dir_1speed_memoBwd->CB_current_value)
#define forwardState (motor2dir_1speed_forwardState->CB_current_value)
#define backwardState (motor2dir_1speed_backwardState->CB_current_value)
#define wantedSpeed (motor2dir_1speed_wantedSpeed->CB_current_value)
#define nominalSpeed (motor2dir_1speed_nominalSpeed->CB_current_value)
#define nominalTime (motor2dir_1speed_nominalTime->CB_current_value)
#define thermalLogic (motor2dir_1speed_thermalLogic->CB_current_value)
#define fwdFbLogic (motor2dir_1speed_fwdFbLogic->CB_current_value)
#define bwdFbLogic (motor2dir_1speed_bwdFbLogic->CB_current_value)
#define d_locking (motor2dir_1speed_d_locking->CB_current_value)
#define v_d_locking (motor2dir_1speed_v_d_locking->CB_current_value)
#define d_electrical (motor2dir_1speed_d_electrical->CB_current_value)
#define v_d_electrical (motor2dir_1speed_v_d_electrical->CB_current_value)
#define d_backwardFB (motor2dir_1speed_d_backwardFB->CB_current_value)
#define v_d_backwardFB (motor2dir_1speed_v_d_backwardFB->CB_current_value)
#define d_forwardFB (motor2dir_1speed_d_forwardFB->CB_current_value)
#define v_d_forwardFB (motor2dir_1speed_v_d_forwardFB->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tri_chain__motor2dir_1speed_init(void)
{
	(motor2dir_1speed_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(motor2dir_1speed_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(motor2dir_1speed_voltage380)->CB_current_value = 1; /*voltage380*/
	(self.Float+2)->CB_current_value = 5000.0; /*nominalSpeed*/
	(self.Float+3)->CB_current_value = 0.5; /*nominalTime*/
	(self.Bool+5)->CB_current_value = 1; /*fwdFbLogic*/
	(self.Bool+6)->CB_current_value = 1; /*bwdFbLogic*/
	self.Bool+=14;
	self.Float+=5;


	return 0;
}


/************************ Behavior function *************************/

int tri_chain__motor2dir_1speed(void)
{
	static char *__comp_name = "tri_chain.motor2dir_1speed";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		motor2dir_1speed_increment = self.Float+0;
		motor2dir_1speed_memoFwd = self.Bool+0;
		motor2dir_1speed_memoBwd = self.Bool+1;
		motor2dir_1speed_forwardState = self.Bool+2;
		motor2dir_1speed_backwardState = self.Bool+3;
		motor2dir_1speed_wantedSpeed = self.Float+1;
		motor2dir_1speed_nominalSpeed = self.Float+2;
		motor2dir_1speed_nominalTime = self.Float+3;
		motor2dir_1speed_thermalLogic = self.Bool+4;
		motor2dir_1speed_fwdFbLogic = self.Bool+5;
		motor2dir_1speed_bwdFbLogic = self.Bool+6;
		motor2dir_1speed_d_locking = self.Bool+7;
		motor2dir_1speed_v_d_locking = self.Float+4;
		motor2dir_1speed_d_electrical = self.Bool+8;
		motor2dir_1speed_v_d_electrical = self.Bool+9;
		motor2dir_1speed_d_backwardFB = self.Bool+10;
		motor2dir_1speed_v_d_backwardFB = self.Bool+11;
		motor2dir_1speed_d_forwardFB = self.Bool+12;
		motor2dir_1speed_v_d_forwardFB = self.Bool+13;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Associations - motors					*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates a motor with 2 directions and 1 speed	*/
			/* and its electrical control logic.					*/
			/* ----------------------------------------------------------------	*/


			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command 				*/
			/*     	the contactors don't understand the control order	*/
			/*	The contactors cannot be active in the same time		*/
			/*	 	(mechanical security).					*/
			/* ----------------------------------------------------------------	*/
			if (forward && !memoBwd && cmdSupply) memoFwd = 1;
			if (!forward || !cmdSupply || d_electrical) memoFwd = 0;
			if (!memoFwd && backward && cmdSupply) memoBwd = 1;
			if (!backward || !cmdSupply || d_electrical) memoBwd = 0;

			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of contactor				*/
			/* ----------------------------------------------------------------	*/
			forwardState= memoFwd & voltage380;
			backwardState = memoBwd & voltage380;


			/* ----------------------------------------------------------------	*/
			/* Management of the speed ramp						*/
			/* ----------------------------------------------------------------	*/
			if (d_locking)  speedVal = v_d_locking;
			else {
				/* Compute the increment of translation according to the simulation clock	*/
				if (nominalTime > 0.0)
					increment = (nominalSpeed / nominalTime) * (CLOCK_PERIOD/1000000.0);

				/* Compute the wanted speed	*/
				if (forwardState) wantedSpeed = nominalSpeed;
				if (backwardState) wantedSpeed = nominalSpeed * -1.0;
				if (! forwardState && ! backwardState) wantedSpeed = 0.0;

				/* Compute the speed ramp	*/
				if ( speedVal < wantedSpeed ) {
					speedVal += increment;
					if (speedVal > wantedSpeed)  speedVal = wantedSpeed;
				}
				if ( speedVal > wantedSpeed ) {
					speedVal -= increment;
					if (speedVal < wantedSpeed)  speedVal = wantedSpeed;
				}
			}

			/* ----------------------------------------------------------------	*/
			/* Compute the percentage between the current and nominal speed	*/
			/* ----------------------------------------------------------------	*/
			if (nominalSpeed != 0.0) 
				speedPercent = ((speedVal/nominalSpeed)*100);


			/* ----------------------------------------------------------------	*/
			/* Management of the thermal feedback					*/
			/* ----------------------------------------------------------------	*/
			if (d_electrical) thermal=v_d_electrical;
			else
				if (sensorSupply) thermal= ! thermalLogic;
				else thermal=0;

			/* ----------------------------------------------------------------	*/
			/* Management of feedback to Control Part					*/
			/*     if a fault is required, the contactor feed-back 		*/
			/*		 takes a preset state.					*/
			/*	if there is no power supply for sensors 				*/
			/*         contactor feed-back returns nothing				*/
			/*     else contactor feed-back returns the contactor state combined	*/
			/*	    with wiring logic.						*/
			/* ----------------------------------------------------------------	*/
			if (d_forwardFB) forwardFB=v_d_forwardFB;
			else
				if (sensorSupply) forwardFB=(memoFwd ^ ! fwdFbLogic);
				else forwardFB=0;

			if (d_backwardFB) backwardFB=v_d_backwardFB;
			else
				if (sensorSupply) backwardFB=(memoBwd ^ ! bwdFbLogic);
				else backwardFB=0;

		}

		CB_post_float(motor2dir_1speed_speedVal);
		CB_post_float(motor2dir_1speed_speedPercent);
		CB_post_bool(motor2dir_1speed_thermal);
		CB_post_bool(motor2dir_1speed_backwardFB);
		CB_post_bool(motor2dir_1speed_forwardFB);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 14;
	self.Float += 5;

	return 0;
}

