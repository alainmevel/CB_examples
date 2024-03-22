/*2023-10-03T11:13:15-01:00*/

/********************************************************************
 * roundcam.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "roundcam.h"



/**************************** Variables *****************************/

CB_Index roundcam__num = 0;
CB_Mem_Float *roundcam_rotationSpeedDegS;
CB_Mem_Float *roundcam_angleRotationDeg;
CB_Mem_Float *roundcam_angleRotationRad;
CB_Mem_Float *roundcam_angle_modulo;
CB_Mem_Bool *roundcam_firstCycle;
CB_Mem_Float *roundcam_incrementRotation;
CB_Mem_Float *roundcam_initAngle;
CB_Mem_Float *roundcam_modulo;
CB_Mem_Bool *roundcam_d_locking;
CB_Mem_Bool *roundcam_v_d_locking;

/**************************** Variables *****************************/

#define rotationSpeedDegS (roundcam_rotationSpeedDegS->CB_current_value)
#define angleRotationDeg (roundcam_angleRotationDeg->CB_current_value)
#define angleRotationRad (roundcam_angleRotationRad->CB_current_value)
#define angle_modulo (roundcam_angle_modulo->CB_current_value)
#define firstCycle (roundcam_firstCycle->CB_current_value)
#define incrementRotation (roundcam_incrementRotation->CB_current_value)
#define initAngle (roundcam_initAngle->CB_current_value)
#define modulo (roundcam_modulo->CB_current_value)
#define d_locking (roundcam_d_locking->CB_current_value)
#define v_d_locking (roundcam_v_d_locking->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__roundcam_init(void)
{
	(self.Float+2)->CB_current_value = 1000.0; /*modulo*/
	self.Bool+=3;
	self.Float+=3;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__roundcam(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		roundcam_firstCycle = self.Bool+0;
		roundcam_incrementRotation = self.Float+0;
		roundcam_initAngle = self.Float+1;
		roundcam_modulo = self.Float+2;
		roundcam_d_locking = self.Bool+1;
		roundcam_v_d_locking = self.Bool+2;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Author : 3DS								*/
			/* Update date : October 2017						*/
			/* ----------------------------------------------------------------	*/
			/* This module simulate the behaviour of a cam 	.			*/
			/* The position of the cam goes from 0 to 360 with	*/
			/* the given rotation speed.						*/
			/*										*/
			/* nota : - the starting position is forced by initAngle.		*/
			/*	   - the speed setpoint can be set in				*/
			/*		- degree per second	(rotationSpeedDegS)			*/
			/* ----------------------------------------------------------------	*/

			/* Declaration of variables which don't need to be visualized during simulation */

			/* ----------------------------------------------------------------	*/
			/* Initialization of the position of the cam for the first step of	*/
			/* simulation.								*/
			/* ----------------------------------------------------------------	*/
			if (! firstCycle) {
				if (initAngle > 360 ) angleRotationDeg  = 360 ;
				else
					if (initAngle < 0) angleRotationDeg  = 0;
					else angleRotationDeg  = initAngle;

				firstCycle = 1;
			}

			/* ----------------------------------------------------------------	*/
			/* Rotation and translation (height of cam)				*/
			/* ----------------------------------------------------------------	*/
			if ((!d_locking) && ((rotationSpeedDegS!=0.0)||(rotationSpeedDegS!=0.0))) {

				/* compute the increment of rotation according to the clock of simulation	*/

				incrementRotation= rotationSpeedDegS * (CLOCK_PERIOD /1000000.0);
				/* compute the angle of rotation (degrees)	*/
				angleRotationDeg = angleRotationDeg  + incrementRotation;
				if (angleRotationDeg  > 360 ) {angleRotationDeg  -= 360 ;}
				if (angleRotationDeg  < -360 ) {angleRotationDeg  += 360 ;}
			}

			/* Conversion deg in Radians  */		
			angleRotationRad = angleRotationDeg * 0.03491;
			angle_modulo = (angleRotationDeg *modulo) / 360.0;
		}

		CB_post_float(roundcam_angleRotationDeg);
		CB_post_float(roundcam_angleRotationRad);
		CB_post_float(roundcam_angle_modulo);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 3;
	self.Float += 3;

	return 0;
}

