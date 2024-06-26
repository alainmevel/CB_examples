/*2023-10-03T11:13:41-01:00*/

/********************************************************************
 * preparation.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BOTTLING_LINE__PREPARATION_H
#define _BOTTLING_LINE__PREPARATION_H


/********************** Variable declarations ***********************/

extern CB_Index preparation__num;
extern CB_Mem_Bool *preparation_preparationRequest;
extern CB_Mem_Bool *preparation_productionWaiting;
extern CB_Mem_Bool *preparation_highLevel1;
extern CB_Mem_Bool *preparation_highLevel2;
extern CB_Mem_Bool *preparation_highLevel3;
extern CB_Mem_Bool *preparation_preparationValve1;
extern CB_Mem_Bool *preparation_preparationValve2;
extern CB_Mem_Bool *preparation_preparationValve3;
extern CB_Mem_Bool *preparation_preparationValve4;
extern CB_Mem_Bool *preparation_preparationPump1;
extern CB_Mem_Bool *preparation_preparationPump2;
extern CB_Mem_Bool *preparation_preparationAgit;
extern CB_Mem_Bool *preparation_preparationEnd;

/********************** Function declarations ***********************/

extern int _bottling_line__preparation_init(void);
extern int bottling_line__preparation(void);

#endif /*_BOTTLING_LINE__PREPARATION_H*/
