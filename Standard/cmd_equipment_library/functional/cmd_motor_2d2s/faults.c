#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index faults__num = 0;
static CB_Mem_Bool *faults_forwardCmd;
static CB_Mem_Bool *faults_backwardCmd;
static CB_Mem_Bool *faults_highSpeedCmd;
static CB_Mem_Bool *faults_lowSpeedCmd;
static CB_Mem_Bool *faults_thermalFB;
static CB_Mem_Bool *faults_forwardFB;
static CB_Mem_Bool *faults_backwardFB;
static CB_Mem_Bool *faults_highSpeedFB;
static CB_Mem_Bool *faults_lowSpeedFB;
static CB_Mem_Bool *faults_acknowledgePB;
static CB_Mem_Bool *faults_generalFault;
static CB_Mem_Int *faults_ton_sec_1_i_ton;
static CB_Mem_Float *faults_ton_sec_1_t1_ton;
static CB_Mem_Int *faults_ton_sec_1_t2_ton;
static CB_Mem_Bool *faults_ton_sec_1_Q;
static CB_Mem_Int *faults_ton_sec_1_CV;
static CB_Mem_Int *faults_ton_sec_2_i_ton;
static CB_Mem_Float *faults_ton_sec_2_t1_ton;
static CB_Mem_Int *faults_ton_sec_2_t2_ton;
static CB_Mem_Bool *faults_ton_sec_2_Q;
static CB_Mem_Int *faults_ton_sec_2_CV;
static CB_Mem_Int *faults_ton_sec_3_i_ton;
static CB_Mem_Float *faults_ton_sec_3_t1_ton;
static CB_Mem_Int *faults_ton_sec_3_t2_ton;
static CB_Mem_Bool *faults_ton_sec_3_Q;
static CB_Mem_Int *faults_ton_sec_3_CV;
static CB_Mem_Int *faults_preset;
static CB_Mem_Bool *faults_thermalFault;
static CB_Mem_Bool *faults_forwardFBFault;
static CB_Mem_Bool *faults_backwardFBFault;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

#define COUR(v) (faults_##v->CB_current_value)
#define FIGE(v) (faults_##v->CB_previous_value)
#define FM(v) (faults_##v->CB_positive_edge)
#define FD(v) (faults_##v->CB_negative_edge)
/*****************************************************
                             Variables
******************************************************/
#define forwardCmd (faults_forwardCmd->CB_previous_value)		/* Forward command */
#define backwardCmd (faults_backwardCmd->CB_previous_value)		/* Backward command */
#define highSpeedCmd (faults_highSpeedCmd->CB_previous_value)		/* High speed command */
#define lowSpeedCmd (faults_lowSpeedCmd->CB_previous_value)		/* Low speed command */
#define thermalFB (faults_thermalFB->CB_previous_value)		/* Feedback of the thermal protection of the engine */
#define forwardFB (faults_forwardFB->CB_previous_value)		/* Forward feedback */
#define backwardFB (faults_backwardFB->CB_previous_value)		/* Backward feedback */
#define highSpeedFB (faults_highSpeedFB->CB_previous_value)		/* High speed feedback */
#define lowSpeedFB (faults_lowSpeedFB->CB_previous_value)		/* Low speed feedback */
#define acknowledgePB (faults_acknowledgePB->CB_previous_value)		/* Acknowledgement pushbutton */
#define generalFault (faults_generalFault->CB_current_value)		/* General fault of the engine */
#define ton_sec_1_i_ton (*(long *)(&(faults_ton_sec_1_i_ton->CB_current_value)))		/* _____ */
#define ton_sec_1_t1_ton (faults_ton_sec_1_t1_ton->CB_current_value)		/* _____ */
#define ton_sec_1_t2_ton (*(long *)(&(faults_ton_sec_1_t2_ton->CB_current_value)))		/* _____ */
#define ton_sec_1_Q (faults_ton_sec_1_Q->CB_current_value)		/* _____ */
#define ton_sec_1_CV (*(long *)(&(faults_ton_sec_1_CV->CB_current_value)))		/* _____ */
#define ton_sec_2_i_ton (*(long *)(&(faults_ton_sec_2_i_ton->CB_current_value)))		/* _____ */
#define ton_sec_2_t1_ton (faults_ton_sec_2_t1_ton->CB_current_value)		/* _____ */
#define ton_sec_2_t2_ton (*(long *)(&(faults_ton_sec_2_t2_ton->CB_current_value)))		/* _____ */
#define ton_sec_2_Q (faults_ton_sec_2_Q->CB_current_value)		/* _____ */
#define ton_sec_2_CV (*(long *)(&(faults_ton_sec_2_CV->CB_current_value)))		/* _____ */
#define ton_sec_3_i_ton (*(long *)(&(faults_ton_sec_3_i_ton->CB_current_value)))		/* _____ */
#define ton_sec_3_t1_ton (faults_ton_sec_3_t1_ton->CB_current_value)		/* _____ */
#define ton_sec_3_t2_ton (*(long *)(&(faults_ton_sec_3_t2_ton->CB_current_value)))		/* _____ */
#define ton_sec_3_Q (faults_ton_sec_3_Q->CB_current_value)		/* _____ */
#define ton_sec_3_CV (*(long *)(&(faults_ton_sec_3_CV->CB_current_value)))		/* _____ */
#define preset (*(long *)(&(faults_preset->CB_current_value)))
#define thermalFault (faults_thermalFault->CB_current_value)		/* Thermal (electric) fault */
#define forwardFBFault (faults_forwardFBFault->CB_current_value)		/* Fault of the forward feedback */
#define backwardFBFault (faults_backwardFBFault->CB_current_value)		/* Fault of the backward feedback */

