/*2023-10-03T11:13:41-01:00*/

/********************************************************************
 * bottling_line_cov.c
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
extern CB_Mem_Bool *_i_bottling_line__panel_acknowledgePB;
extern CB_Mem_Bool *_i_bottling_line__panel_powerUpPB;
extern CB_Mem_Bool *_i_bottling_line__panel_emergencyStopPB;
extern CB_Mem_Bool *_i_bottling_line__panel_manual;
extern CB_Mem_Bool *_i_bottling_line__panel_auto;
extern CB_Mem_Bool *_i_bottling_line__panel_startCyclePB;
extern CB_Mem_Bool *_i_bottling_line__panel_initPB;
extern CB_Mem_Bool *_i_bottling_line__panel_preparationPB;
extern CB_Mem_Bool *_i_bottling_line__panel_productionPB;
extern CB_Mem_Bool *_i_bottling_line__panel_closingPB;

/********************** Function declarations ***********************/

static int _bottling_line__panel_init(void);
static int bottling_line__panel(void);

/********************************************************************
 *                   Inner 'panel' implementation                   *
 ********************************************************************/

#include "equipment_library/functional/momentary_button/momentary_button.h"
#include "equipment_library/functional/maintained_button/maintained_button.h"
#include "equipment_library/functional/switch_2pos_2outputs/switch_2pos_2outputs.h"


/**************************** Variables *****************************/

static CB_Index panel__num = 0;
CB_Mem_Bool *_i_bottling_line__panel_acknowledgePB;
CB_Mem_Bool *_i_bottling_line__panel_powerUpPB;
CB_Mem_Bool *_i_bottling_line__panel_emergencyStopPB;
CB_Mem_Bool *_i_bottling_line__panel_manual;
CB_Mem_Bool *_i_bottling_line__panel_auto;
CB_Mem_Bool *_i_bottling_line__panel_startCyclePB;
CB_Mem_Bool *_i_bottling_line__panel_initPB;
CB_Mem_Bool *_i_bottling_line__panel_preparationPB;
CB_Mem_Bool *_i_bottling_line__panel_productionPB;
CB_Mem_Bool *_i_bottling_line__panel_closingPB;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset bottling_line__panel_offset_acknowledgePB;
static CB_Offset bottling_line__panel_offset_powerUpPB;
static CB_Offset bottling_line__panel_offset_emergencyStopPB;
static CB_Offset bottling_line__panel_offset_modesSwitch;
static CB_Offset bottling_line__panel_offset_startCyclePB;
static CB_Offset bottling_line__panel_offset_initPB;
static CB_Offset bottling_line__panel_offset_productionSwitch;
static CB_Offset bottling_line__panel_offset_closingPB;
static CB_Offset bottling_line__panel_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

