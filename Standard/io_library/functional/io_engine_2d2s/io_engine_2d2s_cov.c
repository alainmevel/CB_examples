/*2023-10-03T11:12:47-01:00*/

/********************************************************************
 * io_engine_2d2s_cov.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "cb_covs.h"
#include "iec_1131.h"


/********************************************************************
 *                    Inner 'panel' declarations                    *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index panel__num;
extern CB_Mem_Bool *_i_io_engine_2d2s__panel_forwardPB;
extern CB_Mem_Bool *_i_io_engine_2d2s__panel_backwardPB;
extern CB_Mem_Bool *_i_io_engine_2d2s__panel_highSpeedPB;
extern CB_Mem_Bool *_i_io_engine_2d2s__panel_lowSpeedPB;
extern CB_Mem_Bool *_i_io_engine_2d2s__panel_stopPB;

/********************** Function declarations ***********************/

static int _io_library__panel_init(void);
static int io_library__panel(void);

/********************************************************************
 *                   Inner 'panel' implementation                   *
 ********************************************************************/

#include "equipment_library/functional/momentary_button/momentary_button.h"
#include "equipment_library/functional/switch_2pos_2outputs/switch_2pos_2outputs.h"


/**************************** Variables *****************************/

static CB_Index panel__num = 0;
CB_Mem_Bool *_i_io_engine_2d2s__panel_forwardPB;
CB_Mem_Bool *_i_io_engine_2d2s__panel_backwardPB;
CB_Mem_Bool *_i_io_engine_2d2s__panel_highSpeedPB;
CB_Mem_Bool *_i_io_engine_2d2s__panel_lowSpeedPB;
CB_Mem_Bool *_i_io_engine_2d2s__panel_stopPB;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__panel_offset_forwardPB;
static CB_Offset io_library__panel_offset_backwardPB;
static CB_Offset io_library__panel_offset_speedSwitch;
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
	momentary_button_PB = _i_io_engine_2d2s__panel_forwardPB;
	_equipment_library__momentary_button_init();

	/*initialize child backwardPB (equipment_library.momentary_button):*/
	self_num++;
	io_library__panel_offset_backwardPB.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_backwardPB.Int = self.Int - __start.Int;
	io_library__panel_offset_backwardPB.Float = self.Float - __start.Float;
	io_library__panel_offset_backwardPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_io_engine_2d2s__panel_backwardPB;
	_equipment_library__momentary_button_init();

	/*initialize child speedSwitch (equipment_library.switch_2pos_2outputs):*/
	self_num++;
	io_library__panel_offset_speedSwitch.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_speedSwitch.Int = self.Int - __start.Int;
	io_library__panel_offset_speedSwitch.Float = self.Float - __start.Float;
	io_library__panel_offset_speedSwitch.Char = self.Char - __start.Char;
	switch_2pos_2outputs_leftVariable = _i_io_engine_2d2s__panel_highSpeedPB;
	switch_2pos_2outputs_rightVariable = _i_io_engine_2d2s__panel_lowSpeedPB;
	_equipment_library__switch_2pos_2outputs_init();

	/*initialize child stopPB (equipment_library.momentary_button):*/
	self_num++;
	io_library__panel_offset_stopPB.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_stopPB.Int = self.Int - __start.Int;
	io_library__panel_offset_stopPB.Float = self.Float - __start.Float;
	io_library__panel_offset_stopPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_io_engine_2d2s__panel_stopPB;
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
	static char *__comp_name = "io_library.panel";
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
				momentary_button_PB = _i_io_engine_2d2s__panel_forwardPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** backwardPB execution ***********************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_io_engine_2d2s__panel_backwardPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** speedSwitch execution ***********************/

			self_num++;
			if (switch_2pos_2outputs__num != self_num) {
				switch_2pos_2outputs__num = self_num;
				switch_2pos_2outputs_leftVariable = _i_io_engine_2d2s__panel_highSpeedPB;
				switch_2pos_2outputs_rightVariable = _i_io_engine_2d2s__panel_lowSpeedPB;
			}
			__ret = equipment_library__switch_2pos_2outputs();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* stopPB execution *************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_io_engine_2d2s__panel_stopPB;
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
 *        Public 'io_library.io_engine_2d2s' implementation         *
 ********************************************************************/

#include "io_engine_2d2s.h"
#include "equipment_library/functional/motor_2dir_2speed/motor_2dir_2speed.h"
#include "cmd_equipment_library/functional/cmd_motor_2d2s/cmd_motor_2d2s.h"


/**************************** Variables *****************************/

