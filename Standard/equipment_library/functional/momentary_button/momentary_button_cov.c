/*2023-10-03T11:13:21-01:00*/

/********************************************************************
 * momentary_button_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "momentary_button.h"


/**************************** Variables *****************************/

CB_Index momentary_button__num = 0;
CB_Mem_Bool *momentary_button_PB;
CB_Mem_Bool *momentary_button_action;
CB_Mem_Float *momentary_button_timeCounter;
CB_Mem_Float *momentary_button_pulseDuration;
CB_Mem_Bool *momentary_button_PBLogic;

/**************************** Variables *****************************/

#define PB (momentary_button_PB->CB_current_value)
#define action (momentary_button_action->CB_current_value)
#define timeCounter (momentary_button_timeCounter->CB_current_value)
#define pulseDuration (momentary_button_pulseDuration->CB_current_value)
#define PBLogic (momentary_button_PBLogic->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__momentary_button_init(void)
{
	(self.Float+1)->CB_current_value = 5.0; /*pulseDuration*/
	(self.Bool+1)->CB_current_value = 1; /*PBLogic*/
	self.Bool+=2;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__momentary_button(void)
{
	static char *__comp_name = "equipment_library.momentary_button";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		momentary_button_action = self.Bool+0;
		momentary_button_timeCounter = self.Float+0;
		momentary_button_pulseDuration = self.Float+1;
		momentary_button_PBLogic = self.Bool+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			if (action) {
				cov_control_struct(__comp_name, self_num, INCODE, 10, IFTHEN);
				timeCounter = timeCounter + CLOCK_PERIOD / 1000000.0;
				if (timeCounter > pulseDuration) {
					cov_control_struct(__comp_name, self_num, INCODE, 12, IFTHEN);
					action = 0;
					timeCounter = 0.0;
				}
				else {
					cov_control_struct(__comp_name, self_num, INCODE, 12, IFELSE);
				}
			}
			else {
				cov_control_struct(__comp_name, self_num, INCODE, 10, IFELSE);
			}
			PB = action ^ !PBLogic;
		}

		CB_post_bool(momentary_button_PB);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 2;
	self.Float += 2;

	return 0;
}
