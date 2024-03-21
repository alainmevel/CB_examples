/*2023-10-03T11:13:50-01:00*/

/********************************************************************
 * authorizations.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "authorizations.h"


/**************************** Variables *****************************/

CB_Index authorizations__num = 0;
CB_Mem_Bool *authorizations_AuthorizationClosingLeftC1;
CB_Mem_Bool *authorizations_AuthorizationOpeningRightC1;
CB_Mem_Bool *authorizations_AuthorizationClosingRightC1;
CB_Mem_Bool *authorizations_AuthorizationOpeningLeftC1;
CB_Mem_Bool *authorizations_AuthorizationClosingLeftC2;
CB_Mem_Bool *authorizations_AuthorizationOpeningRightC2;
CB_Mem_Bool *authorizations_AuthorizationClosingRightC2;
CB_Mem_Bool *authorizations_AuthorizationOpeningLeftC2;
CB_Mem_Bool *authorizations_AuthorizationOpeningLeft;
CB_Mem_Bool *authorizations_AuthorizationClosingLeft;
CB_Mem_Bool *authorizations_AuthorizationOpeningRight;
CB_Mem_Bool *authorizations_AuthorizationClosingRight;

/**************************** Variables *****************************/

#define AuthorizationClosingLeftC1 (authorizations_AuthorizationClosingLeftC1->CB_current_value)
#define AuthorizationOpeningRightC1 (authorizations_AuthorizationOpeningRightC1->CB_current_value)
#define AuthorizationClosingRightC1 (authorizations_AuthorizationClosingRightC1->CB_current_value)
#define AuthorizationOpeningLeftC1 (authorizations_AuthorizationOpeningLeftC1->CB_current_value)
#define AuthorizationClosingLeftC2 (authorizations_AuthorizationClosingLeftC2->CB_current_value)
#define AuthorizationOpeningRightC2 (authorizations_AuthorizationOpeningRightC2->CB_current_value)
#define AuthorizationClosingRightC2 (authorizations_AuthorizationClosingRightC2->CB_current_value)
#define AuthorizationOpeningLeftC2 (authorizations_AuthorizationOpeningLeftC2->CB_current_value)
#define AuthorizationOpeningLeft (authorizations_AuthorizationOpeningLeft->CB_current_value)
#define AuthorizationClosingLeft (authorizations_AuthorizationClosingLeft->CB_current_value)
#define AuthorizationOpeningRight (authorizations_AuthorizationOpeningRight->CB_current_value)
#define AuthorizationClosingRight (authorizations_AuthorizationClosingRight->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tni_train__authorizations_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

int tni_train__authorizations(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			AuthorizationClosingRight = AuthorizationClosingRightC1 || AuthorizationClosingLeftC2;
			AuthorizationOpeningRight = AuthorizationOpeningRightC1 || AuthorizationOpeningLeftC2;
			AuthorizationClosingLeft = AuthorizationClosingLeftC1 || AuthorizationClosingRightC2;
			AuthorizationOpeningLeft = AuthorizationOpeningLeftC1 || AuthorizationOpeningRightC2;
		}

		CB_post_bool(authorizations_AuthorizationOpeningLeft);
		CB_post_bool(authorizations_AuthorizationClosingLeft);
		CB_post_bool(authorizations_AuthorizationOpeningRight);
		CB_post_bool(authorizations_AuthorizationClosingRight);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

