/*2023-10-03T11:13:03-01:00*/

/********************************************************************
 * agitator_1speed.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "agitator_1speed.h"



/**************************** Variables *****************************/

CB_Index agitator_1speed__num = 0;
CB_Mem_Bool *agitator_1speed_voltage380;
CB_Mem_Bool *agitator_1speed_cmdSupply;
CB_Mem_Bool *agitator_1speed_sensorSupply;
CB_Mem_Bool *agitator_1speed_cmd;
CB_Mem_Bool *agitator_1speed_cmdFB;
CB_Mem_Bool *agitator_1speed_thermal;
CB_Mem_Float *agitator_1speed_speedVal;
CB_Mem_Float *agitator_1speed_speedPercent;
CB_Mem_Float *agitator_1speed_increment;
CB_Mem_Bool *agitator_1speed_memo;
CB_Mem_Bool *agitator_1speed_state;
CB_Mem_Float *agitator_1speed_speedSetpoint;
CB_Mem_Int *agitator_1speed_cnt;
CB_Mem_Bool *agitator_1speed_flipflop;
CB_Mem_Float *agitator_1speed_nominalTime;
CB_Mem_Bool *agitator_1speed_thermalLogic;
CB_Mem_Bool *agitator_1speed_cmdFbLogic;
CB_Mem_Float *agitator_1speed_nominalSpeed;
CB_Mem_Bool *agitator_1speed_d_locking;
CB_Mem_Float *agitator_1speed_v_d_locking;
CB_Mem_Bool *agitator_1speed_d_electrical;
CB_Mem_Bool *agitator_1speed_v_d_electrical;
CB_Mem_Bool *agitator_1speed_d_cmdFB;
CB_Mem_Bool *agitator_1speed_v_d_cmdFB;

/**************************** Variables *****************************/

