/*2023-10-03T11:13:37-01:00*/

/********************************************************************
 * flour_weighing.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "flour_weighing.h"


/**************************** Variables *****************************/

CB_Index flour_weighing__num = 0;
CB_Mem_Bool *flour_weighing_weighingRequest;
CB_Mem_Bool *flour_weighing_cycleInProgress;
CB_Mem_Int *flour_weighing_weighedWeight;
CB_Mem_Int *flour_weighing_flourWeight;
CB_Mem_Bool *flour_weighing_weighingOk;
CB_Mem_Bool *flour_weighing_introduceFlour;
CB_Mem_Bool *flour_weighing_introFlourEnd;
CB_Mem_Bool *flour_weighing_exitFlour;
CB_Mem_Bool *flour_weighing_exitFlourEnd;
CB_Mem_Int *flour_weighing_totalWeight;
CB_Mem_Bool *flour_weighing_endOfWeighing;
CB_Mem_Int *flour_weighing_maxWeight;
CB_Mem_Bool *flour_weighing__X_10;
CB_Mem_Bool *flour_weighing__X_11;
CB_Mem_Bool *flour_weighing__X_12;
CB_Mem_Bool *flour_weighing__X_13;
CB_Mem_Bool *flour_weighing__X_14;
CB_Mem_Bool *flour_weighing__X_15;
CB_Mem_Int *flour_weighing__TIMER_12;
CB_Mem_Bool *flour_weighing__X_12_PREV;
CB_Mem_Bool *flour_weighing__X_11_PREV;
CB_Mem_Bool *flour_weighing__X_13_PREV;
CB_Mem_Bool *flour_weighing__X_15_PREV;

/**************************** Variables *****************************/

#define weighingRequest (flour_weighing_weighingRequest->CB_current_value)
#define cycleInProgress (flour_weighing_cycleInProgress->CB_current_value)
#define weighedWeight (flour_weighing_weighedWeight->CB_current_value)
#define flourWeight (flour_weighing_flourWeight->CB_current_value)
#define weighingOk (flour_weighing_weighingOk->CB_current_value)
#define introduceFlour (flour_weighing_introduceFlour->CB_current_value)
#define introFlourEnd (flour_weighing_introFlourEnd->CB_current_value)
#define exitFlour (flour_weighing_exitFlour->CB_current_value)
#define exitFlourEnd (flour_weighing_exitFlourEnd->CB_current_value)
#define totalWeight (flour_weighing_totalWeight->CB_current_value)
#define endOfWeighing (flour_weighing_endOfWeighing->CB_current_value)
#define maxWeight (flour_weighing_maxWeight->CB_current_value)
#define _X_10 (flour_weighing__X_10->CB_current_value)
#define _X_11 (flour_weighing__X_11->CB_current_value)
#define _X_12 (flour_weighing__X_12->CB_current_value)
#define _X_13 (flour_weighing__X_13->CB_current_value)
#define _X_14 (flour_weighing__X_14->CB_current_value)
#define _X_15 (flour_weighing__X_15->CB_current_value)
#define _TIMER_12 (*((unsigned long *)&(flour_weighing__TIMER_12->CB_current_value)))
#define _X_12_PREV (flour_weighing__X_12_PREV->CB_current_value)
#define _X_11_PREV (flour_weighing__X_11_PREV->CB_current_value)
#define _X_13_PREV (flour_weighing__X_13_PREV->CB_current_value)
#define _X_15_PREV (flour_weighing__X_15_PREV->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _batch__flour_weighing_init(void)
{
	(self.Int+1)->CB_current_value = 100; /*maxWeight*/
	(self.Bool+1)->CB_current_value = 1; /*_X_10*/
	self.Bool+=11;
	self.Int+=3;


	return 0;
}


/************************ Behavior function *************************/

