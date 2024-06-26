/*2023-10-03T11:13:18-01:00*/

/********************************************************************
 * ramp_1dir_2speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__RAMP_1DIR_2SPEED_H
#define _EQUIPMENT_LIBRARY__RAMP_1DIR_2SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index ramp_1dir_2speed__num;
extern CB_Mem_Bool *ramp_1dir_2speed_fwdHighSpeedState;
extern CB_Mem_Bool *ramp_1dir_2speed_fwdLowSpeedState;
extern CB_Mem_Float *ramp_1dir_2speed_positionRamp;
extern CB_Mem_Float *ramp_1dir_2speed_percentRamp;
extern CB_Mem_Float *ramp_1dir_2speed_increment;
extern CB_Mem_Float *ramp_1dir_2speed_pBound;
extern CB_Mem_Float *ramp_1dir_2speed_maxRamp;
extern CB_Mem_Float *ramp_1dir_2speed_timeRamp;
extern CB_Mem_Bool *ramp_1dir_2speed_d_locking;
extern CB_Mem_Float *ramp_1dir_2speed_v_d_locking;

/********************** Function declarations ***********************/

extern int _equipment_library__ramp_1dir_2speed_init(void);
extern int equipment_library__ramp_1dir_2speed(void);

#endif /*_EQUIPMENT_LIBRARY__RAMP_1DIR_2SPEED_H*/
