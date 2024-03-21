/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * master.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BOTTLING_LINE__MASTER_H
#define _BOTTLING_LINE__MASTER_H


/********************** Variable declarations ***********************/

extern CB_Index master__num;
extern CB_Mem_Bool *master_startCyclePB;
extern CB_Mem_Bool *master_initPB;
extern CB_Mem_Bool *master_preparationPB;
extern CB_Mem_Bool *master_productionPB;
extern CB_Mem_Bool *master_closingPB;
extern CB_Mem_Bool *master_initEnd;
extern CB_Mem_Bool *master_preparationEnd;
extern CB_Mem_Bool *master_closingEnd;
extern CB_Mem_Bool *master_lowLevel3;
extern CB_Mem_Bool *master_initializationRqst;
extern CB_Mem_Bool *master_preparationRqst;
extern CB_Mem_Bool *master_productionRqst;
extern CB_Mem_Bool *master_closingRqst;
extern CB_Mem_Bool *master_masterInStandBy;
extern CB_Mem_Bool *master_productionWaiting;

/********************** Function declarations ***********************/

extern int _bottling_line__master_init(void);
extern int bottling_line__master(void);

#endif /*_BOTTLING_LINE__MASTER_H*/