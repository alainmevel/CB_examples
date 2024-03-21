#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern FCT(int, execNode,(int));
extern int set_character_position(int cpos,int nb);
extern int set_variable_out_of_bounds(int varPos);

/*****************************************************
                             Variables
******************************************************/
static CB_Index defaults__num = 0;
static CB_Mem_Bool *defaults_cmdOn;
static CB_Mem_Bool *defaults_thermal;
static CB_Mem_Bool *defaults_onFB;
static CB_Mem_Bool *defaults_pbAcknowledgement;
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
static CB_Mem_Int *defaults_preset;
static CB_Mem_Bool *defaults_defaultThermal;
static CB_Mem_Bool *defaults_defaultOnFb;
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
#define cmdOn (defaults_cmdOn->CB_previous_value)
#define thermal (defaults_thermal->CB_previous_value)		/* Thermal of the pump */
#define onFB (defaults_onFB->CB_previous_value)
#define pbAcknowledgement (defaults_pbAcknowledgement->CB_previous_value)		/* PB Acknowledgement */
#define defaultGeneral (defaults_defaultGeneral->CB_current_value)		/* Default of the general engine */
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
#define preset (*(long *)(&(defaults_preset->CB_current_value)))
#define defaultThermal (defaults_defaultThermal->CB_current_value)		/* Default thermal (electric) */
#define defaultOnFb (defaults_defaultOnFb->CB_current_value)

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
	defaults_preset = self.Int+6;
	defaults_defaultThermal = self.Bool+2;
	defaults_defaultOnFb = self.Bool+3;

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
		defaultThermal = 0;
	}
	if(pbAcknowledgement) {
		defaultOnFb = 0;
	}
	if(pbAcknowledgement) {
		defaultGeneral = 0;
	}
label2:	/* Default feedback contact forward */
	if(((ton_sec_1_Q = ton_sec_Q(cmdOn, preset, &ton_sec_1_i_ton, &ton_sec_1_t1_ton, &ton_sec_1_t2_ton)) & !onFB)) {
		defaultOnFb = 1;
	}
label3:	/* Default electric */
	if((ton_sec_2_Q = ton_sec_Q(!thermal, preset, &ton_sec_2_i_ton, &ton_sec_2_t1_ton, &ton_sec_2_t2_ton))) {
		defaultThermal = 1;
	}
label4:	/* Default general */
	if((defaultOnFb | defaultThermal)) {
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
	self.Bool+=4;
	self.Int+=7;
	self.Float+=2;

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
#undef thermal
#undef onFB
#undef pbAcknowledgement
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
#undef preset
#undef defaultThermal
#undef defaultOnFb

