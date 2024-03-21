/*2023-10-03T11:13:42-01:00*/

/********************************************************************
 * drive.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "drive.h"
#include "io_library/functional/io_engine_1d1s/io_engine_1d1s.h"
#include "bottling_line/functional/pulse_generator/pulse_generator.h"
#include "bottling_line/functional/bottle/bottle.h"


/**************************** Variables *****************************/

CB_Index drive__num = 0;
CB_Mem_Bool *drive_autoMode;
CB_Mem_Bool *drive_manualMode;
CB_Mem_Bool *drive_acknowledgePB;
CB_Mem_Bool *drive_load;
CB_Mem_Bool *drive_evacuate;
CB_Mem_Bool *drive_convoy;
CB_Mem_Float *drive_inputFlow;
CB_Mem_Bool *drive_bottlePresent;
CB_Mem_Bool *drive_bottleFilled;
CB_Mem_Bool *drive_pulse;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset bottling_line__drive_offset_conveyor;
static CB_Offset bottling_line__drive_offset_pulse;
static CB_Offset bottling_line__drive_offset_bottles;
static CB_Offset bottling_line__drive_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _bottling_line__drive_init(void)
{
	CB_Object __start = self;
	self.Bool+=2;
	self.Float+=2;

	/*initialize child conveyor (io_library.io_engine_1d1s):*/
	self_num++;
	bottling_line__drive_offset_conveyor.Bool = self.Bool - __start.Bool;
	bottling_line__drive_offset_conveyor.Int = self.Int - __start.Int;
	bottling_line__drive_offset_conveyor.Float = self.Float - __start.Float;
	bottling_line__drive_offset_conveyor.Char = self.Char - __start.Char;
	io_engine_1d1s_autoMode = drive_autoMode;
	io_engine_1d1s_manualMode = drive_manualMode;
	io_engine_1d1s_autoCmd = drive_convoy;
	io_engine_1d1s_acknowledgePB = drive_acknowledgePB;
	io_engine_1d1s_speedVal = __start.Float+0; /*drive__cn_2*/
	io_engine_1d1s_speedPercent = __start.Float+1; /*drive__cn_1*/
	io_engine_1d1s_generalFault = __start.Bool+1; /*drive__cn_3*/
	_io_library__io_engine_1d1s_init();

	/*initialize child pulse (bottling_line.pulse_generator):*/
	self_num++;
	bottling_line__drive_offset_pulse.Bool = self.Bool - __start.Bool;
	bottling_line__drive_offset_pulse.Int = self.Int - __start.Int;
	bottling_line__drive_offset_pulse.Float = self.Float - __start.Float;
	bottling_line__drive_offset_pulse.Char = self.Char - __start.Char;
	pulse_generator_speed = __start.Float+1; /*drive__cn_1*/
	pulse_generator_sensorSupply = __start.Bool+0; /*drive__cn_4*/
	pulse_generator_pulseSensor = drive_pulse;
	_bottling_line__pulse_generator_init();

	/*initialize child bottles (bottling_line.bottle):*/
	self_num++;
	bottling_line__drive_offset_bottles.Bool = self.Bool - __start.Bool;
	bottling_line__drive_offset_bottles.Int = self.Int - __start.Int;
	bottling_line__drive_offset_bottles.Float = self.Float - __start.Float;
	bottling_line__drive_offset_bottles.Char = self.Char - __start.Char;
	bottle_pulseGenerator = drive_pulse;
	bottle_loading = drive_load;
	bottle_evacuation = drive_evacuate;
	bottle_inputFlow = drive_inputFlow;
	bottle_bottleFilled = drive_bottleFilled;
	bottle_bottlePresent = drive_bottlePresent;
	_bottling_line__bottle_init();

	bottling_line__drive_offset__end.Bool = self.Bool - __start.Bool;
	bottling_line__drive_offset__end.Int = self.Int - __start.Int;
	bottling_line__drive_offset__end.Float = self.Float - __start.Float;
	bottling_line__drive_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int bottling_line__drive(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

								
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + bottling_line__drive_offset_conveyor.Bool;
			self.Int = __start.Int + bottling_line__drive_offset_conveyor.Int;
			self.Float = __start.Float + bottling_line__drive_offset_conveyor.Float;
			self.Char = __start.Char + bottling_line__drive_offset_conveyor.Char;

			/************************ conveyor execution ************************/

			self_num++;
			if (io_engine_1d1s__num != self_num) {
				io_engine_1d1s__num = self_num;
				io_engine_1d1s_autoMode = drive_autoMode;
				io_engine_1d1s_manualMode = drive_manualMode;
				io_engine_1d1s_autoCmd = drive_convoy;
				io_engine_1d1s_acknowledgePB = drive_acknowledgePB;
				io_engine_1d1s_speedVal = __start.Float+0; /*drive__cn_2*/
				io_engine_1d1s_speedPercent = __start.Float+1; /*drive__cn_1*/
				io_engine_1d1s_generalFault = __start.Bool+1; /*drive__cn_3*/
			}
			__ret = io_library__io_engine_1d1s();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* pulse execution **************************/

			self_num++;
			if (pulse_generator__num != self_num) {
				pulse_generator__num = self_num;
				pulse_generator_speed = __start.Float+1; /*drive__cn_1*/
				pulse_generator_sensorSupply = __start.Bool+0; /*drive__cn_4*/
				pulse_generator_pulseSensor = drive_pulse;
			}
			__ret = bottling_line__pulse_generator();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ bottles execution *************************/

			self_num++;
			if (bottle__num != self_num) {
				bottle__num = self_num;
				bottle_pulseGenerator = drive_pulse;
				bottle_loading = drive_load;
				bottle_evacuation = drive_evacuate;
				bottle_inputFlow = drive_inputFlow;
				bottle_bottleFilled = drive_bottleFilled;
				bottle_bottlePresent = drive_bottlePresent;
			}
			__ret = bottling_line__bottle();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + bottling_line__drive_offset__end.Bool;
	self.Int = __start.Int + bottling_line__drive_offset__end.Int;
	self.Float = __start.Float + bottling_line__drive_offset__end.Float;
	self.Char = __start.Char + bottling_line__drive_offset__end.Char;

	return 0;
}

