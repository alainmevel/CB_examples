/*2023-10-03T11:13:36-01:00*/

/********************************************************************
 * cmd_agitator_1speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _CMD_EQUIPMENT_LIBRARY__CMD_AGITATOR_1SPEED_H
#define _CMD_EQUIPMENT_LIBRARY__CMD_AGITATOR_1SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index cmd_agitator_1speed__num;
extern CB_Mem_Bool *cmd_agitator_1speed_autoMode;
extern CB_Mem_Bool *cmd_agitator_1speed_manualMode;
extern CB_Mem_Bool *cmd_agitator_1speed_autoCmd;
extern CB_Mem_Bool *cmd_agitator_1speed_thermalFB;
extern CB_Mem_Bool *cmd_agitator_1speed_cmdFB;
extern CB_Mem_Bool *cmd_agitator_1speed_forwardPB;
extern CB_Mem_Bool *cmd_agitator_1speed_stopPB;
extern CB_Mem_Bool *cmd_agitator_1speed_acknowledgePB;
extern CB_Mem_Bool *cmd_agitator_1speed_cmd;
extern CB_Mem_Bool *cmd_agitator_1speed_generalFault;

/********************** Function declarations ***********************/

extern int _cmd_equipment_library__cmd_agitator_1speed_init(void);
extern int cmd_equipment_library__cmd_agitator_1speed(void);

#endif /*_CMD_EQUIPMENT_LIBRARY__CMD_AGITATOR_1SPEED_H*/
