/*2023-10-03T11:13:35-01:00*/

/********************************************************************
 * cmd_double_acting_jack_lmp.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"


/********************************************************************
 *                  Inner 'actuator' declarations                   *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index actuator__num;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_autoMode;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_manualMode;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_autoWorkCmd;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_autoRestCmd;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_outletSensor;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_inletSensor;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_valveWorkPB;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_valveRestPB;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_generalFault;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_workCmd;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_restCmd;

/********************** Function declarations ***********************/

static int _cmd_equipment_library__actuator_init(void);
static int cmd_equipment_library__actuator(void);

/********************************************************************
 *                   Inner 'faults' declarations                    *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index faults__num;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_workCmd;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_restCmd;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_outletSensor;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_inletSensor;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_acknowledgePB;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_generalFault;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_discordanceFault;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_outletSensorFault;
extern CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_inletSensorFault;
extern CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_presetMvt;
extern CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_presetDiscordance;

/********************** Function declarations ***********************/

static int _cmd_equipment_library__faults_init(void);
static int cmd_equipment_library__faults(void);

/********************************************************************
 *                 Inner 'actuator' implementation                  *
 ********************************************************************/



/**************************** Variables *****************************/

static CB_Index actuator__num = 0;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_autoMode;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_manualMode;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_autoWorkCmd;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_autoRestCmd;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_outletSensor;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_inletSensor;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_valveWorkPB;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_valveRestPB;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_generalFault;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_workCmd;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__actuator_restCmd;

/**************************** Variables *****************************/

#define autoMode (_i_cmd_double_acting_jack_lmp__actuator_autoMode->CB_current_value)
#define manualMode (_i_cmd_double_acting_jack_lmp__actuator_manualMode->CB_current_value)
#define autoWorkCmd (_i_cmd_double_acting_jack_lmp__actuator_autoWorkCmd->CB_current_value)
#define autoRestCmd (_i_cmd_double_acting_jack_lmp__actuator_autoRestCmd->CB_current_value)
#define outletSensor (_i_cmd_double_acting_jack_lmp__actuator_outletSensor->CB_current_value)
#define inletSensor (_i_cmd_double_acting_jack_lmp__actuator_inletSensor->CB_current_value)
#define valveWorkPB (_i_cmd_double_acting_jack_lmp__actuator_valveWorkPB->CB_current_value)
#define valveRestPB (_i_cmd_double_acting_jack_lmp__actuator_valveRestPB->CB_current_value)
#define generalFault (_i_cmd_double_acting_jack_lmp__actuator_generalFault->CB_current_value)
#define workCmd (_i_cmd_double_acting_jack_lmp__actuator_workCmd->CB_current_value)
#define restCmd (_i_cmd_double_acting_jack_lmp__actuator_restCmd->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

static int _cmd_equipment_library__actuator_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

static int cmd_equipment_library__actuator(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			workCmd = ((((autoMode && autoWorkCmd) && !autoRestCmd) || ((manualMode && valveWorkPB) && !valveRestPB)) && !outletSensor) && !generalFault;
			restCmd = ((((autoMode && autoRestCmd) && !autoWorkCmd) || ((manualMode && valveRestPB) && !valveWorkPB)) && !inletSensor) && !generalFault;
		}

		CB_post_bool(_i_cmd_double_acting_jack_lmp__actuator_workCmd);
		CB_post_bool(_i_cmd_double_acting_jack_lmp__actuator_restCmd);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

#undef autoMode
#undef manualMode
#undef autoWorkCmd
#undef autoRestCmd
#undef outletSensor
#undef inletSensor
#undef valveWorkPB
#undef valveRestPB
#undef generalFault
#undef workCmd
#undef restCmd

/********************************************************************
 *                  Inner 'faults' implementation                   *
 ********************************************************************/

#include "timers_counters/functional/cb_ton/cb_ton.h"


/**************************** Variables *****************************/

