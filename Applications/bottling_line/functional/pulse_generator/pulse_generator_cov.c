/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * pulse_generator_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "pulse_generator.h"



/**************************** Variables *****************************/

CB_Index pulse_generator__num = 0;
CB_Mem_Float *pulse_generator_speed;
CB_Mem_Bool *pulse_generator_sensorSupply;
CB_Mem_Bool *pulse_generator_pulseSensor;
CB_Mem_Float *pulse_generator_counter;
CB_Mem_Float *pulse_generator_pulseDuration;
CB_Mem_Bool *pulse_generator_d_sensor;
CB_Mem_Bool *pulse_generator_v_d_sensor;

/**************************** Variables *****************************/

#define speed (pulse_generator_speed->CB_current_value)
#define sensorSupply (pulse_generator_sensorSupply->CB_current_value)
#define pulseSensor (pulse_generator_pulseSensor->CB_current_value)
#define counter (pulse_generator_counter->CB_current_value)
#define pulseDuration (pulse_generator_pulseDuration->CB_current_value)
#define d_sensor (pulse_generator_d_sensor->CB_current_value)
#define v_d_sensor (pulse_generator_v_d_sensor->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _bottling_line__pulse_generator_init(void)
{
	(pulse_generator_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	(self.Float+1)->CB_current_value = 0.5; /*pulseDuration*/
	self.Bool+=2;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int bottling_line__pulse_generator(void)
{
	static char *__comp_name = "bottling_line.pulse_generator";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		pulse_generator_counter = self.Float+0;
		pulse_generator_pulseDuration = self.Float+1;
		pulse_generator_d_sensor = self.Bool+0;
		pulse_generator_v_d_sensor = self.Bool+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* -----------------------------------------------------------------------------------------------------------	*/
			/* This module simulates the behaviour of a pulse generator		*/
			/*	at the end of the conveyor belt.				*/
			/* ----------------------------------------------------------------------------------------------------------	*/

			if (d_sensor ) pulseSensor=v_d_sensor;
			else
				if (( sensorSupply ) && (speed != 0.0)) {	
					counter += CLOCK_PERIOD/1000000.0;
					if (counter >= pulseDuration) {
						pulseSensor = ! pulseSensor;
						counter = 0.0;
					}
				}
				else pulseSensor = 0;
		}

		CB_post_bool(pulse_generator_pulseSensor);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 2;
	self.Float += 2;

	return 0;
}

