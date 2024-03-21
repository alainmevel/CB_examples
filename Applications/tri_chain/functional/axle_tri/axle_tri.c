/*2023-10-03T11:13:53-01:00*/

/********************************************************************
 * axle_tri.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "axle_tri.h"



/**************************** Variables *****************************/

CB_Index axle_tri__num = 0;
CB_Mem_Float *axle_tri_speed;
CB_Mem_Float *axle_tri_positionTranslat;
CB_Mem_Float *axle_tri_percentTranslat;
CB_Mem_Float *axle_tri_incTranslat;
CB_Mem_Bool *axle_tri_firstCycle;
CB_Mem_Float *axle_tri_nbCyclePerSec;
CB_Mem_Float *axle_tri_initTranslat;
CB_Mem_Float *axle_tri_maxTranslat;
CB_Mem_Float *axle_tri_minTranslat;
CB_Mem_Bool *axle_tri_d_locking;
CB_Mem_Bool *axle_tri_v_d_locking;

/**************************** Variables *****************************/

#define speed (axle_tri_speed->CB_current_value)
#define positionTranslat (axle_tri_positionTranslat->CB_current_value)
#define percentTranslat (axle_tri_percentTranslat->CB_current_value)
#define incTranslat (axle_tri_incTranslat->CB_current_value)
#define firstCycle (axle_tri_firstCycle->CB_current_value)
#define nbCyclePerSec (axle_tri_nbCyclePerSec->CB_current_value)
#define initTranslat (axle_tri_initTranslat->CB_current_value)
#define maxTranslat (axle_tri_maxTranslat->CB_current_value)
#define minTranslat (axle_tri_minTranslat->CB_current_value)
#define d_locking (axle_tri_d_locking->CB_current_value)
#define v_d_locking (axle_tri_v_d_locking->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tri_chain__axle_tri_init(void)
{
	(self.Float+2)->CB_current_value = 10000.0; /*maxTranslat*/
	self.Bool+=3;
	self.Float+=4;


	return 0;
}


/************************ Behavior function *************************/

int tri_chain__axle_tri(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		axle_tri_firstCycle = self.Bool+0;
		axle_tri_nbCyclePerSec = self.Float+0;
		axle_tri_initTranslat = self.Float+1;
		axle_tri_maxTranslat = self.Float+2;
		axle_tri_minTranslat = self.Float+3;
		axle_tri_d_locking = self.Bool+1;
		axle_tri_v_d_locking = self.Bool+2;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Actuators							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates the behaviour of a limited axle to which a	*/
			/* to which a translation speed is imparted.				*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Initialise the position of the axle for the first step of 		*/
			/* simulation.								*/
			/* ----------------------------------------------------------------	*/
			if ( ! firstCycle) {
				if (initTranslat > maxTranslat) positionTranslat = maxTranslat;
				else if (initTranslat < minTranslat) positionTranslat = minTranslat;
					else positionTranslat = initTranslat;
				firstCycle = 1;
			}

			/* -----------------------------------------------------------------	*/
			/* Translation of the axle							*/
			/* -----------------------------------------------------------------	*/

			/* compute the increment of translation according to the simulation clock	*/
			incTranslat = 0.0;
			if (! d_locking) {
				nbCyclePerSec = CLOCK_PERIOD/1000000;
				incTranslat = speed * nbCyclePerSec;
			}
			positionTranslat = positionTranslat + incTranslat;

			/* -----------------------------------------------------------------	*/
			/* Limitation of the translation of the axle 				*/
			/* -----------------------------------------------------------------	*/
			if (positionTranslat > maxTranslat) {
				incTranslat -= positionTranslat - maxTranslat;
				positionTranslat = maxTranslat;
			}
			if (positionTranslat < minTranslat) {
				incTranslat -= positionTranslat - minTranslat;
				positionTranslat = minTranslat;
			}

			/* ----------------------------------------------------------------- */
			/* Compute the percent between the position and the limit		*/
			/* ----------------------------------------------------------------- */

			percentTranslat = (100/(maxTranslat - minTranslat)) * (positionTranslat - minTranslat)  ;
					



		}

		CB_post_float(axle_tri_positionTranslat);
		CB_post_float(axle_tri_percentTranslat);
		CB_post_float(axle_tri_incTranslat);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 3;
	self.Float += 4;

	return 0;
}

