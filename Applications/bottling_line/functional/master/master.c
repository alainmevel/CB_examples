/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * master.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "master.h"


/**************************** Variables *****************************/

CB_Index master__num = 0;
CB_Mem_Bool *master_startCyclePB;
CB_Mem_Bool *master_initPB;
CB_Mem_Bool *master_preparationPB;
CB_Mem_Bool *master_productionPB;
CB_Mem_Bool *master_closingPB;
CB_Mem_Bool *master_initEnd;
CB_Mem_Bool *master_preparationEnd;
CB_Mem_Bool *master_closingEnd;
CB_Mem_Bool *master_lowLevel3;
CB_Mem_Bool *master_initializationRqst;
CB_Mem_Bool *master_preparationRqst;
CB_Mem_Bool *master_productionRqst;
CB_Mem_Bool *master_closingRqst;
CB_Mem_Bool *master_masterInStandBy;
CB_Mem_Bool *master_productionWaiting;
CB_Mem_Bool *master__X_12;
CB_Mem_Bool *master__X_10;
CB_Mem_Bool *master__X_11;
CB_Mem_Bool *master__X_13;
CB_Mem_Bool *master__X_14;
CB_Mem_Bool *master__X_15;
CB_Mem_Bool *master__X_16;
CB_Mem_Bool *master__X_12_PREV;
CB_Mem_Bool *master__X_10_PREV;
CB_Mem_Bool *master__X_13_PREV;
CB_Mem_Bool *master__X_14_PREV;
CB_Mem_Bool *master__X_15_PREV;
CB_Mem_Bool *master__X_16_PREV;

/**************************** Variables *****************************/

#define startCyclePB (master_startCyclePB->CB_current_value)
#define initPB (master_initPB->CB_current_value)
#define preparationPB (master_preparationPB->CB_current_value)
#define productionPB (master_productionPB->CB_current_value)
#define closingPB (master_closingPB->CB_current_value)
#define initEnd (master_initEnd->CB_current_value)
#define preparationEnd (master_preparationEnd->CB_current_value)
#define closingEnd (master_closingEnd->CB_current_value)
#define lowLevel3 (master_lowLevel3->CB_current_value)
#define initializationRqst (master_initializationRqst->CB_current_value)
#define preparationRqst (master_preparationRqst->CB_current_value)
#define productionRqst (master_productionRqst->CB_current_value)
#define closingRqst (master_closingRqst->CB_current_value)
#define masterInStandBy (master_masterInStandBy->CB_current_value)
#define productionWaiting (master_productionWaiting->CB_current_value)
#define _X_12 (master__X_12->CB_current_value)
#define _X_10 (master__X_10->CB_current_value)
#define _X_11 (master__X_11->CB_current_value)
#define _X_13 (master__X_13->CB_current_value)
#define _X_14 (master__X_14->CB_current_value)
#define _X_15 (master__X_15->CB_current_value)
#define _X_16 (master__X_16->CB_current_value)
#define _X_12_PREV (master__X_12_PREV->CB_current_value)
#define _X_10_PREV (master__X_10_PREV->CB_current_value)
#define _X_13_PREV (master__X_13_PREV->CB_current_value)
#define _X_14_PREV (master__X_14_PREV->CB_current_value)
#define _X_15_PREV (master__X_15_PREV->CB_current_value)
#define _X_16_PREV (master__X_16_PREV->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _bottling_line__master_init(void)
{
	(self.Bool+1)->CB_current_value = 1; /*_X_10*/
	(self.Bool+8)->CB_current_value = 1; /*_X_10_PREV*/
	self.Bool+=13;


	return 0;
}


/************************ Behavior function *************************/

