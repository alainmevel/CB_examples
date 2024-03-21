/*2023-10-03T11:13:13-01:00*/

/********************************************************************
 * contactor_2dir_2speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__CONTACTOR_2DIR_2SPEED_H
#define _EQUIPMENT_LIBRARY__CONTACTOR_2DIR_2SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index contactor_2dir_2speed__num;
extern CB_Mem_Bool *contactor_2dir_2speed_voltage380;
extern CB_Mem_Bool *contactor_2dir_2speed_cmdSupply;
extern CB_Mem_Bool *contactor_2dir_2speed_sensorSupply;
extern CB_Mem_Bool *contactor_2dir_2speed_forward;
extern CB_Mem_Bool *contactor_2dir_2speed_backward;
extern CB_Mem_Bool *contactor_2dir_2speed_highSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_lowSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_fwdHsState;
extern CB_Mem_Bool *contactor_2dir_2speed_fwdLsState;
extern CB_Mem_Bool *contactor_2dir_2speed_bwdHsState;
extern CB_Mem_Bool *contactor_2dir_2speed_bwdLsState;
extern CB_Mem_Bool *contactor_2dir_2speed_forwardFB;
extern CB_Mem_Bool *contactor_2dir_2speed_backwardFB;
extern CB_Mem_Bool *contactor_2dir_2speed_highSpeedFB;
extern CB_Mem_Bool *contactor_2dir_2speed_lowSpeedFB;
extern CB_Mem_Bool *contactor_2dir_2speed_thermal;
extern CB_Mem_Bool *contactor_2dir_2speed_memoFwd;
extern CB_Mem_Bool *contactor_2dir_2speed_memoBwd;
extern CB_Mem_Bool *contactor_2dir_2speed_memoLowSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_memoHighSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_fwdLogic;
extern CB_Mem_Bool *contactor_2dir_2speed_bwdLogic;
extern CB_Mem_Bool *contactor_2dir_2speed_highSpeedLogic;
extern CB_Mem_Bool *contactor_2dir_2speed_lowSpeedLogic;
extern CB_Mem_Bool *contactor_2dir_2speed_thermalLogic;
extern CB_Mem_Bool *contactor_2dir_2speed_d_electrical;
extern CB_Mem_Bool *contactor_2dir_2speed_v_d_electrical;
extern CB_Mem_Bool *contactor_2dir_2speed_d_Bwd;
extern CB_Mem_Bool *contactor_2dir_2speed_v_d_Bwd;
extern CB_Mem_Bool *contactor_2dir_2speed_d_Fwd;
extern CB_Mem_Bool *contactor_2dir_2speed_v_d_Fwd;
extern CB_Mem_Bool *contactor_2dir_2speed_d_highSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_v_d_highSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_d_lowSpeed;
extern CB_Mem_Bool *contactor_2dir_2speed_v_d_lowSpeed;

/********************** Function declarations ***********************/

extern int _equipment_library__contactor_2dir_2speed_init(void);
extern int equipment_library__contactor_2dir_2speed(void);

#endif /*_EQUIPMENT_LIBRARY__CONTACTOR_2DIR_2SPEED_H*/
