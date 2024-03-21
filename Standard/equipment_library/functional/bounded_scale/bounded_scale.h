/*2023-10-03T11:13:32-01:00*/

/********************************************************************
 * bounded_scale.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__BOUNDED_SCALE_H
#define _EQUIPMENT_LIBRARY__BOUNDED_SCALE_H


/********************** Variable declarations ***********************/

extern CB_Index bounded_scale__num;
extern CB_Mem_Float *bounded_scale_inputValue;
extern CB_Mem_Float *bounded_scale_realValue;
extern CB_Mem_Int *bounded_scale_dintValue;
extern CB_Mem_Int *bounded_scale_intValue;
extern CB_Mem_Float *bounded_scale_a;
extern CB_Mem_Float *bounded_scale_b;
extern CB_Mem_Float *bounded_scale_k;
extern CB_Mem_Float *bounded_scale_minInput;
extern CB_Mem_Float *bounded_scale_maxInput;
extern CB_Mem_Float *bounded_scale_minOutput;
extern CB_Mem_Float *bounded_scale_maxOutput;
extern CB_Mem_Bool *bounded_scale_d_scale;
extern CB_Mem_Float *bounded_scale_v_d_scale;

/********************** Function declarations ***********************/

extern int _equipment_library__bounded_scale_init(void);
extern int equipment_library__bounded_scale(void);

#endif /*_EQUIPMENT_LIBRARY__BOUNDED_SCALE_H*/