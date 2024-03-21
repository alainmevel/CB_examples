/*2023-10-03T11:13:51-01:00*/

/********************************************************************
 * op_alarms.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "op_alarms.h"
#include "tni_train/functional/op_alarm/op_alarm.h"


/**************************** Variables *****************************/

CB_Index op_alarms__num = 0;
CB_Mem_Bool *op_alarms_AlarmD1L;
CB_Mem_Bool *op_alarms_AlarmD2L;
CB_Mem_Bool *op_alarms_AlarmD3L;
CB_Mem_Bool *op_alarms_AlarmD1R;
CB_Mem_Bool *op_alarms_AlarmD2R;
CB_Mem_Bool *op_alarms_AlarmD3R;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset tni_train__op_alarms_offset_AlarmD1L;
static CB_Offset tni_train__op_alarms_offset_AlarmD2L;
static CB_Offset tni_train__op_alarms_offset_AlarmD3L;
static CB_Offset tni_train__op_alarms_offset_AlarmD1R;
static CB_Offset tni_train__op_alarms_offset_AlarmD2R;
static CB_Offset tni_train__op_alarms_offset_AlarmD3R;
static CB_Offset tni_train__op_alarms_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _tni_train__op_alarms_init(void)
{
	CB_Object __start = self;
	self.Bool+=12;

	/*initialize child AlarmD1L (tni_train.op_alarm):*/
	self_num++;
	tni_train__op_alarms_offset_AlarmD1L.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset_AlarmD1L.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset_AlarmD1L.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset_AlarmD1L.Char = self.Char - __start.Char;
	op_alarm_enableAlarm = __start.Bool+11; /*op_alarms__cn_1*/
	op_alarm_resetKey = __start.Bool+10; /*op_alarms__cn_2*/
	op_alarm_alarm = op_alarms_AlarmD1L;
	_tni_train__op_alarm_init();

	/*initialize child AlarmD2L (tni_train.op_alarm):*/
	self_num++;
	tni_train__op_alarms_offset_AlarmD2L.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset_AlarmD2L.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset_AlarmD2L.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset_AlarmD2L.Char = self.Char - __start.Char;
	op_alarm_enableAlarm = __start.Bool+9; /*op_alarms__cn_3*/
	op_alarm_resetKey = __start.Bool+8; /*op_alarms__cn_4*/
	op_alarm_alarm = op_alarms_AlarmD2L;
	_tni_train__op_alarm_init();

	/*initialize child AlarmD3L (tni_train.op_alarm):*/
	self_num++;
	tni_train__op_alarms_offset_AlarmD3L.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset_AlarmD3L.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset_AlarmD3L.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset_AlarmD3L.Char = self.Char - __start.Char;
	op_alarm_enableAlarm = __start.Bool+7; /*op_alarms__cn_5*/
	op_alarm_resetKey = __start.Bool+6; /*op_alarms__cn_6*/
	op_alarm_alarm = op_alarms_AlarmD3L;
	_tni_train__op_alarm_init();

	/*initialize child AlarmD1R (tni_train.op_alarm):*/
	self_num++;
	tni_train__op_alarms_offset_AlarmD1R.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset_AlarmD1R.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset_AlarmD1R.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset_AlarmD1R.Char = self.Char - __start.Char;
	op_alarm_enableAlarm = __start.Bool+5; /*op_alarms__cn_7*/
	op_alarm_resetKey = __start.Bool+4; /*op_alarms__cn_8*/
	op_alarm_alarm = op_alarms_AlarmD1R;
	_tni_train__op_alarm_init();

	/*initialize child AlarmD2R (tni_train.op_alarm):*/
	self_num++;
	tni_train__op_alarms_offset_AlarmD2R.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset_AlarmD2R.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset_AlarmD2R.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset_AlarmD2R.Char = self.Char - __start.Char;
	op_alarm_enableAlarm = __start.Bool+3; /*op_alarms__cn_9*/
	op_alarm_resetKey = __start.Bool+2; /*op_alarms__cn_10*/
	op_alarm_alarm = op_alarms_AlarmD2R;
	_tni_train__op_alarm_init();

	/*initialize child AlarmD3R (tni_train.op_alarm):*/
	self_num++;
	tni_train__op_alarms_offset_AlarmD3R.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset_AlarmD3R.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset_AlarmD3R.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset_AlarmD3R.Char = self.Char - __start.Char;
	op_alarm_enableAlarm = __start.Bool+1; /*op_alarms__cn_11*/
	op_alarm_resetKey = __start.Bool+0; /*op_alarms__cn_12*/
	op_alarm_alarm = op_alarms_AlarmD3R;
	_tni_train__op_alarm_init();

	tni_train__op_alarms_offset__end.Bool = self.Bool - __start.Bool;
	tni_train__op_alarms_offset__end.Int = self.Int - __start.Int;
	tni_train__op_alarms_offset__end.Float = self.Float - __start.Float;
	tni_train__op_alarms_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int tni_train__op_alarms(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																								
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + tni_train__op_alarms_offset_AlarmD1L.Bool;
			self.Int = __start.Int + tni_train__op_alarms_offset_AlarmD1L.Int;
			self.Float = __start.Float + tni_train__op_alarms_offset_AlarmD1L.Float;
			self.Char = __start.Char + tni_train__op_alarms_offset_AlarmD1L.Char;

			/************************ AlarmD1L execution ************************/

			self_num++;
			if (op_alarm__num != self_num) {
				op_alarm__num = self_num;
				op_alarm_enableAlarm = __start.Bool+11; /*op_alarms__cn_1*/
				op_alarm_resetKey = __start.Bool+10; /*op_alarms__cn_2*/
				op_alarm_alarm = op_alarms_AlarmD1L;
			}
			__ret = tni_train__op_alarm();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ AlarmD2L execution ************************/

			self_num++;
			if (op_alarm__num != self_num) {
				op_alarm__num = self_num;
				op_alarm_enableAlarm = __start.Bool+9; /*op_alarms__cn_3*/
				op_alarm_resetKey = __start.Bool+8; /*op_alarms__cn_4*/
				op_alarm_alarm = op_alarms_AlarmD2L;
			}
			__ret = tni_train__op_alarm();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ AlarmD3L execution ************************/

			self_num++;
			if (op_alarm__num != self_num) {
				op_alarm__num = self_num;
				op_alarm_enableAlarm = __start.Bool+7; /*op_alarms__cn_5*/
				op_alarm_resetKey = __start.Bool+6; /*op_alarms__cn_6*/
				op_alarm_alarm = op_alarms_AlarmD3L;
			}
			__ret = tni_train__op_alarm();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ AlarmD1R execution ************************/

			self_num++;
			if (op_alarm__num != self_num) {
				op_alarm__num = self_num;
				op_alarm_enableAlarm = __start.Bool+5; /*op_alarms__cn_7*/
				op_alarm_resetKey = __start.Bool+4; /*op_alarms__cn_8*/
				op_alarm_alarm = op_alarms_AlarmD1R;
			}
			__ret = tni_train__op_alarm();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ AlarmD2R execution ************************/

			self_num++;
			if (op_alarm__num != self_num) {
				op_alarm__num = self_num;
				op_alarm_enableAlarm = __start.Bool+3; /*op_alarms__cn_9*/
				op_alarm_resetKey = __start.Bool+2; /*op_alarms__cn_10*/
				op_alarm_alarm = op_alarms_AlarmD2R;
			}
			__ret = tni_train__op_alarm();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ AlarmD3R execution ************************/

			self_num++;
			if (op_alarm__num != self_num) {
				op_alarm__num = self_num;
				op_alarm_enableAlarm = __start.Bool+1; /*op_alarms__cn_11*/
				op_alarm_resetKey = __start.Bool+0; /*op_alarms__cn_12*/
				op_alarm_alarm = op_alarms_AlarmD3R;
			}
			__ret = tni_train__op_alarm();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + tni_train__op_alarms_offset__end.Bool;
	self.Int = __start.Int + tni_train__op_alarms_offset__end.Int;
	self.Float = __start.Float + tni_train__op_alarms_offset__end.Float;
	self.Char = __start.Char + tni_train__op_alarms_offset__end.Char;

	return 0;
}

