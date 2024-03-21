#define mx_self_is_prod
#include "cb_comp.h"
#include "iec_1131.h"
#ifndef GEN_EMBEDDED
#include "boxtri.h"
#else
#include "tri_chain_boxtri.h"
#endif

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);
#if defined(mx_use_tri_chain__shuttle) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "tri_chain/functional/shuttle/shuttle.h"
#else
#include "tri_chain_shuttle.h"
#endif
#endif
#if defined(mx_use_tri_chain__passing_sensor) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "tri_chain/functional/passing_sensor/passing_sensor.h"
#else
#include "tri_chain_passing_sensor.h"
#endif
#endif
#if defined(mx_use_tri_chain__passing_sensor2) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "tri_chain/functional/passing_sensor2/passing_sensor2.h"
#else
#include "tri_chain_passing_sensor2.h"
#endif
#endif
#if defined(mx_use_tri_chain__creation) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "tri_chain/functional/creation/creation.h"
#else
#include "tri_chain_creation.h"
#endif
#endif
#if defined(mx_use_tri_chain__trash) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "tri_chain/functional/trash/trash.h"
#else
#include "tri_chain_trash.h"
#endif
#endif
#if defined(mx_use_tri_chain__conveyor1) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "tri_chain/functional/conveyor1/conveyor1.h"
#else
#include "tri_chain_conveyor1.h"
#endif
#endif

/*****************************************************
                             Variables
******************************************************/
CB_Index boxtri__num = 0;
CB_Mem_Int *boxtri_status_act_prod;
CB_Mem_Float *boxtri_m11;
CB_Mem_Float *boxtri_m12;
CB_Mem_Float *boxtri_m13;
CB_Mem_Float *boxtri_m14;
CB_Mem_Float *boxtri_m21;
CB_Mem_Float *boxtri_m22;
CB_Mem_Float *boxtri_m23;
CB_Mem_Float *boxtri_m24;
CB_Mem_Float *boxtri_m31;
CB_Mem_Float *boxtri_m32;
CB_Mem_Float *boxtri_m33;
CB_Mem_Float *boxtri_m34;
CB_Mem_Float *boxtri_m41;
CB_Mem_Float *boxtri_m42;
CB_Mem_Float *boxtri_m43;
CB_Mem_Float *boxtri_m44;
CB_Mem_Float *boxtri_px;
CB_Mem_Float *boxtri_py;
CB_Mem_Float *boxtri_pz;
CB_Mem_Float *boxtri_dx;
CB_Mem_Float *boxtri_dy;
CB_Mem_Float *boxtri_dz;
CB_Mem_Float *boxtri_sxInter;
CB_Mem_Float *boxtri_syInter;
CB_Mem_Float *boxtri_interacNb;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

/*****************************************************
                             Variables
******************************************************/
#define status_act_prod (*(long *)(&(boxtri_status_act_prod->CB_current_value)))
#define m11 (boxtri_m11->CB_current_value)
#define m12 (boxtri_m12->CB_current_value)
#define m13 (boxtri_m13->CB_current_value)
#define m14 (boxtri_m14->CB_current_value)
#define m21 (boxtri_m21->CB_current_value)
#define m22 (boxtri_m22->CB_current_value)
#define m23 (boxtri_m23->CB_current_value)
#define m24 (boxtri_m24->CB_current_value)
#define m31 (boxtri_m31->CB_current_value)
#define m32 (boxtri_m32->CB_current_value)
#define m33 (boxtri_m33->CB_current_value)
#define m34 (boxtri_m34->CB_current_value)
#define m41 (boxtri_m41->CB_current_value)
#define m42 (boxtri_m42->CB_current_value)
#define m43 (boxtri_m43->CB_current_value)
#define m44 (boxtri_m44->CB_current_value)
#define px (boxtri_px->CB_current_value)
#define py (boxtri_py->CB_current_value)
#define pz (boxtri_pz->CB_current_value)
#define dx (boxtri_dx->CB_current_value)
#define dy (boxtri_dy->CB_current_value)
#define dz (boxtri_dz->CB_current_value)
#define sxInter (boxtri_sxInter->CB_current_value)
#define syInter (boxtri_syInter->CB_current_value)
#define interacNb (boxtri_interacNb->CB_current_value)

/*****************************************************
                             Initialization function
******************************************************/
void tri_chain__boxtri_init()
{
	(self.Float + 16)->CB_current_value = 0.0; /*px*/;
	(self.Float + 17)->CB_current_value = 0.0; /*py*/;
	(self.Float + 18)->CB_current_value = 0.0; /*pz*/;
	(self.Float + 19)->CB_current_value = 0.0; /*dx*/;
	(self.Float + 20)->CB_current_value = 0.0; /*dy*/;
	(self.Float + 21)->CB_current_value = 0.0; /*dz*/;
	(self.Float + 22)->CB_current_value = 0.0; /*sxInter*/;
	(self.Float + 23)->CB_current_value = 0.0; /*syInter*/;
	(self.Float + 24)->CB_current_value = 0.0; /*interacNb*/;
}