static CB_Index faults__num = 0;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_workCmd;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_restCmd;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_outletSensor;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_inletSensor;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_acknowledgePB;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_generalFault;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_discordanceFault;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_outletSensorFault;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_inletSensorFault;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_presetMvt;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_presetDiscordance;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_TON_OUT_IN;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_TON_OUT_PT;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_TON_OUT_Q0;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_TON_OUT_CV;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_TON_IN_IN;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_TON_IN_PT;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_TON_IN_Q0;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_TON_IN_CV;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_TON_DISC_IN;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_TON_DISC_PT;
CB_Mem_Bool *_i_cmd_double_acting_jack_lmp__faults_TON_DISC_Q0;
CB_Mem_Int *_i_cmd_double_acting_jack_lmp__faults_TON_DISC_CV;

/**************************** Variables *****************************/

#define workCmd (_i_cmd_double_acting_jack_lmp__faults_workCmd->CB_current_value)
#define restCmd (_i_cmd_double_acting_jack_lmp__faults_restCmd->CB_current_value)
#define outletSensor (_i_cmd_double_acting_jack_lmp__faults_outletSensor->CB_current_value)
#define inletSensor (_i_cmd_double_acting_jack_lmp__faults_inletSensor->CB_current_value)
#define acknowledgePB (_i_cmd_double_acting_jack_lmp__faults_acknowledgePB->CB_current_value)
#define generalFault (_i_cmd_double_acting_jack_lmp__faults_generalFault->CB_current_value)
#define discordanceFault (_i_cmd_double_acting_jack_lmp__faults_discordanceFault->CB_current_value)
#define outletSensorFault (_i_cmd_double_acting_jack_lmp__faults_outletSensorFault->CB_current_value)
#define inletSensorFault (_i_cmd_double_acting_jack_lmp__faults_inletSensorFault->CB_current_value)
#define presetMvt(i) (_i_cmd_double_acting_jack_lmp__faults_presetMvt[i+1].CB_current_value)
#define presetDiscordance(i) (_i_cmd_double_acting_jack_lmp__faults_presetDiscordance[i+1].CB_current_value)
#define TON_OUT_IN (_i_cmd_double_acting_jack_lmp__faults_TON_OUT_IN->CB_current_value)
#define TON_OUT_PT(i) (_i_cmd_double_acting_jack_lmp__faults_TON_OUT_PT[i+1].CB_current_value)
#define TON_OUT_Q0 (_i_cmd_double_acting_jack_lmp__faults_TON_OUT_Q0->CB_current_value)
#define TON_OUT_CV(i) (_i_cmd_double_acting_jack_lmp__faults_TON_OUT_CV[i+1].CB_current_value)
#define TON_IN_IN (_i_cmd_double_acting_jack_lmp__faults_TON_IN_IN->CB_current_value)
#define TON_IN_PT(i) (_i_cmd_double_acting_jack_lmp__faults_TON_IN_PT[i+1].CB_current_value)
#define TON_IN_Q0 (_i_cmd_double_acting_jack_lmp__faults_TON_IN_Q0->CB_current_value)
#define TON_IN_CV(i) (_i_cmd_double_acting_jack_lmp__faults_TON_IN_CV[i+1].CB_current_value)
#define TON_DISC_IN (_i_cmd_double_acting_jack_lmp__faults_TON_DISC_IN->CB_current_value)
#define TON_DISC_PT(i) (_i_cmd_double_acting_jack_lmp__faults_TON_DISC_PT[i+1].CB_current_value)
#define TON_DISC_Q0 (_i_cmd_double_acting_jack_lmp__faults_TON_DISC_Q0->CB_current_value)
#define TON_DISC_CV(i) (_i_cmd_double_acting_jack_lmp__faults_TON_DISC_CV[i+1].CB_current_value)


/************************ Components offsets ************************/

static CB_Index cmd_equipment_library__faults_dnum_TON_OUT;
static CB_Index cmd_equipment_library__faults_dnum_TON_IN;
static CB_Index cmd_equipment_library__faults_dnum_TON_DISC;
static CB_Index cmd_equipment_library__faults_dnum__end;

