/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * requests_management_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"

#include "requests_management.h"


/**************************** Variables *****************************/

CB_Index requests_management__num = 0;
CB_Mem_Bool *requests_management_preparationValve1;
CB_Mem_Bool *requests_management_preparationValve2;
CB_Mem_Bool *requests_management_preparationValve3;
CB_Mem_Bool *requests_management_preparationValve4;
CB_Mem_Bool *requests_management_preparationPump1;
CB_Mem_Bool *requests_management_preparationPump2;
CB_Mem_Bool *requests_management_preparationAgitator;
CB_Mem_Bool *requests_management_productionPump1;
CB_Mem_Bool *requests_management_productionPump2;
CB_Mem_Bool *requests_management_productionValve1;
CB_Mem_Bool *requests_management_productionValve2;
CB_Mem_Bool *requests_management_productionValve3;
CB_Mem_Bool *requests_management_productionValve4;
CB_Mem_Bool *requests_management_productionLSAgitator;
CB_Mem_Bool *requests_management_productionHSAgitator;
CB_Mem_Bool *requests_management_pump1;
CB_Mem_Bool *requests_management_pump2;
CB_Mem_Bool *requests_management_valve1;
CB_Mem_Bool *requests_management_valve2;
CB_Mem_Bool *requests_management_valve3;
CB_Mem_Bool *requests_management_valve4;
CB_Mem_Bool *requests_management_loSpeedAgit;
CB_Mem_Bool *requests_management_hiSpeedAgit;

/**************************** Variables *****************************/

#define preparationValve1 (requests_management_preparationValve1->CB_current_value)
#define preparationValve2 (requests_management_preparationValve2->CB_current_value)
#define preparationValve3 (requests_management_preparationValve3->CB_current_value)
#define preparationValve4 (requests_management_preparationValve4->CB_current_value)
#define preparationPump1 (requests_management_preparationPump1->CB_current_value)
#define preparationPump2 (requests_management_preparationPump2->CB_current_value)
#define preparationAgitator (requests_management_preparationAgitator->CB_current_value)
#define productionPump1 (requests_management_productionPump1->CB_current_value)
#define productionPump2 (requests_management_productionPump2->CB_current_value)
#define productionValve1 (requests_management_productionValve1->CB_current_value)
#define productionValve2 (requests_management_productionValve2->CB_current_value)
#define productionValve3 (requests_management_productionValve3->CB_current_value)
#define productionValve4 (requests_management_productionValve4->CB_current_value)
#define productionLSAgitator (requests_management_productionLSAgitator->CB_current_value)
#define productionHSAgitator (requests_management_productionHSAgitator->CB_current_value)
#define pump1 (requests_management_pump1->CB_current_value)
#define pump2 (requests_management_pump2->CB_current_value)
#define valve1 (requests_management_valve1->CB_current_value)
#define valve2 (requests_management_valve2->CB_current_value)
#define valve3 (requests_management_valve3->CB_current_value)
#define valve4 (requests_management_valve4->CB_current_value)
#define loSpeedAgit (requests_management_loSpeedAgit->CB_current_value)
#define hiSpeedAgit (requests_management_hiSpeedAgit->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _bottling_line__requests_management_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

int bottling_line__requests_management(void)
{
	static char *__comp_name = "bottling_line.requests_management";
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _2;
			unsigned char _5;
			unsigned char _1_s3;
			unsigned char _7;
			unsigned char _10;
			unsigned char _6_s3;
			unsigned char _12;
			unsigned char _15;
			unsigned char _11_s3;
			unsigned char _17;
			unsigned char _20;
			unsigned char _16_s3;
			unsigned char _21;
			unsigned char _26;
			unsigned char _29;
			unsigned char _25_s3;
			unsigned char _31;
			unsigned char _34;
			unsigned char _30_s3;
			unsigned char _36;
			unsigned char _39;
			unsigned char _35_s3;
			_2 = preparationValve1;
			cov_output(__comp_name, self_num, 2, 0, _2);
			_5 = productionValve1;
			cov_output(__comp_name, self_num, 5, 0, _5);
			_1_s3 = _2 || _5;
			cov_output(__comp_name, self_num, 1, 1, _1_s3);
			valve1 = _1_s3;
			cov_output(__comp_name, self_num, 3, 0, valve1);
			_7 = preparationValve2;
			cov_output(__comp_name, self_num, 7, 0, _7);
			_10 = productionValve2;
			cov_output(__comp_name, self_num, 10, 0, _10);
			_6_s3 = _7 || _10;
			cov_output(__comp_name, self_num, 6, 1, _6_s3);
			valve2 = _6_s3;
			cov_output(__comp_name, self_num, 8, 0, valve2);
			_12 = preparationValve3;
			cov_output(__comp_name, self_num, 12, 0, _12);
			_15 = productionValve3;
			cov_output(__comp_name, self_num, 15, 0, _15);
			_11_s3 = _12 || _15;
			cov_output(__comp_name, self_num, 11, 1, _11_s3);
			valve3 = _11_s3;
			cov_output(__comp_name, self_num, 13, 0, valve3);
			_17 = preparationValve4;
			cov_output(__comp_name, self_num, 17, 0, _17);
			_20 = productionValve4;
			cov_output(__comp_name, self_num, 20, 0, _20);
			_16_s3 = _17 || _20;
			cov_output(__comp_name, self_num, 16, 1, _16_s3);
			valve4 = _16_s3;
			cov_output(__comp_name, self_num, 18, 0, valve4);
			_21 = productionHSAgitator;
			cov_output(__comp_name, self_num, 21, 0, _21);
			hiSpeedAgit = _21;
			cov_output(__comp_name, self_num, 22, 0, hiSpeedAgit);
			_26 = preparationPump1;
			cov_output(__comp_name, self_num, 26, 0, _26);
			_29 = productionPump1;
			cov_output(__comp_name, self_num, 29, 0, _29);
			_25_s3 = _26 || _29;
			cov_output(__comp_name, self_num, 25, 1, _25_s3);
			pump1 = _25_s3;
			cov_output(__comp_name, self_num, 27, 0, pump1);
			_31 = preparationPump2;
			cov_output(__comp_name, self_num, 31, 0, _31);
			_34 = productionPump2;
			cov_output(__comp_name, self_num, 34, 0, _34);
			_30_s3 = _31 || _34;
			cov_output(__comp_name, self_num, 30, 1, _30_s3);
			pump2 = _30_s3;
			cov_output(__comp_name, self_num, 32, 0, pump2);
			_36 = preparationAgitator;
			cov_output(__comp_name, self_num, 36, 0, _36);
			_39 = productionLSAgitator;
			cov_output(__comp_name, self_num, 39, 0, _39);
			_35_s3 = _36 || _39;
			cov_output(__comp_name, self_num, 35, 1, _35_s3);
			loSpeedAgit = _35_s3;
			cov_output(__comp_name, self_num, 37, 0, loSpeedAgit);
		}

		CB_post_bool(requests_management_pump1);
		CB_post_bool(requests_management_pump2);
		CB_post_bool(requests_management_valve1);
		CB_post_bool(requests_management_valve2);
		CB_post_bool(requests_management_valve3);
		CB_post_bool(requests_management_valve4);
		CB_post_bool(requests_management_loSpeedAgit);
		CB_post_bool(requests_management_hiSpeedAgit);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

