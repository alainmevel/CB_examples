#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"
#include "CB_fdbm.h"

extern FCT(int, execNode,(int));
extern int set_character_position(int cpos,int nb);
extern int set_variable_out_of_bounds(int varPos);

/*****************************************************
                             Variables
******************************************************/
static CB_Index defaults__num = 0;
static CB_Mem_Bool *defaults_cmdOn;
static CB_Mem_Bool *defaults_cmOff;
static CB_Mem_Bool *defaults_pbAcknowledgement;
static CB_Mem_Bool *defaults_sensorOn;
static CB_Mem_Bool *defaults_sensorOff;
static CB_Mem_Bool *defaults_defaultGeneral;
static CB_Mem_Int *defaults_ton_sec_1_i_ton;
static CB_Mem_Float *defaults_ton_sec_1_t1_ton;
static CB_Mem_Int *defaults_ton_sec_1_t2_ton;
static CB_Mem_Bool *defaults_ton_sec_1_Q;
static CB_Mem_Int *defaults_ton_sec_1_CV;
static CB_Mem_Int *defaults_ton_sec_2_i_ton;
static CB_Mem_Float *defaults_ton_sec_2_t1_ton;
static CB_Mem_Int *defaults_ton_sec_2_t2_ton;
static CB_Mem_Bool *defaults_ton_sec_2_Q;
static CB_Mem_Int *defaults_ton_sec_2_CV;
static CB_Mem_Int *defaults_ton_ms_3_i_tonms;
static CB_Mem_Float *defaults_ton_ms_3_t1_tonms;
static CB_Mem_Int *defaults_ton_ms_3_t2_tonms;
static CB_Mem_Bool *defaults_ton_ms_3_Q;
static CB_Mem_Int *defaults_ton_ms_3_CV;
static CB_Mem_Int *defaults_presetMvt;
static CB_Mem_Int *defaults_presetDisc;
static CB_Mem_Bool *defaults_defaultSensors;
static CB_Mem_Bool *defaults_defaultOn;
static CB_Mem_Bool *defaults_defaultOff;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

#define COUR(v) (defaults_##v->CB_current_value)
#define FIGE(v) (defaults_##v->CB_previous_value)
#define FM(v) (defaults_##v->CB_positive_edge)
#define FD(v) (defaults_##v->CB_negative_edge)
/*****************************************************
                             Variables
******************************************************/
#define cmdOn (defaults_cmdOn->CB_previous_value)		/* ON Command */
#define cmOff (defaults_cmOff->CB_previous_value)		/* OFF Command */
#define pbAcknowledgement (defaults_pbAcknowledgement->CB_previous_value)		/* Acknowledgement pushbutton */
#define sensorOn (defaults_sensorOn->CB_previous_value)
#define sensorOff (defaults_sensorOff->CB_previous_value)
#define defaultGeneral (defaults_defaultGeneral->CB_current_value)		/* default of the general valve */
#define ton_sec_1_i_ton (*(long *)(&(defaults_ton_sec_1_i_ton->CB_current_value)))		/* _____ */
#define ton_sec_1_t1_ton (defaults_ton_sec_1_t1_ton->CB_current_value)		/* _____ */
#define ton_sec_1_t2_ton (*(long *)(&(defaults_ton_sec_1_t2_ton->CB_current_value)))		/* _____ */
#define ton_sec_1_Q (defaults_ton_sec_1_Q->CB_current_value)		/* _____ */
#define ton_sec_1_CV (*(long *)(&(defaults_ton_sec_1_CV->CB_current_value)))		/* _____ */
#define ton_sec_2_i_ton (*(long *)(&(defaults_ton_sec_2_i_ton->CB_current_value)))		/* _____ */
#define ton_sec_2_t1_ton (defaults_ton_sec_2_t1_ton->CB_current_value)		/* _____ */
#define ton_sec_2_t2_ton (*(long *)(&(defaults_ton_sec_2_t2_ton->CB_current_value)))		/* _____ */
#define ton_sec_2_Q (defaults_ton_sec_2_Q->CB_current_value)		/* _____ */
#define ton_sec_2_CV (*(long *)(&(defaults_ton_sec_2_CV->CB_current_value)))		/* _____ */
#define ton_ms_3_i_tonms (*(long *)(&(defaults_ton_ms_3_i_tonms->CB_current_value)))		/* _____ */
#define ton_ms_3_t1_tonms (defaults_ton_ms_3_t1_tonms->CB_current_value)		/* _____ */
#define ton_ms_3_t2_tonms (*(long *)(&(defaults_ton_ms_3_t2_tonms->CB_current_value)))		/* _____ */
#define ton_ms_3_Q (defaults_ton_ms_3_Q->CB_current_value)		/* _____ */
#define ton_ms_3_CV (*(long *)(&(defaults_ton_ms_3_CV->CB_current_value)))		/* _____ */
#define presetMvt (*(long *)(&(defaults_presetMvt->CB_current_value)))		/* in seconds */
#define presetDisc (*(long *)(&(defaults_presetDisc->CB_current_value)))		/* in milliseconds */
#define defaultSensors (defaults_defaultSensors->CB_current_value)		/* Discordance between sensors */
#define defaultOn (defaults_defaultOn->CB_current_value)		/* Default of opening */
#define defaultOff (defaults_defaultOff->CB_current_value)		/* Default of closing */

