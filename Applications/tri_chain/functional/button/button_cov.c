/*2023-10-03T11:13:58-01:00*/

/********************************************************************
 * button_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "button.h"



/**************************** Variables *****************************/

CB_Index button__num = 0;
CB_Mem_Bool *button_output;
CB_Mem_Bool *button_user_PushButton;
CB_Mem_Bool *button_time2reach;
CB_Mem_Bool *button_pulse_type;
CB_Mem_Float *button_pulseDuration;

/**************************** Variables *****************************/

#define output (button_output->CB_current_value)
#define user_PushButton (button_user_PushButton->CB_current_value)
#define time2reach (button_time2reach->CB_current_value)
#define pulse_type (button_pulse_type->CB_current_value)
#define pulseDuration (button_pulseDuration->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tri_chain__button_init(void)
{
	(self.Float+0)->CB_current_value = 2.0; /*pulseDuration*/
	self.Bool+=3;
	self.Float+=1;


	return 0;
}


/************************ Behavior function *************************/

int tri_chain__button(void)
{
	static char *__comp_name = "tri_chain.button";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		button_user_PushButton = self.Bool+0;
		button_time2reach = self.Bool+1;
		button_pulse_type = self.Bool+2;
		button_pulseDuration = self.Float+0;

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
			if pulse_type 
				{
				if user_PushButton
					{
					if(timeNow >= time2reach) user_PushButton=0;
					}
				else
					{
					time2reach=timeNow+(pulseDuration * 1000000);
					}
				output=user_PushButton;
				}
			else
				{
				output=user_PushButton;
				}
		}

		CB_post_bool(button_output);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 3;
	self.Float += 1;

	return 0;
}