static CB_Offset cmd_equipment_library__faults_offset_TON_OUT;
static CB_Offset cmd_equipment_library__faults_offset_TON_IN;
static CB_Offset cmd_equipment_library__faults_offset_TON_DISC;
static CB_Offset cmd_equipment_library__faults_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

static int _cmd_equipment_library__faults_init(void)
{
	CB_Index __my_num = self_num;
	CB_Object __start = self;
	(self.Int+0+3)->CB_current_value = 100000; /*presetMvt[2]*/
	(self.Int+4+3)->CB_current_value = 2000; /*presetDiscordance[2]*/
	self.Bool+=9;
	self.Int+=32;

	/*initialize child TON_OUT (timers_counters.cb_ton):*/
	self_num++;
	cmd_equipment_library__faults_dnum_TON_OUT = self_num - __my_num;
	cmd_equipment_library__faults_offset_TON_OUT.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__faults_offset_TON_OUT.Int = self.Int - __start.Int;
	cmd_equipment_library__faults_offset_TON_OUT.Float = self.Float - __start.Float;
	cmd_equipment_library__faults_offset_TON_OUT.Char = self.Char - __start.Char;
	cb_ton_IN = __start.Bool+3; /*TON_OUT_IN*/
	cb_ton_PT = __start.Int+8; /*TON_OUT_PT*/
	cb_ton_Q0 = __start.Bool+4; /*TON_OUT_Q0*/
	cb_ton_CV = __start.Int+12; /*TON_OUT_CV*/
	_timers_counters__cb_ton_init();

	/*initialize child TON_IN (timers_counters.cb_ton):*/
	self_num++;
	cmd_equipment_library__faults_dnum_TON_IN = self_num - __my_num;
	cmd_equipment_library__faults_offset_TON_IN.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__faults_offset_TON_IN.Int = self.Int - __start.Int;
	cmd_equipment_library__faults_offset_TON_IN.Float = self.Float - __start.Float;
	cmd_equipment_library__faults_offset_TON_IN.Char = self.Char - __start.Char;
	cb_ton_IN = __start.Bool+5; /*TON_IN_IN*/
	cb_ton_PT = __start.Int+16; /*TON_IN_PT*/
	cb_ton_Q0 = __start.Bool+6; /*TON_IN_Q0*/
	cb_ton_CV = __start.Int+20; /*TON_IN_CV*/
	_timers_counters__cb_ton_init();

	/*initialize child TON_DISC (timers_counters.cb_ton):*/
	self_num++;
	cmd_equipment_library__faults_dnum_TON_DISC = self_num - __my_num;
	cmd_equipment_library__faults_offset_TON_DISC.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__faults_offset_TON_DISC.Int = self.Int - __start.Int;
	cmd_equipment_library__faults_offset_TON_DISC.Float = self.Float - __start.Float;
	cmd_equipment_library__faults_offset_TON_DISC.Char = self.Char - __start.Char;
	cb_ton_IN = __start.Bool+7; /*TON_DISC_IN*/
	cb_ton_PT = __start.Int+24; /*TON_DISC_PT*/
	cb_ton_Q0 = __start.Bool+8; /*TON_DISC_Q0*/
	cb_ton_CV = __start.Int+28; /*TON_DISC_CV*/
	_timers_counters__cb_ton_init();

	cmd_equipment_library__faults_dnum__end = self_num - __my_num;
	cmd_equipment_library__faults_offset__end.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__faults_offset__end.Int = self.Int - __start.Int;
	cmd_equipment_library__faults_offset__end.Float = self.Float - __start.Float;
	cmd_equipment_library__faults_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

static int cmd_equipment_library__faults(void)
{
	CB_Object __start = self;
	CB_Index __my_num = self_num;
	int __ret;
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		_i_cmd_double_acting_jack_lmp__faults_discordanceFault = self.Bool+0;
		_i_cmd_double_acting_jack_lmp__faults_outletSensorFault = self.Bool+1;
		_i_cmd_double_acting_jack_lmp__faults_inletSensorFault = self.Bool+2;
		_i_cmd_double_acting_jack_lmp__faults_presetMvt = self.Int+0;
		_i_cmd_double_acting_jack_lmp__faults_presetDiscordance = self.Int+4;
		_i_cmd_double_acting_jack_lmp__faults_TON_OUT_IN = self.Bool+3;
		_i_cmd_double_acting_jack_lmp__faults_TON_OUT_PT = self.Int+8;
		_i_cmd_double_acting_jack_lmp__faults_TON_OUT_Q0 = self.Bool+4;
		_i_cmd_double_acting_jack_lmp__faults_TON_OUT_CV = self.Int+12;
		_i_cmd_double_acting_jack_lmp__faults_TON_IN_IN = self.Bool+5;
		_i_cmd_double_acting_jack_lmp__faults_TON_IN_PT = self.Int+16;
		_i_cmd_double_acting_jack_lmp__faults_TON_IN_Q0 = self.Bool+6;
		_i_cmd_double_acting_jack_lmp__faults_TON_IN_CV = self.Int+20;
		_i_cmd_double_acting_jack_lmp__faults_TON_DISC_IN = self.Bool+7;
		_i_cmd_double_acting_jack_lmp__faults_TON_DISC_PT = self.Int+24;
		_i_cmd_double_acting_jack_lmp__faults_TON_DISC_Q0 = self.Bool+8;
		_i_cmd_double_acting_jack_lmp__faults_TON_DISC_CV = self.Int+28;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _1;
			unsigned char _13_Q0;
			CB_Mem_Int _13_CV[4] =  { cb_int_header(2) };
			unsigned char _14_Q0;
			CB_Mem_Int _14_CV[4] =  { cb_int_header(2) };
			unsigned char _19_Q0;
			CB_Mem_Int _19_CV[4] =  { cb_int_header(2) };
			_1 = acknowledgePB;
			if (_1) {
				outletSensorFault = 0;
			}
			if (_1) {
				inletSensorFault = 0;
			}
			if (_1) {
				discordanceFault = 0;
			}
			if (_1) {
				generalFault = 0;
			}
			/*call user FB TON_OUT():*/
			TON_OUT_IN = workCmd;
			copy_int_array(_i_cmd_double_acting_jack_lmp__faults_TON_OUT_PT, _i_cmd_double_acting_jack_lmp__faults_presetMvt, 2);
			self.Bool = __start.Bool + cmd_equipment_library__faults_offset_TON_OUT.Bool;
			self.Int = __start.Int + cmd_equipment_library__faults_offset_TON_OUT.Int;
			self.Float = __start.Float + cmd_equipment_library__faults_offset_TON_OUT.Float;
			self.Char = __start.Char + cmd_equipment_library__faults_offset_TON_OUT.Char;
			self_num = __my_num + cmd_equipment_library__faults_dnum_TON_OUT;
			if (cb_ton__num != self_num) {
				cb_ton__num = self_num;
				cb_ton_IN = _i_cmd_double_acting_jack_lmp__faults_TON_OUT_IN;
				cb_ton_PT = _i_cmd_double_acting_jack_lmp__faults_TON_OUT_PT;
				cb_ton_Q0 = _i_cmd_double_acting_jack_lmp__faults_TON_OUT_Q0;
				cb_ton_CV = _i_cmd_double_acting_jack_lmp__faults_TON_OUT_CV;
			}
			__ret = timers_counters__cb_ton();
			if (__ret != 0) {
				return __ret; /*user FB failure*/
			}
			self_num = __my_num;
			_13_Q0 = TON_OUT_Q0;
			copy_int_array(_13_CV, _i_cmd_double_acting_jack_lmp__faults_TON_OUT_CV, 2);
			/*end TON_OUT()*/
			if (_13_Q0 && !outletSensor) {
				outletSensorFault = 1;
			}
			/*call user FB TON_IN():*/
			TON_IN_IN = restCmd;
			copy_int_array(_i_cmd_double_acting_jack_lmp__faults_TON_IN_PT, _i_cmd_double_acting_jack_lmp__faults_presetMvt, 2);
			self.Bool = __start.Bool + cmd_equipment_library__faults_offset_TON_IN.Bool;
			self.Int = __start.Int + cmd_equipment_library__faults_offset_TON_IN.Int;
			self.Float = __start.Float + cmd_equipment_library__faults_offset_TON_IN.Float;
			self.Char = __start.Char + cmd_equipment_library__faults_offset_TON_IN.Char;
			self_num = __my_num + cmd_equipment_library__faults_dnum_TON_IN;
			if (cb_ton__num != self_num) {
				cb_ton__num = self_num;
				cb_ton_IN = _i_cmd_double_acting_jack_lmp__faults_TON_IN_IN;
				cb_ton_PT = _i_cmd_double_acting_jack_lmp__faults_TON_IN_PT;
				cb_ton_Q0 = _i_cmd_double_acting_jack_lmp__faults_TON_IN_Q0;
				cb_ton_CV = _i_cmd_double_acting_jack_lmp__faults_TON_IN_CV;
			}
			__ret = timers_counters__cb_ton();
			if (__ret != 0) {
				return __ret; /*user FB failure*/
			}
			self_num = __my_num;
			_14_Q0 = TON_IN_Q0;
			copy_int_array(_14_CV, _i_cmd_double_acting_jack_lmp__faults_TON_IN_CV, 2);
			/*end TON_IN()*/
			if (_14_Q0 && !inletSensor) {
				inletSensorFault = 1;
			}
			/*call user FB TON_DISC():*/
			TON_DISC_IN = inletSensor && outletSensor;
			copy_int_array(_i_cmd_double_acting_jack_lmp__faults_TON_DISC_PT, _i_cmd_double_acting_jack_lmp__faults_presetDiscordance, 2);
			self.Bool = __start.Bool + cmd_equipment_library__faults_offset_TON_DISC.Bool;
			self.Int = __start.Int + cmd_equipment_library__faults_offset_TON_DISC.Int;
			self.Float = __start.Float + cmd_equipment_library__faults_offset_TON_DISC.Float;
			self.Char = __start.Char + cmd_equipment_library__faults_offset_TON_DISC.Char;
			self_num = __my_num + cmd_equipment_library__faults_dnum_TON_DISC;
			if (cb_ton__num != self_num) {
				cb_ton__num = self_num;
				cb_ton_IN = _i_cmd_double_acting_jack_lmp__faults_TON_DISC_IN;
				cb_ton_PT = _i_cmd_double_acting_jack_lmp__faults_TON_DISC_PT;
				cb_ton_Q0 = _i_cmd_double_acting_jack_lmp__faults_TON_DISC_Q0;
				cb_ton_CV = _i_cmd_double_acting_jack_lmp__faults_TON_DISC_CV;
			}
			__ret = timers_counters__cb_ton();
			if (__ret != 0) {
				return __ret; /*user FB failure*/
			}
			self_num = __my_num;
			_19_Q0 = TON_DISC_Q0;
			copy_int_array(_19_CV, _i_cmd_double_acting_jack_lmp__faults_TON_DISC_CV, 2);
			/*end TON_DISC()*/
			if (_19_Q0) {
				discordanceFault = 1;
			}
			if ((inletSensorFault || outletSensorFault) || discordanceFault) {
				generalFault = 1;
			}
		}

		if(nb_alloc > 0) {
			free_all_alloc();
		}

		CB_post_bool(_i_cmd_double_acting_jack_lmp__faults_generalFault);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self_num = __my_num + cmd_equipment_library__faults_dnum__end;
	self.Bool = __start.Bool + cmd_equipment_library__faults_offset__end.Bool;
	self.Int = __start.Int + cmd_equipment_library__faults_offset__end.Int;
	self.Float = __start.Float + cmd_equipment_library__faults_offset__end.Float;
	self.Char = __start.Char + cmd_equipment_library__faults_offset__end.Char;

	return 0;
}

