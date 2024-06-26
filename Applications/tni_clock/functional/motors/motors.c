/*2023-10-03T11:13:47-01:00*/

/********************************************************************
 * motors.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "motors.h"


/**************************** Variables *****************************/

CB_Index motors__num = 0;
CB_Mem_Bool *motors_stepMotorSecond;
CB_Mem_Bool *motors_stepMotorMinute;
CB_Mem_Bool *motors_stepMotorHour;
CB_Mem_Int *motors_hourHand;
CB_Mem_Int *motors_minuteHand;
CB_Mem_Int *motors_secondHand;
CB_Mem_Bool *motors_stepMotorHour_PREV;
CB_Mem_Int *motors_stepMotorHour_EDGE;
CB_Mem_Bool *motors_stepMotorMinute_PREV;
CB_Mem_Int *motors_stepMotorMinute_EDGE;
CB_Mem_Bool *motors_stepMotorSecond_PREV;
CB_Mem_Int *motors_stepMotorSecond_EDGE;

/**************************** Variables *****************************/

#define stepMotorSecond (motors_stepMotorSecond->CB_current_value)
#define stepMotorMinute (motors_stepMotorMinute->CB_current_value)
#define stepMotorHour (motors_stepMotorHour->CB_current_value)
#define hourHand (*((short *)&(motors_hourHand->CB_current_value) + ALIGN_OFFSET_SHORT))
#define minuteHand (*((short *)&(motors_minuteHand->CB_current_value) + ALIGN_OFFSET_SHORT))
#define secondHand (*((short *)&(motors_secondHand->CB_current_value) + ALIGN_OFFSET_SHORT))
#define stepMotorHour_PREV (motors_stepMotorHour_PREV->CB_current_value)
#define stepMotorHour_EDGE (motors_stepMotorHour_EDGE->CB_current_value)
#define stepMotorMinute_PREV (motors_stepMotorMinute_PREV->CB_current_value)
#define stepMotorMinute_EDGE (motors_stepMotorMinute_EDGE->CB_current_value)
#define stepMotorSecond_PREV (motors_stepMotorSecond_PREV->CB_current_value)
#define stepMotorSecond_EDGE (motors_stepMotorSecond_EDGE->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tni_clock__motors_init(void)
{
	self.Bool+=3;
	self.Int+=6;


	return 0;
}


/************************ Behavior function *************************/

int tni_clock__motors(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		motors_hourHand = self.Int+0;
		motors_minuteHand = self.Int+1;
		motors_secondHand = self.Int+2;
		motors_stepMotorHour_PREV = self.Bool+0;
		motors_stepMotorHour_EDGE = self.Int+3;
		motors_stepMotorMinute_PREV = self.Bool+1;
		motors_stepMotorMinute_EDGE = self.Int+4;
		motors_stepMotorSecond_PREV = self.Bool+2;
		motors_stepMotorSecond_EDGE = self.Int+5;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			stepMotorSecond_EDGE = CB_edge_bool(stepMotorSecond, stepMotorSecond_PREV);
			stepMotorHour_EDGE = CB_edge_bool(stepMotorHour, stepMotorHour_PREV);
			stepMotorMinute_EDGE = CB_edge_bool(stepMotorMinute, stepMotorMinute_PREV);
			if (stepMotorHour_EDGE > 0) {
				hourHand = hourHand + 360 / 12;
				if (hourHand >= 360) {
					hourHand = 0;
				}
			}
			if (stepMotorMinute_EDGE > 0) {
				minuteHand = minuteHand + 360 / 60;
				if (minuteHand >= 360) {
					minuteHand = 0;
				}
			}
			if (stepMotorSecond_EDGE > 0) {
				secondHand = secondHand + 360 / 60;
				if (secondHand >= 360) {
					secondHand = 0;
				}
			}
			stepMotorSecond_PREV = stepMotorSecond;
			stepMotorHour_PREV = stepMotorHour;
			stepMotorMinute_PREV = stepMotorMinute;
		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 3;
	self.Int += 6;

	return 0;
}

