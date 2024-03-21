/*2023-10-03T11:13:47-01:00*/

/********************************************************************
 * mspindle.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "mspindle.h"
#include "drill/functional/spindle/spindle.h"
#include "io_library/functional/io_engine_1d1s/io_engine_1d1s.h"


/**************************** Variables *****************************/

CB_Index mspindle__num = 0;
CB_Mem_Bool *mspindle_rotationFunction;
CB_Mem_Bool *mspindle_acknowledgePB;
CB_Mem_Bool *mspindle_autoMode;
CB_Mem_Bool *mspindle_manualMode;
CB_Mem_Int *mspindle_rotationFault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset drill__mspindle_offset_spindle;
static CB_Offset drill__mspindle_offset_spindleMotor;
static CB_Offset drill__mspindle_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _drill__mspindle_init(void)
{
	CB_Object __start = self;
	self.Bool+=2;
	self.Float+=2;

	/*initialize child spindle (drill.spindle):*/
	self_num++;
	drill__mspindle_offset_spindle.Bool = self.Bool - __start.Bool;
	drill__mspindle_offset_spindle.Int = self.Int - __start.Int;
	drill__mspindle_offset_spindle.Float = self.Float - __start.Float;
	drill__mspindle_offset_spindle.Char = self.Char - __start.Char;
	spindle_rotation = mspindle_rotationFunction;
	spindle_acknowledgePB = mspindle_acknowledgePB;
	spindle_equipmentFault = __start.Bool+0; /*mspindle__cn_2*/
	spindle_contactor = __start.Bool+1; /*mspindle__cn_1*/
	spindle_rotationFault = mspindle_rotationFault;
	_drill__spindle_init();

	/*initialize child spindleMotor (io_library.io_engine_1d1s):*/
	self_num++;
	drill__mspindle_offset_spindleMotor.Bool = self.Bool - __start.Bool;
	drill__mspindle_offset_spindleMotor.Int = self.Int - __start.Int;
	drill__mspindle_offset_spindleMotor.Float = self.Float - __start.Float;
	drill__mspindle_offset_spindleMotor.Char = self.Char - __start.Char;
	io_engine_1d1s_autoMode = mspindle_autoMode;
	io_engine_1d1s_manualMode = mspindle_manualMode;
	io_engine_1d1s_autoCmd = __start.Bool+1; /*mspindle__cn_1*/
	io_engine_1d1s_acknowledgePB = mspindle_acknowledgePB;
	io_engine_1d1s_speedVal = __start.Float+1; /*mspindle__cn_3*/
	io_engine_1d1s_speedPercent = __start.Float+0; /*mspindle__cn_4*/
	io_engine_1d1s_generalFault = __start.Bool+0; /*mspindle__cn_2*/
	_io_library__io_engine_1d1s_init();

	drill__mspindle_offset__end.Bool = self.Bool - __start.Bool;
	drill__mspindle_offset__end.Int = self.Int - __start.Int;
	drill__mspindle_offset__end.Float = self.Float - __start.Float;
	drill__mspindle_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int drill__mspindle(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

								
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + drill__mspindle_offset_spindle.Bool;
			self.Int = __start.Int + drill__mspindle_offset_spindle.Int;
			self.Float = __start.Float + drill__mspindle_offset_spindle.Float;
			self.Char = __start.Char + drill__mspindle_offset_spindle.Char;

			/************************ spindle execution *************************/

			self_num++;
			if (spindle__num != self_num) {
				spindle__num = self_num;
				spindle_rotation = mspindle_rotationFunction;
				spindle_acknowledgePB = mspindle_acknowledgePB;
				spindle_equipmentFault = __start.Bool+0; /*mspindle__cn_2*/
				spindle_contactor = __start.Bool+1; /*mspindle__cn_1*/
				spindle_rotationFault = mspindle_rotationFault;
			}
			__ret = drill__spindle();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** spindleMotor execution **********************/

			self_num++;
			if (io_engine_1d1s__num != self_num) {
				io_engine_1d1s__num = self_num;
				io_engine_1d1s_autoMode = mspindle_autoMode;
				io_engine_1d1s_manualMode = mspindle_manualMode;
				io_engine_1d1s_autoCmd = __start.Bool+1; /*mspindle__cn_1*/
				io_engine_1d1s_acknowledgePB = mspindle_acknowledgePB;
				io_engine_1d1s_speedVal = __start.Float+1; /*mspindle__cn_3*/
				io_engine_1d1s_speedPercent = __start.Float+0; /*mspindle__cn_4*/
				io_engine_1d1s_generalFault = __start.Bool+0; /*mspindle__cn_2*/
			}
			__ret = io_library__io_engine_1d1s();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + drill__mspindle_offset__end.Bool;
	self.Int = __start.Int + drill__mspindle_offset__end.Int;
	self.Float = __start.Float + drill__mspindle_offset__end.Float;
	self.Char = __start.Char + drill__mspindle_offset__end.Char;

	return 0;
}

