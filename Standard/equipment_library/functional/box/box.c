#define mx_self_is_prod
#include "cb_comp.h"
#include "iec_1131.h"
#ifndef GEN_EMBEDDED
#include "box.h"
#else
#include "equipment_library_box.h"
#endif

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);
#if defined(mx_use_equipment_library__product_creator) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/product_creator/product_creator.h"
#else
#include "equipment_library_product_creator.h"
#endif
#endif
#if defined(mx_use_equipment_library__conveyor) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/conveyor/conveyor.h"
#else
#include "equipment_library_conveyor.h"
#endif
#endif
#if defined(mx_use_equipment_library__stop) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/stop/stop.h"
#else
#include "equipment_library_stop.h"
#endif
#endif
#if defined(mx_use_equipment_library__presence_sensor) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/presence_sensor/presence_sensor.h"
#else
#include "equipment_library_presence_sensor.h"
#endif
#endif
#if defined(mx_use_equipment_library__product_killer) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/product_killer/product_killer.h"
#else
#include "equipment_library_product_killer.h"
#endif
#endif
#if defined(mx_use_equipment_library__suction_head) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/suction_head/suction_head.h"
#else
#include "equipment_library_suction_head.h"
#endif
#endif
#if defined(mx_use_equipment_library__box) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/box/box.h"
#else
#include "equipment_library_box.h"
#endif
#endif
#if defined(mx_use_equipment_library__tipper) | defined(mx_verif)
#ifndef GEN_EMBEDDED
#include "equipment_library/functional/tipper/tipper.h"
#else
#include "equipment_library_tipper.h"
#endif
#endif


#define DIR_FLOW		1
#define DIR_INVERSE_FLOW	-1


/*****************************************************
                             Variables
******************************************************/
CB_Index box__num = 0;
CB_Mem_Int *box_status_act_prod;
CB_Mem_Float *box_m11;
CB_Mem_Float *box_m12;
CB_Mem_Float *box_m13;
CB_Mem_Float *box_m14;
CB_Mem_Float *box_m21;
CB_Mem_Float *box_m22;
CB_Mem_Float *box_m23;
CB_Mem_Float *box_m24;
CB_Mem_Float *box_m31;
CB_Mem_Float *box_m32;
CB_Mem_Float *box_m33;
CB_Mem_Float *box_m34;
CB_Mem_Float *box_m41;
CB_Mem_Float *box_m42;
CB_Mem_Float *box_m43;
CB_Mem_Float *box_m44;
CB_Mem_Float *box_movementConv;
CB_Mem_Bool *box_contact;
CB_Mem_Float *box_centreRotX;
CB_Mem_Float *box_centreRotZ;
CB_Mem_Float *box_centreRotY;
CB_Mem_Int *box_moveDirection;
CB_Mem_Int *box_idConv;
CB_Mem_Bool *box_moveAuthorization;
CB_Mem_Int *box_number;
CB_Mem_Int *box_idProdBelow;
CB_Mem_Float *box_oldOtherPx;
CB_Mem_Float *box_oldOtherPy;
CB_Mem_Float *box_oldOtherPz;
CB_Mem_Float *box_oldOtherRx;
CB_Mem_Float *box_oldOtherRy;
CB_Mem_Float *box_oldOtherRz;
CB_Mem_Float *box_gravitySpeed;
CB_Mem_Int *box_oldIdConv;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

