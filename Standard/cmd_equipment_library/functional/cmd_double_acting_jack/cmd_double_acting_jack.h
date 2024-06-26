/*2023-10-03T11:13:35-01:00*/

/********************************************************************
 * cmd_double_acting_jack.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _CMD_EQUIPMENT_LIBRARY__CMD_DOUBLE_ACTING_JACK_H
#define _CMD_EQUIPMENT_LIBRARY__CMD_DOUBLE_ACTING_JACK_H


/********************** Variable declarations ***********************/

extern CB_Index cmd_double_acting_jack__num;
extern CB_Mem_Bool *cmd_double_acting_jack_autoMode;
extern CB_Mem_Bool *cmd_double_acting_jack_manualMode;
extern CB_Mem_Bool *cmd_double_acting_jack_autoWorkCmd;
extern CB_Mem_Bool *cmd_double_acting_jack_autoRestCmd;
extern CB_Mem_Bool *cmd_double_acting_jack_valveWorkPB;
extern CB_Mem_Bool *cmd_double_acting_jack_valveRestPB;
extern CB_Mem_Bool *cmd_double_acting_jack_outletSensor;
extern CB_Mem_Bool *cmd_double_acting_jack_inletSensor;
extern CB_Mem_Bool *cmd_double_acting_jack_acknowledgePB;
extern CB_Mem_Bool *cmd_double_acting_jack_workCmd;
extern CB_Mem_Bool *cmd_double_acting_jack_restCmd;
extern CB_Mem_Bool *cmd_double_acting_jack_generalFault;

/********************** Function declarations ***********************/

extern int _cmd_equipment_library__cmd_double_acting_jack_init(void);
extern int cmd_equipment_library__cmd_double_acting_jack(void);

#endif /*_CMD_EQUIPMENT_LIBRARY__CMD_DOUBLE_ACTING_JACK_H*/
