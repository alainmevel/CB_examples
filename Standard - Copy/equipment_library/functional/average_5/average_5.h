/*2023-10-03T11:13:26-01:00*/

/********************************************************************
 * average_5.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__AVERAGE_5_H
#define _EQUIPMENT_LIBRARY__AVERAGE_5_H


/********************** Variable declarations ***********************/

extern CB_Index average_5__num;
extern CB_Mem_Float *average_5_input1;
extern CB_Mem_Float *average_5_input2;
extern CB_Mem_Float *average_5_input3;
extern CB_Mem_Float *average_5_input4;
extern CB_Mem_Float *average_5_input5;
extern CB_Mem_Float *average_5_result;
extern CB_Mem_Int *average_5_nbInputs;
extern CB_Mem_Bool *average_5_d_average;
extern CB_Mem_Float *average_5_v_d_average;

/********************** Function declarations ***********************/

extern int _equipment_library__average_5_init(void);
extern int equipment_library__average_5(void);

#endif /*_EQUIPMENT_LIBRARY__AVERAGE_5_H*/
