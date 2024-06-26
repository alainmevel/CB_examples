/*2023-10-03T11:13:37-01:00*/

/********************************************************************
 * cmd_agitator_2speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _CMD_EQUIPMENT_LIBRARY__CMD_AGITATOR_2SPEED_H
#define _CMD_EQUIPMENT_LIBRARY__CMD_AGITATOR_2SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index cmd_agitator_2speed__num;
extern CB_Mem_Bool *cmd_agitator_2speed_autoMode;
extern CB_Mem_Bool *cmd_agitator_2speed_manualMode;
extern CB_Mem_Bool *cmd_agitator_2speed_autoHSCmd;
extern CB_Mem_Bool *cmd_agitator_2speed_autoLSCmd;
extern CB_Mem_Bool *cmd_agitator_2speed_highSpeedPB;
extern CB_Mem_Bool *cmd_agitator_2speed_lowSpeedPB;
extern CB_Mem_Bool *cmd_agitator_2speed_stopPB;
extern CB_Mem_Bool *cmd_agitator_2speed_highSpeedFB;
extern CB_Mem_Bool *cmd_agitator_2speed_lowSpeedFB;
extern CB_Mem_Bool *cmd_agitator_2speed_thermalFB;
extern CB_Mem_Bool *cmd_agitator_2speed_acknowledgePB;
extern CB_Mem_Bool *cmd_agitator_2speed_highSpeedCmd;
extern CB_Mem_Bool *cmd_agitator_2speed_lowSpeedCmd;
extern CB_Mem_Bool *cmd_agitator_2speed_generalFault;

/********************** Function declarations ***********************/

extern int _cmd_equipment_library__cmd_agitator_2speed_init(void);
extern int cmd_equipment_library__cmd_agitator_2speed(void);

#endif /*_CMD_EQUIPMENT_LIBRARY__CMD_AGITATOR_2SPEED_H*/
