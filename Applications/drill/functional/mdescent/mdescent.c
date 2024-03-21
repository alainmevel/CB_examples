/*2023-10-03T11:13:46-01:00*/

/********************************************************************
 * mdescent.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "mdescent.h"
#include "drill/functional/descent/descent.h"
#include "io_library/functional/io_engine_2d2s/io_engine_2d2s.h"
#include "drill/functional/turret/turret.h"


/**************************** Variables *****************************/

CB_Index mdescent__num = 0;
CB_Mem_Bool *mdescent_slowAscent;
CB_Mem_Bool *mdescent_fastAscent;
CB_Mem_Bool *mdescent_slowDescent;
CB_Mem_Bool *mdescent_fastDescent;
CB_Mem_Bool *mdescent_acknowledgePB;
CB_Mem_Bool *mdescent_autoMode;
CB_Mem_Bool *mdescent_manualMode;
CB_Mem_Bool *mdescent_ascentEnd;
CB_Mem_Bool *mdescent_topDeceleration;
CB_Mem_Bool *mdescent_downDeceleration;
CB_Mem_Bool *mdescent_descentEnd;
CB_Mem_Int *mdescent_motorFault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset drill__mdescent_offset_ascentFunction;
static CB_Offset drill__mdescent_offset_motorOfTurret;
static CB_Offset drill__mdescent_offset_turret;
static CB_Offset drill__mdescent_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _drill__mdescent_init(void)
{
	CB_Object __start = self;
	self.Bool+=5;
	self.Float+=3;

	/*initialize child ascentFunction (drill.descent):*/
	self_num++;
	drill__mdescent_offset_ascentFunction.Bool = self.Bool - __start.Bool;
	drill__mdescent_offset_ascentFunction.Int = self.Int - __start.Int;
	drill__mdescent_offset_ascentFunction.Float = self.Float - __start.Float;
	drill__mdescent_offset_ascentFunction.Char = self.Char - __start.Char;
	descent_acknowledgePB = mdescent_acknowledgePB;
	descent_slowAscent = mdescent_slowAscent;
	descent_fastAscent = mdescent_fastAscent;
	descent_slowDescent = mdescent_slowDescent;
	descent_fastDescent = mdescent_fastDescent;
	descent_equipmentFault = __start.Bool+0; /*mdescent__cn_6*/
	descent_motorFault = mdescent_motorFault;
	descent_forward = __start.Bool+1; /*mdescent__cn_5*/
	descent_backward = __start.Bool+2; /*mdescent__cn_4*/
	descent_highSpeed = __start.Bool+3; /*mdescent__cn_3*/
	descent_lowSpeed = __start.Bool+4; /*mdescent__cn_2*/
	_drill__descent_init();

	/*initialize child motorOfTurret (io_library.io_engine_2d2s):*/
	self_num++;
	drill__mdescent_offset_motorOfTurret.Bool = self.Bool - __start.Bool;
	drill__mdescent_offset_motorOfTurret.Int = self.Int - __start.Int;
	drill__mdescent_offset_motorOfTurret.Float = self.Float - __start.Float;
	drill__mdescent_offset_motorOfTurret.Char = self.Char - __start.Char;
	io_engine_2d2s_autoMode = mdescent_autoMode;
	io_engine_2d2s_manualMode = mdescent_manualMode;
	io_engine_2d2s_autoFwdCmd = __start.Bool+1; /*mdescent__cn_5*/
	io_engine_2d2s_autoBwdCmd = __start.Bool+2; /*mdescent__cn_4*/
	io_engine_2d2s_autoHSCmd = __start.Bool+3; /*mdescent__cn_3*/
	io_engine_2d2s_autoLSCmd = __start.Bool+4; /*mdescent__cn_2*/
	io_engine_2d2s_acknowledgePB = mdescent_acknowledgePB;
	io_engine_2d2s_speedVal = __start.Float+2; /*mdescent__cn_1*/
	io_engine_2d2s_speedPercent = __start.Float+1; /*mdescent__cn_7*/
	io_engine_2d2s_generalFault = __start.Bool+0; /*mdescent__cn_6*/
	_io_library__io_engine_2d2s_init();

	/*initialize child turret (drill.turret):*/
	self_num++;
	drill__mdescent_offset_turret.Bool = self.Bool - __start.Bool;
	drill__mdescent_offset_turret.Int = self.Int - __start.Int;
	drill__mdescent_offset_turret.Float = self.Float - __start.Float;
	drill__mdescent_offset_turret.Char = self.Char - __start.Char;
	turret_speed = __start.Float+2; /*mdescent__cn_1*/
	turret_forward = __start.Bool+1; /*mdescent__cn_5*/
	turret_backward = __start.Bool+2; /*mdescent__cn_4*/
	turret_highSpeed = __start.Bool+3; /*mdescent__cn_3*/
	turret_lowSpeed = __start.Bool+4; /*mdescent__cn_2*/
	turret_axlePosition = __start.Float+0; /*mdescent__cn_8*/
	turret_forwardEnd = mdescent_descentEnd;
	turret_forwardDeceleration = mdescent_downDeceleration;
	turret_backwardDeceleration = mdescent_topDeceleration;
	turret_backwardEnd = mdescent_ascentEnd;
	_drill__turret_init();

	drill__mdescent_offset__end.Bool = self.Bool - __start.Bool;
	drill__mdescent_offset__end.Int = self.Int - __start.Int;
	drill__mdescent_offset__end.Float = self.Float - __start.Float;
	drill__mdescent_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int drill__mdescent(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + drill__mdescent_offset_ascentFunction.Bool;
			self.Int = __start.Int + drill__mdescent_offset_ascentFunction.Int;
			self.Float = __start.Float + drill__mdescent_offset_ascentFunction.Float;
			self.Char = __start.Char + drill__mdescent_offset_ascentFunction.Char;

			/********************* ascentFunction execution *********************/

			self_num++;
			if (descent__num != self_num) {
				descent__num = self_num;
				descent_acknowledgePB = mdescent_acknowledgePB;
				descent_slowAscent = mdescent_slowAscent;
				descent_fastAscent = mdescent_fastAscent;
				descent_slowDescent = mdescent_slowDescent;
				descent_fastDescent = mdescent_fastDescent;
				descent_equipmentFault = __start.Bool+0; /*mdescent__cn_6*/
				descent_motorFault = mdescent_motorFault;
				descent_forward = __start.Bool+1; /*mdescent__cn_5*/
				descent_backward = __start.Bool+2; /*mdescent__cn_4*/
				descent_highSpeed = __start.Bool+3; /*mdescent__cn_3*/
				descent_lowSpeed = __start.Bool+4; /*mdescent__cn_2*/
			}
			__ret = drill__descent();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************* motorOfTurret execution **********************/

			self_num++;
			if (io_engine_2d2s__num != self_num) {
				io_engine_2d2s__num = self_num;
				io_engine_2d2s_autoMode = mdescent_autoMode;
				io_engine_2d2s_manualMode = mdescent_manualMode;
				io_engine_2d2s_autoFwdCmd = __start.Bool+1; /*mdescent__cn_5*/
				io_engine_2d2s_autoBwdCmd = __start.Bool+2; /*mdescent__cn_4*/
				io_engine_2d2s_autoHSCmd = __start.Bool+3; /*mdescent__cn_3*/
				io_engine_2d2s_autoLSCmd = __start.Bool+4; /*mdescent__cn_2*/
				io_engine_2d2s_acknowledgePB = mdescent_acknowledgePB;
				io_engine_2d2s_speedVal = __start.Float+2; /*mdescent__cn_1*/
				io_engine_2d2s_speedPercent = __start.Float+1; /*mdescent__cn_7*/
				io_engine_2d2s_generalFault = __start.Bool+0; /*mdescent__cn_6*/
			}
			__ret = io_library__io_engine_2d2s();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* turret execution *************************/

			self_num++;
			if (turret__num != self_num) {
				turret__num = self_num;
				turret_speed = __start.Float+2; /*mdescent__cn_1*/
				turret_forward = __start.Bool+1; /*mdescent__cn_5*/
				turret_backward = __start.Bool+2; /*mdescent__cn_4*/
				turret_highSpeed = __start.Bool+3; /*mdescent__cn_3*/
				turret_lowSpeed = __start.Bool+4; /*mdescent__cn_2*/
				turret_axlePosition = __start.Float+0; /*mdescent__cn_8*/
				turret_forwardEnd = mdescent_descentEnd;
				turret_forwardDeceleration = mdescent_downDeceleration;
				turret_backwardDeceleration = mdescent_topDeceleration;
				turret_backwardEnd = mdescent_ascentEnd;
			}
			__ret = drill__turret();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + drill__mdescent_offset__end.Bool;
	self.Int = __start.Int + drill__mdescent_offset__end.Int;
	self.Float = __start.Float + drill__mdescent_offset__end.Float;
	self.Char = __start.Char + drill__mdescent_offset__end.Char;

	return 0;
}
