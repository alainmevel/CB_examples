/*2023-10-03T11:13:23-01:00*/

/********************************************************************
 * circuit_braker.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "circuit_braker.h"



/**************************** Variables *****************************/

CB_Index circuit_braker__num = 0;
CB_Mem_Bool *circuit_braker_energyBefore;
CB_Mem_Bool *circuit_braker_sensorSupply;
CB_Mem_Bool *circuit_braker_thermal;
CB_Mem_Bool *circuit_braker_energyAfter;
CB_Mem_Bool *circuit_braker_wiringLogic;
CB_Mem_Bool *circuit_braker_d_electric;
CB_Mem_Bool *circuit_braker_v_d_electric;

/**************************** Variables *****************************/

#define energyBefore (circuit_braker_energyBefore->CB_current_value)
#define sensorSupply (circuit_braker_sensorSupply->CB_current_value)
#define thermal (circuit_braker_thermal->CB_current_value)
#define energyAfter (circuit_braker_energyAfter->CB_current_value)
#define wiringLogic (circuit_braker_wiringLogic->CB_current_value)
#define d_electric (circuit_braker_d_electric->CB_current_value)
#define v_d_electric (circuit_braker_v_d_electric->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__circuit_braker_init(void)
{
	(circuit_braker_energyBefore)->CB_current_value = 1; /*energyBefore*/
	(circuit_braker_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	self.Bool+=3;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__circuit_braker(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		circuit_braker_wiringLogic = self.Bool+0;
		circuit_braker_d_electric = self.Bool+1;
		circuit_braker_v_d_electric = self.Bool+2;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Power								*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates a circuit braker.				*/
			/* The trip results in a power outage.					*/
			/* It returns its state.							*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Management of feedback to Control Part					*/
			/*     if a fault is required, the thermal circuit braker 		*/
			/*		 takes a preset state.					*/
			/*	if there is no power supply for sensor 				*/
			/*         thermal contactor returns nothing				*/
			/*     else thermal contactor returns its state combined with		*/
			/*	    wiring logic (its default value is : negative).		*/
			/* ----------------------------------------------------------------	*/

			if (d_electric) thermal=v_d_electric;
			else
				if (sensorSupply) thermal= sensorSupply ^ !wiringLogic;
				else thermal=0;

			/* ----------------------------------------------------------------	*/
			/* Management of the energy flow						*/
			/*     Energy passes through the circuit braker				*/
			/* if there is no electric fault.						*/
			/* ----------------------------------------------------------------	*/
			energyAfter = energyBefore & ! d_electric;
		}

		CB_post_bool(circuit_braker_thermal);
		CB_post_bool(circuit_braker_energyAfter);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 3;

	return 0;
}

