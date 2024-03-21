/*2023-10-03T11:12:48-01:00*/

/********************************************************************
 * io_single_acting_jack_cov.c
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
extern CB_Mem_Bool *_i_io_single_acting_jack__panel_valveWorkPB;

/********************** Function declarations ***********************/

static int _io_library__panel_init(void);
static int io_library__panel(void);

/********************************************************************
 *                   Inner 'panel' implementation                   *
 ********************************************************************/

#include "equipment_library/functional/switch_2pos_1output/switch_2pos_1output.h"


/**************************** Variables *****************************/

static CB_Index panel__num = 0;
CB_Mem_Bool *_i_io_single_acting_jack__panel_valveWorkPB;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__panel_offset_switch;
static CB_Offset io_library__panel_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

static int _io_library__panel_init(void)
{
	CB_Object __start = self;

	/*initialize child switch (equipment_library.switch_2pos_1output):*/
	self_num++;
	io_library__panel_offset_switch.Bool = self.Bool - __start.Bool;
	io_library__panel_offset_switch.Int = self.Int - __start.Int;
	io_library__panel_offset_switch.Float = self.Float - __start.Float;
	io_library__panel_offset_switch.Char = self.Char - __start.Char;
	switch_2pos_1output_variable = _i_io_single_acting_jack__panel_valveWorkPB;
	_equipment_library__switch_2pos_1output_init();

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
			self.Bool = __start.Bool + io_library__panel_offset_switch.Bool;
			self.Int = __start.Int + io_library__panel_offset_switch.Int;
			self.Float = __start.Float + io_library__panel_offset_switch.Float;
			self.Char = __start.Char + io_library__panel_offset_switch.Char;

			/************************* switch execution *************************/

			self_num++;
			if (switch_2pos_1output__num != self_num) {
				switch_2pos_1output__num = self_num;
				switch_2pos_1output_variable = _i_io_single_acting_jack__panel_valveWorkPB;
			}
			__ret = equipment_library__switch_2pos_1output();
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
 *     Public 'io_library.io_single_acting_jack' implementation     *
 ********************************************************************/

#include "io_single_acting_jack.h"
#include "cmd_equipment_library/functional/cmd_single_acting_jack/cmd_single_acting_jack.h"
#include "equipment_library/functional/single_acting_jack/single_acting_jack.h"


/**************************** Variables *****************************/

CB_Index io_single_acting_jack__num = 0;
CB_Mem_Bool *io_single_acting_jack_acknowledgePB;
CB_Mem_Bool *io_single_acting_jack_autoMode;
CB_Mem_Bool *io_single_acting_jack_manualMode;
CB_Mem_Bool *io_single_acting_jack_autoWorkCmd;
CB_Mem_Bool *io_single_acting_jack_generalFault;
CB_Mem_Bool *io_single_acting_jack_inletSensor;
CB_Mem_Bool *io_single_acting_jack_outletSensor;
CB_Mem_Float *io_single_acting_jack_rodPosition;
CB_Mem_Float *io_single_acting_jack_rodPercent;
CB_Mem_Float *io_single_acting_jack_incrementValue;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset io_library__io_single_acting_jack_offset_panel1;
static CB_Offset io_library__io_single_acting_jack_offset_cmdOfJack;
static CB_Offset io_library__io_single_acting_jack_offset_jack;
static CB_Offset io_library__io_single_acting_jack_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _io_library__io_single_acting_jack_init(void)
{
	CB_Object __start = self;
	self.Bool+=5;

	/*initialize child panel1 (io_library.panel):*/
	self_num++;
	io_library__io_single_acting_jack_offset_panel1.Bool = self.Bool - __start.Bool;
	io_library__io_single_acting_jack_offset_panel1.Int = self.Int - __start.Int;
	io_library__io_single_acting_jack_offset_panel1.Float = self.Float - __start.Float;
	io_library__io_single_acting_jack_offset_panel1.Char = self.Char - __start.Char;
	_i_io_single_acting_jack__panel_valveWorkPB = __start.Bool+3; /*io_single_acting_jack__cn_2*/
	_io_library__panel_init();

	/*initialize child cmdOfJack (cmd_equipment_library.cmd_single_acting_jack):*/
	self_num++;
	io_library__io_single_acting_jack_offset_cmdOfJack.Bool = self.Bool - __start.Bool;
	io_library__io_single_acting_jack_offset_cmdOfJack.Int = self.Int - __start.Int;
	io_library__io_single_acting_jack_offset_cmdOfJack.Float = self.Float - __start.Float;
	io_library__io_single_acting_jack_offset_cmdOfJack.Char = self.Char - __start.Char;
	cmd_single_acting_jack_autoMode = io_single_acting_jack_autoMode;
	cmd_single_acting_jack_manualMode = io_single_acting_jack_manualMode;
	cmd_single_acting_jack_autoWorkCmd = io_single_acting_jack_autoWorkCmd;
	cmd_single_acting_jack_valveWorkPB = __start.Bool+3; /*io_single_acting_jack__cn_2*/
	cmd_single_acting_jack_outletSensor = io_single_acting_jack_outletSensor;
	cmd_single_acting_jack_inletSensor = io_single_acting_jack_inletSensor;
	cmd_single_acting_jack_acknowledgePB = io_single_acting_jack_acknowledgePB;
	cmd_single_acting_jack_workCmd = __start.Bool+4; /*io_single_acting_jack__cn_1*/
	cmd_single_acting_jack_generalFault = io_single_acting_jack_generalFault;
	_cmd_equipment_library__cmd_single_acting_jack_init();

	/*initialize child jack (equipment_library.single_acting_jack):*/
	self_num++;
	io_library__io_single_acting_jack_offset_jack.Bool = self.Bool - __start.Bool;
	io_library__io_single_acting_jack_offset_jack.Int = self.Int - __start.Int;
	io_library__io_single_acting_jack_offset_jack.Float = self.Float - __start.Float;
	io_library__io_single_acting_jack_offset_jack.Char = self.Char - __start.Char;
	single_acting_jack_energy = __start.Bool+2; /*io_single_acting_jack__cn_3*/
	single_acting_jack_cmdSupply = __start.Bool+1; /*io_single_acting_jack__cn_4*/
	single_acting_jack_sensorSupply = __start.Bool+0; /*io_single_acting_jack__cn_5*/
	single_acting_jack_valveWork = __start.Bool+4; /*io_single_acting_jack__cn_1*/
	single_acting_jack_outletSensor = io_single_acting_jack_outletSensor;
	single_acting_jack_inletSensor = io_single_acting_jack_inletSensor;
	single_acting_jack_rodPosition = io_single_acting_jack_rodPosition;
	single_acting_jack_rodPercent = io_single_acting_jack_rodPercent;
	single_acting_jack_incrementValue = io_single_acting_jack_incrementValue;
	_equipment_library__single_acting_jack_init();

	io_library__io_single_acting_jack_offset__end.Bool = self.Bool - __start.Bool;
	io_library__io_single_acting_jack_offset__end.Int = self.Int - __start.Int;
	io_library__io_single_acting_jack_offset__end.Float = self.Float - __start.Float;
	io_library__io_single_acting_jack_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int io_library__io_single_acting_jack(void)
{
	CB_Object __start = self;
	int __ret;
	static char *__comp_name = "io_library.io_single_acting_jack";
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

										
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + io_library__io_single_acting_jack_offset_panel1.Bool;
			self.Int = __start.Int + io_library__io_single_acting_jack_offset_panel1.Int;
			self.Float = __start.Float + io_library__io_single_acting_jack_offset_panel1.Float;
			self.Char = __start.Char + io_library__io_single_acting_jack_offset_panel1.Char;

			/************************* panel1 execution *************************/

			self_num++;
			if (panel__num != self_num) {
				panel__num = self_num;
				_i_io_single_acting_jack__panel_valveWorkPB = __start.Bool+3; /*io_single_acting_jack__cn_2*/
			}
			__ret = io_library__panel();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** cmdOfJack execution ************************/

			self_num++;
			if (cmd_single_acting_jack__num != self_num) {
				cmd_single_acting_jack__num = self_num;
				cmd_single_acting_jack_autoMode = io_single_acting_jack_autoMode;
				cmd_single_acting_jack_manualMode = io_single_acting_jack_manualMode;
				cmd_single_acting_jack_autoWorkCmd = io_single_acting_jack_autoWorkCmd;
				cmd_single_acting_jack_valveWorkPB = __start.Bool+3; /*io_single_acting_jack__cn_2*/
				cmd_single_acting_jack_outletSensor = io_single_acting_jack_outletSensor;
				cmd_single_acting_jack_inletSensor = io_single_acting_jack_inletSensor;
				cmd_single_acting_jack_acknowledgePB = io_single_acting_jack_acknowledgePB;
				cmd_single_acting_jack_workCmd = __start.Bool+4; /*io_single_acting_jack__cn_1*/
				cmd_single_acting_jack_generalFault = io_single_acting_jack_generalFault;
			}
			__ret = cmd_equipment_library__cmd_single_acting_jack();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************** jack execution **************************/

			self_num++;
			if (single_acting_jack__num != self_num) {
				single_acting_jack__num = self_num;
				single_acting_jack_energy = __start.Bool+2; /*io_single_acting_jack__cn_3*/
				single_acting_jack_cmdSupply = __start.Bool+1; /*io_single_acting_jack__cn_4*/
				single_acting_jack_sensorSupply = __start.Bool+0; /*io_single_acting_jack__cn_5*/
				single_acting_jack_valveWork = __start.Bool+4; /*io_single_acting_jack__cn_1*/
				single_acting_jack_outletSensor = io_single_acting_jack_outletSensor;
				single_acting_jack_inletSensor = io_single_acting_jack_inletSensor;
				single_acting_jack_rodPosition = io_single_acting_jack_rodPosition;
				single_acting_jack_rodPercent = io_single_acting_jack_rodPercent;
				single_acting_jack_incrementValue = io_single_acting_jack_incrementValue;
			}
			__ret = equipment_library__single_acting_jack();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + io_library__io_single_acting_jack_offset__end.Bool;
	self.Int = __start.Int + io_library__io_single_acting_jack_offset__end.Int;
	self.Float = __start.Float + io_library__io_single_acting_jack_offset__end.Float;
	self.Char = __start.Char + io_library__io_single_acting_jack_offset__end.Char;

	return 0;
}

