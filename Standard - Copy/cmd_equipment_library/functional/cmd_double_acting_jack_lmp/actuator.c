#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index actuator__num = 0;
static CB_Mem_Bool *actuator_autoMode;
static CB_Mem_Bool *actuator_manualMode;
static CB_Mem_Bool *actuator_autoWorkCmd;
static CB_Mem_Bool *actuator_autoRestCmd;
static CB_Mem_Bool *actuator_outletSensor;
static CB_Mem_Bool *actuator_inletSensor;
static CB_Mem_Bool *actuator_valveWorkPB;
static CB_Mem_Bool *actuator_valveRestPB;
static CB_Mem_Bool *actuator_generalFault;
static CB_Mem_Bool *actuator_workCmd;
static CB_Mem_Bool *actuator_restCmd;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

#define COUR(v) (actuator_##v->CB_current_value)
#define FIGE(v) (actuator_##v->CB_previous_value)
#define FM(v) (actuator_##v->CB_positive_edge)
#define FD(v) (actuator_##v->CB_negative_edge)
/*****************************************************
                             Variables
******************************************************/
#define autoMode (actuator_autoMode->CB_previous_value)		/* Automatic mode */
#define manualMode (actuator_manualMode->CB_previous_value)		/* Manual mode */
#define autoWorkCmd (actuator_autoWorkCmd->CB_previous_value)		/* Automatic work command to the valve */
#define autoRestCmd (actuator_autoRestCmd->CB_previous_value)		/* Automatic rest command to the valve */
#define outletSensor (actuator_outletSensor->CB_previous_value)		/* Outlet sensor */
#define inletSensor (actuator_inletSensor->CB_previous_value)		/* Inlet sensor */
#define valveWorkPB (actuator_valveWorkPB->CB_previous_value)		/* Valve work pushbutton */
#define valveRestPB (actuator_valveRestPB->CB_previous_value)		/* Valve rest pushbutton */
#define generalFault (actuator_generalFault->CB_previous_value)		/* General fault of the jack */
#define workCmd (actuator_workCmd->CB_current_value)		/* Work command to the valve */
#define restCmd (actuator_restCmd->CB_current_value)		/* Rest command to the valve */

inline static int cmd_equipment_library__actuator_preconditions()
{
	return(0);
}

inline static int cmd_equipment_library__actuator_postconditions()
{
	return(0);
}

static int cmd_equipment_library__actuator()
{
	if(exec_term_node(self_num)) {
/*****************************************************
                             Internals
******************************************************/

/*****************************************************
                             Pre-conditions execution
******************************************************/
	if(allowpreconditions->CB_current_value){
		int __preconditions_value;

		__preconditions_value = cmd_equipment_library__actuator_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:	/* Work command */
	workCmd = (((((autoMode & autoWorkCmd) & !autoRestCmd) | ((manualMode & valveWorkPB) & !valveRestPB)) & !outletSensor) & !generalFault);
label2:	/* Rest command */
	restCmd = (((((autoMode & autoRestCmd) & !autoWorkCmd) | ((manualMode & valveRestPB) & !valveWorkPB)) & !inletSensor) & !generalFault);
label3:

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = cmd_equipment_library__actuator_postconditions();
		if(__postconditions_value != 0) {
			return(__postconditions_value);
		}
	}

	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(actuator_workCmd);
		CB_freeze_bool(actuator_restCmd);
	}
	}
	return 0;
}
#undef COUR
#undef FIGE
#undef FM
#undef FD
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

