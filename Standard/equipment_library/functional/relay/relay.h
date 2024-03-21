/*2023-10-03T11:13:23-01:00*/

/********************************************************************
 * relay.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__RELAY_H
#define _EQUIPMENT_LIBRARY__RELAY_H


/********************** Variable declarations ***********************/

extern CB_Index relay__num;
extern CB_Mem_Bool *relay_contactorInterlock;
extern CB_Mem_Bool *relay_cmdSupply;
extern CB_Mem_Bool *relay_sensorSupply;
extern CB_Mem_Bool *relay_energyBefore;
extern CB_Mem_Bool *relay_interlockFB;
extern CB_Mem_Bool *relay_energyAfter;
extern CB_Mem_Bool *relay_memoInterlock;
extern CB_Mem_Bool *relay_interlockLogic;
extern CB_Mem_Bool *relay_d_interlock;
extern CB_Mem_Bool *relay_v_d_interlock;

/********************** Function declarations ***********************/

extern int _equipment_library__relay_init(void);
extern int equipment_library__relay(void);

#endif /*_EQUIPMENT_LIBRARY__RELAY_H*/