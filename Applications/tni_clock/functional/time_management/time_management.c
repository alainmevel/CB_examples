/*2023-10-03T11:13:47-01:00*/

/********************************************************************
 * time_management.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "time_management.h"


/**************************** Variables *****************************/

CB_Index time_management__num = 0;
CB_Mem_Bool *time_management_tick;
CB_Mem_Bool *time_management_B1;
CB_Mem_Bool *time_management_B2;
CB_Mem_Bool *time_management_B3;
CB_Mem_Bool *time_management_B4;
CB_Mem_Bool *time_management_stepMotorSecond;
CB_Mem_Bool *time_management_stepMotorMinute;
CB_Mem_Bool *time_management_stepMotorHour;
CB_Mem_Int *time_management_hh;
CB_Mem_Int *time_management_mn;
CB_Mem_Int *time_management_sec;
CB_Mem_Float *time_management_tickCount;
CB_Mem_Int *time_management_adjustMode;
CB_Mem_Bool *time_management_tick_PREV;
CB_Mem_Int *time_management_tick_EDGE;

/**************************** Variables *****************************/

#define tick (time_management_tick->CB_current_value)
#define B1 (time_management_B1->CB_current_value)
#define B2 (time_management_B2->CB_current_value)
#define B3 (time_management_B3->CB_current_value)
#define B4 (time_management_B4->CB_current_value)
#define stepMotorSecond (time_management_stepMotorSecond->CB_current_value)
#define stepMotorMinute (time_management_stepMotorMinute->CB_current_value)
#define stepMotorHour (time_management_stepMotorHour->CB_current_value)
#define hh (*((char *)&(time_management_hh->CB_current_value) + ALIGN_OFFSET_CHAR))
#define mn (*((char *)&(time_management_mn->CB_current_value) + ALIGN_OFFSET_CHAR))
#define sec (*((char *)&(time_management_sec->CB_current_value) + ALIGN_OFFSET_CHAR))
#define tickCount (time_management_tickCount->CB_current_value)
#define adjustMode (*((short *)&(time_management_adjustMode->CB_current_value) + ALIGN_OFFSET_SHORT))
#define tick_PREV (time_management_tick_PREV->CB_current_value)
#define tick_EDGE (time_management_tick_EDGE->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tni_clock__time_management_init(void)
{
	self.Bool+=1;
	self.Int+=2;
	self.Float+=1;


	return 0;
}


/************************ Behavior function *************************/

int tni_clock__time_management(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		time_management_tickCount = self.Float+0;
		time_management_adjustMode = self.Int+0;
		time_management_tick_PREV = self.Bool+0;
		time_management_tick_EDGE = self.Int+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			tick_EDGE = CB_edge_bool(tick, tick_PREV);
			stepMotorSecond = 0;
			stepMotorMinute = 0;
			stepMotorHour = 0;
			if (B1 || (adjustMode > 0)) {
				if (B1) {
					adjustMode = adjustMode + 1;
				}
				B1 = 0;
				if (adjustMode > 3) {
					adjustMode = 0;
				}
				if (B2) {
					B2 = 0;
					switch (adjustMode) {
					case 1:
						hh = hh + 1;
						stepMotorHour = 1;
						break;
					case 2:
						mn = mn + 1;
						stepMotorMinute = 1;
						break;
					case 3:
						sec = sec + 1;
						stepMotorSecond = 1;
						break;
					default:
						break;
					}
				}
			}
			if ((tick_EDGE > 0) && (adjustMode == 0)) {
				tickCount = tickCount + CLOCK_PERIOD * 2.0;
				if (tickCount > 1000000.0) {
					sec = sec + 1;
					stepMotorSecond = 1;
					tickCount = tickCount - 1000000.0;
				}
			}
			if (sec > 60) {
				sec = 0;
				if (adjustMode == 0) {
					mn = mn + 1;
					stepMotorMinute = 1;
				}
			}
			if (mn > 60) {
				mn = 0;
				if (adjustMode == 0) {
					hh = hh + 1;
					stepMotorHour = 1;
				}
			}
			if (hh > 23) {
				hh = 0;
			}
			tick_PREV = tick;
		}

		CB_post_bool(time_management_stepMotorSecond);
		CB_post_bool(time_management_stepMotorMinute);
		CB_post_bool(time_management_stepMotorHour);
		CB_post_int(time_management_hh);
		CB_post_int(time_management_mn);
		CB_post_int(time_management_sec);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 1;
	self.Int += 2;
	self.Float += 1;

	return 0;
}

