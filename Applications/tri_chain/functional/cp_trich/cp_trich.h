/*2023-10-03T11:13:59-01:00*/

/********************************************************************
 * cp_trich.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TRI_CHAIN__CP_TRICH_H
#define _TRI_CHAIN__CP_TRICH_H


/********************** Variable declarations ***********************/

extern CB_Index cp_trich__num;
extern CB_Mem_Bool *cp_trich_ON;
extern CB_Mem_Bool *cp_trich_run1;
extern CB_Mem_Bool *cp_trich_startSensor1;
extern CB_Mem_Bool *cp_trich_endSensor1;
extern CB_Mem_Bool *cp_trich_run2;
extern CB_Mem_Bool *cp_trich_startSensor2;
extern CB_Mem_Bool *cp_trich_endSensor2;
extern CB_Mem_Bool *cp_trich_run3;
extern CB_Mem_Bool *cp_trich_startSensor3;
extern CB_Mem_Bool *cp_trich_endSensor3;
extern CB_Mem_Bool *cp_trich_sensor1;
extern CB_Mem_Bool *cp_trich_sensor2;
extern CB_Mem_Bool *cp_trich_sensor3;
extern CB_Mem_Bool *cp_trich_endSensor;
extern CB_Mem_Bool *cp_trich_endSensor4;
extern CB_Mem_Bool *cp_trich_mvt1;
extern CB_Mem_Bool *cp_trich_mvt2;
extern CB_Mem_Bool *cp_trich_mvt3;
extern CB_Mem_Bool *cp_trich_moveToLeft;
extern CB_Mem_Bool *cp_trich_moveToRight;
extern CB_Mem_Bool *cp_trich_chainMvt;
extern CB_Mem_Bool *cp_trich_mvt4;

/********************** Function declarations ***********************/

extern int _tri_chain__cp_trich_init(void);
extern int tri_chain__cp_trich(void);

#endif /*_TRI_CHAIN__CP_TRICH_H*/