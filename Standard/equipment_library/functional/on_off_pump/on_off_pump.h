/*2023-10-03T11:13:01-01:00*/

/********************************************************************
 * on_off_pump.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__ON_OFF_PUMP_H
#define _EQUIPMENT_LIBRARY__ON_OFF_PUMP_H


/********************** Variable declarations ***********************/

extern CB_Index on_off_pump__num;
extern CB_Mem_Bool *on_off_pump_voltage380;
extern CB_Mem_Bool *on_off_pump_cmdSupply;
extern CB_Mem_Bool *on_off_pump_sensorSupply;
extern CB_Mem_Bool *on_off_pump_onCmd;
extern CB_Mem_Float *on_off_pump_inputFlow;
extern CB_Mem_Bool *on_off_pump_onFB;
extern CB_Mem_Bool *on_off_pump_thermal;
extern CB_Mem_Float *on_off_pump_speedVal;
extern CB_Mem_Float *on_off_pump_outputFlow;
extern CB_Mem_Float *on_off_pump_increment;
extern CB_Mem_Bool *on_off_pump_onState;
extern CB_Mem_Float *on_off_pump_speedSetpoint;
extern CB_Mem_Float *on_off_pump_unit;
extern CB_Mem_Float *on_off_pump_nominalTime;
extern CB_Mem_Bool *on_off_pump_thermalLogic;
extern CB_Mem_Bool *on_off_pump_onFbLogic;
extern CB_Mem_Float *on_off_pump_flowMax;
extern CB_Mem_Float *on_off_pump_nominalSpeed;
extern CB_Mem_Bool *on_off_pump_flowPerHour;
extern CB_Mem_Bool *on_off_pump_flowPerMinute;
extern CB_Mem_Bool *on_off_pump_d_locking;
extern CB_Mem_Float *on_off_pump_v_d_locking;
extern CB_Mem_Bool *on_off_pump_d_flow;
extern CB_Mem_Float *on_off_pump_v_d_flow;
extern CB_Mem_Bool *on_off_pump_d_electrical;
extern CB_Mem_Bool *on_off_pump_v_d_electrical;
extern CB_Mem_Bool *on_off_pump_d_onFB;
extern CB_Mem_Bool *on_off_pump_v_d_onFB;

/********************** Function declarations ***********************/

extern int _equipment_library__on_off_pump_init(void);
extern int equipment_library__on_off_pump(void);

#endif /*_EQUIPMENT_LIBRARY__ON_OFF_PUMP_H*/
