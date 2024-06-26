/*2023-10-03T11:13:04-01:00*/

/********************************************************************
 * tank.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "tank.h"



/**************************** Variables *****************************/

CB_Index tank__num = 0;
CB_Mem_Float *tank_inletFlow;
CB_Mem_Float *tank_outletFlow;
CB_Mem_Float *tank_tankLevel;
CB_Mem_Float *tank_percent;
CB_Mem_Float *tank_capacity;
CB_Mem_Bool *tank_d_level;
CB_Mem_Float *tank_v_d_level;

/**************************** Variables *****************************/

#define inletFlow (tank_inletFlow->CB_current_value)
#define outletFlow (tank_outletFlow->CB_current_value)
#define tankLevel (tank_tankLevel->CB_current_value)
#define percent (tank_percent->CB_current_value)
#define capacity (tank_capacity->CB_current_value)
#define d_level (tank_d_level->CB_current_value)
#define v_d_level (tank_v_d_level->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__tank_init(void)
{
	(self.Float+1)->CB_current_value = 1000.0; /*capacity*/
	self.Bool+=1;
	self.Float+=3;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__tank(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		tank_percent = self.Float+0;
		tank_capacity = self.Float+1;
		tank_d_level = self.Bool+0;
		tank_v_d_level = self.Float+2;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* -----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Catégorie :   batch							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2010							*/
			/* -----------------------------------------------------------------	*/
			/* This module simulates the behaviour of the level in a tank.	*/
			/* The input data for draining and filling are analog flows.		*/
			/* ----------------------------------------------------------------	*/

			if (d_level ) tankLevel = v_d_level;	/* fault */
			else  {
				/* compute level */
				tankLevel = tankLevel + inletFlow - outletFlow;

				/* bound level */
				if ( tankLevel >= capacity ) tankLevel = capacity;
				if ( tankLevel <= 0.0 ) tankLevel = 0.0; 	
			}

			/* ----------------------------------------------------------------	*/
			/* Compute the percentage of filling					*/
			/* ----------------------------------------------------------------	*/
			if (capacity != 0.0) percent = ((tankLevel / capacity)*100);
		}

		CB_post_float(tank_tankLevel);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Float += 3;

	return 0;
}

