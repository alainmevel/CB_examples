/*2023-10-03T11:13:03-01:00*/

/********************************************************************
 * agitator_1speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__AGITATOR_1SPEED_H
#define _EQUIPMENT_LIBRARY__AGITATOR_1SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index agitator_1speed__num;
extern CB_Mem_Bool *agitator_1speed_voltage380;
extern CB_Mem_Bool *agitator_1speed_cmdSupply;
extern CB_Mem_Bool *agitator_1speed_sensorSupply;
extern CB_Mem_Bool *agitator_1speed_cmd;
extern CB_Mem_Bool *agitator_1speed_cmdFB;
extern CB_Mem_Bool *agitator_1speed_thermal;
extern CB_Mem_Float *agitator_1speed_speedVal;
extern CB_Mem_Float *agitator_1speed_speedPercent;
extern CB_Mem_Float *agitator_1speed_increment;
extern CB_Mem_Bool *agitator_1speed_memo;
extern CB_Mem_Bool *agitator_1speed_state;
extern CB_Mem_Float *agitator_1speed_speedSetpoint;
extern CB_Mem_Int *agitator_1speed_cnt;
extern CB_Mem_Bool *agitator_1speed_flipflop;
extern CB_Mem_Float *agitator_1speed_nominalTime;
extern CB_Mem_Bool *agitator_1speed_thermalLogic;
extern CB_Mem_Bool *agitator_1speed_cmdFbLogic;
extern CB_Mem_Float *agitator_1speed_nominalSpeed;
extern CB_Mem_Bool *agitator_1speed_d_locking;
extern CB_Mem_Float *agitator_1speed_v_d_locking;
extern CB_Mem_Bool *agitator_1speed_d_electrical;
extern CB_Mem_Bool *agitator_1speed_v_d_electrical;
extern CB_Mem_Bool *agitator_1speed_d_cmdFB;
extern CB_Mem_Bool *agitator_1speed_v_d_cmdFB;

/********************** Function declarations ***********************/

extern int _equipment_library__agitator_1speed_init(void);
extern int equipment_library__agitator_1speed(void);

#endif /*_EQUIPMENT_LIBRARY__AGITATOR_1SPEED_H*/
