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
static CB_Mem_Bool *actuator_autoHSCmd;
static CB_Mem_Bool *actuator_autoLSCmd;
static CB_Mem_Bool *actuator_forwardPB;
static CB_Mem_Bool *actuator_backwardPB;
static CB_Mem_Bool *actuator_highSpeedPB;
static CB_Mem_Bool *actuator_lowSpeedPB;
static CB_Mem_Bool *actuator_stopPB;
static CB_Mem_Bool *actuator_generalFault;
static CB_Mem_Bool *actuator_forwardCmd;
static CB_Mem_Bool *actuator_backwardCmd;
static CB_Mem_Bool *actuator_highSpeedCmd;
static CB_Mem_Bool *actuator_lowSpeedCmd;
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
#define autoHSCmd (actuator_autoHSCmd->CB_previous_value)		/* Automatic high speed command */
#define autoLSCmd (actuator_autoLSCmd->CB_previous_value)		/* Automatic low speed command */
#define forwardPB (actuator_forwardPB->CB_previous_value)		/* Forward pushbutton */
#define backwardPB (actuator_backwardPB->CB_previous_value)		/* Backward pushbutton */
#define highSpeedPB (actuator_highSpeedPB->CB_previous_value)		/* High speed pushbutton */
#define lowSpeedPB (actuator_lowSpeedPB->CB_previous_value)		/* Low speed pushbutton */
#define stopPB (actuator_stopPB->CB_previous_value)		/* Stop pushbutton */
#define generalFault (actuator_generalFault->CB_previous_value)		/* General fault of the engine */
#define forwardCmd (actuator_forwardCmd->CB_current_value)		/* Forward command */
#define backwardCmd (actuator_backwardCmd->CB_current_value)		/* Backward command */
#define highSpeedCmd (actuator_highSpeedCmd->CB_current_value)		/* High speed command */
#define lowSpeedCmd (actuator_lowSpeedCmd->CB_current_value)		/* Low speed command */

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
	forwardCmd = (((autoMode & autoFwdCmd) | ((((manualMode & forwardCmd) | ((manualMode & forwardPB) & !backwardPB)) & !stopPB) & !backwardCmd)) & !generalFault);
label2:	/* Backward command */
	backwardCmd = (((autoMode & autoBwdCmd) | ((((manualMode & backwardCmd) | ((manualMode & backwardPB) & !forwardPB)) & !stopPB) & !forwardCmd)) & !generalFault);
label3:	/* High speed and low speed commands */
	highSpeedCmd = (((autoMode & autoHSCmd) | (((manualMode & highSpeedPB) | (manualMode & highSpeedCmd)) & !lowSpeedPB)) & !generalFault);
	lowSpeedCmd = (((autoMode & autoLSCmd) | (((manualMode & lowSpeedPB) | (manualMode & lowSpeedCmd)) & !highSpeedPB)) & !generalFault);

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
		CB_freeze_bool(actuator_forwardCmd);
		CB_freeze_bool(actuator_backwardCmd);
		CB_freeze_bool(actuator_highSpeedCmd);
		CB_freeze_bool(actuator_lowSpeedCmd);
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
#undef autoHSCmd
#undef autoLSCmd
#undef forwardPB
#undef backwardPB
#undef highSpeedPB
#undef lowSpeedPB
#undef stopPB
#undef generalFault
#undef forwardCmd
#undef backwardCmd
#undef highSpeedCmd
#undef lowSpeedCmd