/*****************************************************
                             Variables
******************************************************/
#define status_act_prod (*(long *)(&(box_status_act_prod->CB_current_value)))
#define m11 (box_m11->CB_current_value)
#define m12 (box_m12->CB_current_value)
#define m13 (box_m13->CB_current_value)
#define m14 (box_m14->CB_current_value)
#define m21 (box_m21->CB_current_value)
#define m22 (box_m22->CB_current_value)
#define m23 (box_m23->CB_current_value)
#define m24 (box_m24->CB_current_value)
#define m31 (box_m31->CB_current_value)
#define m32 (box_m32->CB_current_value)
#define m33 (box_m33->CB_current_value)
#define m34 (box_m34->CB_current_value)
#define m41 (box_m41->CB_current_value)
#define m42 (box_m42->CB_current_value)
#define m43 (box_m43->CB_current_value)
#define m44 (box_m44->CB_current_value)
#define movementConv (box_movementConv->CB_current_value)
#define contact (box_contact->CB_current_value)
#define centreRotX (box_centreRotX->CB_current_value)
#define centreRotZ (box_centreRotZ->CB_current_value)
#define centreRotY (box_centreRotY->CB_current_value)
#define moveDirection (*(short *)(&(box_moveDirection->CB_current_value)))
#define idConv (*(long *)(&(box_idConv->CB_current_value)))
#define moveAuthorization (box_moveAuthorization->CB_current_value)
#define number (*(short *)(&(box_number->CB_current_value)))
#define idProdBelow (*(long *)(&(box_idProdBelow->CB_current_value)))
#define oldOtherPx (box_oldOtherPx->CB_current_value)
#define oldOtherPy (box_oldOtherPy->CB_current_value)
#define oldOtherPz (box_oldOtherPz->CB_current_value)
#define oldOtherRx (box_oldOtherRx->CB_current_value)
#define oldOtherRy (box_oldOtherRy->CB_current_value)
#define oldOtherRz (box_oldOtherRz->CB_current_value)
#define gravitySpeed (box_gravitySpeed->CB_current_value)
#define oldIdConv (*(long *)(&(box_oldIdConv->CB_current_value)))

/*****************************************************
                             Initialization function
******************************************************/
void equipment_library__box_init()
{
	(self.Float + 16)->CB_current_value = 0.0; /*movementConv*/;
	(self.Bool + 0)->CB_current_value = 0; /*contact*/;
	(self.Float + 17)->CB_current_value = 0.0; /*centreRotX*/;
	(self.Float + 18)->CB_current_value = 0.0; /*centreRotZ*/;
	(self.Float + 19)->CB_current_value = 0.0; /*centreRotY*/;
	(self.Int + 1)->CB_current_value = 0; /*moveDirection*/;
	(self.Int + 2)->CB_current_value = 0; /*idConv*/;
	(self.Bool + 1)->CB_current_value = 0; /*moveAuthorization*/;
	(self.Int + 3)->CB_current_value = 0; /*number*/;
	(self.Int + 4)->CB_current_value = 0; /*idProdBelow*/;
	(self.Float + 20)->CB_current_value = 0.0; /*oldOtherPx*/;
	(self.Float + 21)->CB_current_value = 0.0; /*oldOtherPy*/;
	(self.Float + 22)->CB_current_value = 0.0; /*oldOtherPz*/;
	(self.Float + 23)->CB_current_value = 0.0; /*oldOtherRx*/;
	(self.Float + 24)->CB_current_value = 0.0; /*oldOtherRy*/;
	(self.Float + 25)->CB_current_value = 0.0; /*oldOtherRz*/;
	(self.Float + 26)->CB_current_value = 0.0; /*gravitySpeed*/;
	(self.Int + 5)->CB_current_value = 0; /*oldIdConv*/;
}

