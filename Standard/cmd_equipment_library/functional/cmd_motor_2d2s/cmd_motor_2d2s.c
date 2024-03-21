/*2023-10-03T11:13:35-01:00*/

/********************************************************************
 * cmd_motor_2d2s.c
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
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoMode;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_manualMode;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoFwdCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoBwdCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoHSCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoLSCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_forwardPB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_backwardPB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_highSpeedPB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_lowSpeedPB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_stopPB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_generalFault;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_forwardCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_backwardCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_highSpeedCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_lowSpeedCmd;

/********************** Function declarations ***********************/

static int _cmd_equipment_library__actuator_init(void);
static int cmd_equipment_library__actuator(void);

/********************************************************************
 *                   Inner 'faults' declarations                    *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index faults__num;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_forwardCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_backwardCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_highSpeedCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_lowSpeedCmd;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_thermalFB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_forwardFB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_backwardFB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_highSpeedFB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_lowSpeedFB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_acknowledgePB;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_generalFault;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_thermalFault;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_forwardFBFault;
extern CB_Mem_Bool *_i_cmd_motor_2d2s__faults_backwardFBFault;

/********************** Function declarations ***********************/

static int _cmd_equipment_library__faults_init(void);
static int cmd_equipment_library__faults(void);

/********************************************************************
 *                 Inner 'actuator' implementation                  *
 ********************************************************************/



/**************************** Variables *****************************/

static CB_Index actuator__num = 0;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoMode;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_manualMode;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoFwdCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoBwdCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoHSCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_autoLSCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_forwardPB;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_backwardPB;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_highSpeedPB;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_lowSpeedPB;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_stopPB;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_generalFault;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_forwardCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_backwardCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_highSpeedCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__actuator_lowSpeedCmd;

/**************************** Variables *****************************/

#define autoMode (_i_cmd_motor_2d2s__actuator_autoMode->CB_current_value)
#define manualMode (_i_cmd_motor_2d2s__actuator_manualMode->CB_current_value)
#define autoFwdCmd (_i_cmd_motor_2d2s__actuator_autoFwdCmd->CB_current_value)
#define autoBwdCmd (_i_cmd_motor_2d2s__actuator_autoBwdCmd->CB_current_value)
#define autoHSCmd (_i_cmd_motor_2d2s__actuator_autoHSCmd->CB_current_value)
#define autoLSCmd (_i_cmd_motor_2d2s__actuator_autoLSCmd->CB_current_value)
#define forwardPB (_i_cmd_motor_2d2s__actuator_forwardPB->CB_current_value)
#define backwardPB (_i_cmd_motor_2d2s__actuator_backwardPB->CB_current_value)
#define highSpeedPB (_i_cmd_motor_2d2s__actuator_highSpeedPB->CB_current_value)
#define lowSpeedPB (_i_cmd_motor_2d2s__actuator_lowSpeedPB->CB_current_value)
#define stopPB (_i_cmd_motor_2d2s__actuator_stopPB->CB_current_value)
#define generalFault (_i_cmd_motor_2d2s__actuator_generalFault->CB_current_value)
#define forwardCmd (_i_cmd_motor_2d2s__actuator_forwardCmd->CB_current_value)
#define backwardCmd (_i_cmd_motor_2d2s__actuator_backwardCmd->CB_current_value)
#define highSpeedCmd (_i_cmd_motor_2d2s__actuator_highSpeedCmd->CB_current_value)
#define lowSpeedCmd (_i_cmd_motor_2d2s__actuator_lowSpeedCmd->CB_current_value)


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
			unsigned char _2;
			unsigned char _13;
			unsigned char _24;
			unsigned char _31;
			_2 = manualMode;
			forwardCmd = ((autoMode && autoFwdCmd) || ((((_2 && forwardCmd) || ((_2 && forwardPB) && !backwardPB)) && !stopPB) && !backwardCmd)) && !generalFault;
			_13 = manualMode;
			backwardCmd = ((autoMode && autoBwdCmd) || ((((_13 && backwardCmd) || ((_13 && backwardPB) && !forwardPB)) && !stopPB) && !forwardCmd)) && !generalFault;
			_24 = manualMode;
			highSpeedCmd = ((autoMode && autoHSCmd) || (((_24 && highSpeedPB) || (_24 && highSpeedCmd)) && !lowSpeedPB)) && !generalFault;
			_31 = manualMode;
			lowSpeedCmd = ((autoMode && autoLSCmd) || (((_31 && lowSpeedPB) || (_31 && lowSpeedCmd)) && !highSpeedPB)) && !generalFault;
		}

		CB_post_bool(_i_cmd_motor_2d2s__actuator_forwardCmd);
		CB_post_bool(_i_cmd_motor_2d2s__actuator_backwardCmd);
		CB_post_bool(_i_cmd_motor_2d2s__actuator_highSpeedCmd);
		CB_post_bool(_i_cmd_motor_2d2s__actuator_lowSpeedCmd);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

