/*2023-10-03T11:13:50-01:00*/

/********************************************************************
 * op_alarm.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TNI_TRAIN__OP_ALARM_H
#define _TNI_TRAIN__OP_ALARM_H


/********************** Variable declarations ***********************/

extern CB_Index op_alarm__num;
extern CB_Mem_Bool *op_alarm_enableAlarm;
extern CB_Mem_Bool *op_alarm_resetKey;
extern CB_Mem_Bool *op_alarm_alarm;
extern CB_Mem_Int *op_alarm_i_rs1;

/********************** Function declarations ***********************/

extern int _tni_train__op_alarm_init(void);
extern int tni_train__op_alarm(void);

#endif /*_TNI_TRAIN__OP_ALARM_H*/