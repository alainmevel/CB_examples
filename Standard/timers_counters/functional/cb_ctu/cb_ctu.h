/*2023-10-03T11:12:45-01:00*/

/********************************************************************
 * cb_ctu.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TIMERS_COUNTERS__CB_CTU_H
#define _TIMERS_COUNTERS__CB_CTU_H


/********************** Variable declarations ***********************/

extern CB_Index cb_ctu__num;
extern CB_Mem_Bool *cb_ctu_CU;
extern CB_Mem_Bool *cb_ctu_R;
extern CB_Mem_Int *cb_ctu_PV;
extern CB_Mem_Bool *cb_ctu_QU;
extern CB_Mem_Int *cb_ctu_CV;

/********************** Function declarations ***********************/

extern int _timers_counters__cb_ctu_init(void);
extern int timers_counters__cb_ctu(void);

#endif /*_TIMERS_COUNTERS__CB_CTU_H*/
