/*2023-10-03T11:13:25-01:00*/

/********************************************************************
 * addition.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__ADDITION_H
#define _EQUIPMENT_LIBRARY__ADDITION_H


/********************** Variable declarations ***********************/

extern CB_Index addition__num;
extern CB_Mem_Float *addition_in1;
extern CB_Mem_Float *addition_in2;
extern CB_Mem_Float *addition_value;
extern CB_Mem_Int *addition_dintValue;
extern CB_Mem_Int *addition_intValue;
extern CB_Mem_Bool *addition_d_locking;
extern CB_Mem_Float *addition_v_d_locking;

/********************** Function declarations ***********************/

extern int _equipment_library__addition_init(void);
extern int equipment_library__addition(void);

#endif /*_EQUIPMENT_LIBRARY__ADDITION_H*/
