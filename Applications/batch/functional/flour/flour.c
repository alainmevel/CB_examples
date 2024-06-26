/*2023-10-03T11:13:38-01:00*/

/********************************************************************
 * flour.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"


/********************************************************************
 *                   Inner 'faults' declarations                    *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index faults__num;
extern CB_Mem_Bool *_i_flour__faults_generalFault3;
extern CB_Mem_Bool *_i_flour__faults_generalFault2;
extern CB_Mem_Bool *_i_flour__faults_generalFault1;
extern CB_Mem_Bool *_i_flour__faults_fault;

/********************** Function declarations ***********************/

static int _batch__faults_init(void);
static int batch__faults(void);

/********************************************************************
 *                  Inner 'faults' implementation                   *
 ********************************************************************/



/**************************** Variables *****************************/

static CB_Index faults__num = 0;
CB_Mem_Bool *_i_flour__faults_generalFault3;
CB_Mem_Bool *_i_flour__faults_generalFault2;
CB_Mem_Bool *_i_flour__faults_generalFault1;
CB_Mem_Bool *_i_flour__faults_fault;

/**************************** Variables *****************************/

#define generalFault3 (_i_flour__faults_generalFault3->CB_current_value)
#define generalFault2 (_i_flour__faults_generalFault2->CB_current_value)
#define generalFault1 (_i_flour__faults_generalFault1->CB_current_value)
#define fault (_i_flour__faults_fault->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

static int _batch__faults_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

static int batch__faults(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			fault = (generalFault3 || generalFault1) || generalFault2;
		}

		CB_post_bool(_i_flour__faults_fault);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

#undef generalFault3
#undef generalFault2
#undef generalFault1
#undef fault

/********************************************************************
 *               Public 'batch.flour' implementation                *
 ********************************************************************/

#include "flour.h"
#include "io_library/functional/io_on_off_valve/io_on_off_valve.h"
#include "equipment_library/functional/tank/tank.h"
#include "equipment_library/functional/flow_compute/flow_compute.h"
#include "equipment_library/functional/analog_sensor/analog_sensor.h"
#include "batch/functional/flour_weighing/flour_weighing.h"
#include "equipment_library/functional/bounded_scale/bounded_scale.h"


/**************************** Variables *****************************/