int bottling_line__master(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		master__X_12 = self.Bool+0;
		master__X_10 = self.Bool+1;
		master__X_11 = self.Bool+2;
		master__X_13 = self.Bool+3;
		master__X_14 = self.Bool+4;
		master__X_15 = self.Bool+5;
		master__X_16 = self.Bool+6;
		master__X_12_PREV = self.Bool+7;
		master__X_10_PREV = self.Bool+8;
		master__X_13_PREV = self.Bool+9;
		master__X_14_PREV = self.Bool+10;
		master__X_15_PREV = self.Bool+11;
		master__X_16_PREV = self.Bool+12;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _Y_9;
			unsigned char _Y_8;
			unsigned char _Y_10;
			unsigned char _Y_11;
			unsigned char _Y_14;
			unsigned char _Y_13;
			unsigned char _Y_12;
			unsigned char _Y_15;
			unsigned char _Y_16;
			unsigned char _Y_17;
			/*pre-SFC*/
			/*transitions G1*/
			_Y_9 = _X_11 && initPB;
			_Y_8 = _X_12 && initEnd;
			_Y_10 = _X_10 && startCyclePB;
			_Y_11 = _X_11 && (!_Y_9 && preparationPB);
			_Y_14 = _X_13 && preparationEnd;
			_Y_13 = _X_14 && productionPB;
			_Y_12 = _X_15 && lowLevel3;
			_Y_15 = _X_15 && (!_Y_12 && !productionPB);
			_Y_16 = _X_11 && (!_Y_9 && (!_Y_11 && closingPB));
			_Y_17 = _X_16 && closingEnd;
			/*evolutions G1*/
			if (_Y_9) {
				_X_11 = 0;
			}
			if (_Y_8) {
				_X_12 = 0;
			}
			if (_Y_10) {
				_X_10 = 0;
			}
			if (_Y_11) {
				_X_11 = 0;
			}
			if (_Y_14) {
				_X_13 = 0;
			}
			if (_Y_13) {
				_X_14 = 0;
			}
			if (_Y_12) {
				_X_15 = 0;
			}
			if (_Y_15) {
				_X_15 = 0;
			}
			if (_Y_16) {
				_X_11 = 0;
			}
			if (_Y_17) {
				_X_16 = 0;
			}
			if (_Y_9) {
				_X_12 = 1;
			}
			if (_Y_8) {
				_X_10 = 1;
			}
			if (_Y_10) {
				_X_11 = 1;
			}
			if (_Y_11) {
				_X_13 = 1;
			}
			if (_Y_14) {
				_X_14 = 1;
			}
			if (_Y_13) {
				_X_15 = 1;
			}
			if (_Y_12) {
				_X_13 = 1;
			}
			if (_Y_15) {
				_X_10 = 1;
			}
			if (_Y_16) {
				_X_16 = 1;
			}
			if (_Y_17) {
				_X_10 = 1;
			}
			/*timers G1*/
			/*actions G1*/
			if (CB_edge_bool(_X_12, _X_12_PREV) < 0) {
				initializationRqst = 0;
			}
			if (CB_edge_bool(_X_10, _X_10_PREV) < 0) {
				masterInStandBy = 0;
			}
			if (CB_edge_bool(_X_13, _X_13_PREV) < 0) {
				preparationRqst = 0;
			}
			if (CB_edge_bool(_X_14, _X_14_PREV) < 0) {
				productionWaiting = 0;
			}
			if (CB_edge_bool(_X_15, _X_15_PREV) < 0) {
				productionRqst = 0;
			}
			if (CB_edge_bool(_X_16, _X_16_PREV) < 0) {
				closingRqst = 0;
			}
			if (_X_12) {
				initializationRqst = 1;
			}
			if (_X_10) {
				masterInStandBy = 1;
			}
			if (_X_13) {
				preparationRqst = 1;
			}
			if (_X_14) {
				productionWaiting = 1;
			}
			if (_X_15) {
				productionRqst = 1;
			}
			if (_X_16) {
				closingRqst = 1;
			}
			/*post-SFC*/
			_X_13_PREV = _X_13;
			_X_16_PREV = _X_16;
			_X_10_PREV = _X_10;
			_X_14_PREV = _X_14;
			_X_12_PREV = _X_12;
			_X_15_PREV = _X_15;
		}

		CB_post_bool(master_initializationRqst);
		CB_post_bool(master_preparationRqst);
		CB_post_bool(master_productionRqst);
		CB_post_bool(master_closingRqst);
		CB_post_bool(master_masterInStandBy);
		CB_post_bool(master_productionWaiting);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 13;

	return 0;
}

