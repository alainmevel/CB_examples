/*2023-10-03T11:13:41-01:00*/

/********************************************************************
 * tanks_management_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "tanks_management.h"


/**************************** Variables *****************************/

CB_Index tanks_management__num = 0;
CB_Mem_Bool *tanks_management_productionRequest;
CB_Mem_Bool *tanks_management_closingRequest;
CB_Mem_Bool *tanks_management_masterInStandBy;
CB_Mem_Bool *tanks_management_highLevel1;
CB_Mem_Bool *tanks_management_highLevel2;
CB_Mem_Bool *tanks_management_highLevel3;
CB_Mem_Bool *tanks_management_lowLevel1;
CB_Mem_Bool *tanks_management_lowLevel2;
CB_Mem_Bool *tanks_management_lowLevel3;
CB_Mem_Bool *tanks_management_pump1;
CB_Mem_Bool *tanks_management_pump2;
CB_Mem_Bool *tanks_management_valve1;
CB_Mem_Bool *tanks_management_valve2;
CB_Mem_Bool *tanks_management_valve3;
CB_Mem_Bool *tanks_management_valve4;
CB_Mem_Bool *tanks_management_lowSpeedAgitator;
CB_Mem_Bool *tanks_management_highSpeedAgitator;
CB_Mem_Bool *tanks_management_closingEnd;
CB_Mem_Bool *tanks_management__X_10;
CB_Mem_Bool *tanks_management__X_11;
CB_Mem_Bool *tanks_management__X_12;
CB_Mem_Bool *tanks_management__X_13;
CB_Mem_Bool *tanks_management__X_20;
CB_Mem_Bool *tanks_management__X_21;
CB_Mem_Bool *tanks_management__X_30;
CB_Mem_Bool *tanks_management__X_31;
CB_Mem_Bool *tanks_management__X_11_PREV;
CB_Mem_Bool *tanks_management__X_12_PREV;
CB_Mem_Bool *tanks_management__X_13_PREV;
CB_Mem_Bool *tanks_management__X_21_PREV;
CB_Mem_Bool *tanks_management__X_31_PREV;

/**************************** Variables *****************************/

#define productionRequest (tanks_management_productionRequest->CB_current_value)
#define closingRequest (tanks_management_closingRequest->CB_current_value)
#define masterInStandBy (tanks_management_masterInStandBy->CB_current_value)
#define highLevel1 (tanks_management_highLevel1->CB_current_value)
#define highLevel2 (tanks_management_highLevel2->CB_current_value)
#define highLevel3 (tanks_management_highLevel3->CB_current_value)
#define lowLevel1 (tanks_management_lowLevel1->CB_current_value)
#define lowLevel2 (tanks_management_lowLevel2->CB_current_value)
#define lowLevel3 (tanks_management_lowLevel3->CB_current_value)
#define pump1 (tanks_management_pump1->CB_current_value)
#define pump2 (tanks_management_pump2->CB_current_value)
#define valve1 (tanks_management_valve1->CB_current_value)
#define valve2 (tanks_management_valve2->CB_current_value)
#define valve3 (tanks_management_valve3->CB_current_value)
#define valve4 (tanks_management_valve4->CB_current_value)
#define lowSpeedAgitator (tanks_management_lowSpeedAgitator->CB_current_value)
#define highSpeedAgitator (tanks_management_highSpeedAgitator->CB_current_value)
#define closingEnd (tanks_management_closingEnd->CB_current_value)
#define _X_10 (tanks_management__X_10->CB_current_value)
#define _X_11 (tanks_management__X_11->CB_current_value)
#define _X_12 (tanks_management__X_12->CB_current_value)
#define _X_13 (tanks_management__X_13->CB_current_value)
#define _X_20 (tanks_management__X_20->CB_current_value)
#define _X_21 (tanks_management__X_21->CB_current_value)
#define _X_30 (tanks_management__X_30->CB_current_value)
#define _X_31 (tanks_management__X_31->CB_current_value)
#define _X_11_PREV (tanks_management__X_11_PREV->CB_current_value)
#define _X_12_PREV (tanks_management__X_12_PREV->CB_current_value)
#define _X_13_PREV (tanks_management__X_13_PREV->CB_current_value)
#define _X_21_PREV (tanks_management__X_21_PREV->CB_current_value)
#define _X_31_PREV (tanks_management__X_31_PREV->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _bottling_line__tanks_management_init(void)
{
	(self.Bool+0)->CB_current_value = 1; /*_X_10*/
	(self.Bool+4)->CB_current_value = 1; /*_X_20*/
	(self.Bool+6)->CB_current_value = 1; /*_X_30*/
	self.Bool+=13;


	return 0;
}


/************************ Behavior function *************************/

