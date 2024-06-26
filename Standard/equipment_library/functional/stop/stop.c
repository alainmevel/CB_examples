/*2023-10-03T11:12:55-01:00*/

/********************************************************************
 * stop.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"
#include "cb_products_iec.h"

#include "stop.h"



/**************************** Variables *****************************/

CB_Index stop__num = 0;
CB_Mem_Float *stop_incPositionX;
CB_Mem_Float *stop_incPositionY;
CB_Mem_Float *stop_incPositionZ;
CB_Mem_Float *stop_coordCenterX;
CB_Mem_Float *stop_coordCenterY;
CB_Mem_Float *stop_coordCenterZ;
CB_Mem_Float *stop_incRotationX;
CB_Mem_Float *stop_incRotationY;
CB_Mem_Float *stop_incRotationZ;
CB_Mem_Int *stop_status_act_prod;
CB_Mem_Float *stop_m11;
CB_Mem_Float *stop_m12;
CB_Mem_Float *stop_m13;
CB_Mem_Float *stop_m14;
CB_Mem_Float *stop_m21;
CB_Mem_Float *stop_m22;
CB_Mem_Float *stop_m23;
CB_Mem_Float *stop_m24;
CB_Mem_Float *stop_m31;
CB_Mem_Float *stop_m32;
CB_Mem_Float *stop_m33;
CB_Mem_Float *stop_m34;
CB_Mem_Float *stop_m41;
CB_Mem_Float *stop_m42;
CB_Mem_Float *stop_m43;
CB_Mem_Float *stop_m44;

/**************************** Variables *****************************/

#define incPositionX (stop_incPositionX->CB_current_value)
#define incPositionY (stop_incPositionY->CB_current_value)
#define incPositionZ (stop_incPositionZ->CB_current_value)
#define coordCenterX (stop_coordCenterX->CB_current_value)
#define coordCenterY (stop_coordCenterY->CB_current_value)
#define coordCenterZ (stop_coordCenterZ->CB_current_value)
#define incRotationX (stop_incRotationX->CB_current_value)
#define incRotationY (stop_incRotationY->CB_current_value)
#define incRotationZ (stop_incRotationZ->CB_current_value)
#define status_act_prod (stop_status_act_prod->CB_current_value)
#define m11 (stop_m11->CB_current_value)
#define m12 (stop_m12->CB_current_value)
#define m13 (stop_m13->CB_current_value)
#define m14 (stop_m14->CB_current_value)
#define m21 (stop_m21->CB_current_value)
#define m22 (stop_m22->CB_current_value)
#define m23 (stop_m23->CB_current_value)
#define m24 (stop_m24->CB_current_value)
#define m31 (stop_m31->CB_current_value)
#define m32 (stop_m32->CB_current_value)
#define m33 (stop_m33->CB_current_value)
#define m34 (stop_m34->CB_current_value)
#define m41 (stop_m41->CB_current_value)
#define m42 (stop_m42->CB_current_value)
#define m43 (stop_m43->CB_current_value)
#define m44 (stop_m44->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__stop_init(void)
{
	(self.Float+0)->CB_current_value = 1.0; /*m11*/
	(self.Float+5)->CB_current_value = 1.0; /*m22*/
	(self.Float+10)->CB_current_value = 1.0; /*m33*/
	(self.Float+15)->CB_current_value = 1.0; /*m44*/
	self.Int+=1;
	self.Float+=16;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__stop(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		stop_status_act_prod = self.Int+0;
		stop_m11 = self.Float+0;
		stop_m12 = self.Float+1;
		stop_m13 = self.Float+2;
		stop_m14 = self.Float+3;
		stop_m21 = self.Float+4;
		stop_m22 = self.Float+5;
		stop_m23 = self.Float+6;
		stop_m24 = self.Float+7;
		stop_m31 = self.Float+8;
		stop_m32 = self.Float+9;
		stop_m33 = self.Float+10;
		stop_m34 = self.Float+11;
		stop_m41 = self.Float+12;
		stop_m42 = self.Float+13;
		stop_m43 = self.Float+14;
		stop_m44 = self.Float+15;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Actor Myself init *************************/

		setMyselfFor(self_num);

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Actors and Products						*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates the behaviour of a mechanical stop.		*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Shift of the stop for a 3-axes locking					*/
			/* ----------------------------------------------------------------	*/
			if ((incPositionX != 0.0) || (incPositionY != 0.0) || (incPositionZ != 0.0))
				moveBy(myself, incPositionX, incPositionY, incPositionZ);



			/* ----------------------------------------------------------------	*/
			/* Rotation of the stop when embedded on a rotary plate ring		*/
			/* ----------------------------------------------------------------	*/
			if ((incRotationX != 0.0) || (incRotationY != 0.0) || (incRotationZ != 0.0))
				rotateBy(myself, incRotationX, incRotationY, incRotationZ, coordCenterX, coordCenterY, coordCenterZ);





		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Int += 1;
	self.Float += 16;

	return 0;
}

