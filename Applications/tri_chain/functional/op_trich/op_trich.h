/*2023-10-03T11:13:59-01:00*/

/********************************************************************
 * op_trich.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TRI_CHAIN__OP_TRICH_H
#define _TRI_CHAIN__OP_TRICH_H


/********************** Variable declarations ***********************/

extern CB_Index op_trich__num;
extern CB_Mem_Bool *op_trich_mvt1;
extern CB_Mem_Bool *op_trich_mvt2;
extern CB_Mem_Bool *op_trich_mvt3;
extern CB_Mem_Bool *op_trich_mvt4;
extern CB_Mem_Bool *op_trich_moveToLeft;
extern CB_Mem_Bool *op_trich_moveToRight;
extern CB_Mem_Bool *op_trich_chainMvt;
extern CB_Mem_Bool *op_trich_ON;
extern CB_Mem_Bool *op_trich_run1;
extern CB_Mem_Bool *op_trich_startSensor1;
extern CB_Mem_Bool *op_trich_endSensor1;
extern CB_Mem_Bool *op_trich_run2;
extern CB_Mem_Bool *op_trich_startSensor2;
extern CB_Mem_Bool *op_trich_endSensor2;
extern CB_Mem_Bool *op_trich_run3;
extern CB_Mem_Bool *op_trich_startSensor3;
extern CB_Mem_Bool *op_trich_endSensor3;
extern CB_Mem_Bool *op_trich_endSensor4;
extern CB_Mem_Bool *op_trich_sensor1;
extern CB_Mem_Bool *op_trich_sensor2;
extern CB_Mem_Bool *op_trich_sensor3;
extern CB_Mem_Bool *op_trich_endSensor;

/********************** Function declarations ***********************/

extern int _tri_chain__op_trich_init(void);
extern int tri_chain__op_trich(void);

#endif /*_TRI_CHAIN__OP_TRICH_H*/