int equipment_library__box()
{
	if (prodGetMustInit(myself)) {
		equipment_library__box_init();
		prodSetMustInit(myself, 0);
	}

/*****************************************************
                             Internals
******************************************************/
	box_status_act_prod = self.Int + 0;
	box_m11 = self.Float + 0;
	box_m12 = self.Float + 1;
	box_m13 = self.Float + 2;
	box_m14 = self.Float + 3;
	box_m21 = self.Float + 4;
	box_m22 = self.Float + 5;
	box_m23 = self.Float + 6;
	box_m24 = self.Float + 7;
	box_m31 = self.Float + 8;
	box_m32 = self.Float + 9;
	box_m33 = self.Float + 10;
	box_m34 = self.Float + 11;
	box_m41 = self.Float + 12;
	box_m42 = self.Float + 13;
	box_m43 = self.Float + 14;
	box_m44 = self.Float + 15;
	box_movementConv = self.Float + 16;
	box_contact = self.Bool + 0;
	box_centreRotX = self.Float + 17;
	box_centreRotZ = self.Float + 18;
	box_centreRotY = self.Float + 19;
	box_moveDirection = self.Int + 1;
	box_idConv = self.Int + 2;
	box_moveAuthorization = self.Bool + 1;
	box_number = self.Int + 3;
	box_idProdBelow = self.Int + 4;
	box_oldOtherPx = self.Float + 20;
	box_oldOtherPy = self.Float + 21;
	box_oldOtherPz = self.Float + 22;
	box_oldOtherRx = self.Float + 23;
	box_oldOtherRy = self.Float + 24;
	box_oldOtherRz = self.Float + 25;
	box_gravitySpeed = self.Float + 26;
	box_oldIdConv = self.Int + 5;
/*****************************************************
                             Component user code
******************************************************/
	if(otherModel == __prelude) {
			/* ----------------------------------------------------------------	*/
			/* Initialisation of local variables of the instance of the product	*/
			/* ----------------------------------------------------------------	*/
			
			movementConv = 0.0;
			contact = 0;
			moveAuthorization = 1;
			idConv=-1;
		return;
	}

	if(otherModel == __postlude) {
			/* ----------------------------------------------------------------	*/
			/* If there is no contact, the box falls down thanks to gravity	*/	
			/* ----------------------------------------------------------------	*/
			if (contact == 0) 
				moveZBy(myself, gravitySpeed*-1.0);
			
			
			/* ----------------------------------------------------------------	*/
			/* Shift on conveyors if authorization					*/
			/* ----------------------------------------------------------------	*/
			if (moveAuthorization == 1 && (idConv>=0)) 
				moveRelativeAnotherBy(myself, idConv, movementConv, 0.0, 0.0);
			
			
			/* ----------------------------------------------------------------	*/
			/* Reset memories								*/
			/* ----------------------------------------------------------------	*/
			if (contact == 0) {
				moveDirection = 0;
				idProdBelow = -1;
			}
			
		return;
	}

#if defined(mx_use_equipment_library__product_creator) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__product_creator__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__product_creator__/**/var)
#endif
	if(otherModel == equipment_library__product_creator) {
			/* ----------------------------------------------------------------	*/
			/* Information to the creation module that a product is in its area	*/
			/* ----------------------------------------------------------------	*/
			 
			otherVar(productPresence) = 1;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__conveyor) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__conveyor__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__conveyor__/**/var)
#endif
	if(otherModel == equipment_library__conveyor) {
			/* ----------------------------------------------------------------	*/
			/* Interaction between the product and conveyors			*/
			/* Convention : a conveyor is always oriented so that its X-axis is	*/
			/*	  	  in the same direction as the flow			*/
			/* ----------------------------------------------------------------	*/
			
			/* ----------------------------------------------------------------	*/
			/* We retrieve the conveyor's data if the center of the product is	*/
			/* included in the volume of the conveyor.				*/
			/* ----------------------------------------------------------------	*/
			if ((idConv == -1) || isMyCenterIncludedInXYOfOther(myself, other)) {
				/* Traverse speed on the conveyor	*/
				movementConv = otherVar(incShiftProduct) ;
			
				/* Keep trace of traverse direction of the conveyor		*/
				if (movementConv  > 0.0) moveDirection = DIR_FLOW;
				if (movementConv  < 0.0) moveDirection = DIR_INVERSE_FLOW;
			
				/* Get the identifier of the conveyor in order to be		*/
				/* able to shift the product in its coordinate system		*/
				idConv = other;
				oldIdConv = idConv;
			
				/* If the conveyor is a traverser, a lift, ...  		*/
				/* the product msut follow it	 				*/
				if (otherVar(incrementPositionX) != 0.0) moveXBy(myself, otherVar(incrementPositionX));
				if (otherVar(incrementPositionY) != 0.0) moveYBy(myself, otherVar(incrementPositionY));
				if (otherVar(incrementPositionZ) != 0.0) alignTwoObjectsRelativeThirdZ(myself, other, other);
			
				/* Management of the rotation of the product on a 		*/
				/* swivelling table, rotary plate ring, ...			*/
				/* Keep trace of the rotation center in order to be 		*/
				/* able to give them to products that could be stacked		*/
				/* above this instance						*/
				centreRotX = otherVar(centerRotX);
				centreRotY = otherVar(centerRotY);
				centreRotZ = otherVar(centerRotZ);
			
				if ((otherVar(incRotX) != 0.0) || (otherVar(incRotY)!= 0) || (otherVar(incRotZ)!= 0.0))
					rotateBy(myself, otherVar(incRotX), otherVar(incRotY), otherVar(incRotZ), centreRotX, centreRotY, centreRotZ);  
			
			}
			
			/* ----------------------------------------------------------------	*/
			/* The product lays on a solid						*/
			/* ----------------------------------------------------------------	*/
			contact = 1;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__stop) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__stop__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__stop__/**/var)
