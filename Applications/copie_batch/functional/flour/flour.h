/*2024-04-12T14:05:58-01:00*/

/********************************************************************
 * flour.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _COPIE_BATCH__FLOUR_H
#define _COPIE_BATCH__FLOUR_H


/********************** Variable declarations ***********************/

extern CB_Index flour__num;
extern CB_Mem_Bool *flour_cycleInProgress;
extern CB_Mem_Bool *flour_acknowledgePB;
extern CB_Mem_Bool *flour_weighingRequest;
extern CB_Mem_Int *flour_flourWeight;
extern CB_Mem_Bool *flour_autoMode;
extern CB_Mem_Bool *flour_manualMode;
extern CB_Mem_Float *flour_flourExtraction;
extern CB_Mem_Bool *flour_weighingOk;
extern CB_Mem_Bool *flour_fault;

/********************** Function declarations ***********************/

extern int _copie_batch__flour_init(void);
extern int copie_batch__flour(void);

#endif /*_COPIE_BATCH__FLOUR_H*/
