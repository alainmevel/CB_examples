/*2023-10-03T11:13:44-01:00*/

/********************************************************************
 * clamping.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _DRILL__CLAMPING_H
#define _DRILL__CLAMPING_H


/********************** Variable declarations ***********************/

extern CB_Index clamping__num;
extern CB_Mem_Bool *clamping_acknowledgePB;
extern CB_Mem_Bool *clamping_releasing;
extern CB_Mem_Bool *clamping_clamping;
extern CB_Mem_Bool *clamping_rightUnlocked;
extern CB_Mem_Bool *clamping_rightLocked;
extern CB_Mem_Bool *clamping_leftUnlocked;
extern CB_Mem_Bool *clamping_leftLocked;
extern CB_Mem_Bool *clamping_rightFault;
extern CB_Mem_Bool *clamping_leftFault;
extern CB_Mem_Bool *clamping_clampingOK;
extern CB_Mem_Bool *clamping_releasingOK;
extern CB_Mem_Int *clamping_clampingFault;
extern CB_Mem_Bool *clamping_rightLocking;
extern CB_Mem_Bool *clamping_leftLocking;
extern CB_Mem_Int *clamping_clampingDuration;
extern CB_Mem_Int *clamping_releasingDuration;

/********************** Function declarations ***********************/

extern int _drill__clamping_init(void);
extern int drill__clamping(void);

#endif /*_DRILL__CLAMPING_H*/