#endif
	if(otherModel == equipment_library__stop) {
			/* ----------------------------------------------------------------	*/
			/* Stop on a mechanical stop	  					*/
			/* Management of the interaction with a mechanical stop with or 	*/
			/* without blocking of the product on the mechanical stop according	*/
			/* to the shift direction.							*/
			/* ----------------------------------------------------------------	*/
			
			
			/* The movement of the product can be forbidden according to the 	*/
			/* position of the mechanical stop, the position of the product 	*/
			/* and the shift direction. 						*/
			if ( oldIdConv >= 0 && ((moveDirection == DIR_FLOW && (getCenterXInAnother(myself, oldIdConv ) < getCenterXInAnother(other, oldIdConv ))) 
				|| (moveDirection == DIR_INVERSE_FLOW && (getCenterXInAnother(myself, oldIdConv ) > getCenterXInAnother(other, oldIdConv )))) ) {
			
				moveAuthorization=0;
			 }
			
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__presence_sensor) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__presence_sensor__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__presence_sensor__/**/var)
#endif
	if(otherModel == equipment_library__presence_sensor) {
			/* ----------------------------------------------------------------	*/
			/* Information to the sensor that a product is in its detection area	*/
			/* ----------------------------------------------------------------	*/
			
			otherVar(detection) = 1;
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__product_killer) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__product_killer__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__product_killer__/**/var)
#endif
	if(otherModel == equipment_library__product_killer) {
			/* ----------------------------------------------------------------	*/
			/* Destruction of the current instance of the product if the killer	*/
			/* is active.									*/
			/* ----------------------------------------------------------------	*/
			
			if (otherVar(isActive)) prodKill(myself);
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__suction_head) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__suction_head__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__suction_head__/**/var)
#endif
	if(otherModel == equipment_library__suction_head) {
			/* ----------------------------------------------------------------	*/
			/* Information to the actor that a product is present			*/
			/* ----------------------------------------------------------------	*/
			otherVar(productPresence) = 1;
			
			/* ----------------------------------------------------------------	*/
			/* Keep contact with the actor only if the head is sucking		*/
			/* ----------------------------------------------------------------	*/
			if (otherVar(suckProduct)) {
				moveRelativeAnotherBy(myself, other, otherVar(incrementPositionX), otherVar(incrementPositionY), otherVar(incrementPositionZ));
				contact = 1;
			}
			
			
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__box) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__box__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__box__/**/var)
#endif
	if(otherModel == equipment_library__box) {
			/* ----------------------------------------------------------------	*/
			/* Interaction between two products	 				*/
			/* ----------------------------------------------------------------	*/
			
			
			/* Verify that the product whose position has to be updated is 	*/
			/* located on one side of the current instance and not above or 	*/
			/* below it.									*/
			if ((getCenterZ(myself) > getCenterZ(other) - (getSizeZ(other)/2.0)) && (getCenterZ(myself) < getCenterZ(other)+(getSizeZ(other)/2.0))) {
				/* Update the position of the product that is behind the 	*/
				/* other according to the shift direction				*/
				if ( (moveDirection == DIR_FLOW && (getCenterXInAnother(myself, idConv) < getCenterXInAnother(other, idConv))) 
					|| (moveDirection == DIR_INVERSE_FLOW && (getCenterXInAnother(myself, idConv) > getCenterXInAnother(other, idConv))) ) {
			
					/* Align the 2 products one behind the other if its speed is lower 		*/
					if (fabs(movementConv ) > fabs(otherVar(movementConv )))
						alignTwoObjectsRelativeThirdX(myself, other, idConv);
			
					/* Forbid the shift						*/
					moveAuthorization=0;
				 }
			}
			
			/* Interaction with the product below					*/
			if ((getCenterZ(myself)  > getCenterZ(other)+ (getSizeZ(other) / 2)) 
				&&  ((getCenterX(myself) > getCenterX(other) - (getSizeX(other)/4.0)) && (getCenterX(myself) < getCenterX(other)+(getSizeX(other)/4.0)))
				&&  ((getCenterY(myself) > getCenterY(other) - (getSizeY(other)/4.0)) && (getCenterY(myself) < getCenterY(other)+(getSizeY(other)/4.0))))  {
				/* Same movement than the product below				*/
				if (idProdBelow == other) {
					moveBy(myself, getPositionX(other)-oldOtherPx, getPositionY(other)-oldOtherPy, getPositionZ(other)-oldOtherPz);
					rotateBy(myself, getAngleX(other)-oldOtherRx, getAngleY(other)-oldOtherRy, getAngleZ(other)-oldOtherRz,
							otherVar(centreRotX), otherVar(centreRotY), otherVar(centreRotZ));
				}
				oldOtherPx=getPositionX(other); oldOtherPy=getPositionY(other); oldOtherPz=getPositionZ(other);
				oldOtherRx=getAngleX(other); oldOtherRy=getAngleY(other); oldOtherRz=getAngleZ(other);
				centreRotX=otherVar(centreRotX); centreRotY=otherVar(centreRotY); centreRotZ=otherVar(centreRotZ);
			
				idProdBelow = other;
			
				/* The product lays on a solid					*/
				contact = 1;
			
				/* The next line of code can be added in order to align 	*/
				/* correctly  the products one on the others ...		*/
				/* We should align both products in Z-axis according to the 	*/
				/* absolute coordinate system and not according to the 	*/
				/* relative system coordinate in order to have a generic 	*/
				/* behaviour.								*/
				/* => adapt this according to the application when needed	*/
			
				/* alignTwoObjectsRelativeThirdZ(myself, other, other); 	*/
				
			}
			
			
			
			
			
			
			
		return;
	}
