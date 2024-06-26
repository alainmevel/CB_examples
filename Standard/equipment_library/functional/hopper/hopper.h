/*2023-10-03T11:12:59-01:00*/

/********************************************************************
 * hopper.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__HOPPER_H
#define _EQUIPMENT_LIBRARY__HOPPER_H


/********************** Variable declarations ***********************/

extern CB_Index hopper__num;
extern CB_Mem_Float *hopper_volumeExtraction;
extern CB_Mem_Float *hopper_volumeFilling;
extern CB_Mem_Float *hopper_densityInput;
extern CB_Mem_Float *hopper_levelHopper;
extern CB_Mem_Float *hopper_densityOutput;
extern CB_Mem_Float *hopper_weight;
extern CB_Mem_Float *hopper_percentLevel;
extern CB_Mem_Float *hopper_volumeOutput;
extern CB_Mem_Float *hopper_density;
extern CB_Mem_Float *hopper_realLevel;
extern CB_Mem_Float *hopper_debug;
extern CB_Mem_Float *hopper_capacity;
extern CB_Mem_Bool *hopper_d_level;
extern CB_Mem_Float *hopper_v_d_level;

/********************** Function declarations ***********************/

extern int _equipment_library__hopper_init(void);
extern int equipment_library__hopper(void);

#endif /*_EQUIPMENT_LIBRARY__HOPPER_H*/
