/*2023-10-03T11:13:46-01:00*/

/********************************************************************
 * function.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "function.h"
#include "drill/functional/run/run.h"
#include "drill/functional/mdescent/mdescent.h"
#include "drill/functional/mclamping/mclamping.h"
#include "drill/functional/mspindle/mspindle.h"


/**************************** Variables *****************************/

CB_Index function__num = 0;
CB_Mem_Bool *function_piece;
CB_Mem_Bool *function_emptyProd;
CB_Mem_Bool *function_unitProd;
CB_Mem_Bool *function_batchProd;
CB_Mem_Bool *function_acknowledgePB;
CB_Mem_Bool *function_autoMode;
CB_Mem_Bool *function_manualMode;
CB_Mem_Bool *function_faultyState;
CB_Mem_Bool *function_cycleEnd;
CB_Mem_Bool *function_loadingRequest;
CB_Mem_Bool *function_unloadingRequest;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset drill__function_offset_functionChart;
static CB_Offset drill__function_offset_descent;
static CB_Offset drill__function_offset_clamping;
static CB_Offset drill__function_offset_spindle;
static CB_Offset drill__function_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _drill__function_init(void)
{
	CB_Object __start = self;
	self.Bool+=13;
	self.Int+=4;

	/*initialize child functionChart (drill.run):*/
	self_num++;
	drill__function_offset_functionChart.Bool = self.Bool - __start.Bool;
	drill__function_offset_functionChart.Int = self.Int - __start.Int;
	drill__function_offset_functionChart.Float = self.Float - __start.Float;
	drill__function_offset_functionChart.Char = self.Char - __start.Char;
	run_rotationFault = __start.Int+1; /*function__cn_16*/
	run_downState = __start.Bool+0; /*function__cn_15*/
	run_downDeceleration = __start.Bool+1; /*function__cn_14*/
	run_topDeceleration = __start.Bool+2; /*function__cn_13*/
	run_topState = __start.Bool+3; /*function__cn_12*/
	run_motorFault = __start.Int+2; /*function__cn_11*/
	run_clampingFault = __start.Int+3; /*function__cn_10*/
	run_releasingOK = __start.Bool+4; /*function__cn_9*/
	run_clampingOK = __start.Bool+5; /*function__cn_8*/
	run_emptyProd = function_emptyProd;
	run_unitProd = function_unitProd;
	run_batchProd = function_batchProd;
	run_acknowledgePB = function_acknowledgePB;
	run_piece = function_piece;
	run_rotation = __start.Bool+12; /*function__cn_1*/
	run_cycleEnd = function_cycleEnd;
	run_movementFault = __start.Int+0; /*function__cn_17*/
	run_loadingRequest = function_loadingRequest;
	run_unloadingRequest = function_unloadingRequest;
	run_faultyState = function_faultyState;
	run_slowAscent = __start.Bool+6; /*function__cn_7*/
	run_fastAscent = __start.Bool+7; /*function__cn_6*/
	run_slowDescent = __start.Bool+8; /*function__cn_5*/
	run_fastDescent = __start.Bool+9; /*function__cn_4*/
	run_releasing = __start.Bool+10; /*function__cn_3*/
	run_clamping = __start.Bool+11; /*function__cn_2*/
	_drill__run_init();

	/*initialize child descent (drill.mdescent):*/
	self_num++;
	drill__function_offset_descent.Bool = self.Bool - __start.Bool;
	drill__function_offset_descent.Int = self.Int - __start.Int;
	drill__function_offset_descent.Float = self.Float - __start.Float;
	drill__function_offset_descent.Char = self.Char - __start.Char;
	mdescent_slowAscent = __start.Bool+6; /*function__cn_7*/
	mdescent_fastAscent = __start.Bool+7; /*function__cn_6*/
	mdescent_slowDescent = __start.Bool+8; /*function__cn_5*/
	mdescent_fastDescent = __start.Bool+9; /*function__cn_4*/
	mdescent_acknowledgePB = function_acknowledgePB;
	mdescent_autoMode = function_autoMode;
	mdescent_manualMode = function_manualMode;
	mdescent_ascentEnd = __start.Bool+3; /*function__cn_12*/
	mdescent_topDeceleration = __start.Bool+2; /*function__cn_13*/
	mdescent_downDeceleration = __start.Bool+1; /*function__cn_14*/
	mdescent_descentEnd = __start.Bool+0; /*function__cn_15*/
	mdescent_motorFault = __start.Int+2; /*function__cn_11*/
	_drill__mdescent_init();

	/*initialize child clamping (drill.mclamping):*/
	self_num++;
	drill__function_offset_clamping.Bool = self.Bool - __start.Bool;
	drill__function_offset_clamping.Int = self.Int - __start.Int;
	drill__function_offset_clamping.Float = self.Float - __start.Float;
	drill__function_offset_clamping.Char = self.Char - __start.Char;
	mclamping_acknowledgePB = function_acknowledgePB;
	mclamping_autoMode = function_autoMode;
	mclamping_manualMode = function_manualMode;
	mclamping_releasing = __start.Bool+10; /*function__cn_3*/
	mclamping_clamping = __start.Bool+11; /*function__cn_2*/
	mclamping_clampingOK = __start.Bool+5; /*function__cn_8*/
	mclamping_releasingOK = __start.Bool+4; /*function__cn_9*/
	mclamping_clampingFault = __start.Int+3; /*function__cn_10*/
	_drill__mclamping_init();

	/*initialize child spindle (drill.mspindle):*/
	self_num++;
	drill__function_offset_spindle.Bool = self.Bool - __start.Bool;
	drill__function_offset_spindle.Int = self.Int - __start.Int;
	drill__function_offset_spindle.Float = self.Float - __start.Float;
	drill__function_offset_spindle.Char = self.Char - __start.Char;
	mspindle_rotationFunction = __start.Bool+12; /*function__cn_1*/
	mspindle_acknowledgePB = function_acknowledgePB;
	mspindle_autoMode = function_autoMode;
	mspindle_manualMode = function_manualMode;
	mspindle_rotationFault = __start.Int+1; /*function__cn_16*/
	_drill__mspindle_init();

	drill__function_offset__end.Bool = self.Bool - __start.Bool;
	drill__function_offset__end.Int = self.Int - __start.Int;
	drill__function_offset__end.Float = self.Float - __start.Float;
	drill__function_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int drill__function(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																		
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + drill__function_offset_functionChart.Bool;
			self.Int = __start.Int + drill__function_offset_functionChart.Int;
			self.Float = __start.Float + drill__function_offset_functionChart.Float;
			self.Char = __start.Char + drill__function_offset_functionChart.Char;

			/********************* functionChart execution **********************/

			self_num++;
			if (run__num != self_num) {
				run__num = self_num;
				run_rotationFault = __start.Int+1; /*function__cn_16*/
				run_downState = __start.Bool+0; /*function__cn_15*/
				run_downDeceleration = __start.Bool+1; /*function__cn_14*/
				run_topDeceleration = __start.Bool+2; /*function__cn_13*/
				run_topState = __start.Bool+3; /*function__cn_12*/
				run_motorFault = __start.Int+2; /*function__cn_11*/
				run_clampingFault = __start.Int+3; /*function__cn_10*/
				run_releasingOK = __start.Bool+4; /*function__cn_9*/
				run_clampingOK = __start.Bool+5; /*function__cn_8*/
				run_emptyProd = function_emptyProd;
				run_unitProd = function_unitProd;
				run_batchProd = function_batchProd;
				run_acknowledgePB = function_acknowledgePB;
				run_piece = function_piece;
				run_rotation = __start.Bool+12; /*function__cn_1*/
				run_cycleEnd = function_cycleEnd;
				run_movementFault = __start.Int+0; /*function__cn_17*/
				run_loadingRequest = function_loadingRequest;
				run_unloadingRequest = function_unloadingRequest;
				run_faultyState = function_faultyState;
				run_slowAscent = __start.Bool+6; /*function__cn_7*/
				run_fastAscent = __start.Bool+7; /*function__cn_6*/
				run_slowDescent = __start.Bool+8; /*function__cn_5*/
				run_fastDescent = __start.Bool+9; /*function__cn_4*/
				run_releasing = __start.Bool+10; /*function__cn_3*/
				run_clamping = __start.Bool+11; /*function__cn_2*/
			}
			__ret = drill__run();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ descent execution *************************/

			self_num++;
			if (mdescent__num != self_num) {
				mdescent__num = self_num;
				mdescent_slowAscent = __start.Bool+6; /*function__cn_7*/
				mdescent_fastAscent = __start.Bool+7; /*function__cn_6*/
				mdescent_slowDescent = __start.Bool+8; /*function__cn_5*/
				mdescent_fastDescent = __start.Bool+9; /*function__cn_4*/
				mdescent_acknowledgePB = function_acknowledgePB;
				mdescent_autoMode = function_autoMode;
				mdescent_manualMode = function_manualMode;
				mdescent_ascentEnd = __start.Bool+3; /*function__cn_12*/
				mdescent_topDeceleration = __start.Bool+2; /*function__cn_13*/
				mdescent_downDeceleration = __start.Bool+1; /*function__cn_14*/
				mdescent_descentEnd = __start.Bool+0; /*function__cn_15*/
				mdescent_motorFault = __start.Int+2; /*function__cn_11*/
			}
			__ret = drill__mdescent();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ clamping execution ************************/

			self_num++;
			if (mclamping__num != self_num) {
				mclamping__num = self_num;
				mclamping_acknowledgePB = function_acknowledgePB;
				mclamping_autoMode = function_autoMode;
				mclamping_manualMode = function_manualMode;
				mclamping_releasing = __start.Bool+10; /*function__cn_3*/
				mclamping_clamping = __start.Bool+11; /*function__cn_2*/
				mclamping_clampingOK = __start.Bool+5; /*function__cn_8*/
				mclamping_releasingOK = __start.Bool+4; /*function__cn_9*/
				mclamping_clampingFault = __start.Int+3; /*function__cn_10*/
			}
			__ret = drill__mclamping();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ spindle execution *************************/

			self_num++;
			if (mspindle__num != self_num) {
				mspindle__num = self_num;
				mspindle_rotationFunction = __start.Bool+12; /*function__cn_1*/
				mspindle_acknowledgePB = function_acknowledgePB;
				mspindle_autoMode = function_autoMode;
				mspindle_manualMode = function_manualMode;
				mspindle_rotationFault = __start.Int+1; /*function__cn_16*/
			}
			__ret = drill__mspindle();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + drill__function_offset__end.Bool;
	self.Int = __start.Int + drill__function_offset__end.Int;
	self.Float = __start.Float + drill__function_offset__end.Float;
	self.Char = __start.Char + drill__function_offset__end.Char;

	return 0;
}
