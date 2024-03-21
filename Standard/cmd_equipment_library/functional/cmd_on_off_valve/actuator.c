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
static CB_Mem_Bool *actuator_autoCloseCmd;
static CB_Mem_Bool *actuator_autoOpenCmd;
static CB_Mem_Bool *actuator_closedSensorFB;
static CB_Mem_Bool *actuator_openedSensorFB;
static CB_Mem_Bool *actuator_closeValvePB;
static CB_Mem_Bool *actuator_openValvePB;
static CB_Mem_Bool *actuator_generalFault;
static CB_Mem_Bool *actuator_closeCmd;
static CB_Mem_Bool *actuator_openCmd;
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
#define autoCloseCmd (actuator_autoCloseCmd->CB_previous_value)		/* Automatic close command to the valve */
#define autoOpenCmd (actuator_autoOpenCmd->CB_previous_value)		/* Automatic open command to the valve */
#define closedSensorFB (actuator_closedSensorFB->CB_previous_value)		/* Closed sensor feedback */
#define openedSensorFB (actuator_openedSensorFB->CB_previous_value)		/* Opened sensor feedback */
#define closeValvePB (actuator_closeValvePB->CB_previous_value)		/* Close valve pushbutton */
#define openValvePB (actuator_openValvePB->CB_previous_value)		/* Open valve pushbutton */
#define generalFault (actuator_generalFault->CB_previous_value)		/* General fault of the valve */
#define closeCmd (actuator_closeCmd->CB_current_value)		/* Close command to the valve */
#define openCmd (actuator_openCmd->CB_current_value)		/* Open command to the valve */

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

label1:	/* Open command */
	openCmd = (((((autoMode & autoOpenCmd) & !autoCloseCmd) | ((manualMode & openValvePB) & !closeValvePB)) & !openedSensorFB) & !generalFault);
label2:	/* Close command */
	closeCmd = (((((autoMode & autoCloseCmd) & !autoOpenCmd) | ((manualMode & closeValvePB) & !openValvePB)) & !closedSensorFB) & !generalFault);
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
		CB_freeze_bool(actuator_closeCmd);
		CB_freeze_bool(actuator_openCmd);
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
#undef autoCloseCmd
#undef autoOpenCmd
#undef closedSensorFB
#undef openedSensorFB
#undef closeValvePB
#undef openValvePB
#undef generalFault
#undef closeCmd
#undef openCmd

