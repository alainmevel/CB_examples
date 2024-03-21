#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern FCT(int, execNode,(int));
extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index defauts__num = 0;
static CB_Mem_Bool *defauts_defautGeneral1;
static CB_Mem_Bool *defauts_defautGeneral2;
static CB_Mem_Bool *defauts_defautGeneral3;
static CB_Mem_Bool *defauts_defautGeneral4;
static CB_Mem_Bool *defauts_defaut;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

#define COUR(v) (defauts_##v->CB_current_value)
#define FIGE(v) (defauts_##v->CB_previous_value)
#define FM(v) (defauts_##v->CB_positive_edge)
#define FD(v) (defauts_##v->CB_negative_edge)
/*****************************************************
                             Variables
******************************************************/
#define defautGeneral1 (defauts_defautGeneral1->CB_previous_value)		/* Défaut général */
#define defautGeneral2 (defauts_defautGeneral2->CB_previous_value)		/* Défaut général */
#define defautGeneral3 (defauts_defautGeneral3->CB_previous_value)		/* Défaut général */
#define defautGeneral4 (defauts_defautGeneral4->CB_previous_value)		/* Défaut général */
#define defaut (defauts_defaut->CB_current_value)

inline static int batch__defauts_preconditions()
{
	return(0);
}

inline static int batch__defauts_postconditions()
{
	return(0);
}

static int batch__defauts()
{
	if(execNode(self_num)) {
/*****************************************************
                             Internals
******************************************************/

/*****************************************************
                             Pre-conditions execution
******************************************************/
	if(allowpreconditions->CB_current_value){
		int __preconditions_value;

		__preconditions_value = batch__defauts_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:
	defaut = (defautGeneral4 | (defautGeneral1 | (defautGeneral2 | defautGeneral3)));
label2:
label3:
	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(defauts_defaut);
	}
	}

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = batch__defauts_postconditions();
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
#undef defautGeneral1
#undef defautGeneral2
#undef defautGeneral3
#undef defautGeneral4
#undef defaut

