/*2023-10-03T11:12:43-01:00*/

/********************************************************************
 * cb_ton_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "cb_ton.h"

//#include "cb_memory.h"

/**************************** Variables *****************************/

CB_Index cb_ton__num = 0;
CB_Mem_Bool *cb_ton_IN;
CB_Mem_Int *cb_ton_PT;
CB_Mem_Bool *cb_ton_Q0;
CB_Mem_Int *cb_ton_CV;

/**************************** Variables *****************************/

#define IN (cb_ton_IN->CB_current_value)
#define PT(i) (cb_ton_PT[i+1].CB_current_value)
#define Q0 (cb_ton_Q0->CB_current_value)
#define CV(i) (cb_ton_CV[i+1].CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _timers_counters__cb_ton_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

int timers_counters__cb_ton(void)
{
	static char *__comp_name = "timers_counters.cb_ton";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* -----------------------------------------------------------------	*/
			/* Type : BFU									*/
			/* Copyright : Geensoft							*/
			/* Version : 1.1 23/03/2010							*/
			/* -----------------------------------------------------------------	*/
			/* This is a Timing upon activation  (TON)				*/
			/* -------------------------------------------------------------	*/

				double PT_double;
				double v_t1;		// value temporary clocks in tenth of milliseconds
				double v_nbDays_t1;

				//calculation of the duration in tenth of milliseconds (number of days included)
				v_t1 = CV(1) *24.0*3600.0*10000.0 + CV(2);

				//calculation of the duration in tenth of milliseconds (number of days included)
				PT_double = PT(1)*24.0*3600.0*10000.0 + PT(2);

				if((PT_double < 0) || (PT_double > 9223372036854775807.0)){
					CV(1) = CV(2) = 0;
					Q0 = 0;
				}
				else {
					if(IN) {
						v_t1 = v_t1 + (CLOCK_PERIOD / 100.0);
						if(v_t1 > 9223372036854775807.0) {v_t1=9223372036854775807.0;}
						if (v_t1 > PT_double) {v_t1 = PT_double;}
					}
					else {
						v_t1 = 0.0;
					}
						// conversion of temporary clocks in a time format
					modf(v_t1/(24.0*3600.0*10000.0), &v_nbDays_t1);
					CV(2) = (long) v_t1 - v_nbDays_t1*24.0*3600.0*10000.0;
					CV(1) = (long) v_nbDays_t1;
					if (PT_double==0.0) {
						Q0 = IN;
					}
					else {
						Q0 = v_t1 >= PT_double;
					}
				}

		}

		CB_post_bool(cb_ton_Q0);
		{int _k; for (_k = 2; _k < 4; _k++) { CB_post_int(cb_ton_CV+_k); }}

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

