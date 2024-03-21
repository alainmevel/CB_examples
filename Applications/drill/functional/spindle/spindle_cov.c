/*2023-10-03T11:13:44-01:00*/

/********************************************************************
 * spindle_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "spindle.h"


/**************************** Variables *****************************/

CB_Index spindle__num = 0;
CB_Mem_Bool *spindle_rotation;
CB_Mem_Bool *spindle_acknowledgePB;
CB_Mem_Bool *spindle_equipmentFault;
CB_Mem_Bool *spindle_contactor;
CB_Mem_Int *spindle_rotationFault;
CB_Mem_Bool *spindle__X_10;
CB_Mem_Bool *spindle__X_11;
CB_Mem_Bool *spindle_acknowledgePB_PREV;
CB_Mem_Int *spindle_acknowledgePB_EDGE;
CB_Mem_Bool *spindle__X_11_PREV;

/**************************** Variables *****************************/

#define rotation (spindle_rotation->CB_current_value)
#define acknowledgePB (spindle_acknowledgePB->CB_current_value)
#define equipmentFault (spindle_equipmentFault->CB_current_value)
#define contactor (spindle_contactor->CB_current_value)
#define rotationFault (spindle_rotationFault->CB_current_value)
#define _X_10 (spindle__X_10->CB_current_value)
#define _X_11 (spindle__X_11->CB_current_value)
#define acknowledgePB_PREV (spindle_acknowledgePB_PREV->CB_current_value)
#define acknowledgePB_EDGE (spindle_acknowledgePB_EDGE->CB_current_value)
#define _X_11_PREV (spindle__X_11_PREV->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _drill__spindle_init(void)
{
	(self.Bool+0)->CB_current_value = 1; /*_X_10*/
	self.Bool+=4;
	self.Int+=1;


	return 0;
}


/************************ Behavior function *************************/

int drill__spindle(void)
{
	static char *__comp_name = "drill.spindle";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		spindle__X_10 = self.Bool+0;
		spindle__X_11 = self.Bool+1;
		spindle_acknowledgePB_PREV = self.Bool+2;
		spindle_acknowledgePB_EDGE = self.Int+0;
		spindle__X_11_PREV = self.Bool+3;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _Y_4;
			unsigned char _Y_3;
			acknowledgePB_EDGE = CB_edge_bool(acknowledgePB, acknowledgePB_PREV);
			/*pre-SFC*/
			if (acknowledgePB_EDGE > 0) {
				cov_control_struct(__comp_name, self_num, INPRESFC, 1, IFTHEN);
				rotationFault = 0;
			}
			else {
				cov_control_struct(__comp_name, self_num, INPRESFC, 1, IFELSE);
			}
			if (_X_11 && equipmentFault) {
				cov_control_struct(__comp_name, self_num, INPRESFC, 4, IFTHEN);
				rotationFault = 1;
			}
			else {
				cov_control_struct(__comp_name, self_num, INPRESFC, 4, IFELSE);
			}
			/*transitions G1*/
			_Y_4 = _X_10 && (rotation && (rotationFault == 0));
			_Y_3 = _X_11 && (!rotation || (rotationFault > 0));
			/*evolutions G1*/
			if (_Y_4) {
				_X_10 = 0;
			}
			if (_Y_3) {
				_X_11 = 0;
			}
			if (_Y_4) {
				_X_11 = 1;
			}
			if (_Y_3) {
				_X_10 = 1;
			}
			/*timers G1*/
			/*actions G1*/
			if (CB_edge_bool(_X_11, _X_11_PREV) < 0) {
				contactor = 0;
			}
			if (_X_11) {
				contactor = 1;
			}
			/*post-SFC*/
			acknowledgePB_PREV = acknowledgePB;
			_X_11_PREV = _X_11;
		}

		CB_post_bool(spindle_contactor);
		CB_post_int(spindle_rotationFault);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 4;
	self.Int += 1;

	return 0;
}

