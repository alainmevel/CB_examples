/*2023-10-03T11:12:48-01:00*/

/********************************************************************
 * io_agitator_1speed.c
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
extern CB_Mem_Bool *_i_io_agitator_1speed__panel_forwardPB;
extern CB_Mem_Bool *_i_io_agitator_1speed__panel_stopPB;

/********************** Function declarations ***********************/

static int _io_library__panel_init(void);
static int io_library__panel(void);

/********************************************************************
 *                   Inner 'panel' implementation                   *
 ********************************************************************/

#include "equipment_library/functional/momentary_button/momentary_button.h"


/**************************** Variables *****************************/

static CB_Index panel__num = 0;
CB_Mem_Bool *_i_io_agitator_1speed__panel_forwardPB;
CB_Mem_Bool *_i_io_agitator_1speed__panel_stopPB;

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
	momentary_button_PB = _i_io_agitator_1speed__panel_forwardPB;
	_equipment_library__momentary_button_init();

	/*initialize child stopPB (equipment_library.momentary_button):*/
	self_num++;
	io_library__panel_offset_stopPB.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_stopPB.Int = self.Int - __start.Int;
	io_library__panel_offset_stopPB.Float = self.Float - __start.Float;
	io_library__panel_offset_stopPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_io_agitator_1speed__panel_stopPB;
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
				momentary_button_PB = _i_io_agitator_1speed__panel_forwardPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* stopPB execution *************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_io_agitator_1speed__panel_stopPB;
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
 *      Public 'io_library.io_agitator_1speed' implementation       *
 ********************************************************************/

#include "io_agitator_1speed.h"
#include "equipment_library/functional/agitator_1speed/agitator_1speed.h"
#include "cmd_equipment_library/functional/cmd_agitator_1speed/cmd_agitator_1speed.h"


/**************************** Variables *****************************/