static int _bottling_line__panel_init(void)
{
	CB_Object __start = self;

	/*initialize child acknowledgePB (equipment_library.momentary_button):*/
	self_num++;
	bottling_line__panel_offset_acknowledgePB.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_acknowledgePB.Int = self.Int - __start.Int;
	bottling_line__panel_offset_acknowledgePB.Float = self.Float - __start.Float;
	bottling_line__panel_offset_acknowledgePB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_bottling_line__panel_acknowledgePB;
	_equipment_library__momentary_button_init();

	/*initialize child powerUpPB (equipment_library.momentary_button):*/
	self_num++;
	bottling_line__panel_offset_powerUpPB.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_powerUpPB.Int = self.Int - __start.Int;
	bottling_line__panel_offset_powerUpPB.Float = self.Float - __start.Float;
	bottling_line__panel_offset_powerUpPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_bottling_line__panel_powerUpPB;
	_equipment_library__momentary_button_init();

	/*initialize child emergencyStopPB (equipment_library.maintained_button):*/
	self_num++;
	bottling_line__panel_offset_emergencyStopPB.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_emergencyStopPB.Int = self.Int - __start.Int;
	bottling_line__panel_offset_emergencyStopPB.Float = self.Float - __start.Float;
	bottling_line__panel_offset_emergencyStopPB.Char = self.Char - __start.Char;
	maintained_button_pb = _i_bottling_line__panel_emergencyStopPB;
	_equipment_library__maintained_button_init();

	/*initialize child modesSwitch (equipment_library.switch_2pos_2outputs):*/
	self_num++;
	bottling_line__panel_offset_modesSwitch.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_modesSwitch.Int = self.Int - __start.Int;
	bottling_line__panel_offset_modesSwitch.Float = self.Float - __start.Float;
	bottling_line__panel_offset_modesSwitch.Char = self.Char - __start.Char;
	switch_2pos_2outputs_leftVariable = _i_bottling_line__panel_auto;
	switch_2pos_2outputs_rightVariable = _i_bottling_line__panel_manual;
	_equipment_library__switch_2pos_2outputs_init();

	/*initialize child startCyclePB (equipment_library.momentary_button):*/
	self_num++;
	bottling_line__panel_offset_startCyclePB.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_startCyclePB.Int = self.Int - __start.Int;
	bottling_line__panel_offset_startCyclePB.Float = self.Float - __start.Float;
	bottling_line__panel_offset_startCyclePB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_bottling_line__panel_startCyclePB;
	_equipment_library__momentary_button_init();

	/*initialize child initPB (equipment_library.momentary_button):*/
	self_num++;
	bottling_line__panel_offset_initPB.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_initPB.Int = self.Int - __start.Int;
	bottling_line__panel_offset_initPB.Float = self.Float - __start.Float;
	bottling_line__panel_offset_initPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_bottling_line__panel_initPB;
	_equipment_library__momentary_button_init();

	/*initialize child productionSwitch (equipment_library.switch_2pos_2outputs):*/
	self_num++;
	bottling_line__panel_offset_productionSwitch.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_productionSwitch.Int = self.Int - __start.Int;
	bottling_line__panel_offset_productionSwitch.Float = self.Float - __start.Float;
	bottling_line__panel_offset_productionSwitch.Char = self.Char - __start.Char;
	switch_2pos_2outputs_leftVariable = _i_bottling_line__panel_preparationPB;
	switch_2pos_2outputs_rightVariable = _i_bottling_line__panel_productionPB;
	_equipment_library__switch_2pos_2outputs_init();

	/*initialize child closingPB (equipment_library.momentary_button):*/
	self_num++;
	bottling_line__panel_offset_closingPB.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset_closingPB.Int = self.Int - __start.Int;
	bottling_line__panel_offset_closingPB.Float = self.Float - __start.Float;
	bottling_line__panel_offset_closingPB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_bottling_line__panel_closingPB;
	_equipment_library__momentary_button_init();

	bottling_line__panel_offset__end.Bool = self.Bool - __start.Bool;
	bottling_line__panel_offset__end.Int = self.Int - __start.Int;
	bottling_line__panel_offset__end.Float = self.Float - __start.Float;
	bottling_line__panel_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

static int bottling_line__panel(void)
{
	CB_Object __start = self;
	int __ret;
	static char *__comp_name = "bottling_line.panel";
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + bottling_line__panel_offset_acknowledgePB.Bool;
			self.Int = __start.Int + bottling_line__panel_offset_acknowledgePB.Int;
			self.Float = __start.Float + bottling_line__panel_offset_acknowledgePB.Float;
			self.Char = __start.Char + bottling_line__panel_offset_acknowledgePB.Char;

			/********************* acknowledgePB execution **********************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_bottling_line__panel_acknowledgePB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** powerUpPB execution ************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_bottling_line__panel_powerUpPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/******************** emergencyStopPB execution *********************/

			self_num++;
			if (maintained_button__num != self_num) {
				maintained_button__num = self_num;
				maintained_button_pb = _i_bottling_line__panel_emergencyStopPB;
			}
			__ret = equipment_library__maintained_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** modesSwitch execution ***********************/

			self_num++;
			if (switch_2pos_2outputs__num != self_num) {
				switch_2pos_2outputs__num = self_num;
				switch_2pos_2outputs_leftVariable = _i_bottling_line__panel_auto;
				switch_2pos_2outputs_rightVariable = _i_bottling_line__panel_manual;
			}
			__ret = equipment_library__switch_2pos_2outputs();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** startCyclePB execution **********************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_bottling_line__panel_startCyclePB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* initPB execution *************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_bottling_line__panel_initPB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/******************** productionSwitch execution ********************/

			self_num++;
			if (switch_2pos_2outputs__num != self_num) {
				switch_2pos_2outputs__num = self_num;
				switch_2pos_2outputs_leftVariable = _i_bottling_line__panel_preparationPB;
				switch_2pos_2outputs_rightVariable = _i_bottling_line__panel_productionPB;
			}
			__ret = equipment_library__switch_2pos_2outputs();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** closingPB execution ************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_bottling_line__panel_closingPB;
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

	self.Bool = __start.Bool + bottling_line__panel_offset__end.Bool;
	self.Int = __start.Int + bottling_line__panel_offset__end.Int;
	self.Float = __start.Float + bottling_line__panel_offset__end.Float;
	self.Char = __start.Char + bottling_line__panel_offset__end.Char;

	return 0;
}


/********************************************************************
 *       Public 'bottling_line.bottling_line' implementation        *
 ********************************************************************/

#include "bottling_line.h"
#include "bottling_line/functional/mode/mode.h"
#include "bottling_line/functional/process/process.h"
#include "bottling_line/functional/pumping/pumping.h"
#include "equipment_library/functional/addition/addition.h"
#include "bottling_line/functional/mixing/mixing.h"
#include "bottling_line/functional/drive/drive.h"


/**************************** Variables *****************************/

CB_Index bottling_line__num = 0;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset bottling_line__bottling_line_offset_generalPanel;
static CB_Offset bottling_line__bottling_line_offset_workingModes;
static CB_Offset bottling_line__bottling_line_offset_process;
static CB_Offset bottling_line__bottling_line_offset_pumpingTank1;
static CB_Offset bottling_line__bottling_line_offset_pumpingTank2;
static CB_Offset bottling_line__bottling_line_offset_flowsAdd;
static CB_Offset bottling_line__bottling_line_offset_mixing;
static CB_Offset bottling_line__bottling_line_offset_drive;
static CB_Offset bottling_line__bottling_line_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _bottling_line__bottling_line_init(void)
{
	CB_Object __start = self;
	self.Bool+=34;
	self.Int+=2;
	self.Float+=7;

	/*initialize child generalPanel (bottling_line.panel):*/
	self_num++;
	bottling_line__bottling_line_offset_generalPanel.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_generalPanel.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_generalPanel.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_generalPanel.Char = self.Char - __start.Char;
	_i_bottling_line__panel_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
	_i_bottling_line__panel_powerUpPB = __start.Bool+1; /*bottling_line__cn_37*/
	_i_bottling_line__panel_emergencyStopPB = __start.Bool+2; /*bottling_line__cn_36*/
	_i_bottling_line__panel_manual = __start.Bool+3; /*bottling_line__cn_35*/
	_i_bottling_line__panel_auto = __start.Bool+4; /*bottling_line__cn_34*/
	_i_bottling_line__panel_startCyclePB = __start.Bool+12; /*bottling_line__cn_26*/
	_i_bottling_line__panel_initPB = __start.Bool+13; /*bottling_line__cn_25*/
	_i_bottling_line__panel_preparationPB = __start.Bool+14; /*bottling_line__cn_24*/
	_i_bottling_line__panel_productionPB = __start.Bool+15; /*bottling_line__cn_23*/
	_i_bottling_line__panel_closingPB = __start.Bool+16; /*bottling_line__cn_22*/
	_bottling_line__panel_init();

	/*initialize child workingModes (bottling_line.mode):*/
	self_num++;
	bottling_line__bottling_line_offset_workingModes.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_workingModes.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_workingModes.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_workingModes.Char = self.Char - __start.Char;
	mode_powerUpPB = __start.Bool+1; /*bottling_line__cn_37*/
	mode_emergencyStopPB = __start.Bool+2; /*bottling_line__cn_36*/
	mode_manual = __start.Bool+3; /*bottling_line__cn_35*/
	mode_auto = __start.Bool+4; /*bottling_line__cn_34*/
	mode_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
	mode_powerUp = __start.Bool+0; /*bottling_line__cn_38*/
	mode_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
	mode_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
	_bottling_line__mode_init();

	/*initialize child process (bottling_line.process):*/
	self_num++;
	bottling_line__bottling_line_offset_process.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_process.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_process.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_process.Char = self.Char - __start.Char;
	process_highLevel1 = __start.Bool+6; /*bottling_line__cn_32*/
	process_lowLevel1 = __start.Bool+7; /*bottling_line__cn_31*/
	process_highLevel2 = __start.Bool+8; /*bottling_line__cn_30*/
	process_lowLevel2 = __start.Bool+9; /*bottling_line__cn_29*/
	process_highLevel3 = __start.Bool+10; /*bottling_line__cn_28*/
	process_lowLevel3 = __start.Bool+11; /*bottling_line__cn_27*/
	process_startCyclePB = __start.Bool+12; /*bottling_line__cn_26*/
	process_initPB = __start.Bool+13; /*bottling_line__cn_25*/
	process_preparationPB = __start.Bool+14; /*bottling_line__cn_24*/
	process_productionPB = __start.Bool+15; /*bottling_line__cn_23*/
	process_closingPB = __start.Bool+16; /*bottling_line__cn_22*/
	process_pulseGenerator = __start.Bool+17; /*bottling_line__cn_21*/
	process_bottleFilled = __start.Bool+18; /*bottling_line__cn_20*/
	process_bottlePresent = __start.Bool+19; /*bottling_line__cn_19*/
	process_load = __start.Bool+31; /*bottling_line__cn_4*/
	process_evacuate = __start.Bool+32; /*bottling_line__cn_3*/
	process_convoy = __start.Bool+33; /*bottling_line__cn_2*/
	process_pump1 = __start.Bool+22; /*bottling_line__cn_16*/
	process_pump2 = __start.Bool+27; /*bottling_line__cn_11*/
	process_valve1 = __start.Bool+20; /*bottling_line__cn_18*/
	process_valve2 = __start.Bool+25; /*bottling_line__cn_13*/
	process_valve3 = __start.Bool+21; /*bottling_line__cn_17*/
	process_valve4 = __start.Bool+26; /*bottling_line__cn_12*/
	process_loSpeedAgitator = __start.Bool+30; /*bottling_line__cn_6*/
	process_hiSpeedAgitator = __start.Bool+29; /*bottling_line__cn_7*/
	process_valve5 = __start.Bool+28; /*bottling_line__cn_8*/
	_bottling_line__process_init();

	/*initialize child pumpingTank1 (bottling_line.pumping):*/
	self_num++;
	bottling_line__bottling_line_offset_pumpingTank1.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_pumpingTank1.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_pumpingTank1.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_pumpingTank1.Char = self.Char - __start.Char;
	pumping_fillingValve = __start.Bool+20; /*bottling_line__cn_18*/
	pumping_emptyingValve = __start.Bool+21; /*bottling_line__cn_17*/
	pumping_extractionPump = __start.Bool+22; /*bottling_line__cn_16*/
	pumping_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
	pumping_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
	pumping_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
	pumping_lowLevel = __start.Bool+7; /*bottling_line__cn_31*/
	pumping_highLevel = __start.Bool+6; /*bottling_line__cn_32*/
	pumping_pumpingFlow = __start.Float+3; /*bottling_line__cn_10*/
	pumping_level = __start.Float+2; /*bottling_line__cn_39*/
	_bottling_line__pumping_init();

	/*initialize child pumpingTank2 (bottling_line.pumping):*/
	self_num++;
	bottling_line__bottling_line_offset_pumpingTank2.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_pumpingTank2.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_pumpingTank2.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_pumpingTank2.Char = self.Char - __start.Char;
	pumping_fillingValve = __start.Bool+25; /*bottling_line__cn_13*/
	pumping_emptyingValve = __start.Bool+26; /*bottling_line__cn_12*/
	pumping_extractionPump = __start.Bool+27; /*bottling_line__cn_11*/
	pumping_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
	pumping_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
	pumping_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
	pumping_lowLevel = __start.Bool+9; /*bottling_line__cn_29*/
	pumping_highLevel = __start.Bool+8; /*bottling_line__cn_30*/
	pumping_pumpingFlow = __start.Float+4; /*bottling_line__cn_9*/
	pumping_level = __start.Float+1; /*bottling_line__cn_40*/
	_bottling_line__pumping_init();

	/*initialize child flowsAdd (equipment_library.addition):*/
	self_num++;
	bottling_line__bottling_line_offset_flowsAdd.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_flowsAdd.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_flowsAdd.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_flowsAdd.Char = self.Char - __start.Char;
	addition_in1 = __start.Float+3; /*bottling_line__cn_10*/
	addition_in2 = __start.Float+4; /*bottling_line__cn_9*/
	addition_value = __start.Float+5; /*bottling_line__cn_5*/
	addition_dintValue = __start.Int+1; /*bottling_line__cn_41*/
	addition_intValue = __start.Int+0; /*bottling_line__cn_42*/
	_equipment_library__addition_init();

	/*initialize child mixing (bottling_line.mixing):*/
	self_num++;
	bottling_line__bottling_line_offset_mixing.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_mixing.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_mixing.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_mixing.Char = self.Char - __start.Char;
	mixing_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
	mixing_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
	mixing_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
	mixing_fillingValve = __start.Bool+28; /*bottling_line__cn_8*/
	mixing_hiSpeedAgitator = __start.Bool+29; /*bottling_line__cn_7*/
	mixing_loSpeedAgitator = __start.Bool+30; /*bottling_line__cn_6*/
	mixing_inputFlow = __start.Float+5; /*bottling_line__cn_5*/
	mixing_highLevel = __start.Bool+10; /*bottling_line__cn_28*/
	mixing_lowLevel = __start.Bool+11; /*bottling_line__cn_27*/
	mixing_level = __start.Float+0; /*bottling_line__cn_43*/
	mixing_outputFlow = __start.Float+6; /*bottling_line__cn_1*/
	_bottling_line__mixing_init();

	/*initialize child drive (bottling_line.drive):*/
	self_num++;
	bottling_line__bottling_line_offset_drive.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset_drive.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset_drive.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset_drive.Char = self.Char - __start.Char;
	drive_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
	drive_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
	drive_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
	drive_load = __start.Bool+31; /*bottling_line__cn_4*/
	drive_evacuate = __start.Bool+32; /*bottling_line__cn_3*/
	drive_convoy = __start.Bool+33; /*bottling_line__cn_2*/
	drive_inputFlow = __start.Float+6; /*bottling_line__cn_1*/
	drive_bottlePresent = __start.Bool+19; /*bottling_line__cn_19*/
	drive_bottleFilled = __start.Bool+18; /*bottling_line__cn_20*/
	drive_pulse = __start.Bool+17; /*bottling_line__cn_21*/
	_bottling_line__drive_init();

	bottling_line__bottling_line_offset__end.Bool = self.Bool - __start.Bool;
	bottling_line__bottling_line_offset__end.Int = self.Int - __start.Int;
	bottling_line__bottling_line_offset__end.Float = self.Float - __start.Float;
	bottling_line__bottling_line_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int bottling_line__bottling_line(void)
{
	CB_Object __start = self;
	int __ret;
	static char *__comp_name = "bottling_line.bottling_line";
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																																																																						
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + bottling_line__bottling_line_offset_generalPanel.Bool;
			self.Int = __start.Int + bottling_line__bottling_line_offset_generalPanel.Int;
			self.Float = __start.Float + bottling_line__bottling_line_offset_generalPanel.Float;
			self.Char = __start.Char + bottling_line__bottling_line_offset_generalPanel.Char;

			/********************** generalPanel execution **********************/

			self_num++;
			if (panel__num != self_num) {
				panel__num = self_num;
				_i_bottling_line__panel_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
				_i_bottling_line__panel_powerUpPB = __start.Bool+1; /*bottling_line__cn_37*/
				_i_bottling_line__panel_emergencyStopPB = __start.Bool+2; /*bottling_line__cn_36*/
				_i_bottling_line__panel_manual = __start.Bool+3; /*bottling_line__cn_35*/
				_i_bottling_line__panel_auto = __start.Bool+4; /*bottling_line__cn_34*/
				_i_bottling_line__panel_startCyclePB = __start.Bool+12; /*bottling_line__cn_26*/
				_i_bottling_line__panel_initPB = __start.Bool+13; /*bottling_line__cn_25*/
				_i_bottling_line__panel_preparationPB = __start.Bool+14; /*bottling_line__cn_24*/
				_i_bottling_line__panel_productionPB = __start.Bool+15; /*bottling_line__cn_23*/
				_i_bottling_line__panel_closingPB = __start.Bool+16; /*bottling_line__cn_22*/
			}
			__ret = bottling_line__panel();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** workingModes execution **********************/

			self_num++;
			if (mode__num != self_num) {
				mode__num = self_num;
				mode_powerUpPB = __start.Bool+1; /*bottling_line__cn_37*/
				mode_emergencyStopPB = __start.Bool+2; /*bottling_line__cn_36*/
				mode_manual = __start.Bool+3; /*bottling_line__cn_35*/
				mode_auto = __start.Bool+4; /*bottling_line__cn_34*/
				mode_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
				mode_powerUp = __start.Bool+0; /*bottling_line__cn_38*/
				mode_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
				mode_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
			}
			__ret = bottling_line__mode();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ process execution *************************/

			self_num++;
			if (process__num != self_num) {
				process__num = self_num;
				process_highLevel1 = __start.Bool+6; /*bottling_line__cn_32*/
				process_lowLevel1 = __start.Bool+7; /*bottling_line__cn_31*/
				process_highLevel2 = __start.Bool+8; /*bottling_line__cn_30*/
				process_lowLevel2 = __start.Bool+9; /*bottling_line__cn_29*/
				process_highLevel3 = __start.Bool+10; /*bottling_line__cn_28*/
				process_lowLevel3 = __start.Bool+11; /*bottling_line__cn_27*/
				process_startCyclePB = __start.Bool+12; /*bottling_line__cn_26*/
				process_initPB = __start.Bool+13; /*bottling_line__cn_25*/
				process_preparationPB = __start.Bool+14; /*bottling_line__cn_24*/
				process_productionPB = __start.Bool+15; /*bottling_line__cn_23*/
				process_closingPB = __start.Bool+16; /*bottling_line__cn_22*/
				process_pulseGenerator = __start.Bool+17; /*bottling_line__cn_21*/
				process_bottleFilled = __start.Bool+18; /*bottling_line__cn_20*/
				process_bottlePresent = __start.Bool+19; /*bottling_line__cn_19*/
				process_load = __start.Bool+31; /*bottling_line__cn_4*/
				process_evacuate = __start.Bool+32; /*bottling_line__cn_3*/
				process_convoy = __start.Bool+33; /*bottling_line__cn_2*/
				process_pump1 = __start.Bool+22; /*bottling_line__cn_16*/
				process_pump2 = __start.Bool+27; /*bottling_line__cn_11*/
				process_valve1 = __start.Bool+20; /*bottling_line__cn_18*/
				process_valve2 = __start.Bool+25; /*bottling_line__cn_13*/
				process_valve3 = __start.Bool+21; /*bottling_line__cn_17*/
				process_valve4 = __start.Bool+26; /*bottling_line__cn_12*/
				process_loSpeedAgitator = __start.Bool+30; /*bottling_line__cn_6*/
				process_hiSpeedAgitator = __start.Bool+29; /*bottling_line__cn_7*/
				process_valve5 = __start.Bool+28; /*bottling_line__cn_8*/
			}
			__ret = bottling_line__process();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** pumpingTank1 execution **********************/

			self_num++;
			if (pumping__num != self_num) {
				pumping__num = self_num;
				pumping_fillingValve = __start.Bool+20; /*bottling_line__cn_18*/
				pumping_emptyingValve = __start.Bool+21; /*bottling_line__cn_17*/
				pumping_extractionPump = __start.Bool+22; /*bottling_line__cn_16*/
				pumping_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
				pumping_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
				pumping_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
				pumping_lowLevel = __start.Bool+7; /*bottling_line__cn_31*/
				pumping_highLevel = __start.Bool+6; /*bottling_line__cn_32*/
				pumping_pumpingFlow = __start.Float+3; /*bottling_line__cn_10*/
				pumping_level = __start.Float+2; /*bottling_line__cn_39*/
			}
			__ret = bottling_line__pumping();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** pumpingTank2 execution **********************/

			self_num++;
			if (pumping__num != self_num) {
				pumping__num = self_num;
				pumping_fillingValve = __start.Bool+25; /*bottling_line__cn_13*/
				pumping_emptyingValve = __start.Bool+26; /*bottling_line__cn_12*/
				pumping_extractionPump = __start.Bool+27; /*bottling_line__cn_11*/
				pumping_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
				pumping_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
				pumping_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
				pumping_lowLevel = __start.Bool+9; /*bottling_line__cn_29*/
				pumping_highLevel = __start.Bool+8; /*bottling_line__cn_30*/
				pumping_pumpingFlow = __start.Float+4; /*bottling_line__cn_9*/
				pumping_level = __start.Float+1; /*bottling_line__cn_40*/
			}
			__ret = bottling_line__pumping();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ flowsAdd execution ************************/

			self_num++;
			if (addition__num != self_num) {
				addition__num = self_num;
				addition_in1 = __start.Float+3; /*bottling_line__cn_10*/
				addition_in2 = __start.Float+4; /*bottling_line__cn_9*/
				addition_value = __start.Float+5; /*bottling_line__cn_5*/
				addition_dintValue = __start.Int+1; /*bottling_line__cn_41*/
				addition_intValue = __start.Int+0; /*bottling_line__cn_42*/
			}
			__ret = equipment_library__addition();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* mixing execution *************************/

			self_num++;
			if (mixing__num != self_num) {
				mixing__num = self_num;
				mixing_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
				mixing_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
				mixing_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
				mixing_fillingValve = __start.Bool+28; /*bottling_line__cn_8*/
				mixing_hiSpeedAgitator = __start.Bool+29; /*bottling_line__cn_7*/
				mixing_loSpeedAgitator = __start.Bool+30; /*bottling_line__cn_6*/
				mixing_inputFlow = __start.Float+5; /*bottling_line__cn_5*/
				mixing_highLevel = __start.Bool+10; /*bottling_line__cn_28*/
				mixing_lowLevel = __start.Bool+11; /*bottling_line__cn_27*/
				mixing_level = __start.Float+0; /*bottling_line__cn_43*/
				mixing_outputFlow = __start.Float+6; /*bottling_line__cn_1*/
			}
			__ret = bottling_line__mixing();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* drive execution **************************/

			self_num++;
			if (drive__num != self_num) {
				drive__num = self_num;
				drive_autoMode = __start.Bool+23; /*bottling_line__cn_15*/
				drive_manualMode = __start.Bool+24; /*bottling_line__cn_14*/
				drive_acknowledgePB = __start.Bool+5; /*bottling_line__cn_33*/
				drive_load = __start.Bool+31; /*bottling_line__cn_4*/
				drive_evacuate = __start.Bool+32; /*bottling_line__cn_3*/
				drive_convoy = __start.Bool+33; /*bottling_line__cn_2*/
				drive_inputFlow = __start.Float+6; /*bottling_line__cn_1*/
				drive_bottlePresent = __start.Bool+19; /*bottling_line__cn_19*/
				drive_bottleFilled = __start.Bool+18; /*bottling_line__cn_20*/
				drive_pulse = __start.Bool+17; /*bottling_line__cn_21*/
			}
			__ret = bottling_line__drive();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + bottling_line__bottling_line_offset__end.Bool;
	self.Int = __start.Int + bottling_line__bottling_line_offset__end.Int;
	self.Float = __start.Float + bottling_line__bottling_line_offset__end.Float;
	self.Char = __start.Char + bottling_line__bottling_line_offset__end.Char;

	return 0;
}