int bottling_line__tanks_management(void)
{
	static char *__comp_name = "bottling_line.tanks_management";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		tanks_management__X_10 = self.Bool+0;
		tanks_management__X_11 = self.Bool+1;
		tanks_management__X_12 = self.Bool+2;
		tanks_management__X_13 = self.Bool+3;
		tanks_management__X_20 = self.Bool+4;
		tanks_management__X_21 = self.Bool+5;
		tanks_management__X_30 = self.Bool+6;
		tanks_management__X_31 = self.Bool+7;
		tanks_management__X_11_PREV = self.Bool+8;
		tanks_management__X_12_PREV = self.Bool+9;
		tanks_management__X_13_PREV = self.Bool+10;
		tanks_management__X_21_PREV = self.Bool+11;
		tanks_management__X_31_PREV = self.Bool+12;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _Y_8;
			unsigned char _Y_7;
			unsigned char _Y_6;
			unsigned char _Y_5;
			unsigned char _Y_19;
			unsigned char _Y_18;
			unsigned char _Y_26;
			unsigned char _Y_25;
			/*pre-SFC*/
			/*transitions G1*/
			_Y_8 = _X_10 && (productionRequest || closingRequest);
			_Y_7 = _X_11 && ((((lowLevel3 && !lowLevel1) && !lowLevel2) && productionRequest) || closingRequest);
			_Y_6 = _X_12 && (((highLevel3 || lowLevel1) || lowLevel2) || !(productionRequest && closingRequest));
			_Y_5 = _X_13 && masterInStandBy;
			/*transitions G2*/
			_Y_19 = _X_20 && (productionRequest && lowLevel1);
			_Y_18 = _X_21 && (highLevel1 || !productionRequest);
			/*transitions G3*/
			_Y_26 = _X_30 && (productionRequest && lowLevel2);
			_Y_25 = _X_31 && (highLevel2 || !productionRequest);
			/*evolutions G1*/
			if (_Y_8) {
				_X_10 = 0;
			}
			if (_Y_7) {
				_X_11 = 0;
			}
			if (_Y_6) {
				_X_12 = 0;
			}
			if (_Y_5) {
				_X_13 = 0;
			}
			if (_Y_8) {
				_X_11 = 1;
			}
			if (_Y_7) {
				_X_12 = 1;
			}
			if (_Y_6) {
				_X_13 = 1;
			}
			if (_Y_5) {
				_X_10 = 1;
			}
			/*timers G1*/
			/*actions G1*/
			if (CB_edge_bool(_X_11, _X_11_PREV) < 0) {
				lowSpeedAgitator = 0;
			}
			if (CB_edge_bool(_X_12, _X_12_PREV) < 0) {
				highSpeedAgitator = 0;
				pump1 = 0;
				pump2 = 0;
				valve3 = 0;
				valve4 = 0;
			}
			if (CB_edge_bool(_X_13, _X_13_PREV) < 0) {
				closingEnd = 0;
			}
			if (_X_11) {
				lowSpeedAgitator = 1;
			}
			if (_X_12) {
				highSpeedAgitator = 1;
				pump1 = 1;
				pump2 = 1;
				valve3 = 1;
				valve4 = 1;
			}
			if (_X_13) {
				closingEnd = 1;
			}
			/*evolutions G2*/
			if (_Y_19) {
				_X_20 = 0;
			}
			if (_Y_18) {
				_X_21 = 0;
			}
			if (_Y_19) {
				_X_21 = 1;
			}
			if (_Y_18) {
				_X_20 = 1;
			}
			/*timers G2*/
			/*actions G2*/
			if (CB_edge_bool(_X_21, _X_21_PREV) < 0) {
				valve1 = 0;
			}
			if (_X_21) {
				valve1 = 1;
			}
			/*evolutions G3*/
			if (_Y_26) {
				_X_30 = 0;
			}
			if (_Y_25) {
				_X_31 = 0;
			}
			if (_Y_26) {
				_X_31 = 1;
			}
			if (_Y_25) {
				_X_30 = 1;
			}
			/*timers G3*/
			/*actions G3*/
			if (CB_edge_bool(_X_31, _X_31_PREV) < 0) {
				valve2 = 0;
			}
			if (_X_31) {
				valve2 = 1;
			}
			/*post-SFC*/
			_X_31_PREV = _X_31;
			_X_13_PREV = _X_13;
			_X_11_PREV = _X_11;
			_X_21_PREV = _X_21;
			_X_12_PREV = _X_12;
		}

		CB_post_bool(tanks_management_pump1);
		CB_post_bool(tanks_management_pump2);
		CB_post_bool(tanks_management_valve1);
		CB_post_bool(tanks_management_valve2);
		CB_post_bool(tanks_management_valve3);
		CB_post_bool(tanks_management_valve4);
		CB_post_bool(tanks_management_lowSpeedAgitator);
		CB_post_bool(tanks_management_highSpeedAgitator);
		CB_post_bool(tanks_management_closingEnd);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 13;

	return 0;
}