CB_Index io_engine_2d2s__num = 0;
CB_Mem_Bool *io_engine_2d2s_autoMode;
CB_Mem_Bool *io_engine_2d2s_manualMode;
CB_Mem_Bool *io_engine_2d2s_autoFwdCmd;
CB_Mem_Bool *io_engine_2d2s_autoBwdCmd;
CB_Mem_Bool *io_engine_2d2s_autoHSCmd;
CB_Mem_Bool *io_engine_2d2s_autoLSCmd;
CB_Mem_Bool *io_engine_2d2s_acknowledgePB;
CB_Mem_Float *io_engine_2d2s_speedVal;
CB_Mem_Float *io_engine_2d2s_speedPercent;
CB_Mem_Bool *io_engine_2d2s_generalFault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__io_engine_2d2s_offset_panel1;
static CB_Offset io_library__io_engine_2d2s_offset_motor;
static CB_Offset io_library__io_engine_2d2s_offset_cmdOfMotor;
static CB_Offset io_library__io_engine_2d2s_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _io_library__io_engine_2d2s_init(void)
{
	CB_Object __start = self;
	self.Bool+=17;

	/*initialize child panel1 (io_library.panel):*/
	self_num++;
	io_library__io_engine_2d2s_offset_panel1.Bool = self.Bool - __start.Bool;
	io_library__io_engine_2d2s_offset_panel1.Int = self.Int - __start.Int;
	io_library__io_engine_2d2s_offset_panel1.Float = self.Float - __start.Float;
	io_library__io_engine_2d2s_offset_panel1.Char = self.Char - __start.Char;
	_i_io_engine_2d2s__panel_forwardPB = __start.Bool+7; /*io_engine_2d2s__cn_10*/
	_i_io_engine_2d2s__panel_backwardPB = __start.Bool+8; /*io_engine_2d2s__cn_9*/
	_i_io_engine_2d2s__panel_highSpeedPB = __start.Bool+9; /*io_engine_2d2s__cn_8*/
	_i_io_engine_2d2s__panel_lowSpeedPB = __start.Bool+10; /*io_engine_2d2s__cn_7*/
	_i_io_engine_2d2s__panel_stopPB = __start.Bool+11; /*io_engine_2d2s__cn_6*/
	_io_library__panel_init();

	/*initialize child motor (equipment_library.motor_2dir_2speed):*/
	self_num++;
	io_library__io_engine_2d2s_offset_motor.Bool = self.Bool - __start.Bool;
	io_library__io_engine_2d2s_offset_motor.Int = self.Int - __start.Int;
	io_library__io_engine_2d2s_offset_motor.Float = self.Float - __start.Float;
	io_library__io_engine_2d2s_offset_motor.Char = self.Char - __start.Char;
	motor_2dir_2speed_voltage380 = __start.Bool+2; /*io_engine_2d2s__cn_15*/
	motor_2dir_2speed_cmdSupply = __start.Bool+1; /*io_engine_2d2s__cn_16*/
	motor_2dir_2speed_sensorSupply = __start.Bool+0; /*io_engine_2d2s__cn_17*/
	motor_2dir_2speed_forward = __start.Bool+3; /*io_engine_2d2s__cn_14*/
	motor_2dir_2speed_backward = __start.Bool+4; /*io_engine_2d2s__cn_13*/
	motor_2dir_2speed_highSpeed = __start.Bool+5; /*io_engine_2d2s__cn_12*/
	motor_2dir_2speed_lowSpeed = __start.Bool+6; /*io_engine_2d2s__cn_11*/
	motor_2dir_2speed_forwardFB = __start.Bool+12; /*io_engine_2d2s__cn_5*/
	motor_2dir_2speed_backwardFB = __start.Bool+13; /*io_engine_2d2s__cn_4*/
	motor_2dir_2speed_highSpeedFB = __start.Bool+14; /*io_engine_2d2s__cn_3*/
	motor_2dir_2speed_lowSpeedFB = __start.Bool+15; /*io_engine_2d2s__cn_2*/
	motor_2dir_2speed_thermal = __start.Bool+16; /*io_engine_2d2s__cn_1*/
	motor_2dir_2speed_speedVal = io_engine_2d2s_speedVal;
	motor_2dir_2speed_speedPercent = io_engine_2d2s_speedPercent;
	_equipment_library__motor_2dir_2speed_init();

	/*initialize child cmdOfMotor (cmd_equipment_library.cmd_motor_2d2s):*/
	self_num++;
	io_library__io_engine_2d2s_offset_cmdOfMotor.Bool = self.Bool - __start.Bool;
	io_library__io_engine_2d2s_offset_cmdOfMotor.Int = self.Int - __start.Int;
	io_library__io_engine_2d2s_offset_cmdOfMotor.Float = self.Float - __start.Float;
	io_library__io_engine_2d2s_offset_cmdOfMotor.Char = self.Char - __start.Char;
	cmd_motor_2d2s_autoMode = io_engine_2d2s_autoMode;
	cmd_motor_2d2s_manualMode = io_engine_2d2s_manualMode;
	cmd_motor_2d2s_autoFwdCmd = io_engine_2d2s_autoFwdCmd;
	cmd_motor_2d2s_autoBwdCmd = io_engine_2d2s_autoBwdCmd;
	cmd_motor_2d2s_autoHSCmd = io_engine_2d2s_autoHSCmd;
	cmd_motor_2d2s_autoLSCmd = io_engine_2d2s_autoLSCmd;
	cmd_motor_2d2s_forwardPB = __start.Bool+7; /*io_engine_2d2s__cn_10*/
	cmd_motor_2d2s_backwardPB = __start.Bool+8; /*io_engine_2d2s__cn_9*/
	cmd_motor_2d2s_highSpeedPB = __start.Bool+9; /*io_engine_2d2s__cn_8*/
	cmd_motor_2d2s_lowSpeedPB = __start.Bool+10; /*io_engine_2d2s__cn_7*/
	cmd_motor_2d2s_stopPB = __start.Bool+11; /*io_engine_2d2s__cn_6*/
	cmd_motor_2d2s_forwardFB = __start.Bool+12; /*io_engine_2d2s__cn_5*/
	cmd_motor_2d2s_backwardFB = __start.Bool+13; /*io_engine_2d2s__cn_4*/
	cmd_motor_2d2s_highSpeedFB = __start.Bool+14; /*io_engine_2d2s__cn_3*/
	cmd_motor_2d2s_lowSpeedFB = __start.Bool+15; /*io_engine_2d2s__cn_2*/
	cmd_motor_2d2s_thermalFB = __start.Bool+16; /*io_engine_2d2s__cn_1*/
	cmd_motor_2d2s_acknowledgePB = io_engine_2d2s_acknowledgePB;
	cmd_motor_2d2s_forwardCmd = __start.Bool+3; /*io_engine_2d2s__cn_14*/
	cmd_motor_2d2s_backwardCmd = __start.Bool+4; /*io_engine_2d2s__cn_13*/
	cmd_motor_2d2s_highSpeedCmd = __start.Bool+5; /*io_engine_2d2s__cn_12*/
	cmd_motor_2d2s_lowSpeedCmd = __start.Bool+6; /*io_engine_2d2s__cn_11*/
	cmd_motor_2d2s_generalFault = io_engine_2d2s_generalFault;
	_cmd_equipment_library__cmd_motor_2d2s_init();

	io_library__io_engine_2d2s_offset__end.Bool = self.Bool - __start.Bool;
	io_library__io_engine_2d2s_offset__end.Int = self.Int - __start.Int;
	io_library__io_engine_2d2s_offset__end.Float = self.Float - __start.Float;
	io_library__io_engine_2d2s_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int io_library__io_engine_2d2s(void)
{
	CB_Object __start = self;
	int __ret;
	static char *__comp_name = "io_library.io_engine_2d2s";
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																		
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + io_library__io_engine_2d2s_offset_panel1.Bool;
			self.Int = __start.Int + io_library__io_engine_2d2s_offset_panel1.Int;
			self.Float = __start.Float + io_library__io_engine_2d2s_offset_panel1.Float;
			self.Char = __start.Char + io_library__io_engine_2d2s_offset_panel1.Char;

			/************************* panel1 execution *************************/

			self_num++;
			if (panel__num != self_num) {
				panel__num = self_num;
				_i_io_engine_2d2s__panel_forwardPB = __start.Bool+7; /*io_engine_2d2s__cn_10*/
				_i_io_engine_2d2s__panel_backwardPB = __start.Bool+8; /*io_engine_2d2s__cn_9*/
				_i_io_engine_2d2s__panel_highSpeedPB = __start.Bool+9; /*io_engine_2d2s__cn_8*/
				_i_io_engine_2d2s__panel_lowSpeedPB = __start.Bool+10; /*io_engine_2d2s__cn_7*/
				_i_io_engine_2d2s__panel_stopPB = __start.Bool+11; /*io_engine_2d2s__cn_6*/
			}
			__ret = io_library__panel();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* motor execution **************************/

			self_num++;
			if (motor_2dir_2speed__num != self_num) {
				motor_2dir_2speed__num = self_num;
				motor_2dir_2speed_voltage380 = __start.Bool+2; /*io_engine_2d2s__cn_15*/
				motor_2dir_2speed_cmdSupply = __start.Bool+1; /*io_engine_2d2s__cn_16*/
				motor_2dir_2speed_sensorSupply = __start.Bool+0; /*io_engine_2d2s__cn_17*/
				motor_2dir_2speed_forward = __start.Bool+3; /*io_engine_2d2s__cn_14*/
				motor_2dir_2speed_backward = __start.Bool+4; /*io_engine_2d2s__cn_13*/
				motor_2dir_2speed_highSpeed = __start.Bool+5; /*io_engine_2d2s__cn_12*/
				motor_2dir_2speed_lowSpeed = __start.Bool+6; /*io_engine_2d2s__cn_11*/
				motor_2dir_2speed_forwardFB = __start.Bool+12; /*io_engine_2d2s__cn_5*/
				motor_2dir_2speed_backwardFB = __start.Bool+13; /*io_engine_2d2s__cn_4*/
				motor_2dir_2speed_highSpeedFB = __start.Bool+14; /*io_engine_2d2s__cn_3*/
				motor_2dir_2speed_lowSpeedFB = __start.Bool+15; /*io_engine_2d2s__cn_2*/
				motor_2dir_2speed_thermal = __start.Bool+16; /*io_engine_2d2s__cn_1*/
				motor_2dir_2speed_speedVal = io_engine_2d2s_speedVal;
				motor_2dir_2speed_speedPercent = io_engine_2d2s_speedPercent;
			}
			__ret = equipment_library__motor_2dir_2speed();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** cmdOfMotor execution ***********************/

			self_num++;
			if (cmd_motor_2d2s__num != self_num) {
				cmd_motor_2d2s__num = self_num;
				cmd_motor_2d2s_autoMode = io_engine_2d2s_autoMode;
				cmd_motor_2d2s_manualMode = io_engine_2d2s_manualMode;
				cmd_motor_2d2s_autoFwdCmd = io_engine_2d2s_autoFwdCmd;
				cmd_motor_2d2s_autoBwdCmd = io_engine_2d2s_autoBwdCmd;
				cmd_motor_2d2s_autoHSCmd = io_engine_2d2s_autoHSCmd;
				cmd_motor_2d2s_autoLSCmd = io_engine_2d2s_autoLSCmd;
				cmd_motor_2d2s_forwardPB = __start.Bool+7; /*io_engine_2d2s__cn_10*/
				cmd_motor_2d2s_backwardPB = __start.Bool+8; /*io_engine_2d2s__cn_9*/
				cmd_motor_2d2s_highSpeedPB = __start.Bool+9; /*io_engine_2d2s__cn_8*/
				cmd_motor_2d2s_lowSpeedPB = __start.Bool+10; /*io_engine_2d2s__cn_7*/
				cmd_motor_2d2s_stopPB = __start.Bool+11; /*io_engine_2d2s__cn_6*/
				cmd_motor_2d2s_forwardFB = __start.Bool+12; /*io_engine_2d2s__cn_5*/
				cmd_motor_2d2s_backwardFB = __start.Bool+13; /*io_engine_2d2s__cn_4*/
				cmd_motor_2d2s_highSpeedFB = __start.Bool+14; /*io_engine_2d2s__cn_3*/
				cmd_motor_2d2s_lowSpeedFB = __start.Bool+15; /*io_engine_2d2s__cn_2*/
				cmd_motor_2d2s_thermalFB = __start.Bool+16; /*io_engine_2d2s__cn_1*/
				cmd_motor_2d2s_acknowledgePB = io_engine_2d2s_acknowledgePB;
				cmd_motor_2d2s_forwardCmd = __start.Bool+3; /*io_engine_2d2s__cn_14*/
				cmd_motor_2d2s_backwardCmd = __start.Bool+4; /*io_engine_2d2s__cn_13*/
				cmd_motor_2d2s_highSpeedCmd = __start.Bool+5; /*io_engine_2d2s__cn_12*/
				cmd_motor_2d2s_lowSpeedCmd = __start.Bool+6; /*io_engine_2d2s__cn_11*/
				cmd_motor_2d2s_generalFault = io_engine_2d2s_generalFault;
			}
			__ret = cmd_equipment_library__cmd_motor_2d2s();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + io_library__io_engine_2d2s_offset__end.Bool;
	self.Int = __start.Int + io_library__io_engine_2d2s_offset__end.Int;
	self.Float = __start.Float + io_library__io_engine_2d2s_offset__end.Float;
	self.Char = __start.Char + io_library__io_engine_2d2s_offset__end.Char;

	return 0;
}
