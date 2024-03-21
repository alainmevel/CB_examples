/*2023-10-03T11:12:46-01:00*/

/********************************************************************
 * io_engine_1d1s.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"


/********************************************************************
 *                    Inner 'panel' declarations                    *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index panel__num;
extern CB_Mem_Bool *_i_io_engine_1d1s__panel_forwardPB;
extern CB_Mem_Bool *_i_io_engine_1d1s__panel_stopPB;

/********************** Function declarations ***********************/

static int _io_library__panel_init(void);
static int io_library__panel(void);

/********************************************************************
 *                   Inner 'panel' implementation                   *
 ********************************************************************/

#include "equipment_library/functional/momentary_button/momentary_button.h"


/**************************** Variables *****************************/

static CB_Index panel__num = 0;
CB_Mem_Bool *_i_io_engine_1d1s__panel_forwardPB;
CB_Mem_Bool *_i_io_engine_1d1s__panel_stopPB;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__panel_offset_forwardPB;
static CB_Offset io_library__panel_offset_stopPB;
static CB_Offset io_library__panel_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

static int _io_library__panel_init(void)
{
	CB_Object __start = self;

	/*initialize child forwardPB (equipment_library.momentary_button):*/
	self_num++;
	io_library__panel_offset_forwardPB.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_forwardPB.Int = self.Int - __start.Int;
	io_library__panel_offset_forwardPB.Float = self.Float - __start.Float;
	io_library__panel_offset_forwardPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_io_engine_1d1s__panel_forwardPB;
	_equipment_library__momentary_button_init();

	/*initialize child stopPB (equipment_library.momentary_button):*/
	self_num++;
	io_library__panel_offset_stopPB.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_stopPB.Int = self.Int - __start.Int;
	io_library__panel_offset_stopPB.Float = self.Float - __start.Float;
	io_library__panel_offset_stopPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_io_engine_1d1s__panel_stopPB;
	_equipment_library__momentary_button_init();

	io_library__panel_offset__end.Bool = self.Bool - __start.Bool;
	io_library__panel_offset__end.Int = self.Int - __start.Int;
	io_library__panel_offset__end.Float = self.Float - __start.Float;
	io_library__panel_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

static int io_library__panel(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + io_library__panel_offset_forwardPB.Bool;
			self.Int = __start.Int + io_library__panel_offset_forwardPB.Int;
			self.Float = __start.Float + io_library__panel_offset_forwardPB.Float;
			self.Char = __start.Char + io_library__panel_offset_forwardPB.Char;

			/*********************** forwardPB execution ************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_io_engine_1d1s__panel_forwardPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* stopPB execution *************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_io_engine_1d1s__panel_stopPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + io_library__panel_offset__end.Bool;
	self.Int = __start.Int + io_library__panel_offset__end.Int;
	self.Float = __start.Float + io_library__panel_offset__end.Float;
	self.Char = __start.Char + io_library__panel_offset__end.Char;

	return 0;
}


/********************************************************************
 *        Public 'io_library.io_engine_1d1s' implementation         *
 ********************************************************************/

#include "io_engine_1d1s.h"
#include "equipment_library/functional/motor_1dir_1speed/motor_1dir_1speed.h"
#include "cmd_equipment_library/functional/cmd_motor_1d1s/cmd_motor_1d1s.h"


/**************************** Variables *****************************/

CB_Index io_engine_1d1s__num = 0;
CB_Mem_Bool *io_engine_1d1s_autoMode;
CB_Mem_Bool *io_engine_1d1s_manualMode;
CB_Mem_Bool *io_engine_1d1s_autoCmd;
CB_Mem_Bool *io_engine_1d1s_acknowledgePB;
CB_Mem_Float *io_engine_1d1s_speedVal;
CB_Mem_Float *io_engine_1d1s_speedPercent;
CB_Mem_Bool *io_engine_1d1s_generalFault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__io_engine_1d1s_offset_panel1;
static CB_Offset io_library__io_engine_1d1s_offset_motor;
static CB_Offset io_library__io_engine_1d1s_offset_cmdOfMotor;
static CB_Offset io_library__io_engine_1d1s_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _io_library__io_engine_1d1s_init(void)
{
	CB_Object __start = self;
	self.Bool+=8;

	/*initialize child panel1 (io_library.panel):*/
	self_num++;
	io_library__io_engine_1d1s_offset_panel1.Bool = self.Bool - __start.Bool;
	io_library__io_engine_1d1s_offset_panel1.Int = self.Int - __start.Int;
	io_library__io_engine_1d1s_offset_panel1.Float = self.Float - __start.Float;
	io_library__io_engine_1d1s_offset_panel1.Char = self.Char - __start.Char;
	_i_io_engine_1d1s__panel_forwardPB = __start.Bool+6; /*io_engine_1d1s__cn_2*/
	_i_io_engine_1d1s__panel_stopPB = __start.Bool+7; /*io_engine_1d1s__cn_1*/
	_io_library__panel_init();

	/*initialize child motor (equipment_library.motor_1dir_1speed):*/
	self_num++;
	io_library__io_engine_1d1s_offset_motor.Bool = self.Bool - __start.Bool;
	io_library__io_engine_1d1s_offset_motor.Int = self.Int - __start.Int;
	io_library__io_engine_1d1s_offset_motor.Float = self.Float - __start.Float;
	io_library__io_engine_1d1s_offset_motor.Char = self.Char - __start.Char;
	motor_1dir_1speed_voltage380 = __start.Bool+2; /*io_engine_1d1s__cn_6*/
	motor_1dir_1speed_cmdSupply = __start.Bool+1; /*io_engine_1d1s__cn_7*/
	motor_1dir_1speed_sensorSupply = __start.Bool+0; /*io_engine_1d1s__cn_8*/
	motor_1dir_1speed_forward = __start.Bool+3; /*io_engine_1d1s__cn_5*/
	motor_1dir_1speed_forwardFB = __start.Bool+4; /*io_engine_1d1s__cn_4*/
	motor_1dir_1speed_thermal = __start.Bool+5; /*io_engine_1d1s__cn_3*/
	motor_1dir_1speed_speedVal = io_engine_1d1s_speedVal;
	motor_1dir_1speed_speedPercent = io_engine_1d1s_speedPercent;
	_equipment_library__motor_1dir_1speed_init();

	/*initialize child cmdOfMotor (cmd_equipment_library.cmd_motor_1d1s):*/
	self_num++;
	io_library__io_engine_1d1s_offset_cmdOfMotor.Bool = self.Bool - __start.Bool;
	io_library__io_engine_1d1s_offset_cmdOfMotor.Int = self.Int - __start.Int;
	io_library__io_engine_1d1s_offset_cmdOfMotor.Float = self.Float - __start.Float;
	io_library__io_engine_1d1s_offset_cmdOfMotor.Char = self.Char - __start.Char;
	cmd_motor_1d1s_autoMode = io_engine_1d1s_autoMode;
	cmd_motor_1d1s_manualMode = io_engine_1d1s_manualMode;
	cmd_motor_1d1s_autoCmd = io_engine_1d1s_autoCmd;
	cmd_motor_1d1s_forwardFB = __start.Bool+4; /*io_engine_1d1s__cn_4*/
	cmd_motor_1d1s_thermalFB = __start.Bool+5; /*io_engine_1d1s__cn_3*/
	cmd_motor_1d1s_forwardPB = __start.Bool+6; /*io_engine_1d1s__cn_2*/
	cmd_motor_1d1s_stopPB = __start.Bool+7; /*io_engine_1d1s__cn_1*/
	cmd_motor_1d1s_acknowledgePB = io_engine_1d1s_acknowledgePB;
	cmd_motor_1d1s_forwardCmd = __start.Bool+3; /*io_engine_1d1s__cn_5*/
	cmd_motor_1d1s_generalFault = io_engine_1d1s_generalFault;
	_cmd_equipment_library__cmd_motor_1d1s_init();

	io_library__io_engine_1d1s_offset__end.Bool = self.Bool - __start.Bool;
	io_library__io_engine_1d1s_offset__end.Int = self.Int - __start.Int;
	io_library__io_engine_1d1s_offset__end.Float = self.Float - __start.Float;
	io_library__io_engine_1d1s_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int io_library__io_engine_1d1s(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + io_library__io_engine_1d1s_offset_panel1.Bool;
			self.Int = __start.Int + io_library__io_engine_1d1s_offset_panel1.Int;
			self.Float = __start.Float + io_library__io_engine_1d1s_offset_panel1.Float;
			self.Char = __start.Char + io_library__io_engine_1d1s_offset_panel1.Char;

			/************************* panel1 execution *************************/

			self_num++;
			if (panel__num != self_num) {
				panel__num = self_num;
				_i_io_engine_1d1s__panel_forwardPB = __start.Bool+6; /*io_engine_1d1s__cn_2*/
				_i_io_engine_1d1s__panel_stopPB = __start.Bool+7; /*io_engine_1d1s__cn_1*/
			}
			__ret = io_library__panel();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* motor execution **************************/

			self_num++;
			if (motor_1dir_1speed__num != self_num) {
				motor_1dir_1speed__num = self_num;
				motor_1dir_1speed_voltage380 = __start.Bool+2; /*io_engine_1d1s__cn_6*/
				motor_1dir_1speed_cmdSupply = __start.Bool+1; /*io_engine_1d1s__cn_7*/
				motor_1dir_1speed_sensorSupply = __start.Bool+0; /*io_engine_1d1s__cn_8*/
				motor_1dir_1speed_forward = __start.Bool+3; /*io_engine_1d1s__cn_5*/
				motor_1dir_1speed_forwardFB = __start.Bool+4; /*io_engine_1d1s__cn_4*/
				motor_1dir_1speed_thermal = __start.Bool+5; /*io_engine_1d1s__cn_3*/
				motor_1dir_1speed_speedVal = io_engine_1d1s_speedVal;
				motor_1dir_1speed_speedPercent = io_engine_1d1s_speedPercent;
			}
			__ret = equipment_library__motor_1dir_1speed();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** cmdOfMotor execution ***********************/

			self_num++;
			if (cmd_motor_1d1s__num != self_num) {
				cmd_motor_1d1s__num = self_num;
				cmd_motor_1d1s_autoMode = io_engine_1d1s_autoMode;
				cmd_motor_1d1s_manualMode = io_engine_1d1s_manualMode;
				cmd_motor_1d1s_autoCmd = io_engine_1d1s_autoCmd;
				cmd_motor_1d1s_forwardFB = __start.Bool+4; /*io_engine_1d1s__cn_4*/
				cmd_motor_1d1s_thermalFB = __start.Bool+5; /*io_engine_1d1s__cn_3*/
				cmd_motor_1d1s_forwardPB = __start.Bool+6; /*io_engine_1d1s__cn_2*/
				cmd_motor_1d1s_stopPB = __start.Bool+7; /*io_engine_1d1s__cn_1*/
				cmd_motor_1d1s_acknowledgePB = io_engine_1d1s_acknowledgePB;
				cmd_motor_1d1s_forwardCmd = __start.Bool+3; /*io_engine_1d1s__cn_5*/
				cmd_motor_1d1s_generalFault = io_engine_1d1s_generalFault;
			}
			__ret = cmd_equipment_library__cmd_motor_1d1s();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + io_library__io_engine_1d1s_offset__end.Bool;
	self.Int = __start.Int + io_library__io_engine_1d1s_offset__end.Int;
	self.Float = __start.Float + io_library__io_engine_1d1s_offset__end.Float;
	self.Char = __start.Char + io_library__io_engine_1d1s_offset__end.Char;

	return 0;
}

