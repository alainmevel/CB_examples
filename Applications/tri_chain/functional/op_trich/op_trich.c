/*2023-10-03T11:13:59-01:00*/

/********************************************************************
 * op_trich.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "op_trich.h"
#include "tri_chain/functional/creation/creation.h"
#include "tri_chain/functional/op_chain/op_chain.h"
#include "tri_chain/functional/op_shuttle/op_shuttle.h"
#include "tri_chain/functional/button/button.h"
#include "tri_chain/functional/trash/trash.h"


/**************************** Variables *****************************/

CB_Index op_trich__num = 0;
CB_Mem_Bool *op_trich_mvt1;
CB_Mem_Bool *op_trich_mvt2;
CB_Mem_Bool *op_trich_mvt3;
CB_Mem_Bool *op_trich_mvt4;
CB_Mem_Bool *op_trich_moveToLeft;
CB_Mem_Bool *op_trich_moveToRight;
CB_Mem_Bool *op_trich_chainMvt;
CB_Mem_Bool *op_trich_ON;
CB_Mem_Bool *op_trich_run1;
CB_Mem_Bool *op_trich_startSensor1;
CB_Mem_Bool *op_trich_endSensor1;
CB_Mem_Bool *op_trich_run2;
CB_Mem_Bool *op_trich_startSensor2;
CB_Mem_Bool *op_trich_endSensor2;
CB_Mem_Bool *op_trich_run3;
CB_Mem_Bool *op_trich_startSensor3;
CB_Mem_Bool *op_trich_endSensor3;
CB_Mem_Bool *op_trich_endSensor4;
CB_Mem_Bool *op_trich_sensor1;
CB_Mem_Bool *op_trich_sensor2;
CB_Mem_Bool *op_trich_sensor3;
CB_Mem_Bool *op_trich_endSensor;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset tri_chain__op_trich_offset_creation1;
static CB_Offset tri_chain__op_trich_offset_chain1;
static CB_Offset tri_chain__op_trich_offset_chain2;
static CB_Offset tri_chain__op_trich_offset_creation2;
static CB_Offset tri_chain__op_trich_offset_chain3;
static CB_Offset tri_chain__op_trich_offset_outputChain;
static CB_Offset tri_chain__op_trich_offset_shuttle;
static CB_Offset tri_chain__op_trich_offset_runButton;
static CB_Offset tri_chain__op_trich_offset_creation3;
static CB_Offset tri_chain__op_trich_offset_trash;
static CB_Offset tri_chain__op_trich_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _tri_chain__op_trich_init(void)
{
	CB_Object __start = self;
	self.Bool+=5;
	self.Int+=3;

	/*initialize child creation1 (tri_chain.creation):*/
	self_num++;
	tri_chain__op_trich_offset_creation1.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_creation1.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_creation1.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_creation1.Char = self.Char - __start.Char;
	creation_idProd = __start.Int+2; /*op_trich__cn_1*/
	creation_creationFailed = __start.Bool+4; /*op_trich__cn_2*/
	_tri_chain__creation_init();

	/*initialize child chain1 (tri_chain.op_chain):*/
	self_num++;
	tri_chain__op_trich_offset_chain1.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_chain1.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_chain1.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_chain1.Char = self.Char - __start.Char;
	op_chain_forward = op_trich_mvt1;
	op_chain_localRun = op_trich_run1;
	op_chain_start_sensor = op_trich_startSensor1;
	op_chain_end_sensor = op_trich_endSensor1;
	_tri_chain__op_chain_init();

	/*initialize child chain2 (tri_chain.op_chain):*/
	self_num++;
	tri_chain__op_trich_offset_chain2.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_chain2.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_chain2.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_chain2.Char = self.Char - __start.Char;
	op_chain_forward = op_trich_mvt2;
	op_chain_localRun = op_trich_run2;
	op_chain_start_sensor = op_trich_startSensor2;
	op_chain_end_sensor = op_trich_endSensor2;
	_tri_chain__op_chain_init();

	/*initialize child creation2 (tri_chain.creation):*/
	self_num++;
	tri_chain__op_trich_offset_creation2.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_creation2.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_creation2.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_creation2.Char = self.Char - __start.Char;
	creation_idProd = __start.Int+1; /*op_trich__cn_3*/
	creation_creationFailed = __start.Bool+3; /*op_trich__cn_4*/
	_tri_chain__creation_init();

	/*initialize child chain3 (tri_chain.op_chain):*/
	self_num++;
	tri_chain__op_trich_offset_chain3.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_chain3.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_chain3.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_chain3.Char = self.Char - __start.Char;
	op_chain_forward = op_trich_mvt3;
	op_chain_localRun = op_trich_run3;
	op_chain_start_sensor = op_trich_startSensor3;
	op_chain_end_sensor = op_trich_endSensor3;
	_tri_chain__op_chain_init();

	/*initialize child outputChain (tri_chain.op_chain):*/
	self_num++;
	tri_chain__op_trich_offset_outputChain.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_outputChain.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_outputChain.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_outputChain.Char = self.Char - __start.Char;
	op_chain_forward = op_trich_mvt4;
	op_chain_localRun = __start.Bool+2; /*op_trich__cn_5*/
	op_chain_start_sensor = __start.Bool+1; /*op_trich__cn_6*/
	op_chain_end_sensor = op_trich_endSensor4;
	_tri_chain__op_chain_init();

	/*initialize child shuttle (tri_chain.op_shuttle):*/
	self_num++;
	tri_chain__op_trich_offset_shuttle.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_shuttle.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_shuttle.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_shuttle.Char = self.Char - __start.Char;
	op_shuttle_forward = op_trich_moveToRight;
	op_shuttle_backward = op_trich_moveToLeft;
	op_shuttle_chainMotorOn = op_trich_chainMvt;
	op_shuttle_sensor_Pos1 = op_trich_sensor1;
	op_shuttle_sensor_Pos2 = op_trich_sensor2;
	op_shuttle_sensor_Pos3 = op_trich_sensor3;
	op_shuttle_end_sensor = op_trich_endSensor;
	_tri_chain__op_shuttle_init();

	/*initialize child runButton (tri_chain.button):*/
	self_num++;
	tri_chain__op_trich_offset_runButton.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_runButton.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_runButton.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_runButton.Char = self.Char - __start.Char;
	button_output = op_trich_ON;
	_tri_chain__button_init();

	/*initialize child creation3 (tri_chain.creation):*/
	self_num++;
	tri_chain__op_trich_offset_creation3.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_creation3.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_creation3.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_creation3.Char = self.Char - __start.Char;
	creation_idProd = __start.Int+0; /*op_trich__cn_7*/
	creation_creationFailed = __start.Bool+0; /*op_trich__cn_8*/
	_tri_chain__creation_init();

	/*initialize child trash (tri_chain.trash):*/
	self_num++;
	tri_chain__op_trich_offset_trash.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset_trash.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset_trash.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset_trash.Char = self.Char - __start.Char;
	_tri_chain__trash_init();

	tri_chain__op_trich_offset__end.Bool = self.Bool - __start.Bool;
	tri_chain__op_trich_offset__end.Int = self.Int - __start.Int;
	tri_chain__op_trich_offset__end.Float = self.Float - __start.Float;
	tri_chain__op_trich_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int tri_chain__op_trich(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + tri_chain__op_trich_offset_creation1.Bool;
			self.Int = __start.Int + tri_chain__op_trich_offset_creation1.Int;
			self.Float = __start.Float + tri_chain__op_trich_offset_creation1.Float;
			self.Char = __start.Char + tri_chain__op_trich_offset_creation1.Char;

			/*********************** creation1 execution ************************/

			self_num++;
			if (creation__num != self_num) {
				creation__num = self_num;
				creation_idProd = __start.Int+2; /*op_trich__cn_1*/
				creation_creationFailed = __start.Bool+4; /*op_trich__cn_2*/
			}
			__ret = tri_chain__creation();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* chain1 execution *************************/

			self_num++;
			if (op_chain__num != self_num) {
				op_chain__num = self_num;
				op_chain_forward = op_trich_mvt1;
				op_chain_localRun = op_trich_run1;
				op_chain_start_sensor = op_trich_startSensor1;
				op_chain_end_sensor = op_trich_endSensor1;
			}
			__ret = tri_chain__op_chain();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* chain2 execution *************************/

			self_num++;
			if (op_chain__num != self_num) {
				op_chain__num = self_num;
				op_chain_forward = op_trich_mvt2;
				op_chain_localRun = op_trich_run2;
				op_chain_start_sensor = op_trich_startSensor2;
				op_chain_end_sensor = op_trich_endSensor2;
			}
			__ret = tri_chain__op_chain();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** creation2 execution ************************/

			self_num++;
			if (creation__num != self_num) {
				creation__num = self_num;
				creation_idProd = __start.Int+1; /*op_trich__cn_3*/
				creation_creationFailed = __start.Bool+3; /*op_trich__cn_4*/
			}
			__ret = tri_chain__creation();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* chain3 execution *************************/

			self_num++;
			if (op_chain__num != self_num) {
				op_chain__num = self_num;
				op_chain_forward = op_trich_mvt3;
				op_chain_localRun = op_trich_run3;
				op_chain_start_sensor = op_trich_startSensor3;
				op_chain_end_sensor = op_trich_endSensor3;
			}
			__ret = tri_chain__op_chain();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************** outputChain execution ***********************/

			self_num++;
			if (op_chain__num != self_num) {
				op_chain__num = self_num;
				op_chain_forward = op_trich_mvt4;
				op_chain_localRun = __start.Bool+2; /*op_trich__cn_5*/
				op_chain_start_sensor = __start.Bool+1; /*op_trich__cn_6*/
				op_chain_end_sensor = op_trich_endSensor4;
			}
			__ret = tri_chain__op_chain();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ shuttle execution *************************/

			self_num++;
			if (op_shuttle__num != self_num) {
				op_shuttle__num = self_num;
				op_shuttle_forward = op_trich_moveToRight;
				op_shuttle_backward = op_trich_moveToLeft;
				op_shuttle_chainMotorOn = op_trich_chainMvt;
				op_shuttle_sensor_Pos1 = op_trich_sensor1;
				op_shuttle_sensor_Pos2 = op_trich_sensor2;
				op_shuttle_sensor_Pos3 = op_trich_sensor3;
				op_shuttle_end_sensor = op_trich_endSensor;
			}
			__ret = tri_chain__op_shuttle();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** runButton execution ************************/

			self_num++;
			if (button__num != self_num) {
				button__num = self_num;
				button_output = op_trich_ON;
			}
			__ret = tri_chain__button();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** creation3 execution ************************/

			self_num++;
			if (creation__num != self_num) {
				creation__num = self_num;
				creation_idProd = __start.Int+0; /*op_trich__cn_7*/
				creation_creationFailed = __start.Bool+0; /*op_trich__cn_8*/
			}
			__ret = tri_chain__creation();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* trash execution **************************/

			self_num++;
			if (trash__num != self_num) {
				trash__num = self_num;
			}
			__ret = tri_chain__trash();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + tri_chain__op_trich_offset__end.Bool;
	self.Int = __start.Int + tri_chain__op_trich_offset__end.Int;
	self.Float = __start.Float + tri_chain__op_trich_offset__end.Float;
	self.Char = __start.Char + tri_chain__op_trich_offset__end.Char;

	return 0;
}
