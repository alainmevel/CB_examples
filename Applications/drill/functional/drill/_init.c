/********************************************************************
 * _init.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_products.h"
#include "equipment_library/functional/momentary_button/momentary_button.h"
#include "equipment_library/functional/switch_2pos_2outputs/switch_2pos_2outputs.h"
#include "equipment_library/functional/maintained_button/maintained_button.h"
#include "drill/functional/mode/mode.h"
#include "drill/functional/function/function.h"
#include "drill/functional/run/run.h"
#include "drill/functional/mdescent/mdescent.h"
#include "drill/functional/descent/descent.h"
#include "io_library/functional/io_engine_2d2s/io_engine_2d2s.h"
#include "equipment_library/functional/motor_2dir_2speed/motor_2dir_2speed.h"
#include "cmd_equipment_library/functional/cmd_motor_2d2s/cmd_motor_2d2s.h"
#include "timers_counters/functional/cb_ton/cb_ton.h"
#include "drill/functional/turret/turret.h"
#include "drill/functional/mclamping/mclamping.h"
#include "drill/functional/clamping/clamping.h"
#include "io_library/functional/io_single_acting_jack/io_single_acting_jack.h"
#include "equipment_library/functional/switch_2pos_1output/switch_2pos_1output.h"
#include "cmd_equipment_library/functional/cmd_single_acting_jack/cmd_single_acting_jack.h"
#include "equipment_library/functional/single_acting_jack/single_acting_jack.h"
#include "drill/functional/mspindle/mspindle.h"
#include "drill/functional/spindle/spindle.h"
#include "io_library/functional/io_engine_1d1s/io_engine_1d1s.h"
#include "equipment_library/functional/motor_1dir_1speed/motor_1dir_1speed.h"
#include "cmd_equipment_library/functional/cmd_motor_1d1s/cmd_motor_1d1s.h"
#include "drill/functional/piece/piece.h"
#include "drill/functional/drill/drill.h"

/* Low voltage specific */
int lv_iteration_step;

/* Input/output variables initialization function */
void inputOutputVariablesInit(void)
{
}

/* Main behavior initialization function */
int behaviorsInit(void)
{
	int old_self_num = self_num;

	drill__num = self_num;
	inputOutputVariablesInit();
	_drill__drill_init();
	self_num = old_self_num;
	return 0;
}

/* Main behavior function */
int behaviorsStep(void)
{
	int old_self_num = self_num;
	int __ret;

	lv_iteration_step = 0;
	inputOutputVariablesInit();
	drill__num = self_num;
	__ret = drill__drill();
	if (__ret != 0) {
		return __ret; /*execution failure*/
	}
	self_num = old_self_num;
	return 0;
}

/* Actors and products initialization */
T_ElementTableActeursProduits TableActeursProduits[] = {
	{0, {0, 0, 0, 0}, {0, 0, 0, 0},
	0, 0, 0, 0, 0, {{0, 0, 0}, {0, 0, 0}}}
};
T_Instance NbActeurs = 0;
T_Instance NbProduits = 0;
T_Instance NbActeursEtProduits = 0;



/* Global variables initialization */
void globalesInit(void)
{
}

/* Memory sizes initialization */
void memorySizeInit(CB_Offset *minSiz, CB_Offset *maxSiz, CB_Offset *memSiz)
{


	minSiz->Bool = 0;
	minSiz->Int = 0;
	minSiz->Float = 0;
	minSiz->Char = 0;

	maxSiz->Bool = 255;
	maxSiz->Int = 643;
	maxSiz->Float = 65;
	maxSiz->Char = 53;

	memSiz->Bool = 255;
	memSiz->Int = 643;
	memSiz->Float = 65;
	memSiz->Char = 53;
}


/* Location of memory starts*/
void memoryStartInit(CB_Object *pMem)
{
	extern int minBool, minInt, minFloat, minChar;

	pMem->Bool += minBool + 5;
	pMem->Int += minInt + 212;
	pMem->Float += minFloat + 7;
	pMem->Char += minChar + 53;
}

/* Initialization utils */
void CB_Bool_Init(char *Mem, int index, CB_Bool value)
{
	P_Bool(Mem, index)->CB_current_value = value;
	P_Bool(Mem, index)->CB_previous_value = value;
}

void CB_Int_Init(char *Mem, int index, CB_Int value)
{
	P_Int(Mem, index)->CB_current_value = value;
	P_Int(Mem, index)->CB_previous_value = value;
}

void CB_Float_Init(char *Mem, int index, CB_Float value)
{
	P_Float(Mem, index)->CB_current_value = value;
	P_Float(Mem, index)->CB_previous_value = value;
}

void CB_Char_Init(char *Mem, int index, CB_Char value)
{
	P_Char(Mem, index)->CB_current_value = value;
	P_Char(Mem, index)->CB_previous_value = value;
}

