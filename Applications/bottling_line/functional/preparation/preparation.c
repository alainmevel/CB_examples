/*2023-10-03T11:13:41-01:00*/

/********************************************************************
 * preparation.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "preparation.h"


/**************************** Variables *****************************/

CB_Index preparation__num = 0;
CB_Mem_Bool *preparation_preparationRequest;
CB_Mem_Bool *preparation_productionWaiting;
CB_Mem_Bool *preparation_highLevel1;
CB_Mem_Bool *preparation_highLevel2;
CB_Mem_Bool *preparation_highLevel3;
CB_Mem_Bool *preparation_preparationValve1;
CB_Mem_Bool *preparation_preparationValve2;
CB_Mem_Bool *preparation_preparationValve3;
CB_Mem_Bool *preparation_preparationValve4;
CB_Mem_Bool *preparation_preparationPump1;
CB_Mem_Bool *preparation_preparationPump2;
CB_Mem_Bool *preparation_preparationAgit;
CB_Mem_Bool *preparation_preparationEnd;
CB_Mem_Bool *preparation__X_10;
CB_Mem_Bool *preparation__X_11;
CB_Mem_Bool *preparation__X_12;
CB_Mem_Bool *preparation__X_13;
CB_Mem_Bool *preparation__X_11_PREV;
CB_Mem_Bool *preparation__X_12_PREV;
CB_Mem_Bool *preparation__X_13_PREV;

/**************************** Variables *****************************/

#define preparationRequest (preparation_preparationRequest->CB_current_value)
#define productionWaiting (preparation_productionWaiting->CB_current_value)
#define highLevel1 (preparation_highLevel1->CB_current_value)
#define highLevel2 (preparation_highLevel2->CB_current_value)
#define highLevel3 (preparation_highLevel3->CB_current_value)
#define preparationValve1 (preparation_preparationValve1->CB_current_value)
#define preparationValve2 (preparation_preparationValve2->CB_current_value)
#define preparationValve3 (preparation_preparationValve3->CB_current_value)
#define preparationValve4 (preparation_preparationValve4->CB_current_value)
#define preparationPump1 (preparation_preparationPump1->CB_current_value)
#define preparationPump2 (preparation_preparationPump2->CB_current_value)
#define preparationAgit (preparation_preparationAgit->CB_current_value)
#define preparationEnd (preparation_preparationEnd->CB_current_value)
#define _X_10 (preparation__X_10->CB_current_value)
#define _X_11 (preparation__X_11->CB_current_value)
#define _X_12 (preparation__X_12->CB_current_value)
#define _X_13 (preparation__X_13->CB_current_value)
#define _X_11_PREV (preparation__X_11_PREV->CB_current_value)
#define _X_12_PREV (preparation__X_12_PREV->CB_current_value)
#define _X_13_PREV (preparation__X_13_PREV->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _bottling_line__preparation_init(void)
{
	(self.Bool+0)->CB_current_value = 1; /*_X_10*/
	self.Bool+=7;


	return 0;
}


/************************ Behavior function *************************/

int bottling_line__preparation(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		preparation__X_10 = self.Bool+0;
		preparation__X_11 = self.Bool+1;
		preparation__X_12 = self.Bool+2;
		preparation__X_13 = self.Bool+3;
		preparation__X_11_PREV = self.Bool+4;
		preparation__X_12_PREV = self.Bool+5;
		preparation__X_13_PREV = self.Bool+6;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _Y_8;
			unsigned char _Y_7;
			unsigned char _Y_6;
			unsigned char _Y_5;
			/*pre-SFC*/
			/*transitions G1*/
			_Y_8 = _X_10 && preparationRequest;
			_Y_7 = _X_11 && (highLevel1 && highLevel2);
			_Y_6 = _X_12 && highLevel3;
			_Y_5 = _X_13 && productionWaiting;
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
				preparationValve1 = 0;
				preparationValve2 = 0;
			}
			if (CB_edge_bool(_X_12, _X_12_PREV) < 0) {
				preparationAgit = 0;
				preparationPump1 = 0;
				preparationPump2 = 0;
				preparationValve3 = 0;
				preparationValve4 = 0;
			}
			if (CB_edge_bool(_X_13, _X_13_PREV) < 0) {
				preparationEnd = 0;
			}
			if (_X_11) {
				if (!highLevel1) {
					preparationValve1 = 1;
				}
				else {
					preparationValve1 = 0;
				}
				if (!highLevel2) {
					preparationValve2 = 1;
				}
				else {
					preparationValve2 = 0;
				}
			}
			if (_X_12) {
				preparationAgit = 1;
				preparationPump1 = 1;
				preparationPump2 = 1;
				preparationValve3 = 1;
				preparationValve4 = 1;
			}
			if (_X_13) {
				preparationEnd = 1;
			}
			/*post-SFC*/
			_X_13_PREV = _X_13;
			_X_11_PREV = _X_11;
			_X_12_PREV = _X_12;
		}

		CB_post_bool(preparation_preparationValve1);
		CB_post_bool(preparation_preparationValve2);
		CB_post_bool(preparation_preparationValve3);
		CB_post_bool(preparation_preparationValve4);
		CB_post_bool(preparation_preparationPump1);
		CB_post_bool(preparation_preparationPump2);
		CB_post_bool(preparation_preparationAgit);
		CB_post_bool(preparation_preparationEnd);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 7;

	return 0;
}

