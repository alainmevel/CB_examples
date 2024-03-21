/*2023-10-03T11:13:44-01:00*/

/********************************************************************
 * turret_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "turret.h"



/**************************** Variables *****************************/

CB_Index turret__num = 0;
CB_Mem_Float *turret_speed;
CB_Mem_Bool *turret_forward;
CB_Mem_Bool *turret_backward;
CB_Mem_Bool *turret_highSpeed;
CB_Mem_Bool *turret_lowSpeed;
CB_Mem_Float *turret_axlePosition;
CB_Mem_Bool *turret_forwardEnd;
CB_Mem_Bool *turret_forwardDeceleration;
CB_Mem_Bool *turret_backwardDeceleration;
CB_Mem_Bool *turret_backwardEnd;
CB_Mem_Float *turret_speedIncrement;
CB_Mem_Bool *turret_lockingFault;
CB_Mem_Bool *turret_forwardEndFault;
CB_Mem_Bool *turret_forwardEndValue;
CB_Mem_Bool *turret_forwardDecelerationFault;
CB_Mem_Bool *turret_forwardDecelerationValue;
CB_Mem_Bool *turret_backwardDecelerationFault;
CB_Mem_Bool *turret_backwardDecelerationValue;
CB_Mem_Bool *turret_backwardEndFault;
CB_Mem_Bool *turret_backwardEndValue;
CB_Mem_Float *turret_axleLength;
CB_Mem_Int *turret_forwardDecelerationPosition;
CB_Mem_Int *turret_backwardDecelerationPosition;
CB_Mem_Int *turret_range;

/**************************** Variables *****************************/

#define speed (turret_speed->CB_current_value)
#define forward (turret_forward->CB_current_value)
#define backward (turret_backward->CB_current_value)
#define highSpeed (turret_highSpeed->CB_current_value)
#define lowSpeed (turret_lowSpeed->CB_current_value)
#define axlePosition (turret_axlePosition->CB_current_value)
#define forwardEnd (turret_forwardEnd->CB_current_value)
#define forwardDeceleration (turret_forwardDeceleration->CB_current_value)
#define backwardDeceleration (turret_backwardDeceleration->CB_current_value)
#define backwardEnd (turret_backwardEnd->CB_current_value)
#define speedIncrement (turret_speedIncrement->CB_current_value)
#define lockingFault (turret_lockingFault->CB_current_value)
#define forwardEndFault (turret_forwardEndFault->CB_current_value)
#define forwardEndValue (turret_forwardEndValue->CB_current_value)
#define forwardDecelerationFault (turret_forwardDecelerationFault->CB_current_value)
#define forwardDecelerationValue (turret_forwardDecelerationValue->CB_current_value)
#define backwardDecelerationFault (turret_backwardDecelerationFault->CB_current_value)
#define backwardDecelerationValue (turret_backwardDecelerationValue->CB_current_value)
#define backwardEndFault (turret_backwardEndFault->CB_current_value)
#define backwardEndValue (turret_backwardEndValue->CB_current_value)
#define axleLength (turret_axleLength->CB_current_value)
#define forwardDecelerationPosition (turret_forwardDecelerationPosition->CB_current_value)
#define backwardDecelerationPosition (turret_backwardDecelerationPosition->CB_current_value)
#define range (turret_range->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _drill__turret_init(void)
{
	(self.Float+1)->CB_current_value = 100.0; /*axleLength*/
	(self.Int+0)->CB_current_value = 70; /*forwardDecelerationPosition*/
	(self.Int+1)->CB_current_value = 30; /*backwardDecelerationPosition*/
	(self.Int+2)->CB_current_value = 10; /*range*/
	self.Bool+=9;
	self.Int+=3;
	self.Float+=2;


	return 0;
}


/************************ Behavior function *************************/

int drill__turret(void)
{
	static char *__comp_name = "drill.turret";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		turret_speedIncrement = self.Float+0;
		turret_lockingFault = self.Bool+0;
		turret_forwardEndFault = self.Bool+1;
		turret_forwardEndValue = self.Bool+2;
		turret_forwardDecelerationFault = self.Bool+3;
		turret_forwardDecelerationValue = self.Bool+4;
		turret_backwardDecelerationFault = self.Bool+5;
		turret_backwardDecelerationValue = self.Bool+6;
		turret_backwardEndFault = self.Bool+7;
		turret_backwardEndValue = self.Bool+8;
		turret_axleLength = self.Float+1;
		turret_forwardDecelerationPosition = self.Int+0;
		turret_backwardDecelerationPosition = self.Int+1;
		turret_range = self.Int+2;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{


			/* Evolution of the axe in function of the input orders		*/
			if ( !lockingFault)
			{
				speedIncrement = speed * CLOCK_PERIOD / 1000000.0;
				axlePosition += speedIncrement;
				if (axlePosition > axleLength)
					axlePosition = axleLength;

				if (axlePosition < 0.0)
					axlePosition = 0.0;
			}


			/*Calculation of the sensor states						 */
			forwardEnd = (( !forwardEndFault && (axlePosition == axleLength)) || (forwardEndFault &forwardEndValue));
			forwardDeceleration = (( !forwardDecelerationFault &&(axlePosition >= forwardDecelerationPosition)&&(axlePosition <= (forwardDecelerationPosition + range))) || (forwardDecelerationFault && forwardDecelerationValue));
			backwardDeceleration = (( !backwardDecelerationFault && (axlePosition >= backwardDecelerationPosition) & (axlePosition <= (backwardDecelerationPosition + range))) || (backwardDecelerationFault && backwardDecelerationValue));
			backwardEnd = (( !backwardEndFault && (axlePosition == 0)) || (backwardEndFault &backwardEndValue));
		}

		CB_post_float(turret_axlePosition);
		CB_post_bool(turret_forwardEnd);
		CB_post_bool(turret_forwardDeceleration);
		CB_post_bool(turret_backwardDeceleration);
		CB_post_bool(turret_backwardEnd);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 9;
	self.Int += 3;
	self.Float += 2;

	return 0;
}

