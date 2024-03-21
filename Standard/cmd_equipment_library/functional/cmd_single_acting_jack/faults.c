#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index faults__num = 0;
static CB_Mem_Bool *faults_workCmd;
static CB_Mem_Bool *faults_outletSensor;
static CB_Mem_Bool *faults_inletSensor;
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
static CB_Mem_Int *faults_ton_ms_3_i_tonms;
static CB_Mem_Float *faults_ton_ms_3_t1_tonms;
static CB_Mem_Int *faults_ton_ms_3_t2_tonms;
static CB_Mem_Bool *faults_ton_ms_3_Q;
static CB_Mem_Int *faults_ton_ms_3_CV;
static CB_Mem_Int *faults_presetMvt;
static CB_Mem_Int *faults_presetDiscordance;
static CB_Mem_Bool *faults_discordanceFault;
static CB_Mem_Bool *faults_outletSensorFault;
static CB_Mem_Bool *faults_inletSensorFault;
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
#define workCmd (faults_workCmd->CB_previous_value)		/* Work command to the valve */
#define outletSensor (faults_outletSensor->CB_previous_value)		/* Outlet sensor */
#define inletSensor (faults_inletSensor->CB_previous_value)		/* Inlet sensor */
#define acknowledgePB (faults_acknowledgePB->CB_previous_value)		/* Acknowledgement pushbutton */
#define generalFault (faults_generalFault->CB_current_value)		/* General fault of the jack */
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
#define ton_ms_3_i_tonms (*(long *)(&(faults_ton_ms_3_i_tonms->CB_current_value)))		/* _____ */
#define ton_ms_3_t1_tonms (faults_ton_ms_3_t1_tonms->CB_current_value)		/* _____ */
#define ton_ms_3_t2_tonms (*(long *)(&(faults_ton_ms_3_t2_tonms->CB_current_value)))		/* _____ */
#define ton_ms_3_Q (faults_ton_ms_3_Q->CB_current_value)		/* _____ */
#define ton_ms_3_CV (*(long *)(&(faults_ton_ms_3_CV->CB_current_value)))		/* _____ */
#define presetMvt (*(long *)(&(faults_presetMvt->CB_current_value)))		/* in seconds */
#define presetDiscordance (*(long *)(&(faults_presetDiscordance->CB_current_value)))		/* in milliseconds */
#define discordanceFault (faults_discordanceFault->CB_current_value)		/* Discordance between sensors */
#define outletSensorFault (faults_outletSensorFault->CB_current_value)		/* Outlet sensor fault */
#define inletSensorFault (faults_inletSensorFault->CB_current_value)		/* Inlet sensor fault */

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
	faults_ton_ms_3_i_tonms = self.Int + 6;
	faults_ton_ms_3_t1_tonms = self.Float + 2;
	faults_ton_ms_3_t2_tonms = self.Int + 7;
	faults_ton_ms_3_Q = self.Bool + 2;
	faults_ton_ms_3_CV = self.Int + 8;
	faults_presetMvt = self.Int + 9;
	faults_presetDiscordance = self.Int + 10;
	faults_discordanceFault = self.Bool + 3;
	faults_outletSensorFault = self.Bool + 4;
	faults_inletSensorFault = self.Bool + 5;

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

label1:	/* Fault acknowledgement */
	if(acknowledgePB) {
		discordanceFault = 0;
	}
	if(acknowledgePB) {
		outletSensorFault = 0;
	}
	if(acknowledgePB) {
		inletSensorFault = 0;
	}
	if(acknowledgePB) {
		generalFault = 0;
	}
label2:	/* Faults of movements */
	if(((ton_sec_1_Q = ton_sec_Q(workCmd, presetMvt, &ton_sec_1_i_ton, &ton_sec_1_t1_ton, &ton_sec_1_t2_ton)) & !outletSensor)) {
		outletSensorFault = 1;
	}
	if(((ton_sec_2_Q = ton_sec_Q(!workCmd, presetMvt, &ton_sec_2_i_ton, &ton_sec_2_t1_ton, &ton_sec_2_t2_ton)) & !inletSensor)) {
		inletSensorFault = 1;
	}
label3:	/* Discordance fault */
	if((ton_ms_3_Q = ton_ms_Q((outletSensor & inletSensor), presetDiscordance, &ton_ms_3_i_tonms, &ton_ms_3_t1_tonms, &ton_ms_3_t2_tonms))) {
		discordanceFault = 1;
	}
label4:	/* General fault */
	if((discordanceFault | (outletSensorFault | inletSensorFault))) {
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
	self.Int+=11;
	self.Float+=3;
	return 0;
}
#undef COUR
#undef FIGE
#undef FM
#undef FD
#undef workCmd
#undef outletSensor
#undef inletSensor
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
#undef ton_ms_3_i_tonms
#undef ton_ms_3_t1_tonms
#undef ton_ms_3_t2_tonms
#undef ton_ms_3_Q
#undef ton_ms_3_CV
#undef presetMvt
#undef presetDiscordance
#undef discordanceFault
#undef outletSensorFault
#undef inletSensorFault

