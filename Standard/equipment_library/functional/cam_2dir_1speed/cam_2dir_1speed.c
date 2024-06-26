/*2023-10-03T11:13:19-01:00*/

/********************************************************************
 * cam_2dir_1speed.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "cam_2dir_1speed.h"

#include <math.h>

/**************************** Variables *****************************/

CB_Index cam_2dir_1speed__num = 0;
CB_Mem_Bool *cam_2dir_1speed_forward;
CB_Mem_Bool *cam_2dir_1speed_backward;
CB_Mem_Float *cam_2dir_1speed_positionTranslat;
CB_Mem_Float *cam_2dir_1speed_percentTranslat;
CB_Mem_Float *cam_2dir_1speed_incrementTranslat;
CB_Mem_Float *cam_2dir_1speed_angleRotationDeg;
CB_Mem_Float *cam_2dir_1speed_angleRotationRad;
CB_Mem_Bool *cam_2dir_1speed_firstCycle;
CB_Mem_Float *cam_2dir_1speed_incrementRotation;
CB_Mem_Bool *cam_2dir_1speed_memoFwd;
CB_Mem_Bool *cam_2dir_1speed_memoBwd;
CB_Mem_Float *cam_2dir_1speed_maxTranslat;
CB_Mem_Float *cam_2dir_1speed_speedVal;
CB_Mem_Float *cam_2dir_1speed_initTranslat;
CB_Mem_Float *cam_2dir_1speed_minTranslat;
CB_Mem_Float *cam_2dir_1speed_oldPosition;
CB_Mem_Bool *cam_2dir_1speed_d_locking;
CB_Mem_Bool *cam_2dir_1speed_v_d_locking;

/**************************** Variables *****************************/

#define forward (cam_2dir_1speed_forward->CB_current_value)
#define backward (cam_2dir_1speed_backward->CB_current_value)
#define positionTranslat (cam_2dir_1speed_positionTranslat->CB_current_value)
#define percentTranslat (cam_2dir_1speed_percentTranslat->CB_current_value)
#define incrementTranslat (cam_2dir_1speed_incrementTranslat->CB_current_value)
#define angleRotationDeg (cam_2dir_1speed_angleRotationDeg->CB_current_value)
#define angleRotationRad (cam_2dir_1speed_angleRotationRad->CB_current_value)
#define firstCycle (cam_2dir_1speed_firstCycle->CB_current_value)
#define incrementRotation (cam_2dir_1speed_incrementRotation->CB_current_value)
#define memoFwd (cam_2dir_1speed_memoFwd->CB_current_value)
#define memoBwd (cam_2dir_1speed_memoBwd->CB_current_value)
#define maxTranslat (cam_2dir_1speed_maxTranslat->CB_current_value)
#define speedVal (cam_2dir_1speed_speedVal->CB_current_value)
#define initTranslat (cam_2dir_1speed_initTranslat->CB_current_value)
#define minTranslat (cam_2dir_1speed_minTranslat->CB_current_value)
#define oldPosition (cam_2dir_1speed_oldPosition->CB_current_value)
#define d_locking (cam_2dir_1speed_d_locking->CB_current_value)
#define v_d_locking (cam_2dir_1speed_v_d_locking->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__cam_2dir_1speed_init(void)
{
	(self.Float+1)->CB_current_value = 1000.0; /*maxTranslat*/
	(self.Float+2)->CB_current_value = 2.0; /*speedVal*/
	self.Bool+=5;
	self.Float+=6;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__cam_2dir_1speed(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		cam_2dir_1speed_firstCycle = self.Bool+0;
		cam_2dir_1speed_incrementRotation = self.Float+0;
		cam_2dir_1speed_memoFwd = self.Bool+1;
		cam_2dir_1speed_memoBwd = self.Bool+2;
		cam_2dir_1speed_maxTranslat = self.Float+1;
		cam_2dir_1speed_speedVal = self.Float+2;
		cam_2dir_1speed_initTranslat = self.Float+3;
		cam_2dir_1speed_minTranslat = self.Float+4;
		cam_2dir_1speed_oldPosition = self.Float+5;
		cam_2dir_1speed_d_locking = self.Bool+3;
		cam_2dir_1speed_v_d_locking = self.Bool+4;

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
			/* This module simulate the behaviour of a cam with 2 directions and	*/
			/* 1 speed.									*/
			/* The position of the cam goes from minTranslat to maxTranslat with	*/
			/* the rotation speed speedVal.						*/
			/*										*/
			/* nota : the starting position is forced by initTranslat.		*/
			/* ----------------------------------------------------------------	*/

			/* Declaration of variables which don't need to be visualized during simulation */
			float pi=3.1415926;



			/* ----------------------------------------------------------------	*/
			/* Initialization of the position of the cam for the first step of	*/
			/* simulation.								*/
			/* ----------------------------------------------------------------	*/
			if (! firstCycle) {
				if (initTranslat > maxTranslat) positionTranslat = maxTranslat;
				else
					if (initTranslat < minTranslat) positionTranslat = minTranslat;
					else positionTranslat = initTranslat;

				firstCycle = 1;
				if ((maxTranslat - minTranslat) != 0.0)
					angleRotationRad = acos(1 - ((positionTranslat - minTranslat)/(maxTranslat - minTranslat)*2.0));
			}

			/* ----------------------------------------------------------------	*/
			/* Manage priorities of inputs' switching					*/
			/* ----------------------------------------------------------------	*/
			if (forward && !memoBwd) memoFwd = 1;
			if (!forward) memoFwd = 0;
			if (!memoFwd && backward) memoBwd= 1;
			if (!backward) memoBwd = 0;


			/* ----------------------------------------------------------------	*/
			/* Rotation and translation (height of cam)				*/
			/* ----------------------------------------------------------------	*/
			if ((!d_locking) && (memoFwd || memoBwd)) {

				/* compute the increment of rotation according to the clock of simulation	*/
				incrementRotation= speedVal * (CLOCK_PERIOD/1000000);

				/* compute the angle of rotation (radian)	*/
				if (memoFwd) angleRotationRad = angleRotationRad + incrementRotation;
				if (memoBwd) angleRotationRad = angleRotationRad - incrementRotation;
				if (angleRotationRad >= (2*pi)) {angleRotationRad -= 2*pi;}
				
				/* compute the position of translation	*/
				positionTranslat=(1 - cos(angleRotationRad))*(maxTranslat-minTranslat)/2.0 + minTranslat;
			}

			/* ----------------------------------------------------------------	*/
			/* Compute the pecentage of height between the current position	*/
			/* and the lowest and highest points of the cam				*/
			/* ----------------------------------------------------------------	*/
			percentTranslat = (100/(maxTranslat - minTranslat)) * (positionTranslat - minTranslat)  ;
					
			/* ----------------------------------------------------------------	*/
			/* Conversion of the rotation angle from radian to degree		*/
			/* ----------------------------------------------------------------	*/
			angleRotationDeg = (angleRotationRad*180)/pi;

			/* ----------------------------------------------------------------	*/
			/* Increment of translation							*/
			/* ----------------------------------------------------------------	*/
			incrementTranslat = positionTranslat - oldPosition;
			oldPosition = positionTranslat;
		}

		CB_post_float(cam_2dir_1speed_positionTranslat);
		CB_post_float(cam_2dir_1speed_percentTranslat);
		CB_post_float(cam_2dir_1speed_incrementTranslat);
		CB_post_float(cam_2dir_1speed_angleRotationDeg);
		CB_post_float(cam_2dir_1speed_angleRotationRad);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 5;
	self.Float += 6;

	return 0;
}

