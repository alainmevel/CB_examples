/*2023-10-03T11:12:48-01:00*/

/********************************************************************
 * io_agitator_2speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _IO_LIBRARY__IO_AGITATOR_2SPEED_H
#define _IO_LIBRARY__IO_AGITATOR_2SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index io_agitator_2speed__num;
extern CB_Mem_Bool *io_agitator_2speed_acknowledgePB;
extern CB_Mem_Bool *io_agitator_2speed_autoMode;
extern CB_Mem_Bool *io_agitator_2speed_manualMode;
extern CB_Mem_Bool *io_agitator_2speed_autoHSCmd;
extern CB_Mem_Bool *io_agitator_2speed_autoLSCmd;
extern CB_Mem_Bool *io_agitator_2speed_generalFault;
extern CB_Mem_Float *io_agitator_2speed_speedVal;
extern CB_Mem_Float *io_agitator_2speed_speedPercent;

/********************** Function declarations ***********************/

extern int _io_library__io_agitator_2speed_init(void);
extern int io_library__io_agitator_2speed(void);

#endif /*_IO_LIBRARY__IO_AGITATOR_2SPEED_H*/