CB_Index io_agitator_1speed__num = 0;
CB_Mem_Bool *io_agitator_1speed_acknowledgePB;
CB_Mem_Bool *io_agitator_1speed_autoMode;
CB_Mem_Bool *io_agitator_1speed_manualMode;
CB_Mem_Bool *io_agitator_1speed_autoCmd;
CB_Mem_Bool *io_agitator_1speed_generalFault;
CB_Mem_Float *io_agitator_1speed_speedVal;
CB_Mem_Float *io_agitator_1speed_speedPercent;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__io_agitator_1speed_offset_panel1;
static CB_Offset io_library__io_agitator_1speed_offset_agitator;
static CB_Offset io_library__io_agitator_1speed_offset_cmdOfMotor;
static CB_Offset io_library__io_agitator_1speed_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _io_library__io_agitator_1speed_init(void)
{
	CB_Object __start = self;
	self.Bool+=8;

	/*initialize child panel1 (io_library.panel):*/
	self_num++;
	io_library__io_agitator_1speed_offset_panel1.Bool = self.Bool - __start.Bool;
	io_library__io_agitator_1speed_offset_panel1.Int = self.Int - __start.Int;
	io_library__io_agitator_1speed_offset_panel1.Float = self.Float - __start.Float;
	io_library__io_agitator_1speed_offset_panel1.Char = self.Char - __start.Char;
	_i_io_agitator_1speed__panel_forwardPB = __start.Bool+6; /*io_agitator_1speed__cn_2*/
	_i_io_agitator_1speed__panel_stopPB = __start.Bool+7; /*io_agitator_1speed__cn_1*/
	_io_library__panel_init();

	/*initialize child agitator (equipment_library.agitator_1speed):*/
	self_num++;
	io_library__io_agitator_1speed_offset_agitator.Bool = self.Bool - __start.Bool;
	io_library__io_agitator_1speed_offset_agitator.Int = self.Int - __start.Int;
	io_library__io_agitator_1speed_offset_agitator.Float = self.Float - __start.Float;
	io_library__io_agitator_1speed_offset_agitator.Char = self.Char - __start.Char;
	agitator_1speed_voltage380 = __start.Bool+2; /*io_agitator_1speed__cn_6*/
	agitator_1speed_cmdSupply = __start.Bool+1; /*io_agitator_1speed__cn_7*/
	agitator_1speed_sensorSupply = __start.Bool+0; /*io_agitator_1speed__cn_8*/
	agitator_1speed_cmd = __start.Bool+3; /*io_agitator_1speed__cn_5*/
	agitator_1speed_cmdFB = __start.Bool+5; /*io_agitator_1speed__cn_3*/
	agitator_1speed_thermal = __start.Bool+4; /*io_agitator_1speed__cn_4*/
	agitator_1speed_speedVal = io_agitator_1speed_speedVal;
	agitator_1speed_speedPercent = io_agitator_1speed_speedPercent;
	_equipment_library__agitator_1speed_init();

	/*initialize child cmdOfMotor (cmd_equipment_library.cmd_agitator_1speed):*/
	self_num++;
	io_library__io_agitator_1speed_offset_cmdOfMotor.Bool = self.Bool - __start.Bool;
	io_library__io_agitator_1speed_offset_cmdOfMotor.Int = self.Int - __start.Int;
	io_library__io_agitator_1speed_offset_cmdOfMotor.Float = self.Float - __start.Float;
	io_library__io_agitator_1speed_offset_cmdOfMotor.Char = self.Char - __start.Char;
	cmd_agitator_1speed_autoMode = io_agitator_1speed_autoMode;
	cmd_agitator_1speed_manualMode = io_agitator_1speed_manualMode;
	cmd_agitator_1speed_autoCmd = io_agitator_1speed_autoCmd;
	cmd_agitator_1speed_thermalFB = __start.Bool+4; /*io_agitator_1speed__cn_4*/
	cmd_agitator_1speed_cmdFB = __start.Bool+5; /*io_agitator_1speed__cn_3*/
	cmd_agitator_1speed_forwardPB = __start.Bool+6; /*io_agitator_1speed__cn_2*/
	cmd_agitator_1speed_stopPB = __start.Bool+7; /*io_agitator_1speed__cn_1*/
	cmd_agitator_1speed_acknowledgePB = io_agitator_1speed_acknowledgePB;
	cmd_agitator_1speed_cmd = __start.Bool+3; /*io_agitator_1speed__cn_5*/
	cmd_agitator_1speed_generalFault = io_agitator_1speed_generalFault;
	_cmd_equipment_library__cmd_agitator_1speed_init();

	io_library__io_agitator_1speed_offset__end.Bool = self.Bool - __start.Bool;
	io_library__io_agitator_1speed_offset__end.Int = self.Int - __start.Int;
	io_library__io_agitator_1speed_offset__end.Float = self.Float - __start.Float;
	io_library__io_agitator_1speed_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int io_library__io_agitator_1speed(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + io_library__io_agitator_1speed_offset_panel1.Bool;
			self.Int = __start.Int + io_library__io_agitator_1speed_offset_panel1.Int;
			self.Float = __start.Float + io_library__io_agitator_1speed_offset_panel1.Float;
			self.Char = __start.Char + io_library__io_agitator_1speed_offset_panel1.Char;

			/************************* panel1 execution *************************/

			self_num++;
			if (panel__num != self_num) {
				panel__num = self_num;
				_i_io_agitator_1speed__panel_forwardPB = __start.Bool+6; /*io_agitator_1speed__cn_2*/
				_i_io_agitator_1speed__panel_stopPB = __start.Bool+7; /*io_agitator_1speed__cn_1*/
			}
			__ret = io_library__panel();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ agitator execution ************************/

			self_num++;
			if (agitator_1speed__num != self_num) {
				agitator_1speed__num = self_num;
				agitator_1speed_voltage380 = __start.Bool+2; /*io_agitator_1speed__cn_6*/
				agitator_1speed_cmdSupply = __start.Bool+1; /*io_agitator_1speed__cn_7*/
				agitator_1speed_sensorSupply = __start.Bool+0; /*io_agitator_1speed__cn_8*/
				agitator_1speed_cmd = __start.Bool+3; /*io_agitator_1speed__cn_5*/
				agitator_1speed_cmdFB = __start.Bool+5; /*io_agitator_1speed__cn_3*/
				agitator_1speed_thermal = __start.Bool+4; /*io_agitator_1speed__cn_4*/
				agitator_1speed_speedVal = io_agitator_1speed_speedVal;
				agitator_1speed_speedPercent = io_agitator_1speed_speedPercent;
			}
			__ret = equipment_library__agitator_1speed();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** cmdOfMotor execution ***********************/

			self_num++;
			if (cmd_agitator_1speed__num != self_num) {
				cmd_agitator_1speed__num = self_num;
				cmd_agitator_1speed_autoMode = io_agitator_1speed_autoMode;
				cmd_agitator_1speed_manualMode = io_agitator_1speed_manualMode;
				cmd_agitator_1speed_autoCmd = io_agitator_1speed_autoCmd;
				cmd_agitator_1speed_thermalFB = __start.Bool+4; /*io_agitator_1speed__cn_4*/
				cmd_agitator_1speed_cmdFB = __start.Bool+5; /*io_agitator_1speed__cn_3*/
				cmd_agitator_1speed_forwardPB = __start.Bool+6; /*io_agitator_1speed__cn_2*/
				cmd_agitator_1speed_stopPB = __start.Bool+7; /*io_agitator_1speed__cn_1*/
				cmd_agitator_1speed_acknowledgePB = io_agitator_1speed_acknowledgePB;
				cmd_agitator_1speed_cmd = __start.Bool+3; /*io_agitator_1speed__cn_5*/
				cmd_agitator_1speed_generalFault = io_agitator_1speed_generalFault;
			}
			__ret = cmd_equipment_library__cmd_agitator_1speed();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + io_library__io_agitator_1speed_offset__end.Bool;
	self.Int = __start.Int + io_library__io_agitator_1speed_offset__end.Int;
	self.Float = __start.Float + io_library__io_agitator_1speed_offset__end.Float;
	self.Char = __start.Char + io_library__io_agitator_1speed_offset__end.Char;

	return 0;
}

