#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index faults__num = 0;
static CB_Mem_Bool *faults_generalFault1;
static CB_Mem_Bool *faults_generalFault2;
static CB_Mem_Bool *faults_generalFault3;
static CB_Mem_Bool *faults_generalFault4;
static CB_Mem_Bool *faults_fault;
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
#define generalFault1 (faults_generalFault1->CB_previous_value)		/* Défaut général */
#define generalFault2 (faults_generalFault2->CB_previous_value)		/* Défaut général */
#define generalFault3 (faults_generalFault3->CB_previous_value)		/* Défaut général */
#define generalFault4 (faults_generalFault4->CB_previous_value)		/* Défaut général */
#define fault (faults_fault->CB_current_value)

inline static int batch__faults_preconditions()
{
	return(0);
}

inline static int batch__faults_postconditions()
{
	return(0);
}

static int batch__faults()
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

		__preconditions_value = batch__faults_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:
	fault = (generalFault4 | (generalFault1 | (generalFault2 | generalFault3)));
label2:
label3:

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = batch__faults_postconditions();
		if(__postconditions_value != 0) {
			return(__postconditions_value);
		}
	}

	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(faults_fault);
	}
	}
	return 0;
}
#undef COUR
#undef FIGE
#undef FM
#undef FD
#undef generalFault1
#undef generalFault2
#undef generalFault3
#undef generalFault4
#undef fault

