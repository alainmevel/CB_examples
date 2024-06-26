/*2023-10-03T11:12:54-01:00*/

/********************************************************************
 * suction_head.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"
#include "cb_products_iec.h"

#include "suction_head.h"



/**************************** Variables *****************************/

CB_Index suction_head__num = 0;
CB_Mem_Float *suction_head_incPositionX;
CB_Mem_Float *suction_head_incPositionY;
CB_Mem_Float *suction_head_incPositionZ;
CB_Mem_Bool *suction_head_vacuum;
CB_Mem_Bool *suction_head_presence;
CB_Mem_Int *suction_head_status_act_prod;
CB_Mem_Float *suction_head_m11;
CB_Mem_Float *suction_head_m12;
CB_Mem_Float *suction_head_m13;
CB_Mem_Float *suction_head_m14;
CB_Mem_Float *suction_head_m21;
CB_Mem_Float *suction_head_m22;
CB_Mem_Float *suction_head_m23;
CB_Mem_Float *suction_head_m24;
CB_Mem_Float *suction_head_m31;
CB_Mem_Float *suction_head_m32;
CB_Mem_Float *suction_head_m33;
CB_Mem_Float *suction_head_m34;
CB_Mem_Float *suction_head_m41;
CB_Mem_Float *suction_head_m42;
CB_Mem_Float *suction_head_m43;
CB_Mem_Float *suction_head_m44;
CB_Mem_Bool *suction_head_productPresence;
CB_Mem_Bool *suction_head_suckProduct;
CB_Mem_Float *suction_head_incrementPositionX;
CB_Mem_Float *suction_head_incrementPositionY;
CB_Mem_Float *suction_head_incrementPositionZ;
CB_Mem_Bool *suction_head_presenceLogic;
CB_Mem_Bool *suction_head_d_presence;
CB_Mem_Bool *suction_head_v_d_presence;

/**************************** Variables *****************************/

#define incPositionX (suction_head_incPositionX->CB_current_value)
#define incPositionY (suction_head_incPositionY->CB_current_value)
#define incPositionZ (suction_head_incPositionZ->CB_current_value)
#define vacuum (suction_head_vacuum->CB_current_value)
#define presence (suction_head_presence->CB_current_value)
#define status_act_prod (suction_head_status_act_prod->CB_current_value)
#define m11 (suction_head_m11->CB_current_value)
#define m12 (suction_head_m12->CB_current_value)
#define m13 (suction_head_m13->CB_current_value)
#define m14 (suction_head_m14->CB_current_value)
#define m21 (suction_head_m21->CB_current_value)
#define m22 (suction_head_m22->CB_current_value)
#define m23 (suction_head_m23->CB_current_value)
#define m24 (suction_head_m24->CB_current_value)
#define m31 (suction_head_m31->CB_current_value)
#define m32 (suction_head_m32->CB_current_value)
#define m33 (suction_head_m33->CB_current_value)
#define m34 (suction_head_m34->CB_current_value)
#define m41 (suction_head_m41->CB_current_value)
#define m42 (suction_head_m42->CB_current_value)
#define m43 (suction_head_m43->CB_current_value)
#define m44 (suction_head_m44->CB_current_value)
#define productPresence (suction_head_productPresence->CB_current_value)
#define suckProduct (suction_head_suckProduct->CB_current_value)
#define incrementPositionX (suction_head_incrementPositionX->CB_current_value)
#define incrementPositionY (suction_head_incrementPositionY->CB_current_value)
#define incrementPositionZ (suction_head_incrementPositionZ->CB_current_value)
#define presenceLogic (suction_head_presenceLogic->CB_current_value)
#define d_presence (suction_head_d_presence->CB_current_value)
#define v_d_presence (suction_head_v_d_presence->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__suction_head_init(void)
{
	(self.Float+0)->CB_current_value = 1.0; /*m11*/
	(self.Float+5)->CB_current_value = 1.0; /*m22*/
	(self.Float+10)->CB_current_value = 1.0; /*m33*/
	(self.Float+15)->CB_current_value = 1.0; /*m44*/
	(self.Bool+2)->CB_current_value = 1; /*presenceLogic*/
	self.Bool+=5;
	self.Int+=1;
	self.Float+=19;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__suction_head(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		suction_head_status_act_prod = self.Int+0;
		suction_head_m11 = self.Float+0;
		suction_head_m12 = self.Float+1;
		suction_head_m13 = self.Float+2;
		suction_head_m14 = self.Float+3;
		suction_head_m21 = self.Float+4;
		suction_head_m22 = self.Float+5;
		suction_head_m23 = self.Float+6;
		suction_head_m24 = self.Float+7;
		suction_head_m31 = self.Float+8;
		suction_head_m32 = self.Float+9;
		suction_head_m33 = self.Float+10;
		suction_head_m34 = self.Float+11;
		suction_head_m41 = self.Float+12;
		suction_head_m42 = self.Float+13;
		suction_head_m43 = self.Float+14;
		suction_head_m44 = self.Float+15;
		suction_head_productPresence = self.Bool+0;
		suction_head_suckProduct = self.Bool+1;
		suction_head_incrementPositionX = self.Float+16;
		suction_head_incrementPositionY = self.Float+17;
		suction_head_incrementPositionZ = self.Float+18;
		suction_head_presenceLogic = self.Bool+2;
		suction_head_d_presence = self.Bool+3;
		suction_head_v_d_presence = self.Bool+4;

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
			/* This module simulates the behaviour of a suction head.		*/
			/* ----------------------------------------------------------------	*/

			/* ----------------------------------------------------------------	*/
			/* Shif the suction head							*/
			/* ----------------------------------------------------------------	*/
			if (incPositionX != 0.0) moveXBy(myself, incPositionX);
			if (incPositionY != 0.0) moveYBy(myself, incPositionY);
			if (incPositionZ != 0.0) moveZBy(myself, incPositionZ);


			/* ----------------------------------------------------------------	*/
			/* Presence sensor								*/
			/* ----------------------------------------------------------------	*/
			if (d_presence) presence = v_d_presence;
			else
				presence=(productPresence ^ ! presenceLogic);


			/* ----------------------------------------------------------------	*/
			/* Exchange informations with products				 	*/
			/* ----------------------------------------------------------------	*/

			suckProduct=vacuum;
			productPresence=0;

			/* => shift informations	*/
			incrementPositionX=incPositionX;
			incrementPositionY=incPositionY;
			incrementPositionZ=incPositionZ;
		}

		CB_post_bool(suction_head_presence);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 5;
	self.Int += 1;
	self.Float += 19;

	return 0;
}

