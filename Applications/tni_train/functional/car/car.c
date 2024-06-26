/*2023-10-03T11:13:52-01:00*/

/********************************************************************
 * car.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "car.h"
#include "tni_train/functional/authorizations/authorizations.h"
#include "tni_train/functional/op_alarms/op_alarms.h"
#include "tni_train/functional/door/door.h"


/**************************** Variables *****************************/

CB_Index car__num = 0;
CB_Mem_Bool *car_AuthorizationClosingLeftC1;
CB_Mem_Bool *car_AuthorizationOpeningRightC1;
CB_Mem_Bool *car_AuthorizationClosingRightC1;
CB_Mem_Bool *car_AuthorizationOpeningLeftC1;
CB_Mem_Bool *car_AuthorizationClosingLeftC2;
CB_Mem_Bool *car_AuthorizationOpeningRightC2;
CB_Mem_Bool *car_AuthorizationClosingRightC2;
CB_Mem_Bool *car_AuthorizationOpeningLeftC2;
CB_Mem_Bool *car_doorL1Closed;
CB_Mem_Bool *car_doorL1Opened;
CB_Mem_Int *car_doorL1Fault;
CB_Mem_Bool *car_doorL2Closed;
CB_Mem_Bool *car_doorL2Opened;
CB_Mem_Int *car_doorL2Fault;
CB_Mem_Bool *car_doorL3Closed;
CB_Mem_Bool *car_doorL3Opened;
CB_Mem_Int *car_doorL3Fault;
CB_Mem_Bool *car_doorR1Closed;
CB_Mem_Bool *car_doorR1Opened;
CB_Mem_Int *car_doorR1Fault;
CB_Mem_Bool *car_doorR2Closed;
CB_Mem_Bool *car_doorR2Opened;
CB_Mem_Int *car_doorR2Fault;
CB_Mem_Bool *car_doorR3Closed;
CB_Mem_Bool *car_doorR3Opened;
CB_Mem_Int *car_doorR3Fault;
CB_Mem_Bool *car_AlarmD1L;
CB_Mem_Bool *car_AlarmD2L;
CB_Mem_Bool *car_AlarmD3L;
CB_Mem_Bool *car_AlarmD1R;
CB_Mem_Bool *car_AlarmD2R;
CB_Mem_Bool *car_AlarmD3R;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset tni_train__car_offset_authorizations;
static CB_Offset tni_train__car_offset_alarms;
static CB_Offset tni_train__car_offset_doorL1;
static CB_Offset tni_train__car_offset_doorL2;
static CB_Offset tni_train__car_offset_doorL3;
static CB_Offset tni_train__car_offset_doorR1;
static CB_Offset tni_train__car_offset_doorR2;
static CB_Offset tni_train__car_offset_doorR3;
static CB_Offset tni_train__car_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _tni_train__car_init(void)
{
	CB_Object __start = self;
	self.Bool+=16;
	self.Float+=6;

	/*initialize child authorizations (tni_train.authorizations):*/
	self_num++;
	tni_train__car_offset_authorizations.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_authorizations.Int = self.Int - __start.Int;
	tni_train__car_offset_authorizations.Float = self.Float - __start.Float;
	tni_train__car_offset_authorizations.Char = self.Char - __start.Char;
	authorizations_AuthorizationClosingLeftC1 = car_AuthorizationClosingLeftC1;
	authorizations_AuthorizationOpeningRightC1 = car_AuthorizationOpeningRightC1;
	authorizations_AuthorizationClosingRightC1 = car_AuthorizationClosingRightC1;
	authorizations_AuthorizationOpeningLeftC1 = car_AuthorizationOpeningLeftC1;
	authorizations_AuthorizationClosingLeftC2 = car_AuthorizationClosingLeftC2;
	authorizations_AuthorizationOpeningRightC2 = car_AuthorizationOpeningRightC2;
	authorizations_AuthorizationClosingRightC2 = car_AuthorizationClosingRightC2;
	authorizations_AuthorizationOpeningLeftC2 = car_AuthorizationOpeningLeftC2;
	authorizations_AuthorizationOpeningLeft = __start.Bool+12; /*car__cn_4*/
	authorizations_AuthorizationClosingLeft = __start.Bool+13; /*car__cn_3*/
	authorizations_AuthorizationOpeningRight = __start.Bool+14; /*car__cn_2*/
	authorizations_AuthorizationClosingRight = __start.Bool+15; /*car__cn_1*/
	_tni_train__authorizations_init();

	/*initialize child alarms (tni_train.op_alarms):*/
	self_num++;
	tni_train__car_offset_alarms.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_alarms.Int = self.Int - __start.Int;
	tni_train__car_offset_alarms.Float = self.Float - __start.Float;
	tni_train__car_offset_alarms.Char = self.Char - __start.Char;
	op_alarms_AlarmD1L = car_AlarmD1L;
	op_alarms_AlarmD2L = car_AlarmD2L;
	op_alarms_AlarmD3L = car_AlarmD3L;
	op_alarms_AlarmD1R = car_AlarmD1R;
	op_alarms_AlarmD2R = car_AlarmD2R;
	op_alarms_AlarmD3R = car_AlarmD3R;
	_tni_train__op_alarms_init();

	/*initialize child doorL1 (tni_train.door):*/
	self_num++;
	tni_train__car_offset_doorL1.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_doorL1.Int = self.Int - __start.Int;
	tni_train__car_offset_doorL1.Float = self.Float - __start.Float;
	tni_train__car_offset_doorL1.Char = self.Char - __start.Char;
	door_compressedAir = __start.Float+5; /*car__cn_5*/
	door_cmdSupply = __start.Bool+11; /*car__cn_6*/
	door_sensorSupply = __start.Bool+10; /*car__cn_7*/
	door_enableOpening = __start.Bool+12; /*car__cn_4*/
	door_enableClosing = __start.Bool+13; /*car__cn_3*/
	door_closedDoorState = car_doorL1Closed;
	door_openedDoorState = car_doorL1Opened;
	door_faultState = car_doorL1Fault;
	_tni_train__door_init();

	/*initialize child doorL2 (tni_train.door):*/
	self_num++;
	tni_train__car_offset_doorL2.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_doorL2.Int = self.Int - __start.Int;
	tni_train__car_offset_doorL2.Float = self.Float - __start.Float;
	tni_train__car_offset_doorL2.Char = self.Char - __start.Char;
	door_compressedAir = __start.Float+4; /*car__cn_8*/
	door_cmdSupply = __start.Bool+9; /*car__cn_9*/
	door_sensorSupply = __start.Bool+8; /*car__cn_10*/
	door_enableOpening = __start.Bool+12; /*car__cn_4*/
	door_enableClosing = __start.Bool+13; /*car__cn_3*/
	door_closedDoorState = car_doorL2Closed;
	door_openedDoorState = car_doorL2Opened;
	door_faultState = car_doorL2Fault;
	_tni_train__door_init();

	/*initialize child doorL3 (tni_train.door):*/
	self_num++;
	tni_train__car_offset_doorL3.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_doorL3.Int = self.Int - __start.Int;
	tni_train__car_offset_doorL3.Float = self.Float - __start.Float;
	tni_train__car_offset_doorL3.Char = self.Char - __start.Char;
	door_compressedAir = __start.Float+3; /*car__cn_11*/
	door_cmdSupply = __start.Bool+7; /*car__cn_12*/
	door_sensorSupply = __start.Bool+6; /*car__cn_13*/
	door_enableOpening = __start.Bool+12; /*car__cn_4*/
	door_enableClosing = __start.Bool+13; /*car__cn_3*/
	door_closedDoorState = car_doorL3Closed;
	door_openedDoorState = car_doorL3Opened;
	door_faultState = car_doorL3Fault;
	_tni_train__door_init();

	/*initialize child doorR1 (tni_train.door):*/
	self_num++;
	tni_train__car_offset_doorR1.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_doorR1.Int = self.Int - __start.Int;
	tni_train__car_offset_doorR1.Float = self.Float - __start.Float;
	tni_train__car_offset_doorR1.Char = self.Char - __start.Char;
	door_compressedAir = __start.Float+2; /*car__cn_14*/
	door_cmdSupply = __start.Bool+5; /*car__cn_15*/
	door_sensorSupply = __start.Bool+4; /*car__cn_16*/
	door_enableOpening = __start.Bool+14; /*car__cn_2*/
	door_enableClosing = __start.Bool+15; /*car__cn_1*/
	door_closedDoorState = car_doorR1Closed;
	door_openedDoorState = car_doorR1Opened;
	door_faultState = car_doorR1Fault;
	_tni_train__door_init();

	/*initialize child doorR2 (tni_train.door):*/
	self_num++;
	tni_train__car_offset_doorR2.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_doorR2.Int = self.Int - __start.Int;
	tni_train__car_offset_doorR2.Float = self.Float - __start.Float;
	tni_train__car_offset_doorR2.Char = self.Char - __start.Char;
	door_compressedAir = __start.Float+1; /*car__cn_17*/
	door_cmdSupply = __start.Bool+3; /*car__cn_18*/
	door_sensorSupply = __start.Bool+2; /*car__cn_19*/
	door_enableOpening = __start.Bool+14; /*car__cn_2*/
	door_enableClosing = __start.Bool+15; /*car__cn_1*/
	door_closedDoorState = car_doorR2Closed;
	door_openedDoorState = car_doorR2Opened;
	door_faultState = car_doorR2Fault;
	_tni_train__door_init();

	/*initialize child doorR3 (tni_train.door):*/
	self_num++;
	tni_train__car_offset_doorR3.Bool = self.Bool - __start.Bool;
	tni_train__car_offset_doorR3.Int = self.Int - __start.Int;
	tni_train__car_offset_doorR3.Float = self.Float - __start.Float;
	tni_train__car_offset_doorR3.Char = self.Char - __start.Char;
	door_compressedAir = __start.Float+0; /*car__cn_20*/
	door_cmdSupply = __start.Bool+1; /*car__cn_21*/
	door_sensorSupply = __start.Bool+0; /*car__cn_22*/
	door_enableOpening = __start.Bool+14; /*car__cn_2*/
	door_enableClosing = __start.Bool+15; /*car__cn_1*/
	door_closedDoorState = car_doorR3Closed;
	door_openedDoorState = car_doorR3Opened;
	door_faultState = car_doorR3Fault;
	_tni_train__door_init();

	tni_train__car_offset__end.Bool = self.Bool - __start.Bool;
	tni_train__car_offset__end.Int = self.Int - __start.Int;
	tni_train__car_offset__end.Float = self.Float - __start.Float;
	tni_train__car_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int tni_train__car(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																												
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + tni_train__car_offset_authorizations.Bool;
			self.Int = __start.Int + tni_train__car_offset_authorizations.Int;
			self.Float = __start.Float + tni_train__car_offset_authorizations.Float;
			self.Char = __start.Char + tni_train__car_offset_authorizations.Char;

			/********************* authorizations execution *********************/

			self_num++;
			if (authorizations__num != self_num) {
				authorizations__num = self_num;
				authorizations_AuthorizationClosingLeftC1 = car_AuthorizationClosingLeftC1;
				authorizations_AuthorizationOpeningRightC1 = car_AuthorizationOpeningRightC1;
				authorizations_AuthorizationClosingRightC1 = car_AuthorizationClosingRightC1;
				authorizations_AuthorizationOpeningLeftC1 = car_AuthorizationOpeningLeftC1;
				authorizations_AuthorizationClosingLeftC2 = car_AuthorizationClosingLeftC2;
				authorizations_AuthorizationOpeningRightC2 = car_AuthorizationOpeningRightC2;
				authorizations_AuthorizationClosingRightC2 = car_AuthorizationClosingRightC2;
				authorizations_AuthorizationOpeningLeftC2 = car_AuthorizationOpeningLeftC2;
				authorizations_AuthorizationOpeningLeft = __start.Bool+12; /*car__cn_4*/
				authorizations_AuthorizationClosingLeft = __start.Bool+13; /*car__cn_3*/
				authorizations_AuthorizationOpeningRight = __start.Bool+14; /*car__cn_2*/
				authorizations_AuthorizationClosingRight = __start.Bool+15; /*car__cn_1*/
			}
			__ret = tni_train__authorizations();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* alarms execution *************************/

			self_num++;
			if (op_alarms__num != self_num) {
				op_alarms__num = self_num;
				op_alarms_AlarmD1L = car_AlarmD1L;
				op_alarms_AlarmD2L = car_AlarmD2L;
				op_alarms_AlarmD3L = car_AlarmD3L;
				op_alarms_AlarmD1R = car_AlarmD1R;
				op_alarms_AlarmD2R = car_AlarmD2R;
				op_alarms_AlarmD3R = car_AlarmD3R;
			}
			__ret = tni_train__op_alarms();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* doorL1 execution *************************/

			self_num++;
			if (door__num != self_num) {
				door__num = self_num;
				door_compressedAir = __start.Float+5; /*car__cn_5*/
				door_cmdSupply = __start.Bool+11; /*car__cn_6*/
				door_sensorSupply = __start.Bool+10; /*car__cn_7*/
				door_enableOpening = __start.Bool+12; /*car__cn_4*/
				door_enableClosing = __start.Bool+13; /*car__cn_3*/
				door_closedDoorState = car_doorL1Closed;
				door_openedDoorState = car_doorL1Opened;
				door_faultState = car_doorL1Fault;
			}
			__ret = tni_train__door();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* doorL2 execution *************************/

			self_num++;
			if (door__num != self_num) {
				door__num = self_num;
				door_compressedAir = __start.Float+4; /*car__cn_8*/
				door_cmdSupply = __start.Bool+9; /*car__cn_9*/
				door_sensorSupply = __start.Bool+8; /*car__cn_10*/
				door_enableOpening = __start.Bool+12; /*car__cn_4*/
				door_enableClosing = __start.Bool+13; /*car__cn_3*/
				door_closedDoorState = car_doorL2Closed;
				door_openedDoorState = car_doorL2Opened;
				door_faultState = car_doorL2Fault;
			}
			__ret = tni_train__door();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* doorL3 execution *************************/

			self_num++;
			if (door__num != self_num) {
				door__num = self_num;
				door_compressedAir = __start.Float+3; /*car__cn_11*/
				door_cmdSupply = __start.Bool+7; /*car__cn_12*/
				door_sensorSupply = __start.Bool+6; /*car__cn_13*/
				door_enableOpening = __start.Bool+12; /*car__cn_4*/
				door_enableClosing = __start.Bool+13; /*car__cn_3*/
				door_closedDoorState = car_doorL3Closed;
				door_openedDoorState = car_doorL3Opened;
				door_faultState = car_doorL3Fault;
			}
			__ret = tni_train__door();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* doorR1 execution *************************/

			self_num++;
			if (door__num != self_num) {
				door__num = self_num;
				door_compressedAir = __start.Float+2; /*car__cn_14*/
				door_cmdSupply = __start.Bool+5; /*car__cn_15*/
				door_sensorSupply = __start.Bool+4; /*car__cn_16*/
				door_enableOpening = __start.Bool+14; /*car__cn_2*/
				door_enableClosing = __start.Bool+15; /*car__cn_1*/
				door_closedDoorState = car_doorR1Closed;
				door_openedDoorState = car_doorR1Opened;
				door_faultState = car_doorR1Fault;
			}
			__ret = tni_train__door();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* doorR2 execution *************************/

			self_num++;
			if (door__num != self_num) {
				door__num = self_num;
				door_compressedAir = __start.Float+1; /*car__cn_17*/
				door_cmdSupply = __start.Bool+3; /*car__cn_18*/
				door_sensorSupply = __start.Bool+2; /*car__cn_19*/
				door_enableOpening = __start.Bool+14; /*car__cn_2*/
				door_enableClosing = __start.Bool+15; /*car__cn_1*/
				door_closedDoorState = car_doorR2Closed;
				door_openedDoorState = car_doorR2Opened;
				door_faultState = car_doorR2Fault;
			}
			__ret = tni_train__door();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* doorR3 execution *************************/

			self_num++;
			if (door__num != self_num) {
				door__num = self_num;
				door_compressedAir = __start.Float+0; /*car__cn_20*/
				door_cmdSupply = __start.Bool+1; /*car__cn_21*/
				door_sensorSupply = __start.Bool+0; /*car__cn_22*/
				door_enableOpening = __start.Bool+14; /*car__cn_2*/
				door_enableClosing = __start.Bool+15; /*car__cn_1*/
				door_closedDoorState = car_doorR3Closed;
				door_openedDoorState = car_doorR3Opened;
				door_faultState = car_doorR3Fault;
			}
			__ret = tni_train__door();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + tni_train__car_offset__end.Bool;
	self.Int = __start.Int + tni_train__car_offset__end.Int;
	self.Float = __start.Float + tni_train__car_offset__end.Float;
	self.Char = __start.Char + tni_train__car_offset__end.Char;

	return 0;
}