#undef autoMode
#undef manualMode
#undef autoFwdCmd
#undef autoBwdCmd
#undef autoHSCmd
#undef autoLSCmd
#undef forwardPB
#undef backwardPB
#undef highSpeedPB
#undef lowSpeedPB
#undef stopPB
#undef generalFault
#undef forwardCmd
#undef backwardCmd
#undef highSpeedCmd
#undef lowSpeedCmd

/********************************************************************
 *                  Inner 'faults' implementation                   *
 ********************************************************************/

#include "timers_counters/functional/cb_ton/cb_ton.h"


/**************************** Variables *****************************/

static CB_Index faults__num = 0;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_forwardCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_backwardCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_highSpeedCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_lowSpeedCmd;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_thermalFB;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_forwardFB;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_backwardFB;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_highSpeedFB;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_lowSpeedFB;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_acknowledgePB;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_generalFault;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_thermalFault;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_forwardFBFault;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_backwardFBFault;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_TON_FW_IN;
CB_Mem_Int *_i_cmd_motor_2d2s__faults_TON_FW_PT;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_TON_FW_Q0;
CB_Mem_Int *_i_cmd_motor_2d2s__faults_TON_FW_CV;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_TON_BW_IN;
CB_Mem_Int *_i_cmd_motor_2d2s__faults_TON_BW_PT;
CB_Mem_Bool *_i_cmd_motor_2d2s__faults_TON_BW_Q0;
CB_Mem_Int *_i_cmd_motor_2d2s__faults_TON_BW_CV;

/**************************** Variables *****************************/

#define forwardCmd (_i_cmd_motor_2d2s__faults_forwardCmd->CB_current_value)
#define backwardCmd (_i_cmd_motor_2d2s__faults_backwardCmd->CB_current_value)
#define highSpeedCmd (_i_cmd_motor_2d2s__faults_highSpeedCmd->CB_current_value)
#define lowSpeedCmd (_i_cmd_motor_2d2s__faults_lowSpeedCmd->CB_current_value)
#define thermalFB (_i_cmd_motor_2d2s__faults_thermalFB->CB_current_value)
#define forwardFB (_i_cmd_motor_2d2s__faults_forwardFB->CB_current_value)
#define backwardFB (_i_cmd_motor_2d2s__faults_backwardFB->CB_current_value)
#define highSpeedFB (_i_cmd_motor_2d2s__faults_highSpeedFB->CB_current_value)
#define lowSpeedFB (_i_cmd_motor_2d2s__faults_lowSpeedFB->CB_current_value)
#define acknowledgePB (_i_cmd_motor_2d2s__faults_acknowledgePB->CB_current_value)
#define generalFault (_i_cmd_motor_2d2s__faults_generalFault->CB_current_value)
#define thermalFault (_i_cmd_motor_2d2s__faults_thermalFault->CB_current_value)
#define forwardFBFault (_i_cmd_motor_2d2s__faults_forwardFBFault->CB_current_value)
#define backwardFBFault (_i_cmd_motor_2d2s__faults_backwardFBFault->CB_current_value)
#define TON_FW_IN (_i_cmd_motor_2d2s__faults_TON_FW_IN->CB_current_value)
#define TON_FW_PT(i) (_i_cmd_motor_2d2s__faults_TON_FW_PT[i+1].CB_current_value)
#define TON_FW_Q0 (_i_cmd_motor_2d2s__faults_TON_FW_Q0->CB_current_value)
#define TON_FW_CV(i) (_i_cmd_motor_2d2s__faults_TON_FW_CV[i+1].CB_current_value)
#define TON_BW_IN (_i_cmd_motor_2d2s__faults_TON_BW_IN->CB_current_value)
#define TON_BW_PT(i) (_i_cmd_motor_2d2s__faults_TON_BW_PT[i+1].CB_current_value)
#define TON_BW_Q0 (_i_cmd_motor_2d2s__faults_TON_BW_Q0->CB_current_value)
#define TON_BW_CV(i) (_i_cmd_motor_2d2s__faults_TON_BW_CV[i+1].CB_current_value)


