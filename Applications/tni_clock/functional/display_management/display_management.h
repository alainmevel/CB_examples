/*2023-10-03T11:13:48-01:00*/

/********************************************************************
 * display_management.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TNI_CLOCK__DISPLAY_MANAGEMENT_H
#define _TNI_CLOCK__DISPLAY_MANAGEMENT_H


/********************** Variable declarations ***********************/

extern CB_Index display_management__num;
extern CB_Mem_Int *display_management_hh;
extern CB_Mem_Int *display_management_mn;
extern CB_Mem_Int *display_management_sec;
extern CB_Mem_Bool *display_management_tick;
extern CB_Mem_Int *display_management_pressure;
extern CB_Mem_Bool *display_management_B1;
extern CB_Mem_Bool *display_management_B2;
extern CB_Mem_Bool *display_management_B3;
extern CB_Mem_Bool *display_management_B4;
extern CB_Mem_Int *display_management_displayValue;
extern CB_Mem_Bool *display_management_switchOnLight;
extern CB_Mem_Float *display_management_displayTime;
extern CB_Mem_Float *display_management_lampSwitchOnTime;
extern CB_Mem_Int *display_management_pulseTime;

/********************** Function declarations ***********************/

extern int _tni_clock__display_management_init(void);
extern int tni_clock__display_management(void);

#endif /*_TNI_CLOCK__DISPLAY_MANAGEMENT_H*/