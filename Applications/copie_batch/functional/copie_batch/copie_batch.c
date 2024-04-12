/*2024-04-12T14:05:58-01:00*/

/********************************************************************
 * copie_batch.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"


/********************************************************************
 *                 Inner 'gene_panel' declarations                  *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index gene_panel__num;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_acknowledgePB;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_powerUp;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_emergencyStop;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_manualSwitch;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_autoSwitch;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_startCyclePB;
extern CB_Mem_Bool *_i_copie_batch__gene_panel_endCyclePB;

/********************** Function declarations ***********************/

static int _copie_batch__gene_panel_init(void);
static int copie_batch__gene_panel(void);

/********************************************************************
 *                Inner 'gene_panel' implementation                 *
 ********************************************************************/

#include "equipment_library/functional/momentary_button/momentary_button.h"
#include "equipment_library/functional/switch_2pos_2outputs/switch_2pos_2outputs.h"
#include "equipment_library/functional/maintained_button/maintained_button.h"


/**************************** Variables *****************************/

static CB_Index gene_panel__num = 0;
CB_Mem_Bool *_i_copie_batch__gene_panel_acknowledgePB;
CB_Mem_Bool *_i_copie_batch__gene_panel_powerUp;
CB_Mem_Bool *_i_copie_batch__gene_panel_emergencyStop;
CB_Mem_Bool *_i_copie_batch__gene_panel_manualSwitch;
CB_Mem_Bool *_i_copie_batch__gene_panel_autoSwitch;
CB_Mem_Bool *_i_copie_batch__gene_panel_startCyclePB;
CB_Mem_Bool *_i_copie_batch__gene_panel_endCyclePB;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset copie_batch__gene_panel_offset_acknowledgePB;
static CB_Offset copie_batch__gene_panel_offset_powerUp;
static CB_Offset copie_batch__gene_panel_offset_modeSwitch;
static CB_Offset copie_batch__gene_panel_offset_startCyclePB;
static CB_Offset copie_batch__gene_panel_offset_endCyclePB;
static CB_Offset copie_batch__gene_panel_offset_bpCloture;
static CB_Offset copie_batch__gene_panel_offset_emergencyStop;
static CB_Offset copie_batch__gene_panel_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

