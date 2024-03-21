/*2023-10-03T11:13:04-01:00*/

/********************************************************************
 * tank.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__TANK_H
#define _EQUIPMENT_LIBRARY__TANK_H


/********************** Variable declarations ***********************/

extern CB_Index tank__num;
extern CB_Mem_Float *tank_inletFlow;
extern CB_Mem_Float *tank_outletFlow;
extern CB_Mem_Float *tank_tankLevel;
extern CB_Mem_Float *tank_percent;
extern CB_Mem_Float *tank_capacity;
extern CB_Mem_Bool *tank_d_level;
extern CB_Mem_Float *tank_v_d_level;

/********************** Function declarations ***********************/

extern int _equipment_library__tank_init(void);
extern int equipment_library__tank(void);

#endif /*_EQUIPMENT_LIBRARY__TANK_H*/