/************************ Components offsets ************************/

static CB_Index cmd_equipment_library__faults_dnum_TON_FW;
static CB_Index cmd_equipment_library__faults_dnum_TON_BW;
static CB_Index cmd_equipment_library__faults_dnum__end;

static CB_Offset cmd_equipment_library__faults_offset_TON_FW;
static CB_Offset cmd_equipment_library__faults_offset_TON_BW;
static CB_Offset cmd_equipment_library__faults_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

static int _cmd_equipment_library__faults_init(void)
{
	CB_Index __my_num = self_num;
	CB_Object __start = self;
	self.Bool+=7;
	self.Int+=16;

	/*initialize child TON_FW (timers_counters.cb_ton):*/
	self_num++;
	cmd_equipment_library__faults_dnum_TON_FW = self_num - __my_num;
	cmd_equipment_library__faults_offset_TON_FW.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__faults_offset_TON_FW.Int = self.Int - __start.Int;
	cmd_equipment_library__faults_offset_TON_FW.Float = self.Float - __start.Float;
	cmd_equipment_library__faults_offset_TON_FW.Char = self.Char - __start.Char;
	cb_ton_IN = __start.Bool+3; /*TON_FW_IN*/
	cb_ton_PT = __start.Int+0; /*TON_FW_PT*/
	cb_ton_Q0 = __start.Bool+4; /*TON_FW_Q0*/
	cb_ton_CV = __start.Int+4; /*TON_FW_CV*/
	_timers_counters__cb_ton_init();

	/*initialize child TON_BW (timers_counters.cb_ton):*/
	self_num++;
	cmd_equipment_library__faults_dnum_TON_BW = self_num - __my_num;
	cmd_equipment_library__faults_offset_TON_BW.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__faults_offset_TON_BW.Int = self.Int - __start.Int;
	cmd_equipment_library__faults_offset_TON_BW.Float = self.Float - __start.Float;
	cmd_equipment_library__faults_offset_TON_BW.Char = self.Char - __start.Char;
	cb_ton_IN = __start.Bool+5; /*TON_BW_IN*/
	cb_ton_PT = __start.Int+8; /*TON_BW_PT*/
	cb_ton_Q0 = __start.Bool+6; /*TON_BW_Q0*/
	cb_ton_CV = __start.Int+12; /*TON_BW_CV*/
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

		_i_cmd_motor_2d2s__faults_thermalFault = self.Bool+0;
		_i_cmd_motor_2d2s__faults_forwardFBFault = self.Bool+1;
		_i_cmd_motor_2d2s__faults_backwardFBFault = self.Bool+2;
		_i_cmd_motor_2d2s__faults_TON_FW_IN = self.Bool+3;
		_i_cmd_motor_2d2s__faults_TON_FW_PT = self.Int+0;
		_i_cmd_motor_2d2s__faults_TON_FW_Q0 = self.Bool+4;
		_i_cmd_motor_2d2s__faults_TON_FW_CV = self.Int+4;
		_i_cmd_motor_2d2s__faults_TON_BW_IN = self.Bool+5;
		_i_cmd_motor_2d2s__faults_TON_BW_PT = self.Int+8;
		_i_cmd_motor_2d2s__faults_TON_BW_Q0 = self.Bool+6;
		_i_cmd_motor_2d2s__faults_TON_BW_CV = self.Int+12;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			static CB_Mem_Int __literal_0[4] = {
				cb_int_header(2),
				cb_int(0),
				cb_int(20000)
			};
			static CB_Mem_Int __literal_1[4] = {
				cb_int_header(2),
				cb_int(0),
				cb_int(20000)
			};
			unsigned char _1;
			unsigned char _14_Q0;
			CB_Mem_Int _14_CV[4] =  { cb_int_header(2) };
			unsigned char _16;
			unsigned char _15_Q0;
			CB_Mem_Int _15_CV[4] =  { cb_int_header(2) };
			unsigned char _22;
			_1 = acknowledgePB;
			if (_1) {
				thermalFault = 0;
			}
			if (_1) {
				forwardFBFault = 0;
			}
			if (_1) {
				backwardFBFault = 0;
			}
			if (_1) {
				generalFault = 0;
			}
			/*call user FB TON_FW():*/
			TON_FW_IN = (highSpeedCmd || lowSpeedCmd) && forwardCmd;
			copy_int_array(_i_cmd_motor_2d2s__faults_TON_FW_PT, __literal_0, 2);
			self.Bool = __start.Bool + cmd_equipment_library__faults_offset_TON_FW.Bool;
			self.Int = __start.Int + cmd_equipment_library__faults_offset_TON_FW.Int;
			self.Float = __start.Float + cmd_equipment_library__faults_offset_TON_FW.Float;
			self.Char = __start.Char + cmd_equipment_library__faults_offset_TON_FW.Char;
			self_num = __my_num + cmd_equipment_library__faults_dnum_TON_FW;
			if (cb_ton__num != self_num) {
				cb_ton__num = self_num;
				cb_ton_IN = _i_cmd_motor_2d2s__faults_TON_FW_IN;
				cb_ton_PT = _i_cmd_motor_2d2s__faults_TON_FW_PT;
				cb_ton_Q0 = _i_cmd_motor_2d2s__faults_TON_FW_Q0;
				cb_ton_CV = _i_cmd_motor_2d2s__faults_TON_FW_CV;
			}
			__ret = timers_counters__cb_ton();
			if (__ret != 0) {
				return __ret; /*user FB failure*/
			}
			self_num = __my_num;
			_14_Q0 = TON_FW_Q0;
			copy_int_array(_14_CV, _i_cmd_motor_2d2s__faults_TON_FW_CV, 2);
			/*end TON_FW()*/
			_16 = TON_FW_Q0;
			if (((_16 && !forwardFB) || ((_16 && highSpeedCmd) && !highSpeedFB)) || ((_16 && lowSpeedCmd) && !lowSpeedFB)) {
				forwardFBFault = 1;
			}
			/*call user FB TON_BW():*/
			TON_BW_IN = (lowSpeedCmd || highSpeedCmd) && backwardCmd;
			copy_int_array(_i_cmd_motor_2d2s__faults_TON_BW_PT, __literal_1, 2);
			self.Bool = __start.Bool + cmd_equipment_library__faults_offset_TON_BW.Bool;
			self.Int = __start.Int + cmd_equipment_library__faults_offset_TON_BW.Int;
			self.Float = __start.Float + cmd_equipment_library__faults_offset_TON_BW.Float;
			self.Char = __start.Char + cmd_equipment_library__faults_offset_TON_BW.Char;
			self_num = __my_num + cmd_equipment_library__faults_dnum_TON_BW;
			if (cb_ton__num != self_num) {
				cb_ton__num = self_num;
				cb_ton_IN = _i_cmd_motor_2d2s__faults_TON_BW_IN;
				cb_ton_PT = _i_cmd_motor_2d2s__faults_TON_BW_PT;
				cb_ton_Q0 = _i_cmd_motor_2d2s__faults_TON_BW_Q0;
				cb_ton_CV = _i_cmd_motor_2d2s__faults_TON_BW_CV;
			}
			__ret = timers_counters__cb_ton();
			if (__ret != 0) {
				return __ret; /*user FB failure*/
			}
			self_num = __my_num;
			_15_Q0 = TON_BW_Q0;
			copy_int_array(_15_CV, _i_cmd_motor_2d2s__faults_TON_BW_CV, 2);
			/*end TON_BW()*/
			_22 = TON_BW_Q0;
			if (((_22 && !backwardFB) || ((_22 && lowSpeedCmd) && !lowSpeedFB)) || ((_22 && highSpeedCmd) && !highSpeedFB)) {
				backwardFBFault = 1;
			}
			if (!thermalFB) {
				thermalFault = 1;
			}
			if ((thermalFault || forwardFBFault) || backwardFBFault) {
				generalFault = 1;
			}
		}

		if(nb_alloc > 0) {
			free_all_alloc();
		}

		CB_post_bool(_i_cmd_motor_2d2s__faults_generalFault);

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