static int _copie_batch__gene_panel_init(void)
{
	CB_Object __start = self;
	self.Bool+=1;

	/*initialize child acknowledgePB (equipment_library.momentary_button):*/
	self_num++;
	copie_batch__gene_panel_offset_acknowledgePB.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_acknowledgePB.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_acknowledgePB.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_acknowledgePB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_copie_batch__gene_panel_acknowledgePB;
	_equipment_library__momentary_button_init();

	/*initialize child powerUp (equipment_library.momentary_button):*/
	self_num++;
	copie_batch__gene_panel_offset_powerUp.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_powerUp.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_powerUp.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_powerUp.Char = self.Char - __start.Char;
	momentary_button_PB = _i_copie_batch__gene_panel_powerUp;
	_equipment_library__momentary_button_init();

	/*initialize child modeSwitch (equipment_library.switch_2pos_2outputs):*/
	self_num++;
	copie_batch__gene_panel_offset_modeSwitch.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_modeSwitch.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_modeSwitch.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_modeSwitch.Char = self.Char - __start.Char;
	switch_2pos_2outputs_leftVariable = _i_copie_batch__gene_panel_autoSwitch;
	switch_2pos_2outputs_rightVariable = _i_copie_batch__gene_panel_manualSwitch;
	_equipment_library__switch_2pos_2outputs_init();

	/*initialize child startCyclePB (equipment_library.momentary_button):*/
	self_num++;
	copie_batch__gene_panel_offset_startCyclePB.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_startCyclePB.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_startCyclePB.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_startCyclePB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_copie_batch__gene_panel_startCyclePB;
	_equipment_library__momentary_button_init();

	/*initialize child endCyclePB (equipment_library.momentary_button):*/
	self_num++;
	copie_batch__gene_panel_offset_endCyclePB.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_endCyclePB.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_endCyclePB.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_endCyclePB.Char = self.Char - __start.Char;
	momentary_button_PB = _i_copie_batch__gene_panel_endCyclePB;
	_equipment_library__momentary_button_init();

	/*initialize child bpCloture (equipment_library.momentary_button):*/
	self_num++;
	copie_batch__gene_panel_offset_bpCloture.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_bpCloture.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_bpCloture.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_bpCloture.Char = self.Char - __start.Char;
	momentary_button_PB = __start.Bool+0; /*gene_panel__cn_1*/
	_equipment_library__momentary_button_init();

	/*initialize child emergencyStop (equipment_library.maintained_button):*/
	self_num++;
	copie_batch__gene_panel_offset_emergencyStop.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset_emergencyStop.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset_emergencyStop.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset_emergencyStop.Char = self.Char - __start.Char;
	maintained_button_pb = _i_copie_batch__gene_panel_emergencyStop;
	_equipment_library__maintained_button_init();

	copie_batch__gene_panel_offset__end.Bool = self.Bool - __start.Bool;
	copie_batch__gene_panel_offset__end.Int = self.Int - __start.Int;
	copie_batch__gene_panel_offset__end.Float = self.Float - __start.Float;
	copie_batch__gene_panel_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

static int copie_batch__gene_panel(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

		
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + copie_batch__gene_panel_offset_acknowledgePB.Bool;
			self.Int = __start.Int + copie_batch__gene_panel_offset_acknowledgePB.Int;
			self.Float = __start.Float + copie_batch__gene_panel_offset_acknowledgePB.Float;
			self.Char = __start.Char + copie_batch__gene_panel_offset_acknowledgePB.Char;

			/********************* acknowledgePB execution **********************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_copie_batch__gene_panel_acknowledgePB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ powerUp execution *************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_copie_batch__gene_panel_powerUp;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** modeSwitch execution ***********************/

			self_num++;
			if (switch_2pos_2outputs__num != self_num) {
				switch_2pos_2outputs__num = self_num;
				switch_2pos_2outputs_leftVariable = _i_copie_batch__gene_panel_autoSwitch;
				switch_2pos_2outputs_rightVariable = _i_copie_batch__gene_panel_manualSwitch;
			}
			__ret = equipment_library__switch_2pos_2outputs();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** startCyclePB execution **********************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_copie_batch__gene_panel_startCyclePB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** endCyclePB execution ***********************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = _i_copie_batch__gene_panel_endCyclePB;
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** bpCloture execution ************************/

			self_num++;
			if (momentary_button__num != self_num) {
				momentary_button__num = self_num;
				momentary_button_PB = __start.Bool+0; /*gene_panel__cn_1*/
			}
			__ret = equipment_library__momentary_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************* emergencyStop execution **********************/

			self_num++;
			if (maintained_button__num != self_num) {
				maintained_button__num = self_num;
				maintained_button_pb = _i_copie_batch__gene_panel_emergencyStop;
			}
			__ret = equipment_library__maintained_button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + copie_batch__gene_panel_offset__end.Bool;
	self.Int = __start.Int + copie_batch__gene_panel_offset__end.Int;
	self.Float = __start.Float + copie_batch__gene_panel_offset__end.Float;
	self.Char = __start.Char + copie_batch__gene_panel_offset__end.Char;

	return 0;
}


/********************************************************************
 *         Public 'copie_batch.copie_batch' implementation          *
 ********************************************************************/

#include "copie_batch.h"
#include "copie_batch/functional/recipe/recipe.h"
#include "copie_batch/functional/mode/mode.h"
#include "copie_batch/functional/management/management.h"
#include "copie_batch/functional/manufacturing/manufacturing.h"


/**************************** Variables *****************************/

CB_Index copie_batch__num = 0;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset copie_batch__copie_batch_offset_generalPanel;
static CB_Offset copie_batch__copie_batch_offset_recipe;
static CB_Offset copie_batch__copie_batch_offset_workingModes;
static CB_Offset copie_batch__copie_batch_offset_management;
static CB_Offset copie_batch__copie_batch_offset_manufacturing;
static CB_Offset copie_batch__copie_batch_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _copie_batch__copie_batch_init(void)
{
	CB_Object __start = self;
	self.Bool+=20;
	self.Int+=4;

	/*initialize child generalPanel (copie_batch.gene_panel):*/
	self_num++;
	copie_batch__copie_batch_offset_generalPanel.Bool = self.Bool - __start.Bool;
	copie_batch__copie_batch_offset_generalPanel.Int = self.Int - __start.Int;
	copie_batch__copie_batch_offset_generalPanel.Float = self.Float - __start.Float;
	copie_batch__copie_batch_offset_generalPanel.Char = self.Char - __start.Char;
	_i_copie_batch__gene_panel_acknowledgePB = __start.Bool+7; /*copie_batch__cn_17*/
	_i_copie_batch__gene_panel_powerUp = __start.Bool+1; /*copie_batch__cn_23*/
	_i_copie_batch__gene_panel_emergencyStop = __start.Bool+2; /*copie_batch__cn_22*/
	_i_copie_batch__gene_panel_manualSwitch = __start.Bool+3; /*copie_batch__cn_21*/
	_i_copie_batch__gene_panel_autoSwitch = __start.Bool+4; /*copie_batch__cn_20*/
	_i_copie_batch__gene_panel_startCyclePB = __start.Bool+5; /*copie_batch__cn_19*/
	_i_copie_batch__gene_panel_endCyclePB = __start.Bool+6; /*copie_batch__cn_18*/
	_copie_batch__gene_panel_init();

	/*initialize child recipe (copie_batch.recipe):*/
	self_num++;
	copie_batch__copie_batch_offset_recipe.Bool = self.Bool - __start.Bool;
	copie_batch__copie_batch_offset_recipe.Int = self.Int - __start.Int;
	copie_batch__copie_batch_offset_recipe.Float = self.Float - __start.Float;
	copie_batch__copie_batch_offset_recipe.Char = self.Char - __start.Char;
	recipe_flourWeight = __start.Int+0; /*copie_batch__cn_4*/
	recipe_syrup1Weight = __start.Int+1; /*copie_batch__cn_3*/
	recipe_syrup2Weight = __start.Int+2; /*copie_batch__cn_2*/
	recipe_syrup3Weight = __start.Int+3; /*copie_batch__cn_1*/
	_copie_batch__recipe_init();

	/*initialize child workingModes (copie_batch.mode):*/
	self_num++;
	copie_batch__copie_batch_offset_workingModes.Bool = self.Bool - __start.Bool;
	copie_batch__copie_batch_offset_workingModes.Int = self.Int - __start.Int;
	copie_batch__copie_batch_offset_workingModes.Float = self.Float - __start.Float;
	copie_batch__copie_batch_offset_workingModes.Char = self.Char - __start.Char;
	mode_powerUp = __start.Bool+1; /*copie_batch__cn_23*/
	mode_emergencyStop = __start.Bool+2; /*copie_batch__cn_22*/
	mode_manualSwitch = __start.Bool+3; /*copie_batch__cn_21*/
	mode_autoSwitch = __start.Bool+4; /*copie_batch__cn_20*/
	mode_startCyclePB = __start.Bool+5; /*copie_batch__cn_19*/
	mode_endCyclePB = __start.Bool+6; /*copie_batch__cn_18*/
	mode_acknowledgePB = __start.Bool+7; /*copie_batch__cn_17*/
	mode_cycleEnd = __start.Bool+8; /*copie_batch__cn_16*/
	mode_generalFault = __start.Bool+9; /*copie_batch__cn_15*/
	mode_live = __start.Bool+0; /*copie_batch__cn_24*/
	mode_autoMode = __start.Bool+18; /*copie_batch__cn_6*/
	mode_manualMode = __start.Bool+19; /*copie_batch__cn_5*/
	mode_cycleInProgress = __start.Bool+10; /*copie_batch__cn_14*/
	mode_endCycleRequest = __start.Bool+11; /*copie_batch__cn_13*/
	_copie_batch__mode_init();

	/*initialize child management (copie_batch.management):*/
	self_num++;
	copie_batch__copie_batch_offset_management.Bool = self.Bool - __start.Bool;
	copie_batch__copie_batch_offset_management.Int = self.Int - __start.Int;
	copie_batch__copie_batch_offset_management.Float = self.Float - __start.Float;
	copie_batch__copie_batch_offset_management.Char = self.Char - __start.Char;
	management_cycleInProgress = __start.Bool+10; /*copie_batch__cn_14*/
	management_endCycleRequest = __start.Bool+11; /*copie_batch__cn_13*/
	management_kneadingOk = __start.Bool+12; /*copie_batch__cn_12*/
	management_syrupWeighingOk = __start.Bool+13; /*copie_batch__cn_11*/
	management_flourWeighingOk = __start.Bool+14; /*copie_batch__cn_10*/
	management_cycleEnd = __start.Bool+8; /*copie_batch__cn_16*/
	management_flourWeighingRq = __start.Bool+15; /*copie_batch__cn_9*/
	management_syrupWeighingRq = __start.Bool+16; /*copie_batch__cn_8*/
	management_kneadingRq = __start.Bool+17; /*copie_batch__cn_7*/
	_copie_batch__management_init();

	/*initialize child manufacturing (copie_batch.manufacturing):*/
	self_num++;
	copie_batch__copie_batch_offset_manufacturing.Bool = self.Bool - __start.Bool;
	copie_batch__copie_batch_offset_manufacturing.Int = self.Int - __start.Int;
	copie_batch__copie_batch_offset_manufacturing.Float = self.Float - __start.Float;
	copie_batch__copie_batch_offset_manufacturing.Char = self.Char - __start.Char;
	manufacturing_cycleInProgress = __start.Bool+10; /*copie_batch__cn_14*/
	manufacturing_acknowledgePB = __start.Bool+7; /*copie_batch__cn_17*/
	manufacturing_flourWeighingRequest = __start.Bool+15; /*copie_batch__cn_9*/
	manufacturing_syrupWeighingRequest = __start.Bool+16; /*copie_batch__cn_8*/
	manufacturing_kneadingRequest = __start.Bool+17; /*copie_batch__cn_7*/
	manufacturing_autoMode = __start.Bool+18; /*copie_batch__cn_6*/
	manufacturing_manualMode = __start.Bool+19; /*copie_batch__cn_5*/
	manufacturing_flourWeight = __start.Int+0; /*copie_batch__cn_4*/
	manufacturing_syrup1Weight = __start.Int+1; /*copie_batch__cn_3*/
	manufacturing_syrup2Weight = __start.Int+2; /*copie_batch__cn_2*/
	manufacturing_syrup3Weight = __start.Int+3; /*copie_batch__cn_1*/
	manufacturing_generalFault = __start.Bool+9; /*copie_batch__cn_15*/
	manufacturing_kneadingOK = __start.Bool+12; /*copie_batch__cn_12*/
	manufacturing_flourWeighingOk = __start.Bool+14; /*copie_batch__cn_10*/
	manufacturing_syrupWeighingOk = __start.Bool+13; /*copie_batch__cn_11*/
	_copie_batch__manufacturing_init();

	copie_batch__copie_batch_offset__end.Bool = self.Bool - __start.Bool;
	copie_batch__copie_batch_offset__end.Int = self.Int - __start.Int;
	copie_batch__copie_batch_offset__end.Float = self.Float - __start.Float;
	copie_batch__copie_batch_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int copie_batch__copie_batch(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																																
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + copie_batch__copie_batch_offset_generalPanel.Bool;
			self.Int = __start.Int + copie_batch__copie_batch_offset_generalPanel.Int;
			self.Float = __start.Float + copie_batch__copie_batch_offset_generalPanel.Float;
			self.Char = __start.Char + copie_batch__copie_batch_offset_generalPanel.Char;

			/********************** generalPanel execution **********************/

			self_num++;
			if (gene_panel__num != self_num) {
				gene_panel__num = self_num;
				_i_copie_batch__gene_panel_acknowledgePB = __start.Bool+7; /*copie_batch__cn_17*/
				_i_copie_batch__gene_panel_powerUp = __start.Bool+1; /*copie_batch__cn_23*/
				_i_copie_batch__gene_panel_emergencyStop = __start.Bool+2; /*copie_batch__cn_22*/
				_i_copie_batch__gene_panel_manualSwitch = __start.Bool+3; /*copie_batch__cn_21*/
				_i_copie_batch__gene_panel_autoSwitch = __start.Bool+4; /*copie_batch__cn_20*/
				_i_copie_batch__gene_panel_startCyclePB = __start.Bool+5; /*copie_batch__cn_19*/
				_i_copie_batch__gene_panel_endCyclePB = __start.Bool+6; /*copie_batch__cn_18*/
			}
			__ret = copie_batch__gene_panel();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* recipe execution *************************/

			self_num++;
			if (recipe__num != self_num) {
				recipe__num = self_num;
				recipe_flourWeight = __start.Int+0; /*copie_batch__cn_4*/
				recipe_syrup1Weight = __start.Int+1; /*copie_batch__cn_3*/
				recipe_syrup2Weight = __start.Int+2; /*copie_batch__cn_2*/
				recipe_syrup3Weight = __start.Int+3; /*copie_batch__cn_1*/
			}
			__ret = copie_batch__recipe();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** workingModes execution **********************/

			self_num++;
			if (mode__num != self_num) {
				mode__num = self_num;
				mode_powerUp = __start.Bool+1; /*copie_batch__cn_23*/
				mode_emergencyStop = __start.Bool+2; /*copie_batch__cn_22*/
				mode_manualSwitch = __start.Bool+3; /*copie_batch__cn_21*/
				mode_autoSwitch = __start.Bool+4; /*copie_batch__cn_20*/
				mode_startCyclePB = __start.Bool+5; /*copie_batch__cn_19*/
				mode_endCyclePB = __start.Bool+6; /*copie_batch__cn_18*/
				mode_acknowledgePB = __start.Bool+7; /*copie_batch__cn_17*/
				mode_cycleEnd = __start.Bool+8; /*copie_batch__cn_16*/
				mode_generalFault = __start.Bool+9; /*copie_batch__cn_15*/
				mode_live = __start.Bool+0; /*copie_batch__cn_24*/
				mode_autoMode = __start.Bool+18; /*copie_batch__cn_6*/
				mode_manualMode = __start.Bool+19; /*copie_batch__cn_5*/
				mode_cycleInProgress = __start.Bool+10; /*copie_batch__cn_14*/
				mode_endCycleRequest = __start.Bool+11; /*copie_batch__cn_13*/
			}
			__ret = copie_batch__mode();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** management execution ***********************/

			self_num++;
			if (management__num != self_num) {
				management__num = self_num;
				management_cycleInProgress = __start.Bool+10; /*copie_batch__cn_14*/
				management_endCycleRequest = __start.Bool+11; /*copie_batch__cn_13*/
				management_kneadingOk = __start.Bool+12; /*copie_batch__cn_12*/
				management_syrupWeighingOk = __start.Bool+13; /*copie_batch__cn_11*/
				management_flourWeighingOk = __start.Bool+14; /*copie_batch__cn_10*/
				management_cycleEnd = __start.Bool+8; /*copie_batch__cn_16*/
				management_flourWeighingRq = __start.Bool+15; /*copie_batch__cn_9*/
				management_syrupWeighingRq = __start.Bool+16; /*copie_batch__cn_8*/
				management_kneadingRq = __start.Bool+17; /*copie_batch__cn_7*/
			}
			__ret = copie_batch__management();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************* manufacturing execution **********************/

			self_num++;
			if (manufacturing__num != self_num) {
				manufacturing__num = self_num;
				manufacturing_cycleInProgress = __start.Bool+10; /*copie_batch__cn_14*/
				manufacturing_acknowledgePB = __start.Bool+7; /*copie_batch__cn_17*/
				manufacturing_flourWeighingRequest = __start.Bool+15; /*copie_batch__cn_9*/
				manufacturing_syrupWeighingRequest = __start.Bool+16; /*copie_batch__cn_8*/
				manufacturing_kneadingRequest = __start.Bool+17; /*copie_batch__cn_7*/
				manufacturing_autoMode = __start.Bool+18; /*copie_batch__cn_6*/
				manufacturing_manualMode = __start.Bool+19; /*copie_batch__cn_5*/
				manufacturing_flourWeight = __start.Int+0; /*copie_batch__cn_4*/
				manufacturing_syrup1Weight = __start.Int+1; /*copie_batch__cn_3*/
				manufacturing_syrup2Weight = __start.Int+2; /*copie_batch__cn_2*/
				manufacturing_syrup3Weight = __start.Int+3; /*copie_batch__cn_1*/
				manufacturing_generalFault = __start.Bool+9; /*copie_batch__cn_15*/
				manufacturing_kneadingOK = __start.Bool+12; /*copie_batch__cn_12*/
				manufacturing_flourWeighingOk = __start.Bool+14; /*copie_batch__cn_10*/
				manufacturing_syrupWeighingOk = __start.Bool+13; /*copie_batch__cn_11*/
			}
			__ret = copie_batch__manufacturing();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + copie_batch__copie_batch_offset__end.Bool;
	self.Int = __start.Int + copie_batch__copie_batch_offset__end.Int;
	self.Float = __start.Float + copie_batch__copie_batch_offset__end.Float;
	self.Char = __start.Char + copie_batch__copie_batch_offset__end.Char;

	return 0;
}

