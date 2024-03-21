/*2023-10-03T11:13:41-01:00*/

/********************************************************************
 * mode.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BOTTLING_LINE__MODE_H
#define _BOTTLING_LINE__MODE_H


/********************** Variable declarations ***********************/

extern CB_Index mode__num;
extern CB_Mem_Bool *mode_powerUpPB;
extern CB_Mem_Bool *mode_emergencyStopPB;
extern CB_Mem_Bool *mode_manual;
extern CB_Mem_Bool *mode_auto;
extern CB_Mem_Bool *mode_acknowledgePB;
extern CB_Mem_Bool *mode_powerUp;
extern CB_Mem_Bool *mode_autoMode;
extern CB_Mem_Bool *mode_manualMode;
extern CB_Mem_Bool *mode_emStp;

/********************** Function declarations ***********************/

extern int _bottling_line__mode_init(void);
extern int bottling_line__mode(void);

#endif /*_BOTTLING_LINE__MODE_H*/
