#define mx_self_is_sce
#include "cb_comp.h"
#include "iec_1131.h"
#include "sce_fct.h"

static enum {
	init, 
	normal, 
	end
} _etat = init;


CB_Index mx_sce_variablesnb = 36;
T_VariableScenario mx_sce_variables[] = {
	{"*SIMU_PERIOD", 'F', -1},
	{"*ANIM_PERIOD", 'F', -1},
	{"*SCENARIO_PERIOD", 'F', -1},
	{"*SIMU_REALPERIOD", 'F', -1},
	{"*RESERVED", 'F', -1},
	{"*RESERVED_DRIVER_STATUS", 'I', -1},
	{"*RESERVED_SCENARIO_STATUS", 'I', -1},
	{"*TASKS_COUNTER", 'I', -1},
	{"generalPanel/powerUpPB/action", 'B', -1},
	{"generalPanel/modeSwitch/leftVariable", 'B', -1},
	{"generalPanel/modeSwitch/rightVariable", 'B', -1},
	{"generalPanel/startCyclePB/action", 'B', -1},
	{"generalPanel/cycleSwitch/rightVariable", 'B', -1},
	{"generalPanel/cycleSwitch/leftVariable", 'B', -1},
	{"generalPanel/emergencyStop/action", 'B', -1},
	{"functional/batchProd", 'B', -1},
	{"execstatus", 'I', -1},
	{"simuperiod", 'F', -1},
	{"bpcurrentinstance", 'I', -1},
	{"bpcurrentlocation", 'I', -1},
	{"bpcurrentprepostcode", 'I', -1},
	{"bpcurrenttypeerror", 'I', -1},
	{"bpcurrentrank", 'I', -1},
	{"signature", 'I', -1},
	{"generationtime", 'I', -1},
	{"maxsimuperiod", 'F', -1},
	{"minsimuperiod", 'F', -1},
	{"realsimuperiod", 'F', -1},
	{"traceon", 'B', -1},
	{"resettrace", 'B', -1},
	{"tracesnapshop", 'B', -1},
	{"mxmeanvariablemodification", 'F', -1},
	{"mxminvariablemodification", 'F', -1},
	{"mxmaxvariablemodification", 'F', -1},
	{"allowpreconditions", 'B', -1},
	{"allowpostconditions", 'B', -1}
};

#define _SIMU_PERIOD (mem.Float[mx_sce_variables[0].index].CB_current_value)
#define _ANIM_PERIOD (mem.Float[mx_sce_variables[1].index].CB_current_value)
#define _SCENARIO_PERIOD (mem.Float[mx_sce_variables[2].index].CB_current_value)
#define _SIMU_REALPERIOD (mem.Float[mx_sce_variables[3].index].CB_current_value)
#define _RESERVED (mem.Float[mx_sce_variables[4].index].CB_current_value)
#define _RESERVED_DRIVER_STATUS (*(short *)(&(mem.Int[mx_sce_variables[5].index].CB_current_value)))
#define _RESERVED_SCENARIO_STATUS (*(short *)(&(mem.Int[mx_sce_variables[6].index].CB_current_value)))
#define _TASKS_COUNTER (*(short *)(&(mem.Int[mx_sce_variables[7].index].CB_current_value)))
#define powerUp (mem.Bool[mx_sce_variables[8].index].CB_current_value)
#define autoSwitch (mem.Bool[mx_sce_variables[9].index].CB_current_value)
#define manualSwitch (mem.Bool[mx_sce_variables[10].index].CB_current_value)
#define startCycle (mem.Bool[mx_sce_variables[11].index].CB_current_value)
#define batchCycle (mem.Bool[mx_sce_variables[12].index].CB_current_value)
#define pieceCycle (mem.Bool[mx_sce_variables[13].index].CB_current_value)
#define emergencyStop (mem.Bool[mx_sce_variables[14].index].CB_current_value)
#define batchProd (mem.Bool[mx_sce_variables[15].index].CB_current_value)
#define execstatus (*(int *)(&(mem.Int[mx_sce_variables[16].index].CB_current_value)))
#define simuperiod (mem.Float[mx_sce_variables[17].index].CB_current_value)
#define bpcurrentinstance (*(int *)(&(mem.Int[mx_sce_variables[18].index].CB_current_value)))
#define bpcurrentlocation (*(int *)(&(mem.Int[mx_sce_variables[19].index].CB_current_value)))
#define bpcurrentprepostcode (*(int *)(&(mem.Int[mx_sce_variables[20].index].CB_current_value)))
#define bpcurrenttypeerror (*(int *)(&(mem.Int[mx_sce_variables[21].index].CB_current_value)))
#define bpcurrentrank (*(int *)(&(mem.Int[mx_sce_variables[22].index].CB_current_value)))
#define signature (*(int *)(&(mem.Int[mx_sce_variables[23].index].CB_current_value)))
#define generationtime (*(int *)(&(mem.Int[mx_sce_variables[24].index].CB_current_value)))
#define maxsimuperiod (mem.Float[mx_sce_variables[25].index].CB_current_value)
#define minsimuperiod (mem.Float[mx_sce_variables[26].index].CB_current_value)
#define realsimuperiod (mem.Float[mx_sce_variables[27].index].CB_current_value)
#define traceon (mem.Bool[mx_sce_variables[28].index].CB_current_value)
#define resettrace (mem.Bool[mx_sce_variables[29].index].CB_current_value)
#define tracesnapshop (mem.Bool[mx_sce_variables[30].index].CB_current_value)
#define mxmeanvariablemodification (mem.Float[mx_sce_variables[31].index].CB_current_value)
#define mxminvariablemodification (mem.Float[mx_sce_variables[32].index].CB_current_value)
#define mxmaxvariablemodification (mem.Float[mx_sce_variables[33].index].CB_current_value)
#define allowpreconditions (mem.Bool[mx_sce_variables[34].index].CB_current_value)
#define allowpostconditions (mem.Bool[mx_sce_variables[35].index].CB_current_value)


#define CB_VAR_NAME(v) &v##_
void waitMilliSeconds(unsigned long t) {
	return waitMicroSeconds(t*1000);
}


int mx_sce_function()
{


#ifndef mx_verif
	mem.mx_sce_etat(numeroScenario) = _etat+1;
#endif
	switch(_etat) {
		case init : {
					breakpoint(1);
					runSimu();
					breakpoint(13);
					emergencyStop = 0;
					breakpoint(35);
					powerUp = 1;
					breakpoint(50);
					manualSwitch = 0;
					breakpoint(71);
					autoSwitch = 1;
					breakpoint(91);
					batchCycle = 1;
					breakpoint(109);
					pieceCycle = 0;
					breakpoint(130);
					startCycle = 1;
					breakpoint(151);
					if ((batchProd)) {
						breakpoint(171);
						sceNext(normal);
					}
					breakpoint(196);
					sceNext(init);
			break;
		}
		case normal : {
					breakpoint(1);
					startCycle = 0;
					breakpoint(20);
					sceNext(end);
			break;
		}
		case end : {
			break;
		}
	}


	free_all_alloc();
	return(0);
}

int nbBreakPoints=13;
BreakPoint breakpoints[13]={{1,0,init},{13,0,init},{35,0,init},{50,0,init},{71,0,init},{91,0,init},{109,0,init},{130,0,init},{171,0,init},{151,0,init},{196,0,init},{1,0,normal},{20,0,normal}};
int estC = 0;
