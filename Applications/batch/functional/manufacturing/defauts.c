#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern FCT(int, execNode,(int));
extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index defauts__num = 0;
static CB_Mem_Bool *defauts_defaut3;
static CB_Mem_Bool *defauts_defaut2;
static CB_Mem_Bool *defauts_defaut;
static CB_Mem_Bool *defauts_defautGeneral;
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
#define defaut3 (defauts_defaut3->CB_previous_value)
#define defaut2 (defauts_defaut2->CB_previous_value)
#define defaut (defauts_defaut->CB_previous_value)
#define defautGeneral (defauts_defautGeneral->CB_current_value)

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
	defautGeneral = (defaut3 | (defaut | defaut2));
label2:
label3:
	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(defauts_defautGeneral);
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
#undef defaut3
#undef defaut2
#undef defaut
#undef defautGeneral