#define voltage380 (agitator_1speed_voltage380->CB_current_value)
#define cmdSupply (agitator_1speed_cmdSupply->CB_current_value)
#define sensorSupply (agitator_1speed_sensorSupply->CB_current_value)
#define cmd (agitator_1speed_cmd->CB_current_value)
#define cmdFB (agitator_1speed_cmdFB->CB_current_value)
#define thermal (agitator_1speed_thermal->CB_current_value)
#define speedVal (agitator_1speed_speedVal->CB_current_value)
#define speedPercent (agitator_1speed_speedPercent->CB_current_value)
#define increment (agitator_1speed_increment->CB_current_value)
#define memo (agitator_1speed_memo->CB_current_value)
#define state (agitator_1speed_state->CB_current_value)
#define speedSetpoint (agitator_1speed_speedSetpoint->CB_current_value)
#define cnt (agitator_1speed_cnt->CB_current_value)
#define flipflop (agitator_1speed_flipflop->CB_current_value)
#define nominalTime (agitator_1speed_nominalTime->CB_current_value)
#define thermalLogic (agitator_1speed_thermalLogic->CB_current_value)
#define cmdFbLogic (agitator_1speed_cmdFbLogic->CB_current_value)
#define nominalSpeed (agitator_1speed_nominalSpeed->CB_current_value)
#define d_locking (agitator_1speed_d_locking->CB_current_value)
#define v_d_locking (agitator_1speed_v_d_locking->CB_current_value)
#define d_electrical (agitator_1speed_d_electrical->CB_current_value)
#define v_d_electrical (agitator_1speed_v_d_electrical->CB_current_value)
#define d_cmdFB (agitator_1speed_d_cmdFB->CB_current_value)
#define v_d_cmdFB (agitator_1speed_v_d_cmdFB->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__agitator_1speed_init(void)
{
	(agitator_1speed_voltage380)->CB_current_value = 1; /*voltage380*/
	(agitator_1speed_cmdSupply)->CB_current_value = 1; /*cmdSupply*/
	(agitator_1speed_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Float+2)->CB_current_value = 0.5; /*nominalTime*/
	(self.Bool+4)->CB_current_value = 1; /*cmdFbLogic*/
	(self.Float+3)->CB_current_value = 5000.0; /*nominalSpeed*/
	self.Bool+=10;
	self.Int+=1;
	self.Float+=5;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__agitator_1speed(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		agitator_1speed_increment = self.Float+0;
		agitator_1speed_memo = self.Bool+0;
		agitator_1speed_state = self.Bool+1;
		agitator_1speed_speedSetpoint = self.Float+1;
		agitator_1speed_cnt = self.Int+0;
		agitator_1speed_flipflop = self.Bool+2;
		agitator_1speed_nominalTime = self.Float+2;
		agitator_1speed_thermalLogic = self.Bool+3;
		agitator_1speed_cmdFbLogic = self.Bool+4;
		agitator_1speed_nominalSpeed = self.Float+3;
		agitator_1speed_d_locking = self.Bool+5;
		agitator_1speed_v_d_locking = self.Float+4;
		agitator_1speed_d_electrical = self.Bool+6;
		agitator_1speed_v_d_electrical = self.Bool+7;
		agitator_1speed_d_cmdFB = self.Bool+8;
		agitator_1speed_v_d_cmdFB = self.Bool+9;

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
			/* This module simulates the behaviour of a 1-speed motorized		*/
			/* agitator and its electrical control logic.				*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Management of orders from Control Part					*/
			/*	if there is no power supply for command 				*/
			/*     the contactor doesn't understand the control order		*/
			/* ----------------------------------------------------------------	*/
			if (cmd && cmdSupply) memo = 1;
			if (!cmd || !cmdSupply || d_electrical) memo = 0;

			/* ----------------------------------------------------------------	*/
			/* Calculation of the on-state of contactor				*/
			/* ----------------------------------------------------------------	*/
			state=memo & voltage380;

			/* ----------------------------------------------------------------	*/
			/* Management of the speed ramp						*/
			/* ----------------------------------------------------------------	*/
			if (d_locking)  speedVal = v_d_locking;
			else {
				/* Compute the speed setpoint according to contator's state	*/
				speedSetpoint = 0.0;
				if (state) {
					speedSetpoint = nominalSpeed;
					if (nominalTime > 0.0)
						increment = (nominalSpeed / nominalTime) * (CLOCK_PERIOD/1000000.0);
				}

				/* Compute the speed ramp	*/
				if ( speedVal < speedSetpoint ) {
					speedVal += increment;
					if ( speedVal > speedSetpoint ) speedVal = speedSetpoint;
				}
				if ( speedVal > speedSetpoint ) {
					speedVal -= increment;
					if (speedVal < speedSetpoint) speedVal = speedSetpoint;
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
				thermal= ! thermalLogic && sensorSupply;

			/* ----------------------------------------------------------------	*/
			/* Management of feedback to Control Part					*/
			/*     if a fault is required, the contactor feed-back 		*/
			/*		 takes a preset state.					*/
			/*	if there is no power supply for sensors 				*/
			/*         contactor feed-back returns nothing				*/
			/*     else contactor feed-back returns the contactor state combined	*/
			/*	    with wiring logic.						*/
			/* ----------------------------------------------------------------	*/
			if (d_cmdFB) cmdFB = v_d_cmdFB;
			else 	
				cmdFB = (memo ^ ! cmdFbLogic) && sensorSupply;

			/* ----------------------------------------------------------------	*/
			/* Animation of blades : only for MAN					*/
			/* ----------------------------------------------------------------	*/
			if (speedPercent != 0.0) {
				if (! flipflop) cnt ++;
				else cnt --;
				if (cnt >4) {
					cnt = 4;
					flipflop = 1;
				}
				if (cnt <= 0) flipflop = 0;
			}


		}

		CB_post_bool(agitator_1speed_cmdFB);
		CB_post_bool(agitator_1speed_thermal);
		CB_post_float(agitator_1speed_speedVal);
		CB_post_float(agitator_1speed_speedPercent);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 10;
	self.Int += 1;
	self.Float += 5;

	return 0;
}