int tri_chain__boxtri()
{
	if (prodGetMustInit(myself)) {
		tri_chain__boxtri_init();
		prodSetMustInit(myself, 0);
	}

/*****************************************************
                             Internals
******************************************************/
	boxtri_status_act_prod = self.Int + 0;
	boxtri_m11 = self.Float + 0;
	boxtri_m12 = self.Float + 1;
	boxtri_m13 = self.Float + 2;
	boxtri_m14 = self.Float + 3;
	boxtri_m21 = self.Float + 4;
	boxtri_m22 = self.Float + 5;
	boxtri_m23 = self.Float + 6;
	boxtri_m24 = self.Float + 7;
	boxtri_m31 = self.Float + 8;
	boxtri_m32 = self.Float + 9;
	boxtri_m33 = self.Float + 10;
	boxtri_m34 = self.Float + 11;
	boxtri_m41 = self.Float + 12;
	boxtri_m42 = self.Float + 13;
	boxtri_m43 = self.Float + 14;
	boxtri_m44 = self.Float + 15;
	boxtri_px = self.Float + 16;
	boxtri_py = self.Float + 17;
	boxtri_pz = self.Float + 18;
	boxtri_dx = self.Float + 19;
	boxtri_dy = self.Float + 20;
	boxtri_dz = self.Float + 21;
	boxtri_sxInter = self.Float + 22;
	boxtri_syInter = self.Float + 23;
	boxtri_interacNb = self.Float + 24;
/*****************************************************
                             Component user code
******************************************************/
	if(otherModel == __prelude) {
			interacNb = 0.0;
			sxInter = 0.0;
			syInter = 0.0;
			
			
			px = getPositionX(myself);
			py = getPositionY(myself);
			pz = getPositionZ(myself);
			
			dx = getDX(myself);
			dy = getDY(myself);
			dz = getDZ(myself);
			
		return;
	}

	if(otherModel == __postlude) {
			if (interacNb > 0.0) syInter = syInter / interacNb;
			else syInter = 0.0;
			
			if (syInter != 0.0) sxInter = syInter * (-0.25);
			px = px + sxInter;
			py = py - syInter;
			
			
			
			
			moveTo(myself, px, py, pz);
		return;
	}

#if defined(mx_use_tri_chain__shuttle) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_tri_chain__shuttle__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_tri_chain__shuttle__/**/var)
#endif
	if(otherModel == tri_chain__shuttle) {
			syInter = syInter + otherVar(sProdY);
			sxInter = otherVar(sProdX);
			interacNb = interacNb + 1.0;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_tri_chain__passing_sensor) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_tri_chain__passing_sensor__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_tri_chain__passing_sensor__/**/var)
#endif
	if(otherModel == tri_chain__passing_sensor) {
			otherVar(detection)=1;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_tri_chain__passing_sensor2) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_tri_chain__passing_sensor2__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_tri_chain__passing_sensor2__/**/var)
#endif
	if(otherModel == tri_chain__passing_sensor2) {
			otherVar(detection)=1;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_tri_chain__creation) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_tri_chain__creation__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_tri_chain__creation__/**/var)
#endif
	if(otherModel == tri_chain__creation) {
			otherVar(presenceProduct)=1;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_tri_chain__trash) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_tri_chain__trash__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_tri_chain__trash__/**/var)
#endif
	if(otherModel == tri_chain__trash) {
			prodKill(myself);
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_tri_chain__conveyor1) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_tri_chain__conveyor1__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_tri_chain__conveyor1__/**/var)
#endif
	if(otherModel == tri_chain__conveyor1) {
			syInter = syInter + otherVar(sProduct);
			interacNb = interacNb + 1.0;
			
			otherVar(interaction) = 1;
		return;
	}
#undef otherVar
#endif

	free_all_alloc();
	return 0;
}
#undef status_act_prod
#undef m11
#undef m12
#undef m13
#undef m14
#undef m21
#undef m22
#undef m23
#undef m24
#undef m31
#undef m32
#undef m33
#undef m34
#undef m41
#undef m42
#undef m43
#undef m44
#undef px
#undef py
#undef pz
#undef dx
#undef dy
#undef dz
#undef sxInter
#undef syInter
#undef interacNb


int tri_chain__boxtri__test_interarctions()
{
#if defined(mx_use_tri_chain__shuttle) | defined(mx_verif)
	if(otherModel == tri_chain__shuttle) {
		return 1;
	}
#endif

#if defined(mx_use_tri_chain__passing_sensor) | defined(mx_verif)
	if(otherModel == tri_chain__passing_sensor) {
		return 1;
	}
#endif

#if defined(mx_use_tri_chain__passing_sensor2) | defined(mx_verif)
	if(otherModel == tri_chain__passing_sensor2) {
		return 1;
	}
#endif

#if defined(mx_use_tri_chain__creation) | defined(mx_verif)
	if(otherModel == tri_chain__creation) {
		return 1;
	}
#endif

#if defined(mx_use_tri_chain__trash) | defined(mx_verif)
	if(otherModel == tri_chain__trash) {
		return 1;
	}
#endif

#if defined(mx_use_tri_chain__conveyor1) | defined(mx_verif)
	if(otherModel == tri_chain__conveyor1) {
		return 1;
	}
#endif

	return 0;
}
