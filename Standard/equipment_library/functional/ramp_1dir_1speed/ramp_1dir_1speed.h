/*2023-10-03T11:13:18-01:00*/

/********************************************************************
 * ramp_1dir_1speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__RAMP_1DIR_1SPEED_H
#define _EQUIPMENT_LIBRARY__RAMP_1DIR_1SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index ramp_1dir_1speed__num;
extern CB_Mem_Bool *ramp_1dir_1speed_fwdState;
extern CB_Mem_Float *ramp_1dir_1speed_positionRamp;
extern CB_Mem_Float *ramp_1dir_1speed_percentRamp;
extern CB_Mem_Float *ramp_1dir_1speed_increment;
extern CB_Mem_Float *ramp_1dir_1speed_pBound;
extern CB_Mem_Float *ramp_1dir_1speed_maxRamp;
extern CB_Mem_Float *ramp_1dir_1speed_timeRamp;
extern CB_Mem_Bool *ramp_1dir_1speed_d_locking;
extern CB_Mem_Float *ramp_1dir_1speed_v_d_locking;

/********************** Function declarations ***********************/

extern int _equipment_library__ramp_1dir_1speed_init(void);
extern int equipment_library__ramp_1dir_1speed(void);

#endif /*_EQUIPMENT_LIBRARY__RAMP_1DIR_1SPEED_H*/