int batch__flour_weighing(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		flour_weighing_totalWeight = self.Int+0;
		flour_weighing_endOfWeighing = self.Bool+0;
		flour_weighing_maxWeight = self.Int+1;
		flour_weighing__X_10 = self.Bool+1;
		flour_weighing__X_11 = self.Bool+2;
		flour_weighing__X_12 = self.Bool+3;
		flour_weighing__X_13 = self.Bool+4;
		flour_weighing__X_14 = self.Bool+5;
		flour_weighing__X_15 = self.Bool+6;
		flour_weighing__TIMER_12 = self.Int+2;
		flour_weighing__X_12_PREV = self.Bool+7;
		flour_weighing__X_11_PREV = self.Bool+8;
		flour_weighing__X_13_PREV = self.Bool+9;
		flour_weighing__X_15_PREV = self.Bool+10;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _Y_13;
			unsigned char _Y_12;
			unsigned char _Y_11;
			unsigned char _Y_10;
			unsigned char _Y_9;
			unsigned char _Y_8;
			unsigned char _Y_7;
			/*pre-SFC*/
			endOfWeighing = (totalWeight + weighedWeight >= flourWeight) || (weighedWeight >= maxWeight);
			/*transitions G1*/
			_Y_13 = _X_14 && (cycleInProgress && (totalWeight < flourWeight));
			_Y_12 = _X_10 && (cycleInProgress && weighingRequest);
			_Y_11 = _X_11 && endOfWeighing;
			_Y_10 = _X_12 && (cycleInProgress && (_TIMER_12 >= 250 * 1000.0 / CLOCK_PERIOD));
			_Y_9 = _X_13 && (cycleInProgress && (weighedWeight <= 1));
			_Y_8 = _X_14 && (!_Y_13 && (cycleInProgress && (totalWeight >= flourWeight)));
			_Y_7 = _X_15 && !weighingRequest;
			/*evolutions G1*/
			if (_Y_13) {
				_X_14 = 0;
			}
			if (_Y_12) {
				_X_10 = 0;
			}
			if (_Y_11) {
				_X_11 = 0;
			}
			if (_Y_10) {
				_X_12 = 0;
			}
			if (_Y_9) {
				_X_13 = 0;
			}
			if (_Y_8) {
				_X_14 = 0;
			}
			if (_Y_7) {
				_X_15 = 0;
			}
			if (_Y_13) {
				_X_11 = 1;
			}
			if (_Y_12) {
				_X_11 = 1;
			}
			if (_Y_11) {
				_X_12 = 1;
			}
			if (_Y_10) {
				_X_13 = 1;
			}
			if (_Y_9) {
				_X_14 = 1;
			}
			if (_Y_8) {
				_X_15 = 1;
			}
			if (_Y_7) {
				_X_10 = 1;
			}
			/*timers G1*/
			if (_X_12) {
				if (CB_edge_bool(_X_12, _X_12_PREV) > 0) {
					_TIMER_12 = 0;
				}
				else {
					if (_TIMER_12 < _MAX_TIMER) {
						_TIMER_12 = _TIMER_12 + 1;
					}
				}
			}
			/*actions G1*/
			if (CB_edge_bool(_X_11, _X_11_PREV) < 0) {
				introduceFlour = 0;
			}
			if (CB_edge_bool(_X_13, _X_13_PREV) < 0) {
				exitFlour = 0;
			}
			if (CB_edge_bool(_X_15, _X_15_PREV) < 0) {
				weighingOk = 0;
			}
			if (_X_10) {
				totalWeight = 0;
			}
			if (_X_11) {
				introduceFlour = 1;
			}
			if (_X_12) {
				if (CB_edge_bool(_X_12, _X_12_PREV) > 0) {
					totalWeight = totalWeight + weighedWeight;
				}
			}
			if (_X_13) {
				exitFlour = 1;
			}
			if (_X_15) {
				weighingOk = 1;
			}
			/*post-SFC*/
			if (!cycleInProgress) {
				introduceFlour = 0;
				exitFlour = 0;
			}
			introFlourEnd = !introduceFlour || !cycleInProgress;
			exitFlourEnd = !exitFlour || !cycleInProgress;
			_X_13_PREV = _X_13;
			_X_11_PREV = _X_11;
			_X_12_PREV = _X_12;
			_X_15_PREV = _X_15;
		}

		CB_post_bool(flour_weighing_weighingOk);
		CB_post_bool(flour_weighing_introduceFlour);
		CB_post_bool(flour_weighing_introFlourEnd);
		CB_post_bool(flour_weighing_exitFlour);
		CB_post_bool(flour_weighing_exitFlourEnd);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 11;
	self.Int += 3;

	return 0;
}