#undef otherVar
#endif

#if defined(mx_use_equipment_library__tipper) | defined(mx_verif)
#ifdef SY_MSW
#define otherVar(var) (otherPointers.mx_acces_equipment_library__tipper__##var)
#else
#define otherVar(var) (otherPointers.mx_acces_equipment_library__tipper__/**/var)
#endif
	if(otherModel == equipment_library__tipper) {
			/* ----------------------------------------------------------------	*/
			/* The product turns over 							*/
			/* ----------------------------------------------------------------	*/
			if (otherVar(incrementRotation != 0.0)) {
				rotateYBy(myself, otherVar(incrementRotation),otherVar(initPosX),
					 otherVar(initPosY), otherVar(initPosZ));
				moveAuthorization = 0;
			} 
			else {
			/* automatic repositionning of the product on fixed positions  */
				CB_Float fixedPositions[5]={0.0, 90.0, 180.0, 270.0, 360.0};
				CB_Float deltaRecalage = 10.0;
				CB_Int i;
				CB_Float currentAngle;
				currentAngle=getAngleY(myself);  
				for (i=0; i<5; i++) {
					if ((currentAngle- deltaRecalage < fixedPositions[i]) && (currentAngle+ deltaRecalage > fixedPositions[i])) {
						if (currentAngle!= fixedPositions[i]) {
							rotateYTo(myself, fixedPositions[i],otherVar(initPosX),otherVar(initPosY), otherVar(initPosZ));
						}
						break;
					 }
				}
			}
			
			
			
			/* ----------------------------------------------------------------	*/
			/* The product lays on a solid						*/
			/* ----------------------------------------------------------------	*/
			contact = 1;
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
#undef movementConv
#undef contact
#undef centreRotX
#undef centreRotZ
#undef centreRotY
#undef moveDirection
#undef idConv
#undef moveAuthorization
#undef number
#undef idProdBelow
#undef oldOtherPx
#undef oldOtherPy
#undef oldOtherPz
#undef oldOtherRx
#undef oldOtherRy
#undef oldOtherRz
#undef gravitySpeed
#undef oldIdConv


int equipment_library__box__test_interarctions()
{
#if defined(mx_use_equipment_library__product_creator) | defined(mx_verif)
	if(otherModel == equipment_library__product_creator) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__conveyor) | defined(mx_verif)
	if(otherModel == equipment_library__conveyor) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__stop) | defined(mx_verif)
	if(otherModel == equipment_library__stop) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__presence_sensor) | defined(mx_verif)
	if(otherModel == equipment_library__presence_sensor) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__product_killer) | defined(mx_verif)
	if(otherModel == equipment_library__product_killer) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__suction_head) | defined(mx_verif)
	if(otherModel == equipment_library__suction_head) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__box) | defined(mx_verif)
	if(otherModel == equipment_library__box) {
		return 1;
	}
#endif

#if defined(mx_use_equipment_library__tipper) | defined(mx_verif)
	if(otherModel == equipment_library__tipper) {
		return 1;
	}
#endif

	return 0;
}
