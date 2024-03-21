/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * pulse_generator.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BOTTLING_LINE__PULSE_GENERATOR_H
#define _BOTTLING_LINE__PULSE_GENERATOR_H


/********************** Variable declarations ***********************/

extern CB_Index pulse_generator__num;
extern CB_Mem_Float *pulse_generator_speed;
extern CB_Mem_Bool *pulse_generator_sensorSupply;
extern CB_Mem_Bool *pulse_generator_pulseSensor;
extern CB_Mem_Float *pulse_generator_counter;
extern CB_Mem_Float *pulse_generator_pulseDuration;
extern CB_Mem_Bool *pulse_generator_d_sensor;
extern CB_Mem_Bool *pulse_generator_v_d_sensor;

/********************** Function declarations ***********************/

extern int _bottling_line__pulse_generator_init(void);
extern int bottling_line__pulse_generator(void);

#endif /*_BOTTLING_LINE__PULSE_GENERATOR_H*/
