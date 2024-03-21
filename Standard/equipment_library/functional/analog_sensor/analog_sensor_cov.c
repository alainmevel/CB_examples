/*2023-10-03T11:12:50-01:00*/

/********************************************************************
 * analog_sensor_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "analog_sensor.h"



/**************************** Variables *****************************/

CB_Index analog_sensor__num = 0;
CB_Mem_Float *analog_sensor_measure;
CB_Mem_Bool *analog_sensor_sensorSupply;
CB_Mem_Float *analog_sensor_realValue;
CB_Mem_Float *analog_sensor_intValue;
CB_Mem_Float *analog_sensor_dintValue;
CB_Mem_Int *analog_sensor_tmp;
CB_Mem_Float *analog_sensor_localValue;
CB_Mem_Int *analog_sensor_nbDigit;
CB_Mem_Bool *analog_sensor_d_value;
CB_Mem_Float *analog_sensor_v_d_value;

/**************************** Variables *****************************/

#define measure (analog_sensor_measure->CB_current_value)
#define sensorSupply (analog_sensor_sensorSupply->CB_current_value)
#define realValue (analog_sensor_realValue->CB_current_value)
#define intValue (analog_sensor_intValue->CB_current_value)
#define dintValue (analog_sensor_dintValue->CB_current_value)
#define tmp (analog_sensor_tmp->CB_current_value)
#define localValue (analog_sensor_localValue->CB_current_value)
#define nbDigit (*((char *)&(analog_sensor_nbDigit->CB_current_value) + ALIGN_OFFSET_CHAR))
#define d_value (analog_sensor_d_value->CB_current_value)
#define v_d_value (analog_sensor_v_d_value->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__analog_sensor_init(void)
{
	(analog_sensor_sensorSupply)->CB_current_value = 1; /*sensorSupply*/
	*((char *)&((self.Int+1)->CB_current_value) + ALIGN_OFFSET_CHAR) = 2; /*nbDigit*/
	self.Bool+=1;
	self.Int+=2;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__analog_sensor(void)
{
	static char *__comp_name = "equipment_library.analog_sensor";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		analog_sensor_tmp = self.Int+0;
		analog_sensor_localValue = self.Float+0;
		analog_sensor_nbDigit = self.Int+1;
		analog_sensor_d_value = self.Bool+0;
		analog_sensor_v_d_value = self.Float+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Sensors							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018							*/
			/* ----------------------------------------------------------------	*/
			/* This module simulates the behaviour of an analog sensor.		*/
			/* It allows to create a fault on the measured quantity. 		*/
			/* ----------------------------------------------------------------	*/

			if (d_value) localValue  = v_d_value;
			else 
				if ( sensorSupply  ) localValue  = measure  ;
				else localValue   = 0.0;

			/* On tronque la realValue d'affichage � 1,2,3,ou 4 digit derriere la virgule 	*/
			if ((nbDigit > 4) || (nbDigit <= 0)) nbDigit = 2;
			tmp = localValue  *  pow(10, nbDigit);
			realValue = tmp / pow(10, nbDigit);

			/* si le capteur depasse la plage autoris�e, on force la valeur � 0 */
			if ((realValue <= 32767) && (realValue >= -32768)) intValue = realValue;
				else intValue =0;

			dintValue = realValue;
		}

		CB_post_float(analog_sensor_realValue);
		CB_post_float(analog_sensor_intValue);
		CB_post_float(analog_sensor_dintValue);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Int += 2;
	self.Float += 2;

	return 0;
}

