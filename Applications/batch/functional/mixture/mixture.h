/*2023-10-03T11:13:39-01:00*/

/********************************************************************
 * mixture.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BATCH__MIXTURE_H
#define _BATCH__MIXTURE_H


/********************** Variable declarations ***********************/

extern CB_Index mixture__num;
extern CB_Mem_Bool *mixture_cycleInProgress;
extern CB_Mem_Bool *mixture_kneadingRequest;
extern CB_Mem_Bool *mixture_acknowledgePB;
extern CB_Mem_Bool *mixture_autoMode;
extern CB_Mem_Bool *mixture_manualMode;
extern CB_Mem_Float *mixture_syrupExtraction;
extern CB_Mem_Float *mixture_flourExtraction;
extern CB_Mem_Bool *mixture_kneadingOK;
extern CB_Mem_Bool *mixture_fault;

/********************** Function declarations ***********************/

extern int _batch__mixture_init(void);
extern int batch__mixture(void);

#endif /*_BATCH__MIXTURE_H*/