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
static CB_Mem_Bool *actuator_autoFwdCmd;
static CB_Mem_Bool *actuator_autoBwdCmd;
static CB_Mem_Bool *actuator_forwardPB;
static CB_Mem_Bool *actuator_backwardPB;
static CB_Mem_Bool *actuator_offPB;
static CB_Mem_Bool *actuator_generalFault;
static CB_Mem_Bool *actuator_backwardCmd;
static CB_Mem_Bool *actuator_forwardCmd;
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
#define autoFwdCmd (actuator_autoFwdCmd->CB_previous_value)		/* Automatic forward command */
#define autoBwdCmd (actuator_autoBwdCmd->CB_previous_value)		/* Automatic backward command */
#define forwardPB (actuator_forwardPB->CB_previous_value)		/* Forward pushbutton */
#define backwardPB (actuator_backwardPB->CB_previous_value)		/* Backward pushbutton */
#define offPB (actuator_offPB->CB_previous_value)		/* Off pushbutton */
#define generalFault (actuator_generalFault->CB_previous_value)		/* General fault of the engine */
#define backwardCmd (actuator_backwardCmd->CB_current_value)		/* Backward command */
#define forwardCmd (actuator_forwardCmd->CB_current_value)		/* Forward command */

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

label1:	/* Forward command */
	forwardCmd = (((autoMode & autoFwdCmd) | ((((manualMode & forwardCmd) | ((manualMode & forwardPB) & !backwardPB)) & !offPB) & !backwardCmd)) & !generalFault);
label2:	/* Backward command */
	backwardCmd = (((autoMode & autoBwdCmd) | ((((manualMode & backwardCmd) | ((manualMode & backwardPB) & !forwardPB)) & !offPB) & !forwardCmd)) & !generalFault);

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
		CB_freeze_bool(actuator_backwardCmd);
		CB_freeze_bool(actuator_forwardCmd);
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
#undef autoFwdCmd
#undef autoBwdCmd
#undef forwardPB
#undef backwardPB
#undef offPB
#undef generalFault
#undef backwardCmd
#undef forwardCmd

