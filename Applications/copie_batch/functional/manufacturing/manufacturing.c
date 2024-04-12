/*2024-04-12T14:05:59-01:00*/

/********************************************************************
 * manufacturing.c
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
extern CB_Mem_Bool *_i_manufacturing__faults_fault3;
extern CB_Mem_Bool *_i_manufacturing__faults_fault2;
extern CB_Mem_Bool *_i_manufacturing__faults_fault1;
extern CB_Mem_Bool *_i_manufacturing__faults_generalFault;

/********************** Function declarations ***********************/

static int _copie_batch__faults_init(void);
static int copie_batch__faults(void);

/********************************************************************
 *                  Inner 'faults' implementation                   *
 ********************************************************************/



/**************************** Variables *****************************/

static CB_Index faults__num = 0;
CB_Mem_Bool *_i_manufacturing__faults_fault3;
CB_Mem_Bool *_i_manufacturing__faults_fault2;
CB_Mem_Bool *_i_manufacturing__faults_fault1;
CB_Mem_Bool *_i_manufacturing__faults_generalFault;

/**************************** Variables *****************************/

#define fault3 (_i_manufacturing__faults_fault3->CB_current_value)
#define fault2 (_i_manufacturing__faults_fault2->CB_current_value)
#define fault1 (_i_manufacturing__faults_fault1->CB_current_value)
#define generalFault (_i_manufacturing__faults_generalFault->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

static int _copie_batch__faults_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

static int copie_batch__faults(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			generalFault = (fault3 || fault1) || fault2;
		}

		CB_post_bool(_i_manufacturing__faults_generalFault);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

#undef fault3
#undef fault2
#undef fault1
#undef generalFault

/********************************************************************
 *        Public 'copie_batch.manufacturing' implementation         *
 ********************************************************************/

#include "manufacturing.h"
#include "copie_batch/functional/flour/flour.h"
#include "copie_batch/functional/syrup/syrup.h"
#include "copie_batch/functional/mixture/mixture.h"


/**************************** Variables *****************************/

