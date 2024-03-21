/*2023-10-03T11:13:22-01:00*/

/********************************************************************
 * switch_2pos_1output_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "switch_2pos_1output.h"


/**************************** Variables *****************************/

CB_Index switch_2pos_1output__num = 0;
CB_Mem_Bool *switch_2pos_1output_variable;
CB_Mem_Bool *switch_2pos_1output_leftPosition;
CB_Mem_Bool *switch_2pos_1output_rightPosition;

/**************************** Variables *****************************/

#define variable (switch_2pos_1output_variable->CB_current_value)
#define leftPosition (switch_2pos_1output_leftPosition->CB_current_value)
#define rightPosition (switch_2pos_1output_rightPosition->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__switch_2pos_1output_init(void)
{
	self.Bool+=2;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__switch_2pos_1output(void)
{
	static char *__comp_name = "equipment_library.switch_2pos_1output";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		switch_2pos_1output_leftPosition = self.Bool+0;
		switch_2pos_1output_rightPosition = self.Bool+1;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			if (leftPosition) {
				cov_control_struct(__comp_name, self_num, INCODE, 11, IFTHEN);
				variable = 0;
			}
			else {
				cov_control_struct(__comp_name, self_num, INCODE, 11, IFELSE);
			}
			if (rightPosition) {
				cov_control_struct(__comp_name, self_num, INCODE, 14, IFTHEN);
				variable = 1;
			}
			else {
				cov_control_struct(__comp_name, self_num, INCODE, 14, IFELSE);
			}
			leftPosition = 0;
			rightPosition = 0;
		}

		CB_post_bool(switch_2pos_1output_variable);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 2;

	return 0;
}

