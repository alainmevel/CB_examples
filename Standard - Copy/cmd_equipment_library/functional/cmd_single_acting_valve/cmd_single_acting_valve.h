/*2023-10-03T11:13:36-01:00*/

/********************************************************************
 * cmd_single_acting_valve.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _CMD_EQUIPMENT_LIBRARY__CMD_SINGLE_ACTING_VALVE_H
#define _CMD_EQUIPMENT_LIBRARY__CMD_SINGLE_ACTING_VALVE_H


/********************** Variable declarations ***********************/

extern CB_Index cmd_single_acting_valve__num;
extern CB_Mem_Bool *cmd_single_acting_valve_autoMode;
extern CB_Mem_Bool *cmd_single_acting_valve_manualMode;
extern CB_Mem_Bool *cmd_single_acting_valve_autoOpenCmd;
extern CB_Mem_Bool *cmd_single_acting_valve_openValvePB;
extern CB_Mem_Bool *cmd_single_acting_valve_openedSensorFB;
extern CB_Mem_Bool *cmd_single_acting_valve_closedSensorFB;
extern CB_Mem_Bool *cmd_single_acting_valve_acknowledgePB;
extern CB_Mem_Bool *cmd_single_acting_valve_openCmd;
extern CB_Mem_Bool *cmd_single_acting_valve_generalFault;

/********************** Function declarations ***********************/

extern int _cmd_equipment_library__cmd_single_acting_valve_init(void);
extern int cmd_equipment_library__cmd_single_acting_valve(void);

#endif /*_CMD_EQUIPMENT_LIBRARY__CMD_SINGLE_ACTING_VALVE_H*/