/* Variable initializations */
void variablesInitialization(void)
{

	CB_Float_Init((char *) memHeader, 10, 50000.0); /*simuperiod*/
	CB_Char_Init((char *) memHeader, 0 + 0, 0); /*taskname size1*/
	CB_Char_Init((char *) memHeader, 0 + 1, 50); /*taskname size2*/
	CB_Char_Init((char *) memHeader, 0 + 3, 'd');
	CB_Char_Init((char *) memHeader, 0 + 4, 'r');
	CB_Char_Init((char *) memHeader, 0 + 5, 'i');
	CB_Char_Init((char *) memHeader, 0 + 6, 'l');
	CB_Char_Init((char *) memHeader, 0 + 7, 'l');
	CB_Char_Init((char *) memHeader, 0 + 8, '.');
	CB_Char_Init((char *) memHeader, 0 + 9, 'e');
	CB_Char_Init((char *) memHeader, 0 + 10, 'x');
	CB_Char_Init((char *) memHeader, 0 + 11, 'e');
	CB_Char_Init((char *) memHeader, 0 + 12, 0);
	CB_Bool_Init((char *) memHeader, 3, 1); /*allowpreconditions*/
	CB_Bool_Init((char *) memHeader, 4, 1); /*allowpostconditions*/
	CB_Bool_Init((char *) memHeader, 10, 1); /*generalPanel/batchCycle*/
	CB_Bool_Init((char *) memHeader, 11, 0); /*generalPanel/cycleSwitch/leftVariable*/
	CB_Bool_Init((char *) memHeader, 35, 0); /*generalPanel/emergencyStop/PBLogic*/
	CB_Float_Init((char *) memHeader, 34, 0.05); /*functional/descent/motorOfTurret/motor/nominalTime*/
	CB_Float_Init((char *) memHeader, 35, 100.0); /*functional/descent/motorOfTurret/motor/nominalLowSpeed*/
	CB_Float_Init((char *) memHeader, 36, 200.0); /*functional/descent/motorOfTurret/motor/nominalHighSpeed*/
	CB_Float_Init((char *) memHeader, 48, 1.0); /*functional/clamping/leftJack/jack/time2extend*/
	CB_Float_Init((char *) memHeader, 52, 1.0); /*functional/clamping/rightJack/jack/time2extend*/
}

/* Control Variables access */
void controlVariablesAccessInitialization(void)
{
	extern CB_Mem_Int *execstatus;
	extern CB_Mem_Float *simuperiod;
	extern CB_Mem_Float *minsimuperiod;
	extern CB_Mem_Float *maxsimuperiod;
	extern CB_Mem_Float *realsimuperiod;
	extern CB_Mem_Int *bpnoline;
	extern CB_Mem_Int *bpnoinstance;
	extern CB_Mem_Int *bpcurrentinstance;
	extern CB_Mem_Int *bpcurrentlocation;
	extern CB_Mem_Int *bpcurrentprepostcode;
	extern CB_Mem_Int *bpcurrenttypeerror;
	extern CB_Mem_Int *bpcurrentrank;
	extern CB_Mem_Int *signature;
	extern CB_Mem_Int *generationtime;
	extern CB_Mem_Char *taskname;
	extern CB_Mem_Bool *traceon;
	extern CB_Mem_Bool *resettrace;
	extern CB_Mem_Bool *tracesnapshop;
	extern CB_Mem_Float *mxmeanvariablemodification;
	extern CB_Mem_Float *mxminvariablemodification;
	extern CB_Mem_Float *mxmaxvariablemodification;
	extern CB_Mem_Bool *allowpreconditions;
	extern CB_Mem_Bool *allowpostconditions;

	execstatus = P_Int((char *) memHeader, 311);
	simuperiod = P_Float((char *) memHeader, 10);
	minsimuperiod = P_Float((char *) memHeader, 11);
	maxsimuperiod = P_Float((char *) memHeader, 12);
	realsimuperiod = P_Float((char *) memHeader, 13);
	bpnoline = P_Int((char *) memHeader, 312);
	bpnoinstance = P_Int((char *) memHeader, 414);
	bpcurrentinstance = P_Int((char *) memHeader, 516);
	bpcurrentlocation = P_Int((char *) memHeader, 517);
	bpcurrentprepostcode = P_Int((char *) memHeader, 518);
	bpcurrenttypeerror = P_Int((char *) memHeader, 519);
	bpcurrentrank = P_Int((char *) memHeader, 520);
	signature = P_Int((char *) memHeader, 521);
	generationtime = P_Int((char *) memHeader, 522);
	taskname = P_Char((char *) memHeader, 0);
	traceon = P_Bool((char *) memHeader, 0);
	resettrace = P_Bool((char *) memHeader, 1);
	tracesnapshop = P_Bool((char *) memHeader, 2);
	mxmeanvariablemodification = P_Float((char *) memHeader, 14);
	mxminvariablemodification = P_Float((char *) memHeader, 15);
	mxmaxvariablemodification = P_Float((char *) memHeader, 16);
	allowpreconditions = P_Bool((char *) memHeader, 3);
	allowpostconditions = P_Bool((char *) memHeader, 4);
}

/* Time cycle initialization */
void timeCycleInitialization(CB_Mem_Float *timecycle)
{
	timecycle->CB_current_value = 50000.0;
}

/* Starting mode */
void initStartingMode(CB_Mem_Int *pexecstatus)
{
	pexecstatus->CB_current_value = mx_exec_status_stop;
}