inline static int cmd_equipment_library__faults_preconditions()
{
	return(0);
}

inline static int cmd_equipment_library__faults_postconditions()
{
	return(0);
}

static int cmd_equipment_library__faults()
{
	if(exec_term_node(self_num)) {
/*****************************************************
                             Internals
******************************************************/
	faults_ton_sec_1_i_ton = self.Int + 0;
	faults_ton_sec_1_t1_ton = self.Float + 0;
	faults_ton_sec_1_t2_ton = self.Int + 1;
	faults_ton_sec_1_Q = self.Bool + 0;
	faults_ton_sec_1_CV = self.Int + 2;
	faults_ton_sec_2_i_ton = self.Int + 3;
	faults_ton_sec_2_t1_ton = self.Float + 1;
	faults_ton_sec_2_t2_ton = self.Int + 4;
	faults_ton_sec_2_Q = self.Bool + 1;
	faults_ton_sec_2_CV = self.Int + 5;
	faults_ton_sec_3_i_ton = self.Int + 6;
	faults_ton_sec_3_t1_ton = self.Float + 2;
	faults_ton_sec_3_t2_ton = self.Int + 7;
	faults_ton_sec_3_Q = self.Bool + 2;
	faults_ton_sec_3_CV = self.Int + 8;
	faults_preset = self.Int + 9;
	faults_thermalFault = self.Bool + 3;
	faults_forwardFBFault = self.Bool + 4;
	faults_backwardFBFault = self.Bool + 5;

/*****************************************************
                             Pre-conditions execution
******************************************************/
	if(allowpreconditions->CB_current_value){
		int __preconditions_value;

		__preconditions_value = cmd_equipment_library__faults_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:	/* Fault aknowledgement */
	if(acknowledgePB) {
		thermalFault = 0;
	}
	if(acknowledgePB) {
		forwardFBFault = 0;
	}
	if(acknowledgePB) {
		backwardFBFault = 0;
	}
	if(acknowledgePB) {
		generalFault = 0;
	}
label2:	/* Fault of forward and backward feedbacks */
	if((((ton_sec_1_Q = ton_sec_Q((forwardCmd & lowSpeedCmd), preset, &ton_sec_1_i_ton, &ton_sec_1_t1_ton, &ton_sec_1_t2_ton)) & !forwardFB) | ((((ton_sec_1_Q = ton_sec_Q((forwardCmd & lowSpeedCmd), preset, &ton_sec_1_i_ton, &ton_sec_1_t1_ton, &ton_sec_1_t2_ton)) & highSpeedCmd) & !highSpeedFB) | (((ton_sec_1_Q = ton_sec_Q((forwardCmd & lowSpeedCmd), preset, &ton_sec_1_i_ton, &ton_sec_1_t1_ton, &ton_sec_1_t2_ton)) & lowSpeedCmd) & !lowSpeedFB)))) {
		forwardFBFault = 1;
	}
	if((((ton_sec_2_Q = ton_sec_Q((backwardCmd & highSpeedCmd), preset, &ton_sec_2_i_ton, &ton_sec_2_t1_ton, &ton_sec_2_t2_ton)) & !backwardFB) | ((((ton_sec_2_Q = ton_sec_Q((backwardCmd & highSpeedCmd), preset, &ton_sec_2_i_ton, &ton_sec_2_t1_ton, &ton_sec_2_t2_ton)) & lowSpeedCmd) & !lowSpeedFB) | (((ton_sec_2_Q = ton_sec_Q((backwardCmd & highSpeedCmd), preset, &ton_sec_2_i_ton, &ton_sec_2_t1_ton, &ton_sec_2_t2_ton)) & highSpeedCmd) & !highSpeedFB)))) {
		backwardFBFault = 1;
	}
label3:	/* Electric fault */
	if((ton_sec_3_Q = ton_sec_Q(!thermalFB, preset, &ton_sec_3_i_ton, &ton_sec_3_t1_ton, &ton_sec_3_t2_ton))) {
		thermalFault = 1;
	}
label4:	/* General fault */
	if((thermalFault | (forwardFBFault | backwardFBFault))) {
		generalFault = 1;
	}

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = cmd_equipment_library__faults_postconditions();
		if(__postconditions_value != 0) {
			return(__postconditions_value);
		}
	}

	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(faults_generalFault);
	}
	}
	self.Bool+=6;
	self.Int+=10;
	self.Float+=3;
	return 0;
}
#undef COUR
#undef FIGE
#undef FM
#undef FD
#undef forwardCmd
#undef backwardCmd
#undef highSpeedCmd
#undef lowSpeedCmd
#undef thermalFB
#undef forwardFB
#undef backwardFB
#undef highSpeedFB
#undef lowSpeedFB
#undef acknowledgePB
#undef generalFault
#undef ton_sec_1_i_ton
#undef ton_sec_1_t1_ton
#undef ton_sec_1_t2_ton
#undef ton_sec_1_Q
#undef ton_sec_1_CV
#undef ton_sec_2_i_ton
#undef ton_sec_2_t1_ton
#undef ton_sec_2_t2_ton
#undef ton_sec_2_Q
#undef ton_sec_2_CV
#undef ton_sec_3_i_ton
#undef ton_sec_3_t1_ton
#undef ton_sec_3_t2_ton
#undef ton_sec_3_Q
#undef ton_sec_3_CV
#undef preset
#undef thermalFault
#undef forwardFBFault
#undef backwardFBFault

