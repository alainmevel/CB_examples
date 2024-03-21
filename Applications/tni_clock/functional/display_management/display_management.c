/*2023-10-03T11:13:48-01:00*/

/********************************************************************
 * display_management.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "display_management.h"


/**************************** Variables *****************************/

CB_Index display_management__num = 0;
CB_Mem_Int *display_management_hh;
CB_Mem_Int *display_management_mn;
CB_Mem_Int *display_management_sec;
CB_Mem_Bool *display_management_tick;
CB_Mem_Int *display_management_pressure;
CB_Mem_Bool *display_management_B1;
CB_Mem_Bool *display_management_B2;
CB_Mem_Bool *display_management_B3;
CB_Mem_Bool *display_management_B4;
CB_Mem_Int *display_management_displayValue;
CB_Mem_Bool *display_management_switchOnLight;
CB_Mem_Float *display_management_displayTime;
CB_Mem_Float *display_management_lampSwitchOnTime;
CB_Mem_Int *display_management_pulseTime;

/**************************** Variables *****************************/

#define hh (*((char *)&(display_management_hh->CB_current_value) + ALIGN_OFFSET_CHAR))
#define mn (*((char *)&(display_management_mn->CB_current_value) + ALIGN_OFFSET_CHAR))
#define sec (*((char *)&(display_management_sec->CB_current_value) + ALIGN_OFFSET_CHAR))
#define tick (display_management_tick->CB_current_value)
#define pressure (*((short *)&(display_management_pressure->CB_current_value) + ALIGN_OFFSET_SHORT))
#define B1 (display_management_B1->CB_current_value)
#define B2 (display_management_B2->CB_current_value)
#define B3 (display_management_B3->CB_current_value)
#define B4 (display_management_B4->CB_current_value)
#define displayValue(i) (*((unsigned char *)&(display_management_displayValue[i+1].CB_current_value) + ALIGN_OFFSET_CHAR))
#define switchOnLight (display_management_switchOnLight->CB_current_value)
#define displayTime (display_management_displayTime->CB_current_value)
#define lampSwitchOnTime (display_management_lampSwitchOnTime->CB_current_value)
#define pulseTime (display_management_pulseTime->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tni_clock__display_management_init(void)
{
	(self.Int+0)->CB_current_value = 10; /*pulseTime*/
	self.Int+=1;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int tni_clock__display_management(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		display_management_displayTime = self.Float+0;
		display_management_lampSwitchOnTime = self.Float+1;
		display_management_pulseTime = self.Int+0;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			if ((B3 || (displayTime > 0.0)) && tick) {
				displayTime = displayTime + CLOCK_PERIOD / 1000000.0 * 2.0;
			}
			if ((displayTime > 10.0) || !B3) {
				B3 = 0;
				displayTime = 0.0;
			}
			if (B3) {
				displayValue(1) = 48 + pressure / 1000;
				displayValue(2) = 48 + (pressure - pressure / 1000 * 1000) / 100;
				displayValue(3) = 48 + (pressure - pressure / 1000 * 1000 - (pressure - pressure / 1000 * 1000) / 100 * 100) / 10;
				displayValue(4) = 48 + (pressure - pressure / 1000 * 1000 - (pressure - pressure / 1000 * 1000) / 100 * 100 - (pressure - pressure / 1000 * 1000 - (pressure - pressure / 1000 * 1000) / 100 * 100) / 10 * 10);
				displayValue(5) = 32;
				displayValue(6) = 104;
				displayValue(7) = 80;
				displayValue(8) = 97;
			}
			else {
				displayValue(1) = 48 + hh / 10;
				displayValue(2) = 48 + (hh - hh / 10 * 10);
				displayValue(3) = 58;
				displayValue(4) = 48 + mn / 10;
				displayValue(5) = 48 + (mn - mn / 10 * 10);
				displayValue(6) = 58;
				displayValue(7) = 48 + sec / 10;
				displayValue(8) = 48 + (sec - sec / 10 * 10);
			}
			if ((B4 || (lampSwitchOnTime > 0)) && tick) {
				lampSwitchOnTime = lampSwitchOnTime + CLOCK_PERIOD / 1000000 * 2.0;
			}
			if (lampSwitchOnTime > 3) {
				B4 = 0;
				lampSwitchOnTime = 0;
			}
			switchOnLight = lampSwitchOnTime > 0.0;
		}

		{int _k; for (_k = 2; _k < 10; _k++) { CB_post_int(display_management_displayValue+_k); }}
		CB_post_bool(display_management_switchOnLight);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Int += 1;
	self.Float += 2;

	return 0;
}