inline static int cmd_equipment_library__defaults_preconditions()
{
	return(0);
}

inline static int cmd_equipment_library__defaults_postconditions()
{
	return(0);
}

static int cmd_equipment_library__defaults()
{
	if(execNode(self_num)) {
/*****************************************************
                             Internals
******************************************************/
	defaults_ton_sec_1_i_ton = self.Int+0;
	defaults_ton_sec_1_t1_ton = self.Float+0;
	defaults_ton_sec_1_t2_ton = self.Int+1;
	defaults_ton_sec_1_Q = self.Bool+0;
	defaults_ton_sec_1_CV = self.Int+2;
	defaults_ton_sec_2_i_ton = self.Int+3;
	defaults_ton_sec_2_t1_ton = self.Float+1;
	defaults_ton_sec_2_t2_ton = self.Int+4;
	defaults_ton_sec_2_Q = self.Bool+1;
	defaults_ton_sec_2_CV = self.Int+5;
	defaults_ton_ms_3_i_tonms = self.Int+6;
	defaults_ton_ms_3_t1_tonms = self.Float+2;
	defaults_ton_ms_3_t2_tonms = self.Int+7;
	defaults_ton_ms_3_Q = self.Bool+2;
	defaults_ton_ms_3_CV = self.Int+8;
	defaults_presetMvt = self.Int+9;
	defaults_presetDisc = self.Int+10;
	defaults_defaultSensors = self.Bool+3;
	defaults_defaultOn = self.Bool+4;
	defaults_defaultOff = self.Bool+5;

/*****************************************************
                             Pre-conditions execution
******************************************************/
	if(allowpreconditions->CB_current_value){
		int __preconditions_value;

		__preconditions_value = cmd_equipment_library__defaults_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:	/* Acknowledgement of the default */
	if(pbAcknowledgement) {
		defaultSensors = 0;
	}
	if(pbAcknowledgement) {
		defaultOn = 0;
	}
	if(pbAcknowledgement) {
		defaultOff = 0;
	}
	if(pbAcknowledgement) {
		defaultGeneral = 0;
	}
label2:	/* Default of movements */
	if(((ton_sec_1_Q = ton_sec_Q(cmdOn, presetMvt, &ton_sec_1_i_ton, &ton_sec_1_t1_ton, &ton_sec_1_t2_ton)) & !sensorOn)) {
		defaultOn = 1;
	}
	if(((ton_sec_2_Q = ton_sec_Q(cmOff, presetMvt, &ton_sec_2_i_ton, &ton_sec_2_t1_ton, &ton_sec_2_t2_ton)) & !sensorOff)) {
		defaultOff = 1;
	}
label3:	/* Default of discordance */
	if((ton_ms_3_Q = ton_ms_Q((sensorOn & sensorOff), presetDisc, &ton_ms_3_i_tonms, &ton_ms_3_t1_tonms, &ton_ms_3_t2_tonms))) {
		defaultSensors = 1;
	}
label4:	/* Default general */
	if((defaultSensors | (defaultOn | defaultOff))) {
		defaultGeneral = 1;
	}
	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(defaults_defaultGeneral);
	}
	}
	self.Bool+=6;
	self.Int+=11;
	self.Float+=3;

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = cmd_equipment_library__defaults_postconditions();
		if(__postconditions_value != 0) {
			return(__postconditions_value);
		}
	}

	return 0;
}

#undef COUR
#undef FIGE
#undef FM
#undef FD
#undef cmdOn
#undef cmOff
#undef pbAcknowledgement
#undef sensorOn
#undef sensorOff
#undef defaultGeneral
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
#undef presetDisc
#undef defaultSensors
#undef defaultOn
#undef defaultOff

