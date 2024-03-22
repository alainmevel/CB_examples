/*2023-10-03T11:13:14-01:00*/

/********************************************************************
 * contactor_1dir_2speed.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "contactor_1dir_2speed.h"



/**************************** Variables *****************************/

CB_Index contactor_1dir_2speed__num = 0;
CB_Mem_Bool *contactor_1dir_2speed_voltage380;
CB_Mem_Bool *contactor_1dir_2speed_cmdSupply;
CB_Mem_Bool *contactor_1dir_2speed_sensorSupply;
CB_Mem_Bool *contactor_1dir_2speed_highSpeed;
CB_Mem_Bool *contactor_1dir_2speed_lowSpeed;
CB_Mem_Bool *contactor_1dir_2speed_fwdHsState;
CB_Mem_Bool *contactor_1dir_2speed_fwdLsState;
CB_Mem_Bool *contactor_1dir_2speed_highSpeedFB;
CB_Mem_Bool *contactor_1dir_2speed_lowSpeedFB;
CB_Mem_Bool *contactor_1dir_2speed_thermal;
CB_Mem_Bool *contactor_1dir_2speed_memoHighSpeed;
CB_Mem_Bool *contactor_1dir_2speed_memoLowSpeed;
CB_Mem_Bool *contactor_1dir_2speed_highSpeedLogic;
CB_Mem_Bool *contactor_1dir_2speed_lowSpeedLogic;
CB_Mem_Bool *contactor_1dir_2speed_thermalLogic;
CB_Mem_Bool *contactor_1dir_2speed_d_electrical;
CB_Mem_Bool *contactor_1dir_2speed_v_d_electrical;
CB_Mem_Bool *contactor_1dir_2speed_d_highSpeed;
CB_Mem_Bool *contactor_1dir_2speed_v_d_highSpeed;
CB_Mem_Bool *contactor_1dir_2speed_d_lowSpeed;
CB_Mem_Bool *contactor_1dir_2speed_v_d_lowSpeed;

/**************************** Variables *****************************/

#define voltage380 (contactor_1dir_2speed_voltage380->CB_current_value)
#define cmdSupply (contactor_1dir_2speed_cmdSupply->CB_current_value)
#define sensorSupply (contactor_1dir_2speed_sensorSupply->CB_current_value)
#define highSpeed (contactor_1dir_2speed_highSpeed->CB_current_value)
#define lowSpeed (contactor_1dir_2speed_lowSpeed->CB_current_value)
#define fwdHsState (contactor_1dir_2speed_fwdHsState->CB_current_value)
#define fwdLsState (contactor_1dir_2speed_fwdLsState->CB_current_value)
#define highSpeedFB (contactor_1dir_2speed_highSpeedFB->CB_current_value)
#define lowSpeedFB (contactor_1dir_2speed_lowSpeedFB->CB_current_value)
#define thermal (contactor_1dir_2speed_thermal->CB_current_value)
#define memoHighSpeed (contactor_1dir_2speed_memoHighSpeed->CB_current_value)
#define memoLowSpeed (contactor_1dir_2speed_memoLowSpeed->CB_current_value)
#define highSpeedLogic (contactor_1dir_2speed_highSpeedLogic->CB_current_value)
#define lowSpeedLogic (contactor_1dir_2speed_lowSpeedLogic->CB_current_value)
#define thermalLogic (contactor_1dir_2speed_thermalLogic->CB_current_value)
#define d_electrical (contactor_1dir_2speed_d_electrical->CB_current_value)
#define v_d_electrical (contactor_1dir_2speed_v_d_electrical->CB_current_value)
#define d_highSpeed (contactor_1dir_2speed_d_highSpeed->CB_current_value)
#define v_d_highSpeed (contactor_1dir_2speed_v_d_highSpeed->CB_current_value)
#define d_lowSpeed (contactor_1dir_2speed_d_lowSpeed->CB_current_value)
#define v_d_lowSpeed (contactor_1dir_2speed_v_d_lowSpeed->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__contactor_1dir_2speed_init(void)
{
	(contactor_1dir_2speed_voltage380)->CB_current_value = 1; /*voltage380*/
	(contactor_1dir_2speed_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(contactor_1dir_2speed_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Bool+2)->CB_current_value = 1; /*highSpeedLogic*/
	(self.Bool+3)->CB_current_value = 1; /*lowSpeedLogic*/
	self.Bool+=11;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__contactor_1dir_2speed(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		contactor_1dir_2speed_memoHighSpeed = self.Bool+0;
		contactor_1dir_2speed_memoLowSpeed = self.Bool+1;
		contactor_1dir_2speed_highSpeedLogic = self.Bool+2;
		contactor_1dir_2speed_lowSpeedLogic = self.Bool+3;
		contactor_1dir_2speed_thermalLogic = self.Bool+4;
		contactor_1dir_2speed_d_electrical = self.Bool+5;
		contactor_1dir_2speed_v_d_electrical = self.Bool+6;
		contactor_1dir_2speed_d_highSpeed = self.Bool+7;
		contactor_1dir_2speed_v_d_highSpeed = self.Bool+8;
		contactor_1dir_2speed_d_lowSpeed = self.Bool+9;
		contactor_1dir_2speed_v_d_lowSpeed = self.Bool+10;

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
			/* This module simulates control system of motor. 			*/
			/* This motor has one direction and two speeds. 			*/
			/* This system is represented by two contactors. 			*/
			/* It returns its state and sensors' feed-back.				*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command 				*/
			/*         the contactor doesn't understand the control order		*/
			/* Contactors are not mechanically bound					*/
			/* ----------------------------------------------------------------	*/
			memoLowSpeed = lowSpeed && !memoHighSpeed && cmdSupply && !d_electrical;
			memoHighSpeed = highSpeed && !memoLowSpeed && cmdSupply && !d_electrical;


			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of contactors				*/
			/* ----------------------------------------------------------------	*/
			fwdHsState=memoHighSpeed & voltage380;
			fwdLsState=memoLowSpeed & voltage380;

			/* ----------------------------------------------------------------	*/
			/* Management of the thermal feed-back					*/
			/* ----------------------------------------------------------------	*/
			if (d_electrical) thermal=v_d_electrical;
			else
				thermal= ! thermalLogic && sensorSupply;


			/* ----------------------------------------------------------------	*/
			/* Management of feedback to Control Part					*/
			/*     if a fault is required, the contactor feed-back 		*/
			/*		 takes a preset state.					*/
			/*	if there is no power supply for sensor 				*/
			/*         contactor feed-back returns nothing				*/
			/*     else contactor feed-back returns the contactor state combined	*/
			/*	    with wiring logic.						*/
			/* ----------------------------------------------------------------	*/
			if (d_highSpeed) highSpeedFB = v_d_highSpeed;
			else 	
				highSpeedFB = (memoHighSpeed ^ ! highSpeedLogic) && sensorSupply;

			if (d_lowSpeed) lowSpeedFB = v_d_lowSpeed;
			else	
				lowSpeedFB = (memoLowSpeed ^ ! lowSpeedLogic) && sensorSupply;
		}

		CB_post_bool(contactor_1dir_2speed_fwdHsState);
		CB_post_bool(contactor_1dir_2speed_fwdLsState);
		CB_post_bool(contactor_1dir_2speed_highSpeedFB);
		CB_post_bool(contactor_1dir_2speed_lowSpeedFB);
		CB_post_bool(contactor_1dir_2speed_thermal);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 11;

	return 0;
}

