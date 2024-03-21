/*2023-10-03T11:13:38-01:00*/

/********************************************************************
 * kneading.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BATCH__KNEADING_H
#define _BATCH__KNEADING_H


/********************** Variable declarations ***********************/

extern CB_Index kneading__num;
extern CB_Mem_Bool *kneading_kneadingRequest;
extern CB_Mem_Bool *kneading_cycleInProgress;
extern CB_Mem_Int *kneading_mixtureLevel;
extern CB_Mem_Bool *kneading_kneadingOK;
extern CB_Mem_Bool *kneading_knead;
extern CB_Mem_Bool *kneading_clean;
extern CB_Mem_Bool *kneading_cleaningEnd;
extern CB_Mem_Bool *kneading_evacuateMixture;
extern CB_Mem_Bool *kneading_evacMixtureEnd;
extern CB_Mem_Int *kneading_nbCycles;
extern CB_Mem_Int *kneading_kneadingDuration;
extern CB_Mem_Int *kneading_nbOfCleanCycles;
extern CB_Mem_Int *kneading_cleaningDuration;

/********************** Function declarations ***********************/

extern int _batch__kneading_init(void);
extern int batch__kneading(void);

#endif /*_BATCH__KNEADING_H*/