#undef forwardCmd
#undef backwardCmd
#undef highSpeedCmd
#undef lowSpeedCmd
#undef thermalFB
#undef forwardFB
#undef backwardFB
#undef highSpeedFB
#undef lowSpeedFB
#undef acknowledgePB
#undef generalFault
#undef thermalFault
#undef forwardFBFault
#undef backwardFBFault
#undef TON_FW_IN
#undef TON_FW_PT
#undef TON_FW_Q0
#undef TON_FW_CV
#undef TON_BW_IN
#undef TON_BW_PT
#undef TON_BW_Q0
#undef TON_BW_CV

/********************************************************************
 *   Public 'cmd_equipment_library.cmd_motor_2d2s' implementation   *
 ********************************************************************/

#include "cmd_motor_2d2s.h"


/**************************** Variables *****************************/

CB_Index cmd_motor_2d2s__num = 0;
CB_Mem_Bool *cmd_motor_2d2s_autoMode;
CB_Mem_Bool *cmd_motor_2d2s_manualMode;
CB_Mem_Bool *cmd_motor_2d2s_autoFwdCmd;
CB_Mem_Bool *cmd_motor_2d2s_autoBwdCmd;
CB_Mem_Bool *cmd_motor_2d2s_autoHSCmd;
CB_Mem_Bool *cmd_motor_2d2s_autoLSCmd;
CB_Mem_Bool *cmd_motor_2d2s_forwardPB;
CB_Mem_Bool *cmd_motor_2d2s_backwardPB;
CB_Mem_Bool *cmd_motor_2d2s_highSpeedPB;
CB_Mem_Bool *cmd_motor_2d2s_lowSpeedPB;
CB_Mem_Bool *cmd_motor_2d2s_stopPB;
CB_Mem_Bool *cmd_motor_2d2s_forwardFB;
CB_Mem_Bool *cmd_motor_2d2s_backwardFB;
CB_Mem_Bool *cmd_motor_2d2s_highSpeedFB;
CB_Mem_Bool *cmd_motor_2d2s_lowSpeedFB;
CB_Mem_Bool *cmd_motor_2d2s_thermalFB;
CB_Mem_Bool *cmd_motor_2d2s_acknowledgePB;
CB_Mem_Bool *cmd_motor_2d2s_forwardCmd;
CB_Mem_Bool *cmd_motor_2d2s_backwardCmd;
CB_Mem_Bool *cmd_motor_2d2s_highSpeedCmd;
CB_Mem_Bool *cmd_motor_2d2s_lowSpeedCmd;
CB_Mem_Bool *cmd_motor_2d2s_generalFault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset cmd_equipment_library__cmd_motor_2d2s_offset_actions;
static CB_Offset cmd_equipment_library__cmd_motor_2d2s_offset_faults1;
static CB_Offset cmd_equipment_library__cmd_motor_2d2s_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _cmd_equipment_library__cmd_motor_2d2s_init(void)
{
	CB_Object __start = self;

	/*initialize child actions (cmd_equipment_library.actuator):*/
	self_num++;
	cmd_equipment_library__cmd_motor_2d2s_offset_actions.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__cmd_motor_2d2s_offset_actions.Int = self.Int - __start.Int;
	cmd_equipment_library__cmd_motor_2d2s_offset_actions.Float = self.Float - __start.Float;
	cmd_equipment_library__cmd_motor_2d2s_offset_actions.Char = self.Char - __start.Char;
	_i_cmd_motor_2d2s__actuator_autoMode = cmd_motor_2d2s_autoMode;
	_i_cmd_motor_2d2s__actuator_manualMode = cmd_motor_2d2s_manualMode;
	_i_cmd_motor_2d2s__actuator_autoFwdCmd = cmd_motor_2d2s_autoFwdCmd;
	_i_cmd_motor_2d2s__actuator_autoBwdCmd = cmd_motor_2d2s_autoBwdCmd;
	_i_cmd_motor_2d2s__actuator_autoHSCmd = cmd_motor_2d2s_autoHSCmd;
	_i_cmd_motor_2d2s__actuator_autoLSCmd = cmd_motor_2d2s_autoLSCmd;
	_i_cmd_motor_2d2s__actuator_forwardPB = cmd_motor_2d2s_forwardPB;
	_i_cmd_motor_2d2s__actuator_backwardPB = cmd_motor_2d2s_backwardPB;
	_i_cmd_motor_2d2s__actuator_highSpeedPB = cmd_motor_2d2s_highSpeedPB;
	_i_cmd_motor_2d2s__actuator_lowSpeedPB = cmd_motor_2d2s_lowSpeedPB;
	_i_cmd_motor_2d2s__actuator_stopPB = cmd_motor_2d2s_stopPB;
	_i_cmd_motor_2d2s__actuator_generalFault = cmd_motor_2d2s_generalFault;
	_i_cmd_motor_2d2s__actuator_forwardCmd = cmd_motor_2d2s_forwardCmd;
	_i_cmd_motor_2d2s__actuator_backwardCmd = cmd_motor_2d2s_backwardCmd;
	_i_cmd_motor_2d2s__actuator_highSpeedCmd = cmd_motor_2d2s_highSpeedCmd;
	_i_cmd_motor_2d2s__actuator_lowSpeedCmd = cmd_motor_2d2s_lowSpeedCmd;
	_cmd_equipment_library__actuator_init();

	/*initialize child faults1 (cmd_equipment_library.faults):*/
	self_num++;
	cmd_equipment_library__cmd_motor_2d2s_offset_faults1.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__cmd_motor_2d2s_offset_faults1.Int = self.Int - __start.Int;
	cmd_equipment_library__cmd_motor_2d2s_offset_faults1.Float = self.Float - __start.Float;
	cmd_equipment_library__cmd_motor_2d2s_offset_faults1.Char = self.Char - __start.Char;
	_i_cmd_motor_2d2s__faults_forwardCmd = cmd_motor_2d2s_forwardCmd;
	_i_cmd_motor_2d2s__faults_backwardCmd = cmd_motor_2d2s_backwardCmd;
	_i_cmd_motor_2d2s__faults_highSpeedCmd = cmd_motor_2d2s_highSpeedCmd;
	_i_cmd_motor_2d2s__faults_lowSpeedCmd = cmd_motor_2d2s_lowSpeedCmd;
	_i_cmd_motor_2d2s__faults_thermalFB = cmd_motor_2d2s_thermalFB;
	_i_cmd_motor_2d2s__faults_forwardFB = cmd_motor_2d2s_forwardFB;
	_i_cmd_motor_2d2s__faults_backwardFB = cmd_motor_2d2s_backwardFB;
	_i_cmd_motor_2d2s__faults_highSpeedFB = cmd_motor_2d2s_highSpeedFB;
	_i_cmd_motor_2d2s__faults_lowSpeedFB = cmd_motor_2d2s_lowSpeedFB;
	_i_cmd_motor_2d2s__faults_acknowledgePB = cmd_motor_2d2s_acknowledgePB;
	_i_cmd_motor_2d2s__faults_generalFault = cmd_motor_2d2s_generalFault;
	_cmd_equipment_library__faults_init();

	cmd_equipment_library__cmd_motor_2d2s_offset__end.Bool = self.Bool - __start.Bool;
	cmd_equipment_library__cmd_motor_2d2s_offset__end.Int = self.Int - __start.Int;
	cmd_equipment_library__cmd_motor_2d2s_offset__end.Float = self.Float - __start.Float;
	cmd_equipment_library__cmd_motor_2d2s_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int cmd_equipment_library__cmd_motor_2d2s(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + cmd_equipment_library__cmd_motor_2d2s_offset_actions.Bool;
			self.Int = __start.Int + cmd_equipment_library__cmd_motor_2d2s_offset_actions.Int;
			self.Float = __start.Float + cmd_equipment_library__cmd_motor_2d2s_offset_actions.Float;
			self.Char = __start.Char + cmd_equipment_library__cmd_motor_2d2s_offset_actions.Char;

			/************************ actions execution *************************/

			self_num++;
			if (actuator__num != self_num) {
				actuator__num = self_num;
				_i_cmd_motor_2d2s__actuator_autoMode = cmd_motor_2d2s_autoMode;
				_i_cmd_motor_2d2s__actuator_manualMode = cmd_motor_2d2s_manualMode;
				_i_cmd_motor_2d2s__actuator_autoFwdCmd = cmd_motor_2d2s_autoFwdCmd;
				_i_cmd_motor_2d2s__actuator_autoBwdCmd = cmd_motor_2d2s_autoBwdCmd;
				_i_cmd_motor_2d2s__actuator_autoHSCmd = cmd_motor_2d2s_autoHSCmd;
				_i_cmd_motor_2d2s__actuator_autoLSCmd = cmd_motor_2d2s_autoLSCmd;
				_i_cmd_motor_2d2s__actuator_forwardPB = cmd_motor_2d2s_forwardPB;
				_i_cmd_motor_2d2s__actuator_backwardPB = cmd_motor_2d2s_backwardPB;
				_i_cmd_motor_2d2s__actuator_highSpeedPB = cmd_motor_2d2s_highSpeedPB;
				_i_cmd_motor_2d2s__actuator_lowSpeedPB = cmd_motor_2d2s_lowSpeedPB;
				_i_cmd_motor_2d2s__actuator_stopPB = cmd_motor_2d2s_stopPB;
				_i_cmd_motor_2d2s__actuator_generalFault = cmd_motor_2d2s_generalFault;
				_i_cmd_motor_2d2s__actuator_forwardCmd = cmd_motor_2d2s_forwardCmd;
				_i_cmd_motor_2d2s__actuator_backwardCmd = cmd_motor_2d2s_backwardCmd;
				_i_cmd_motor_2d2s__actuator_highSpeedCmd = cmd_motor_2d2s_highSpeedCmd;
				_i_cmd_motor_2d2s__actuator_lowSpeedCmd = cmd_motor_2d2s_lowSpeedCmd;
			}
			__ret = cmd_equipment_library__actuator();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ faults1 execution *************************/

			self_num++;
			if (faults__num != self_num) {
				faults__num = self_num;
				_i_cmd_motor_2d2s__faults_forwardCmd = cmd_motor_2d2s_forwardCmd;
				_i_cmd_motor_2d2s__faults_backwardCmd = cmd_motor_2d2s_backwardCmd;
				_i_cmd_motor_2d2s__faults_highSpeedCmd = cmd_motor_2d2s_highSpeedCmd;
				_i_cmd_motor_2d2s__faults_lowSpeedCmd = cmd_motor_2d2s_lowSpeedCmd;
				_i_cmd_motor_2d2s__faults_thermalFB = cmd_motor_2d2s_thermalFB;
				_i_cmd_motor_2d2s__faults_forwardFB = cmd_motor_2d2s_forwardFB;
				_i_cmd_motor_2d2s__faults_backwardFB = cmd_motor_2d2s_backwardFB;
				_i_cmd_motor_2d2s__faults_highSpeedFB = cmd_motor_2d2s_highSpeedFB;
				_i_cmd_motor_2d2s__faults_lowSpeedFB = cmd_motor_2d2s_lowSpeedFB;
				_i_cmd_motor_2d2s__faults_acknowledgePB = cmd_motor_2d2s_acknowledgePB;
				_i_cmd_motor_2d2s__faults_generalFault = cmd_motor_2d2s_generalFault;
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

	self.Bool = __start.Bool + cmd_equipment_library__cmd_motor_2d2s_offset__end.Bool;
	self.Int = __start.Int + cmd_equipment_library__cmd_motor_2d2s_offset__end.Int;
	self.Float = __start.Float + cmd_equipment_library__cmd_motor_2d2s_offset__end.Float;
	self.Char = __start.Char + cmd_equipment_library__cmd_motor_2d2s_offset__end.Char;

	return 0;
}

