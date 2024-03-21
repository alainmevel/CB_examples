/*2023-10-03T11:13:51-01:00*/

/********************************************************************
 * cp_cab.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "cp_cab.h"


/**************************** Variables *****************************/

CB_Index cp_cab__num = 0;
CB_Mem_Bool *cp_cab_keyCabEnabled;
CB_Mem_Bool *cp_cab_keyCabDisabled;
CB_Mem_Bool *cp_cab_rightServiceSide;
CB_Mem_Bool *cp_cab_leftServiceSide;
CB_Mem_Bool *cp_cab_pbDoorClosing;
CB_Mem_Float *cp_cab_speed;
CB_Mem_Bool *cp_cab_keyCabEnabled2;
CB_Mem_Bool *cp_cab_keyCabDisabled2;
CB_Mem_Bool *cp_cab_enableOpeningRightC1;
CB_Mem_Bool *cp_cab_enableOpeningLeftC1;
CB_Mem_Bool *cp_cab_enableClosingRightC1;
CB_Mem_Bool *cp_cab_enableClosingLeftC1;
CB_Mem_Bool *cp_cab_cabEnabled;
CB_Mem_Bool *cp_cab_cabDisabled;
CB_Mem_Bool *cp_cab_cabIncoherence;
CB_Mem_Float *cp_cab_limitLowSpeed;
CB_Mem_Bool *cp_cab_ltreal_OUT;

/**************************** Variables *****************************/

#define keyCabEnabled (cp_cab_keyCabEnabled->CB_current_value)
#define keyCabDisabled (cp_cab_keyCabDisabled->CB_current_value)
#define rightServiceSide (cp_cab_rightServiceSide->CB_current_value)
#define leftServiceSide (cp_cab_leftServiceSide->CB_current_value)
#define pbDoorClosing (cp_cab_pbDoorClosing->CB_current_value)
#define speed (cp_cab_speed->CB_current_value)
#define keyCabEnabled2 (cp_cab_keyCabEnabled2->CB_current_value)
#define keyCabDisabled2 (cp_cab_keyCabDisabled2->CB_current_value)
#define enableOpeningRightC1 (cp_cab_enableOpeningRightC1->CB_current_value)
#define enableOpeningLeftC1 (cp_cab_enableOpeningLeftC1->CB_current_value)
#define enableClosingRightC1 (cp_cab_enableClosingRightC1->CB_current_value)
#define enableClosingLeftC1 (cp_cab_enableClosingLeftC1->CB_current_value)
#define cabEnabled (cp_cab_cabEnabled->CB_current_value)
#define cabDisabled (cp_cab_cabDisabled->CB_current_value)
#define cabIncoherence (cp_cab_cabIncoherence->CB_current_value)
#define limitLowSpeed (cp_cab_limitLowSpeed->CB_current_value)
#define ltreal_OUT (cp_cab_ltreal_OUT->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tni_train__cp_cab_init(void)
{
	(self.Float+0)->CB_current_value = 6.0; /*limitLowSpeed*/
	self.Bool+=1;
	self.Float+=1;


	return 0;
}


/************************ Behavior function *************************/

int tni_train__cp_cab(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		cp_cab_limitLowSpeed = self.Float+0;
		cp_cab_ltreal_OUT = self.Bool+0;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _10;
			unsigned char _18;
			cabEnabled = keyCabEnabled && !keyCabEnabled2;
			cabDisabled = keyCabDisabled;
			cabIncoherence = keyCabEnabled && keyCabEnabled2;
			ltreal_OUT = lt_real_OUT(speed, limitLowSpeed);
			_10 = ltreal_OUT && cabEnabled;
			enableOpeningRightC1 = _10 && rightServiceSide;
			enableOpeningLeftC1 = _10 && leftServiceSide;
			_18 = pbDoorClosing && cabEnabled;
			enableClosingRightC1 = _18 && rightServiceSide;
			enableClosingLeftC1 = _18 && leftServiceSide;
		}

		if(nb_alloc > 0) {
			free_all_alloc();
		}

		CB_post_bool(cp_cab_enableOpeningRightC1);
		CB_post_bool(cp_cab_enableOpeningLeftC1);
		CB_post_bool(cp_cab_enableClosingRightC1);
		CB_post_bool(cp_cab_enableClosingLeftC1);
		CB_post_bool(cp_cab_cabEnabled);
		CB_post_bool(cp_cab_cabDisabled);
		CB_post_bool(cp_cab_cabIncoherence);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Float += 1;

	return 0;
}