CB_Index manufacturing__num = 0;
CB_Mem_Bool *manufacturing_cycleInProgress;
CB_Mem_Bool *manufacturing_acknowledgePB;
CB_Mem_Bool *manufacturing_flourWeighingRequest;
CB_Mem_Bool *manufacturing_syrupWeighingRequest;
CB_Mem_Bool *manufacturing_kneadingRequest;
CB_Mem_Bool *manufacturing_autoMode;
CB_Mem_Bool *manufacturing_manualMode;
CB_Mem_Int *manufacturing_flourWeight;
CB_Mem_Int *manufacturing_syrup1Weight;
CB_Mem_Int *manufacturing_syrup2Weight;
CB_Mem_Int *manufacturing_syrup3Weight;
CB_Mem_Bool *manufacturing_generalFault;
CB_Mem_Bool *manufacturing_kneadingOK;
CB_Mem_Bool *manufacturing_flourWeighingOk;
CB_Mem_Bool *manufacturing_syrupWeighingOk;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset copie_batch__manufacturing_offset_flour;
static CB_Offset copie_batch__manufacturing_offset_syrup;
static CB_Offset copie_batch__manufacturing_offset_mixture;
static CB_Offset copie_batch__manufacturing_offset_faults1;
static CB_Offset copie_batch__manufacturing_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _copie_batch__manufacturing_init(void)
{
	CB_Object __start = self;
	self.Bool+=3;
	self.Float+=2;

	/*initialize child flour (copie_batch.flour):*/
	self_num++;
	copie_batch__manufacturing_offset_flour.Bool = self.Bool - __start.Bool;
	copie_batch__manufacturing_offset_flour.Int = self.Int - __start.Int;
	copie_batch__manufacturing_offset_flour.Float = self.Float - __start.Float;
	copie_batch__manufacturing_offset_flour.Char = self.Char - __start.Char;
	flour_cycleInProgress = manufacturing_cycleInProgress;
	flour_acknowledgePB = manufacturing_acknowledgePB;
	flour_weighingRequest = manufacturing_flourWeighingRequest;
	flour_flourWeight = manufacturing_flourWeight;
	flour_autoMode = manufacturing_autoMode;
	flour_manualMode = manufacturing_manualMode;
	flour_flourExtraction = __start.Float+1; /*manufacturing__cn_4*/
	flour_weighingOk = manufacturing_flourWeighingOk;
	flour_fault = __start.Bool+1; /*manufacturing__cn_2*/
	_copie_batch__flour_init();

	/*initialize child syrup (copie_batch.syrup):*/
	self_num++;
	copie_batch__manufacturing_offset_syrup.Bool = self.Bool - __start.Bool;
	copie_batch__manufacturing_offset_syrup.Int = self.Int - __start.Int;
	copie_batch__manufacturing_offset_syrup.Float = self.Float - __start.Float;
	copie_batch__manufacturing_offset_syrup.Char = self.Char - __start.Char;
	syrup_syrup1Weight = manufacturing_syrup1Weight;
	syrup_syrup2Weight = manufacturing_syrup2Weight;
	syrup_syrup3Weight = manufacturing_syrup3Weight;
	syrup_cycleInProgress = manufacturing_cycleInProgress;
	syrup_weighingRequest = manufacturing_syrupWeighingRequest;
	syrup_acknowledgePB = manufacturing_acknowledgePB;
	syrup_autoMode = manufacturing_autoMode;
	syrup_manualMode = manufacturing_manualMode;
	syrup_weighingOk = manufacturing_syrupWeighingOk;
	syrup_fault = __start.Bool+2; /*manufacturing__cn_1*/
	syrup_syrupExtraction = __start.Float+0; /*manufacturing__cn_5*/
	_copie_batch__syrup_init();

	/*initialize child mixture (copie_batch.mixture):*/
	self_num++;
	copie_batch__manufacturing_offset_mixture.Bool = self.Bool - __start.Bool;
	copie_batch__manufacturing_offset_mixture.Int = self.Int - __start.Int;
	copie_batch__manufacturing_offset_mixture.Float = self.Float - __start.Float;
	copie_batch__manufacturing_offset_mixture.Char = self.Char - __start.Char;
	mixture_cycleInProgress = manufacturing_cycleInProgress;
	mixture_kneadingRequest = manufacturing_kneadingRequest;
	mixture_acknowledgePB = manufacturing_acknowledgePB;
	mixture_autoMode = manufacturing_autoMode;
	mixture_manualMode = manufacturing_manualMode;
	mixture_syrupExtraction = __start.Float+0; /*manufacturing__cn_5*/
	mixture_flourExtraction = __start.Float+1; /*manufacturing__cn_4*/
	mixture_kneadingOK = manufacturing_kneadingOK;
	mixture_fault = __start.Bool+0; /*manufacturing__cn_3*/
	_copie_batch__mixture_init();

	/*initialize child faults1 (copie_batch.faults):*/
	self_num++;
	copie_batch__manufacturing_offset_faults1.Bool = self.Bool - __start.Bool;
	copie_batch__manufacturing_offset_faults1.Int = self.Int - __start.Int;
	copie_batch__manufacturing_offset_faults1.Float = self.Float - __start.Float;
	copie_batch__manufacturing_offset_faults1.Char = self.Char - __start.Char;
	_i_manufacturing__faults_fault3 = __start.Bool+0; /*manufacturing__cn_3*/
	_i_manufacturing__faults_fault2 = __start.Bool+1; /*manufacturing__cn_2*/
	_i_manufacturing__faults_fault1 = __start.Bool+2; /*manufacturing__cn_1*/
	_i_manufacturing__faults_generalFault = manufacturing_generalFault;
	_copie_batch__faults_init();

	copie_batch__manufacturing_offset__end.Bool = self.Bool - __start.Bool;
	copie_batch__manufacturing_offset__end.Int = self.Int - __start.Int;
	copie_batch__manufacturing_offset__end.Float = self.Float - __start.Float;
	copie_batch__manufacturing_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int copie_batch__manufacturing(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

										
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + copie_batch__manufacturing_offset_flour.Bool;
			self.Int = __start.Int + copie_batch__manufacturing_offset_flour.Int;
			self.Float = __start.Float + copie_batch__manufacturing_offset_flour.Float;
			self.Char = __start.Char + copie_batch__manufacturing_offset_flour.Char;

			/************************* flour execution **************************/

			self_num++;
			if (flour__num != self_num) {
				flour__num = self_num;
				flour_cycleInProgress = manufacturing_cycleInProgress;
				flour_acknowledgePB = manufacturing_acknowledgePB;
				flour_weighingRequest = manufacturing_flourWeighingRequest;
				flour_flourWeight = manufacturing_flourWeight;
				flour_autoMode = manufacturing_autoMode;
				flour_manualMode = manufacturing_manualMode;
				flour_flourExtraction = __start.Float+1; /*manufacturing__cn_4*/
				flour_weighingOk = manufacturing_flourWeighingOk;
				flour_fault = __start.Bool+1; /*manufacturing__cn_2*/
			}
			__ret = copie_batch__flour();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* syrup execution **************************/

			self_num++;
			if (syrup__num != self_num) {
				syrup__num = self_num;
				syrup_syrup1Weight = manufacturing_syrup1Weight;
				syrup_syrup2Weight = manufacturing_syrup2Weight;
				syrup_syrup3Weight = manufacturing_syrup3Weight;
				syrup_cycleInProgress = manufacturing_cycleInProgress;
				syrup_weighingRequest = manufacturing_syrupWeighingRequest;
				syrup_acknowledgePB = manufacturing_acknowledgePB;
				syrup_autoMode = manufacturing_autoMode;
				syrup_manualMode = manufacturing_manualMode;
				syrup_weighingOk = manufacturing_syrupWeighingOk;
				syrup_fault = __start.Bool+2; /*manufacturing__cn_1*/
				syrup_syrupExtraction = __start.Float+0; /*manufacturing__cn_5*/
			}
			__ret = copie_batch__syrup();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ mixture execution *************************/

			self_num++;
			if (mixture__num != self_num) {
				mixture__num = self_num;
				mixture_cycleInProgress = manufacturing_cycleInProgress;
				mixture_kneadingRequest = manufacturing_kneadingRequest;
				mixture_acknowledgePB = manufacturing_acknowledgePB;
				mixture_autoMode = manufacturing_autoMode;
				mixture_manualMode = manufacturing_manualMode;
				mixture_syrupExtraction = __start.Float+0; /*manufacturing__cn_5*/
				mixture_flourExtraction = __start.Float+1; /*manufacturing__cn_4*/
				mixture_kneadingOK = manufacturing_kneadingOK;
				mixture_fault = __start.Bool+0; /*manufacturing__cn_3*/
			}
			__ret = copie_batch__mixture();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************ faults1 execution *************************/

			self_num++;
			if (faults__num != self_num) {
				faults__num = self_num;
				_i_manufacturing__faults_fault3 = __start.Bool+0; /*manufacturing__cn_3*/
				_i_manufacturing__faults_fault2 = __start.Bool+1; /*manufacturing__cn_2*/
				_i_manufacturing__faults_fault1 = __start.Bool+2; /*manufacturing__cn_1*/
				_i_manufacturing__faults_generalFault = manufacturing_generalFault;
			}
			__ret = copie_batch__faults();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + copie_batch__manufacturing_offset__end.Bool;
	self.Int = __start.Int + copie_batch__manufacturing_offset__end.Int;
	self.Float = __start.Float + copie_batch__manufacturing_offset__end.Float;
	self.Char = __start.Char + copie_batch__manufacturing_offset__end.Char;

	return 0;
}

