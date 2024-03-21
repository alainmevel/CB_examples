/*2023-10-03T11:12:46-01:00*/

/********************************************************************
 * io_engine_1d1s.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _IO_LIBRARY__IO_ENGINE_1D1S_H
#define _IO_LIBRARY__IO_ENGINE_1D1S_H


/********************** Variable declarations ***********************/

extern CB_Index io_engine_1d1s__num;
extern CB_Mem_Bool *io_engine_1d1s_autoMode;
extern CB_Mem_Bool *io_engine_1d1s_manualMode;
extern CB_Mem_Bool *io_engine_1d1s_autoCmd;
extern CB_Mem_Bool *io_engine_1d1s_acknowledgePB;
extern CB_Mem_Float *io_engine_1d1s_speedVal;
extern CB_Mem_Float *io_engine_1d1s_speedPercent;
extern CB_Mem_Bool *io_engine_1d1s_generalFault;

/********************** Function declarations ***********************/

extern int _io_library__io_engine_1d1s_init(void);
extern int io_library__io_engine_1d1s(void);

#endif /*_IO_LIBRARY__IO_ENGINE_1D1S_H*/