/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * requests_management.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BOTTLING_LINE__REQUESTS_MANAGEMENT_H
#define _BOTTLING_LINE__REQUESTS_MANAGEMENT_H


/********************** Variable declarations ***********************/

extern CB_Index requests_management__num;
extern CB_Mem_Bool *requests_management_preparationValve1;
extern CB_Mem_Bool *requests_management_preparationValve2;
extern CB_Mem_Bool *requests_management_preparationValve3;
extern CB_Mem_Bool *requests_management_preparationValve4;
extern CB_Mem_Bool *requests_management_preparationPump1;
extern CB_Mem_Bool *requests_management_preparationPump2;
extern CB_Mem_Bool *requests_management_preparationAgitator;
extern CB_Mem_Bool *requests_management_productionPump1;
extern CB_Mem_Bool *requests_management_productionPump2;
extern CB_Mem_Bool *requests_management_productionValve1;
extern CB_Mem_Bool *requests_management_productionValve2;
extern CB_Mem_Bool *requests_management_productionValve3;
extern CB_Mem_Bool *requests_management_productionValve4;
extern CB_Mem_Bool *requests_management_productionLSAgitator;
extern CB_Mem_Bool *requests_management_productionHSAgitator;
extern CB_Mem_Bool *requests_management_pump1;
extern CB_Mem_Bool *requests_management_pump2;
extern CB_Mem_Bool *requests_management_valve1;
extern CB_Mem_Bool *requests_management_valve2;
extern CB_Mem_Bool *requests_management_valve3;
extern CB_Mem_Bool *requests_management_valve4;
extern CB_Mem_Bool *requests_management_loSpeedAgit;
extern CB_Mem_Bool *requests_management_hiSpeedAgit;

/********************** Function declarations ***********************/

extern int _bottling_line__requests_management_init(void);
extern int bottling_line__requests_management(void);

#endif /*_BOTTLING_LINE__REQUESTS_MANAGEMENT_H*/