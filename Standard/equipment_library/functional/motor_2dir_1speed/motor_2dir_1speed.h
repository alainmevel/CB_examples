/*2023-10-03T11:13:09-01:00*/

/********************************************************************
 * motor_2dir_1speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__MOTOR_2DIR_1SPEED_H
#define _EQUIPMENT_LIBRARY__MOTOR_2DIR_1SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index motor_2dir_1speed__num;
extern CB_Mem_Bool *motor_2dir_1speed_voltage380;
extern CB_Mem_Bool *motor_2dir_1speed_cmdSupply;
extern CB_Mem_Bool *motor_2dir_1speed_sensorSupply;
extern CB_Mem_Bool *motor_2dir_1speed_forward;
extern CB_Mem_Bool *motor_2dir_1speed_backward;
extern CB_Mem_Bool *motor_2dir_1speed_forwardFB;
extern CB_Mem_Bool *motor_2dir_1speed_backwardFB;
extern CB_Mem_Bool *motor_2dir_1speed_thermal;
extern CB_Mem_Float *motor_2dir_1speed_speedVal;
extern CB_Mem_Float *motor_2dir_1speed_speedPercent;
extern CB_Mem_Float *motor_2dir_1speed_increment;
extern CB_Mem_Bool *motor_2dir_1speed_memoFwd;
extern CB_Mem_Bool *motor_2dir_1speed_memoBwd;
extern CB_Mem_Bool *motor_2dir_1speed_forwardState;
extern CB_Mem_Bool *motor_2dir_1speed_backwardState;
extern CB_Mem_Float *motor_2dir_1speed_wantedSpeed;
extern CB_Mem_Float *motor_2dir_1speed_nominalSpeed;
extern CB_Mem_Float *motor_2dir_1speed_nominalTime;
extern CB_Mem_Bool *motor_2dir_1speed_thermalLogic;
extern CB_Mem_Bool *motor_2dir_1speed_fwdFbLogic;
extern CB_Mem_Bool *motor_2dir_1speed_bwdFbLogic;
extern CB_Mem_Bool *motor_2dir_1speed_d_locking;
extern CB_Mem_Float *motor_2dir_1speed_v_d_locking;
extern CB_Mem_Bool *motor_2dir_1speed_d_electrical;
extern CB_Mem_Bool *motor_2dir_1speed_v_d_electrical;
extern CB_Mem_Bool *motor_2dir_1speed_d_backwardFB;
extern CB_Mem_Bool *motor_2dir_1speed_v_d_backwardFB;
extern CB_Mem_Bool *motor_2dir_1speed_d_forwardFB;
extern CB_Mem_Bool *motor_2dir_1speed_v_d_forwardFB;

/********************** Function declarations ***********************/

extern int _equipment_library__motor_2dir_1speed_init(void);
extern int equipment_library__motor_2dir_1speed(void);

#endif /*_EQUIPMENT_LIBRARY__MOTOR_2DIR_1SPEED_H*/
