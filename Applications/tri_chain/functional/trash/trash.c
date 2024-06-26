/*2023-10-03T11:13:55-01:00*/

/********************************************************************
 * trash.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"
#include "cb_products_iec.h"

#include "trash.h"



/**************************** Variables *****************************/

CB_Index trash__num = 0;
CB_Mem_Int *trash_status_act_prod;
CB_Mem_Float *trash_m11;
CB_Mem_Float *trash_m12;
CB_Mem_Float *trash_m13;
CB_Mem_Float *trash_m14;
CB_Mem_Float *trash_m21;
CB_Mem_Float *trash_m22;
CB_Mem_Float *trash_m23;
CB_Mem_Float *trash_m24;
CB_Mem_Float *trash_m31;
CB_Mem_Float *trash_m32;
CB_Mem_Float *trash_m33;
CB_Mem_Float *trash_m34;
CB_Mem_Float *trash_m41;
CB_Mem_Float *trash_m42;
CB_Mem_Float *trash_m43;
CB_Mem_Float *trash_m44;
CB_Mem_Float *trash_px;
CB_Mem_Float *trash_py;
CB_Mem_Float *trash_pz;
CB_Mem_Float *trash_dx;
CB_Mem_Float *trash_dy;
CB_Mem_Float *trash_dz;

/**************************** Variables *****************************/

#define status_act_prod (trash_status_act_prod->CB_current_value)
#define m11 (trash_m11->CB_current_value)
#define m12 (trash_m12->CB_current_value)
#define m13 (trash_m13->CB_current_value)
#define m14 (trash_m14->CB_current_value)
#define m21 (trash_m21->CB_current_value)
#define m22 (trash_m22->CB_current_value)
#define m23 (trash_m23->CB_current_value)
#define m24 (trash_m24->CB_current_value)
#define m31 (trash_m31->CB_current_value)
#define m32 (trash_m32->CB_current_value)
#define m33 (trash_m33->CB_current_value)
#define m34 (trash_m34->CB_current_value)
#define m41 (trash_m41->CB_current_value)
#define m42 (trash_m42->CB_current_value)
#define m43 (trash_m43->CB_current_value)
#define m44 (trash_m44->CB_current_value)
#define px (trash_px->CB_current_value)
#define py (trash_py->CB_current_value)
#define pz (trash_pz->CB_current_value)
#define dx (trash_dx->CB_current_value)
#define dy (trash_dy->CB_current_value)
#define dz (trash_dz->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tri_chain__trash_init(void)
{
	(self.Float+0)->CB_current_value = 1.0; /*m11*/
	(self.Float+5)->CB_current_value = 1.0; /*m22*/
	(self.Float+10)->CB_current_value = 1.0; /*m33*/
	(self.Float+15)->CB_current_value = 1.0; /*m44*/
	self.Int+=1;
	self.Float+=22;


	return 0;
}


/************************ Behavior function *************************/

int tri_chain__trash(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		trash_status_act_prod = self.Int+0;
		trash_m11 = self.Float+0;
		trash_m12 = self.Float+1;
		trash_m13 = self.Float+2;
		trash_m14 = self.Float+3;
		trash_m21 = self.Float+4;
		trash_m22 = self.Float+5;
		trash_m23 = self.Float+6;
		trash_m24 = self.Float+7;
		trash_m31 = self.Float+8;
		trash_m32 = self.Float+9;
		trash_m33 = self.Float+10;
		trash_m34 = self.Float+11;
		trash_m41 = self.Float+12;
		trash_m42 = self.Float+13;
		trash_m43 = self.Float+14;
		trash_m44 = self.Float+15;
		trash_px = self.Float+16;
		trash_py = self.Float+17;
		trash_pz = self.Float+18;
		trash_dx = self.Float+19;
		trash_dy = self.Float+20;
		trash_dz = self.Float+21;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Actor Myself init *************************/

		setMyselfFor(self_num);

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Product							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates the work pieces'exit from the plant. 	*/
			/* The product is destroyed when it interacts with this actor.	*/
			/* -----------------------------------------------------------------	*/
		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Int += 1;
	self.Float += 22;

	return 0;
}

