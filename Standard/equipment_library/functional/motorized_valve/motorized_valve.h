/*2023-10-03T11:13:02-01:00*/

/********************************************************************
 * motorized_valve.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__MOTORIZED_VALVE_H
#define _EQUIPMENT_LIBRARY__MOTORIZED_VALVE_H


/********************** Variable declarations ***********************/

extern CB_Index motorized_valve__num;
extern CB_Mem_Bool *motorized_valve_voltage380;
extern CB_Mem_Bool *motorized_valve_cmdSupply;
extern CB_Mem_Bool *motorized_valve_sensorSupply;
extern CB_Mem_Bool *motorized_valve_openCmd;
extern CB_Mem_Bool *motorized_valve_closeCmd;
extern CB_Mem_Float *motorized_valve_inputFlow;
extern CB_Mem_Bool *motorized_valve_openedSensor;
extern CB_Mem_Bool *motorized_valve_closedSensor;
extern CB_Mem_Bool *motorized_valve_thermal;
extern CB_Mem_Bool *motorized_valve_openFB;
extern CB_Mem_Bool *motorized_valve_closeFB;
extern CB_Mem_Float *motorized_valve_outputFlow;
extern CB_Mem_Float *motorized_valve_percentOpening;
extern CB_Mem_Float *motorized_valve_increment;
extern CB_Mem_Bool *motorized_valve_memoOpen;
extern CB_Mem_Bool *motorized_valve_memoClose;
extern CB_Mem_Bool *motorized_valve_openState;
extern CB_Mem_Bool *motorized_valve_closeState;
extern CB_Mem_Float *motorized_valve_openingVal;
extern CB_Mem_Float *motorized_valve_unit;
extern CB_Mem_Float *motorized_valve_openingTime;
extern CB_Mem_Bool *motorized_valve_thermalLogic;
extern CB_Mem_Bool *motorized_valve_openFbLogic;
extern CB_Mem_Bool *motorized_valve_closeFbLogic;
extern CB_Mem_Bool *motorized_valve_openedSensorLogic;
extern CB_Mem_Bool *motorized_valve_closedSensorLogic;
extern CB_Mem_Float *motorized_valve_flowMax;
extern CB_Mem_Bool *motorized_valve_flowPerHour;
extern CB_Mem_Bool *motorized_valve_flowPerMiinuute;
extern CB_Mem_Bool *motorized_valve_d_locking;
extern CB_Mem_Float *motorized_valve_v_d_locking;
extern CB_Mem_Bool *motorized_valve_d_flow;
extern CB_Mem_Float *motorized_valve_v_d_flow;
extern CB_Mem_Bool *motorized_valve_d_electrical;
extern CB_Mem_Bool *motorized_valve_v_d_electrical;
extern CB_Mem_Bool *motorized_valve_d_closedSensor;
extern CB_Mem_Bool *motorized_valve_v_d_closedSensor;
extern CB_Mem_Bool *motorized_valve_d_openedSensor;
extern CB_Mem_Bool *motorized_valve_v_d_openedSensor;
extern CB_Mem_Bool *motorized_valve_d_closeFB;
extern CB_Mem_Bool *motorized_valve_v_d_closeFB;
extern CB_Mem_Bool *motorized_valve_d_openFB;
extern CB_Mem_Bool *motorized_valve_v_d_openFB;

/********************** Function declarations ***********************/

extern int _equipment_library__motorized_valve_init(void);
extern int equipment_library__motorized_valve(void);

#endif /*_EQUIPMENT_LIBRARY__MOTORIZED_VALVE_H*/
