/*2023-10-03T11:13:22-01:00*/

/********************************************************************
 * switch_3pos_2outputs.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__SWITCH_3POS_2OUTPUTS_H
#define _EQUIPMENT_LIBRARY__SWITCH_3POS_2OUTPUTS_H


/********************** Variable declarations ***********************/

extern CB_Index switch_3pos_2outputs__num;
extern CB_Mem_Bool *switch_3pos_2outputs_leftVariable;
extern CB_Mem_Bool *switch_3pos_2outputs_rightVariable;
extern CB_Mem_Bool *switch_3pos_2outputs_leftPosition;
extern CB_Mem_Bool *switch_3pos_2outputs_middlePosition;
extern CB_Mem_Bool *switch_3pos_2outputs_rightPosition;

/********************** Function declarations ***********************/

extern int _equipment_library__switch_3pos_2outputs_init(void);
extern int equipment_library__switch_3pos_2outputs(void);

#endif /*_EQUIPMENT_LIBRARY__SWITCH_3POS_2OUTPUTS_H*/