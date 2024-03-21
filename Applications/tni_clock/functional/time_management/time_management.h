/*2023-10-03T11:13:47-01:00*/

/********************************************************************
 * time_management.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TNI_CLOCK__TIME_MANAGEMENT_H
#define _TNI_CLOCK__TIME_MANAGEMENT_H


/********************** Variable declarations ***********************/

extern CB_Index time_management__num;
extern CB_Mem_Bool *time_management_tick;
extern CB_Mem_Bool *time_management_B1;
extern CB_Mem_Bool *time_management_B2;
extern CB_Mem_Bool *time_management_B3;
extern CB_Mem_Bool *time_management_B4;
extern CB_Mem_Bool *time_management_stepMotorSecond;
extern CB_Mem_Bool *time_management_stepMotorMinute;
extern CB_Mem_Bool *time_management_stepMotorHour;
extern CB_Mem_Int *time_management_hh;
extern CB_Mem_Int *time_management_mn;
extern CB_Mem_Int *time_management_sec;
extern CB_Mem_Float *time_management_tickCount;
extern CB_Mem_Int *time_management_adjustMode;

/********************** Function declarations ***********************/

extern int _tni_clock__time_management_init(void);
extern int tni_clock__time_management(void);

#endif /*_TNI_CLOCK__TIME_MANAGEMENT_H*/
