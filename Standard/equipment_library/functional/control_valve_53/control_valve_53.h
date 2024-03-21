/*2023-10-03T11:13:12-01:00*/

/********************************************************************
 * control_valve_53.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__CONTROL_VALVE_53_H
#define _EQUIPMENT_LIBRARY__CONTROL_VALVE_53_H


/********************** Variable declarations ***********************/

extern CB_Index control_valve_53__num;
extern CB_Mem_Bool *control_valve_53_valveWork;
extern CB_Mem_Bool *control_valve_53_valveRest;
extern CB_Mem_Bool *control_valve_53_energy;
extern CB_Mem_Bool *control_valve_53_cmdSupply;
extern CB_Mem_Bool *control_valve_53_pipeWork;
extern CB_Mem_Bool *control_valve_53_pipeRest;
extern CB_Mem_Bool *control_valve_53_workMode;
extern CB_Mem_Bool *control_valve_53_restMode;
extern CB_Mem_Int *control_valve_53_slidePosition;
extern CB_Mem_Bool *control_valve_53_d_work;
extern CB_Mem_Bool *control_valve_53_v_d_work;
extern CB_Mem_Bool *control_valve_53_d_rest;
extern CB_Mem_Bool *control_valve_53_v_d_rest;

/********************** Function declarations ***********************/

extern int _equipment_library__control_valve_53_init(void);
extern int equipment_library__control_valve_53(void);

#endif /*_EQUIPMENT_LIBRARY__CONTROL_VALVE_53_H*/