#undef workCmd
#undef restCmd
#undef outletSensor
#undef inletSensor
#undef acknowledgePB
#undef generalFault
#undef discordanceFault
#undef outletSensorFault
#undef inletSensorFault
#undef presetMvt
#undef presetDiscordance
#undef TON_OUT_IN
#undef TON_OUT_PT
#undef TON_OUT_Q0
#undef TON_OUT_CV
#undef TON_IN_IN
#undef TON_IN_PT
#undef TON_IN_Q0
#undef TON_IN_CV
#undef TON_DISC_IN
#undef TON_DISC_PT
#undef TON_DISC_Q0
#undef TON_DISC_CV

/********************************************************************
 * Public 'cmd_equipment_library.cmd_double_acting_jack_lmp' implementation *
 ********************************************************************/

#include "cmd_double_acting_jack_lmp.h"


/**************************** Variables *****************************/

CB_Index cmd_double_acting_jack_lmp__num = 0;
CB_Mem_Bool *cmd_double_acting_jack_lmp_autoMode;
CB_Mem_Bool *cmd_double_acting_jack_lmp_manualMode;
CB_Mem_Bool *cmd_double_acting_jack_lmp_autoWorkCmd;
CB_Mem_Bool *cmd_double_acting_jack_lmp_autoRestCmd;
CB_Mem_Bool *cmd_double_acting_jack_lmp_valveWorkPB;
CB_Mem_Bool *cmd_double_acting_jack_lmp_valveRestPB;
CB_Mem_Bool *cmd_double_acting_jack_lmp_outletSensor;
CB_Mem_Bool *cmd_double_acting_jack_lmp_inletSensor;
CB_Mem_Bool *cmd_double_acting_jack_lmp_acknowledgePB;
CB_Mem_Bool *cmd_double_acting_jack_lmp_workCmd;
CB_Mem_Bool *cmd_double_acting_jack_lmp_restCmd;
CB_Mem_Bool *cmd_double_acting_jack_lmp_generalFault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions;
static CB_Offset cmd_equipment_library__cmd_double_acting_jack_lmp_offset_faults1;
static CB_Offset cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _cmd_equipment_library__cmd_double_acting_jack_lmp_init(void)
{
	CB_Object __start = self;

	/*initialize child actions (cmd_equipment_library.actuator):*/
	self_num++;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Int = self.Int - __start.Int;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Float = self.Float - __start.Float;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Char = self.Char - __start.Char;
	_i_cmd_double_acting_jack_lmp__actuator_autoMode = cmd_double_acting_jack_lmp_autoMode;
	_i_cmd_double_acting_jack_lmp__actuator_manualMode = cmd_double_acting_jack_lmp_manualMode;
	_i_cmd_double_acting_jack_lmp__actuator_autoWorkCmd = cmd_double_acting_jack_lmp_autoWorkCmd;
	_i_cmd_double_acting_jack_lmp__actuator_autoRestCmd = cmd_double_acting_jack_lmp_autoRestCmd;
	_i_cmd_double_acting_jack_lmp__actuator_outletSensor = cmd_double_acting_jack_lmp_outletSensor;
	_i_cmd_double_acting_jack_lmp__actuator_inletSensor = cmd_double_acting_jack_lmp_inletSensor;
	_i_cmd_double_acting_jack_lmp__actuator_valveWorkPB = cmd_double_acting_jack_lmp_valveWorkPB;
	_i_cmd_double_acting_jack_lmp__actuator_valveRestPB = cmd_double_acting_jack_lmp_valveRestPB;
	_i_cmd_double_acting_jack_lmp__actuator_generalFault = cmd_double_acting_jack_lmp_generalFault;
	_i_cmd_double_acting_jack_lmp__actuator_workCmd = cmd_double_acting_jack_lmp_workCmd;
	_i_cmd_double_acting_jack_lmp__actuator_restCmd = cmd_double_acting_jack_lmp_restCmd;
	_cmd_equipment_library__actuator_init();

	/*initialize child faults1 (cmd_equipment_library.faults):*/
	self_num++;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_faults1.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_faults1.Int = self.Int - __start.Int;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_faults1.Float = self.Float - __start.Float;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset_faults1.Char = self.Char - __start.Char;
	_i_cmd_double_acting_jack_lmp__faults_workCmd = cmd_double_acting_jack_lmp_workCmd;
	_i_cmd_double_acting_jack_lmp__faults_restCmd = cmd_double_acting_jack_lmp_restCmd;
	_i_cmd_double_acting_jack_lmp__faults_outletSensor = cmd_double_acting_jack_lmp_outletSensor;
	_i_cmd_double_acting_jack_lmp__faults_inletSensor = cmd_double_acting_jack_lmp_inletSensor;
	_i_cmd_double_acting_jack_lmp__faults_acknowledgePB = cmd_double_acting_jack_lmp_acknowledgePB;
	_i_cmd_double_acting_jack_lmp__faults_generalFault = cmd_double_acting_jack_lmp_generalFault;
	_cmd_equipment_library__faults_init();

	cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Int = self.Int - __start.Int;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Float = self.Float - __start.Float;
	cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int cmd_equipment_library__cmd_double_acting_jack_lmp(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Bool;
			self.Int = __start.Int + cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Int;
			self.Float = __start.Float + cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Float;
			self.Char = __start.Char + cmd_equipment_library__cmd_double_acting_jack_lmp_offset_actions.Char;

			/************************ actions execution *************************/

			self_num++;
			if (actuator__num != self_num) {
				actuator__num = self_num;
				_i_cmd_double_acting_jack_lmp__actuator_autoMode = cmd_double_acting_jack_lmp_autoMode;
				_i_cmd_double_acting_jack_lmp__actuator_manualMode = cmd_double_acting_jack_lmp_manualMode;
				_i_cmd_double_acting_jack_lmp__actuator_autoWorkCmd = cmd_double_acting_jack_lmp_autoWorkCmd;
				_i_cmd_double_acting_jack_lmp__actuator_autoRestCmd = cmd_double_acting_jack_lmp_autoRestCmd;
				_i_cmd_double_acting_jack_lmp__actuator_outletSensor = cmd_double_acting_jack_lmp_outletSensor;
				_i_cmd_double_acting_jack_lmp__actuator_inletSensor = cmd_double_acting_jack_lmp_inletSensor;
				_i_cmd_double_acting_jack_lmp__actuator_valveWorkPB = cmd_double_acting_jack_lmp_valveWorkPB;
				_i_cmd_double_acting_jack_lmp__actuator_valveRestPB = cmd_double_acting_jack_lmp_valveRestPB;
				_i_cmd_double_acting_jack_lmp__actuator_generalFault = cmd_double_acting_jack_lmp_generalFault;
				_i_cmd_double_acting_jack_lmp__actuator_workCmd = cmd_double_acting_jack_lmp_workCmd;
				_i_cmd_double_acting_jack_lmp__actuator_restCmd = cmd_double_acting_jack_lmp_restCmd;
			}
			__ret = cmd_equipment_library__actuator();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ faults1 execution *************************/

			self_num++;
			if (faults__num != self_num) {
				faults__num = self_num;
				_i_cmd_double_acting_jack_lmp__faults_workCmd = cmd_double_acting_jack_lmp_workCmd;
				_i_cmd_double_acting_jack_lmp__faults_restCmd = cmd_double_acting_jack_lmp_restCmd;
				_i_cmd_double_acting_jack_lmp__faults_outletSensor = cmd_double_acting_jack_lmp_outletSensor;
				_i_cmd_double_acting_jack_lmp__faults_inletSensor = cmd_double_acting_jack_lmp_inletSensor;
				_i_cmd_double_acting_jack_lmp__faults_acknowledgePB = cmd_double_acting_jack_lmp_acknowledgePB;
				_i_cmd_double_acting_jack_lmp__faults_generalFault = cmd_double_acting_jack_lmp_generalFault;
			}
			__ret = cmd_equipment_library__faults();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Bool;
	self.Int = __start.Int + cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Int;
	self.Float = __start.Float + cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Float;
	self.Char = __start.Char + cmd_equipment_library__cmd_double_acting_jack_lmp_offset__end.Char;

	return 0;
}

