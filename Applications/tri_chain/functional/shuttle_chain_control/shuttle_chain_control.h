/*2023-10-03T11:13:58-01:00*/

/********************************************************************
 * shuttle_chain_control.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TRI_CHAIN__SHUTTLE_CHAIN_CONTROL_H
#define _TRI_CHAIN__SHUTTLE_CHAIN_CONTROL_H


/********************** Variable declarations ***********************/

extern CB_Index shuttle_chain_control__num;
extern CB_Mem_Bool *shuttle_chain_control_globalRunning;
extern CB_Mem_Bool *shuttle_chain_control_endSensor;
extern CB_Mem_Bool *shuttle_chain_control_depositEnabled;
extern CB_Mem_Bool *shuttle_chain_control_captureEnabled;
extern CB_Mem_Bool *shuttle_chain_control_movement;
extern CB_Mem_Bool *shuttle_chain_control_depositRequest;
extern CB_Mem_Bool *shuttle_chain_control_depositFinished;

/********************** Function declarations ***********************/

extern int _tri_chain__shuttle_chain_control_init(void);
extern int tri_chain__shuttle_chain_control(void);

#endif /*_TRI_CHAIN__SHUTTLE_CHAIN_CONTROL_H*/