CB_Index flour__num = 0;
CB_Mem_Bool *flour_cycleInProgress;
CB_Mem_Bool *flour_acknowledgePB;
CB_Mem_Bool *flour_weighingRequest;
CB_Mem_Int *flour_flourWeight;
CB_Mem_Bool *flour_autoMode;
CB_Mem_Bool *flour_manualMode;
CB_Mem_Float *flour_flourExtraction;
CB_Mem_Bool *flour_weighingOk;
CB_Mem_Bool *flour_fault;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset batch__flour_offset_airArrival;
static CB_Offset batch__flour_offset_extractingValve;
static CB_Offset batch__flour_offset_airExtraction;
static CB_Offset batch__flour_offset_flourWeighing;
static CB_Offset batch__flour_offset_flow;
static CB_Offset batch__flour_offset_level;
static CB_Offset batch__flour_offset_faults1;
static CB_Offset batch__flour_offset_flourManagement;
static CB_Offset batch__flour_offset_scale;
static CB_Offset batch__flour_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _batch__flour_init(void)
{
	CB_Object __start = self;
	self.Bool+=14;
	self.Int+=2;
	self.Float+=13;

	/*initialize child airArrival (io_library.io_on_off_valve):*/
	self_num++;
	batch__flour_offset_airArrival.Bool = self.Bool - __start.Bool;
	batch__flour_offset_airArrival.Int = self.Int - __start.Int;
	batch__flour_offset_airArrival.Float = self.Float - __start.Float;
	batch__flour_offset_airArrival.Char = self.Char - __start.Char;
	io_on_off_valve_acknowledgePB = flour_acknowledgePB;
	io_on_off_valve_autoMode = flour_autoMode;
	io_on_off_valve_manualMode = flour_manualMode;
	io_on_off_valve_autoCloseCmd = __start.Bool+7; /*flour__cn_12*/
	io_on_off_valve_autoOpenCmd = __start.Bool+8; /*flour__cn_11*/
	io_on_off_valve_inputFlow = __start.Float+8; /*flour__cn_13*/
	io_on_off_valve_openedSensor = __start.Bool+6; /*flour__cn_14*/
	io_on_off_valve_closedSensor = __start.Bool+5; /*flour__cn_15*/
	io_on_off_valve_generalFault = __start.Bool+11; /*flour__cn_5*/
	io_on_off_valve_outputFlow = __start.Float+10; /*flour__cn_7*/
	io_on_off_valve_percentOpening = __start.Float+7; /*flour__cn_16*/
	_io_library__io_on_off_valve_init();

	/*initialize child extractingValve (io_library.io_on_off_valve):*/
	self_num++;
	batch__flour_offset_extractingValve.Bool = self.Bool - __start.Bool;
	batch__flour_offset_extractingValve.Int = self.Int - __start.Int;
	batch__flour_offset_extractingValve.Float = self.Float - __start.Float;
	batch__flour_offset_extractingValve.Char = self.Char - __start.Char;
	io_on_off_valve_acknowledgePB = flour_acknowledgePB;
	io_on_off_valve_autoMode = flour_autoMode;
	io_on_off_valve_manualMode = flour_manualMode;
	io_on_off_valve_autoCloseCmd = __start.Bool+9; /*flour__cn_10*/
	io_on_off_valve_autoOpenCmd = __start.Bool+10; /*flour__cn_9*/
	io_on_off_valve_inputFlow = __start.Float+9; /*flour__cn_8*/
	io_on_off_valve_openedSensor = __start.Bool+4; /*flour__cn_17*/
	io_on_off_valve_closedSensor = __start.Bool+3; /*flour__cn_18*/
	io_on_off_valve_generalFault = __start.Bool+13; /*flour__cn_3*/
	io_on_off_valve_outputFlow = flour_flourExtraction;
	io_on_off_valve_percentOpening = __start.Float+6; /*flour__cn_19*/
	_io_library__io_on_off_valve_init();

	/*initialize child airExtraction (io_library.io_on_off_valve):*/
	self_num++;
	batch__flour_offset_airExtraction.Bool = self.Bool - __start.Bool;
	batch__flour_offset_airExtraction.Int = self.Int - __start.Int;
	batch__flour_offset_airExtraction.Float = self.Float - __start.Float;
	batch__flour_offset_airExtraction.Char = self.Char - __start.Char;
	io_on_off_valve_acknowledgePB = flour_acknowledgePB;
	io_on_off_valve_autoMode = flour_autoMode;
	io_on_off_valve_manualMode = flour_manualMode;
	io_on_off_valve_autoCloseCmd = __start.Bool+9; /*flour__cn_10*/
	io_on_off_valve_autoOpenCmd = __start.Bool+10; /*flour__cn_9*/
	io_on_off_valve_inputFlow = __start.Float+5; /*flour__cn_20*/
	io_on_off_valve_openedSensor = __start.Bool+2; /*flour__cn_21*/
	io_on_off_valve_closedSensor = __start.Bool+1; /*flour__cn_22*/
	io_on_off_valve_generalFault = __start.Bool+12; /*flour__cn_4*/
	io_on_off_valve_outputFlow = __start.Float+4; /*flour__cn_23*/
	io_on_off_valve_percentOpening = __start.Float+3; /*flour__cn_24*/
	_io_library__io_on_off_valve_init();

	/*initialize child flourWeighing (equipment_library.tank):*/
	self_num++;
	batch__flour_offset_flourWeighing.Bool = self.Bool - __start.Bool;
	batch__flour_offset_flourWeighing.Int = self.Int - __start.Int;
	batch__flour_offset_flourWeighing.Float = self.Float - __start.Float;
	batch__flour_offset_flourWeighing.Char = self.Char - __start.Char;
	tank_inletFlow = __start.Float+10; /*flour__cn_7*/
	tank_outletFlow = flour_flourExtraction;
	tank_tankLevel = __start.Float+11; /*flour__cn_6*/
	_equipment_library__tank_init();

	/*initialize child flow (equipment_library.flow_compute):*/
	self_num++;
	batch__flour_offset_flow.Bool = self.Bool - __start.Bool;
	batch__flour_offset_flow.Int = self.Int - __start.Int;
	batch__flour_offset_flow.Float = self.Float - __start.Float;
	batch__flour_offset_flow.Char = self.Char - __start.Char;
	flow_compute_inputFlow = __start.Float+11; /*flour__cn_6*/
	flow_compute_outputFlow = __start.Float+9; /*flour__cn_8*/
	_equipment_library__flow_compute_init();

	/*initialize child level (equipment_library.analog_sensor):*/
	self_num++;
	batch__flour_offset_level.Bool = self.Bool - __start.Bool;
	batch__flour_offset_level.Int = self.Int - __start.Int;
	batch__flour_offset_level.Float = self.Float - __start.Float;
	batch__flour_offset_level.Char = self.Char - __start.Char;
	analog_sensor_measure = __start.Float+11; /*flour__cn_6*/
	analog_sensor_sensorSupply = __start.Bool+0; /*flour__cn_25*/
	analog_sensor_realValue = __start.Float+12; /*flour__cn_1*/
	analog_sensor_intValue = __start.Float+2; /*flour__cn_26*/
	analog_sensor_dintValue = __start.Float+1; /*flour__cn_27*/
	_equipment_library__analog_sensor_init();

	/*initialize child faults1 (batch.faults):*/
	self_num++;
	batch__flour_offset_faults1.Bool = self.Bool - __start.Bool;
	batch__flour_offset_faults1.Int = self.Int - __start.Int;
	batch__flour_offset_faults1.Float = self.Float - __start.Float;
	batch__flour_offset_faults1.Char = self.Char - __start.Char;
	_i_flour__faults_generalFault3 = __start.Bool+11; /*flour__cn_5*/
	_i_flour__faults_generalFault2 = __start.Bool+12; /*flour__cn_4*/
	_i_flour__faults_generalFault1 = __start.Bool+13; /*flour__cn_3*/
	_i_flour__faults_fault = flour_fault;
	_batch__faults_init();

	/*initialize child flourManagement (batch.flour_weighing):*/
	self_num++;
	batch__flour_offset_flourManagement.Bool = self.Bool - __start.Bool;
	batch__flour_offset_flourManagement.Int = self.Int - __start.Int;
	batch__flour_offset_flourManagement.Float = self.Float - __start.Float;
	batch__flour_offset_flourManagement.Char = self.Char - __start.Char;
	flour_weighing_weighingRequest = flour_weighingRequest;
	flour_weighing_cycleInProgress = flour_cycleInProgress;
	flour_weighing_weighedWeight = __start.Int+1; /*flour__cn_2*/
	flour_weighing_flourWeight = flour_flourWeight;
	flour_weighing_weighingOk = flour_weighingOk;
	flour_weighing_introduceFlour = __start.Bool+8; /*flour__cn_11*/
	flour_weighing_introFlourEnd = __start.Bool+7; /*flour__cn_12*/
	flour_weighing_exitFlour = __start.Bool+10; /*flour__cn_9*/
	flour_weighing_exitFlourEnd = __start.Bool+9; /*flour__cn_10*/
	_batch__flour_weighing_init();

	/*initialize child scale (equipment_library.bounded_scale):*/
	self_num++;
	batch__flour_offset_scale.Bool = self.Bool - __start.Bool;
	batch__flour_offset_scale.Int = self.Int - __start.Int;
	batch__flour_offset_scale.Float = self.Float - __start.Float;
	batch__flour_offset_scale.Char = self.Char - __start.Char;
	bounded_scale_inputValue = __start.Float+12; /*flour__cn_1*/
	bounded_scale_realValue = __start.Float+0; /*flour__cn_28*/
	bounded_scale_dintValue = __start.Int+1; /*flour__cn_2*/
	bounded_scale_intValue = __start.Int+0; /*flour__cn_29*/
	_equipment_library__bounded_scale_init();

	batch__flour_offset__end.Bool = self.Bool - __start.Bool;
	batch__flour_offset__end.Int = self.Int - __start.Int;
	batch__flour_offset__end.Float = self.Float - __start.Float;
	batch__flour_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int batch__flour(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																																										
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + batch__flour_offset_airArrival.Bool;
			self.Int = __start.Int + batch__flour_offset_airArrival.Int;
			self.Float = __start.Float + batch__flour_offset_airArrival.Float;
			self.Char = __start.Char + batch__flour_offset_airArrival.Char;

			/*********************** airArrival execution ***********************/

			self_num++;
			if (io_on_off_valve__num != self_num) {
				io_on_off_valve__num = self_num;
				io_on_off_valve_acknowledgePB = flour_acknowledgePB;
				io_on_off_valve_autoMode = flour_autoMode;
				io_on_off_valve_manualMode = flour_manualMode;
				io_on_off_valve_autoCloseCmd = __start.Bool+7; /*flour__cn_12*/
				io_on_off_valve_autoOpenCmd = __start.Bool+8; /*flour__cn_11*/
				io_on_off_valve_inputFlow = __start.Float+8; /*flour__cn_13*/
				io_on_off_valve_openedSensor = __start.Bool+6; /*flour__cn_14*/
				io_on_off_valve_closedSensor = __start.Bool+5; /*flour__cn_15*/
				io_on_off_valve_generalFault = __start.Bool+11; /*flour__cn_5*/
				io_on_off_valve_outputFlow = __start.Float+10; /*flour__cn_7*/
				io_on_off_valve_percentOpening = __start.Float+7; /*flour__cn_16*/
			}
			__ret = io_library__io_on_off_valve();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/******************** extractingValve execution *********************/

			self_num++;
			if (io_on_off_valve__num != self_num) {
				io_on_off_valve__num = self_num;
				io_on_off_valve_acknowledgePB = flour_acknowledgePB;
				io_on_off_valve_autoMode = flour_autoMode;
				io_on_off_valve_manualMode = flour_manualMode;
				io_on_off_valve_autoCloseCmd = __start.Bool+9; /*flour__cn_10*/
				io_on_off_valve_autoOpenCmd = __start.Bool+10; /*flour__cn_9*/
				io_on_off_valve_inputFlow = __start.Float+9; /*flour__cn_8*/
				io_on_off_valve_openedSensor = __start.Bool+4; /*flour__cn_17*/
				io_on_off_valve_closedSensor = __start.Bool+3; /*flour__cn_18*/
				io_on_off_valve_generalFault = __start.Bool+13; /*flour__cn_3*/
				io_on_off_valve_outputFlow = flour_flourExtraction;
				io_on_off_valve_percentOpening = __start.Float+6; /*flour__cn_19*/
			}
			__ret = io_library__io_on_off_valve();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************* airExtraction execution **********************/

			self_num++;
			if (io_on_off_valve__num != self_num) {
				io_on_off_valve__num = self_num;
				io_on_off_valve_acknowledgePB = flour_acknowledgePB;
				io_on_off_valve_autoMode = flour_autoMode;
				io_on_off_valve_manualMode = flour_manualMode;
				io_on_off_valve_autoCloseCmd = __start.Bool+9; /*flour__cn_10*/
				io_on_off_valve_autoOpenCmd = __start.Bool+10; /*flour__cn_9*/
				io_on_off_valve_inputFlow = __start.Float+5; /*flour__cn_20*/
				io_on_off_valve_openedSensor = __start.Bool+2; /*flour__cn_21*/
				io_on_off_valve_closedSensor = __start.Bool+1; /*flour__cn_22*/
				io_on_off_valve_generalFault = __start.Bool+12; /*flour__cn_4*/
				io_on_off_valve_outputFlow = __start.Float+4; /*flour__cn_23*/
				io_on_off_valve_percentOpening = __start.Float+3; /*flour__cn_24*/
			}
			__ret = io_library__io_on_off_valve();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/********************* flourWeighing execution **********************/

			self_num++;
			if (tank__num != self_num) {
				tank__num = self_num;
				tank_inletFlow = __start.Float+10; /*flour__cn_7*/
				tank_outletFlow = flour_flourExtraction;
				tank_tankLevel = __start.Float+11; /*flour__cn_6*/
			}
			__ret = equipment_library__tank();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************** flow execution **************************/

			self_num++;
			if (flow_compute__num != self_num) {
				flow_compute__num = self_num;
				flow_compute_inputFlow = __start.Float+11; /*flour__cn_6*/
				flow_compute_outputFlow = __start.Float+9; /*flour__cn_8*/
			}
			__ret = equipment_library__flow_compute();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* level execution **************************/

			self_num++;
			if (analog_sensor__num != self_num) {
				analog_sensor__num = self_num;
				analog_sensor_measure = __start.Float+11; /*flour__cn_6*/
				analog_sensor_sensorSupply = __start.Bool+0; /*flour__cn_25*/
				analog_sensor_realValue = __start.Float+12; /*flour__cn_1*/
				analog_sensor_intValue = __start.Float+2; /*flour__cn_26*/
				analog_sensor_dintValue = __start.Float+1; /*flour__cn_27*/
			}
			__ret = equipment_library__analog_sensor();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ faults1 execution *************************/

			self_num++;
			if (faults__num != self_num) {
				faults__num = self_num;
				_i_flour__faults_generalFault3 = __start.Bool+11; /*flour__cn_5*/
				_i_flour__faults_generalFault2 = __start.Bool+12; /*flour__cn_4*/
				_i_flour__faults_generalFault1 = __start.Bool+13; /*flour__cn_3*/
				_i_flour__faults_fault = flour_fault;
			}
			__ret = batch__faults();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/******************** flourManagement execution *********************/

			self_num++;
			if (flour_weighing__num != self_num) {
				flour_weighing__num = self_num;
				flour_weighing_weighingRequest = flour_weighingRequest;
				flour_weighing_cycleInProgress = flour_cycleInProgress;
				flour_weighing_weighedWeight = __start.Int+1; /*flour__cn_2*/
				flour_weighing_flourWeight = flour_flourWeight;
				flour_weighing_weighingOk = flour_weighingOk;
				flour_weighing_introduceFlour = __start.Bool+8; /*flour__cn_11*/
				flour_weighing_introFlourEnd = __start.Bool+7; /*flour__cn_12*/
				flour_weighing_exitFlour = __start.Bool+10; /*flour__cn_9*/
				flour_weighing_exitFlourEnd = __start.Bool+9; /*flour__cn_10*/
			}
			__ret = batch__flour_weighing();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* scale execution **************************/

			self_num++;
			if (bounded_scale__num != self_num) {
				bounded_scale__num = self_num;
				bounded_scale_inputValue = __start.Float+12; /*flour__cn_1*/
				bounded_scale_realValue = __start.Float+0; /*flour__cn_28*/
				bounded_scale_dintValue = __start.Int+1; /*flour__cn_2*/
				bounded_scale_intValue = __start.Int+0; /*flour__cn_29*/
			}
			__ret = equipment_library__bounded_scale();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + batch__flour_offset__end.Bool;
	self.Int = __start.Int + batch__flour_offset__end.Int;
	self.Float = __start.Float + batch__flour_offset__end.Float;
	self.Char = __start.Char + batch__flour_offset__end.Char;

	return 0;
}

