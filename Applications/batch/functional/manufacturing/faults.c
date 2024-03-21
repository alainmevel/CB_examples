#define mx_self_is_rel
#include "cb_comp.h"
#include "iec_1131.h"

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index faults__num = 0;
static CB_Mem_Bool *faults_fault3;
static CB_Mem_Bool *faults_fault2;
static CB_Mem_Bool *faults_fault1;
static CB_Mem_Bool *faults_generalFault;
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
#define fault3 (faults_fault3->CB_previous_value)
#define fault2 (faults_fault2->CB_previous_value)
#define fault1 (faults_fault1->CB_previous_value)
#define generalFault (faults_generalFault->CB_current_value)

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
	generalFault = (fault3 | (fault1 | fault2));
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
		CB_freeze_bool(faults_generalFault);
	}
	}
	return 0;
}
#undef COUR
#undef FIGE
#undef FM
#undef FD
#undef fault3
#undef fault2
#undef fault1
#undef generalFault

