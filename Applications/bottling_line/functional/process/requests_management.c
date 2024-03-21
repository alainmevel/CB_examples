#define mx_self_is_logi
#include "cb_comp.h"
#include "iec_1131.h"

extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index requests_management__num = 0;
static CB_Mem_Bool *requests_management_preparationValve1;
static CB_Mem_Bool *requests_management_preparationValve2;
static CB_Mem_Bool *requests_management_preparationValve3;
static CB_Mem_Bool *requests_management_preparationValve4;
static CB_Mem_Bool *requests_management_preparationPump1;
static CB_Mem_Bool *requests_management_preparationPump2;
static CB_Mem_Bool *requests_management_preparationAgitator;
static CB_Mem_Bool *requests_management_productionPump1;
static CB_Mem_Bool *requests_management_productionPump2;
static CB_Mem_Bool *requests_management_productionValve1;
static CB_Mem_Bool *requests_management_productionValve2;
static CB_Mem_Bool *requests_management_productionValve3;
static CB_Mem_Bool *requests_management_productionValve4;
static CB_Mem_Bool *requests_management_productionLSAgitator;
static CB_Mem_Bool *requests_management_productionHSAgitator;
static CB_Mem_Bool *requests_management_pump1;
static CB_Mem_Bool *requests_management_pump2;
static CB_Mem_Bool *requests_management_valve1;
static CB_Mem_Bool *requests_management_valve2;
static CB_Mem_Bool *requests_management_valve3;
static CB_Mem_Bool *requests_management_valve4;
static CB_Mem_Bool *requests_management_lowSpeedAgitator;
static CB_Mem_Bool *requests_management_highSpeedAgitator;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

#define COUR(v) (requests_management_##v->CB_current_value)
#define FIGE(v) (requests_management_##v->CB_previous_value)
#define FM(v) (requests_management_##v->CB_positive_edge)
#define FD(v) (requests_management_##v->CB_negative_edge)
/*****************************************************
                             Variables
******************************************************/
#define preparationValve1 (requests_management_preparationValve1->CB_previous_value)
#define preparationValve2 (requests_management_preparationValve2->CB_previous_value)
#define preparationValve3 (requests_management_preparationValve3->CB_previous_value)
#define preparationValve4 (requests_management_preparationValve4->CB_previous_value)
#define preparationPump1 (requests_management_preparationPump1->CB_previous_value)
#define preparationPump2 (requests_management_preparationPump2->CB_previous_value)
#define preparationAgitator (requests_management_preparationAgitator->CB_previous_value)
#define productionPump1 (requests_management_productionPump1->CB_previous_value)
#define productionPump2 (requests_management_productionPump2->CB_previous_value)
#define productionValve1 (requests_management_productionValve1->CB_previous_value)
#define productionValve2 (requests_management_productionValve2->CB_previous_value)
#define productionValve3 (requests_management_productionValve3->CB_previous_value)
#define productionValve4 (requests_management_productionValve4->CB_previous_value)
#define productionLSAgitator (requests_management_productionLSAgitator->CB_previous_value)
#define productionHSAgitator (requests_management_productionHSAgitator->CB_previous_value)
#define pump1 (requests_management_pump1->CB_current_value)
#define pump2 (requests_management_pump2->CB_current_value)
#define valve1 (requests_management_valve1->CB_current_value)
#define valve2 (requests_management_valve2->CB_current_value)
#define valve3 (requests_management_valve3->CB_current_value)
#define valve4 (requests_management_valve4->CB_current_value)
#define lowSpeedAgitator (requests_management_lowSpeedAgitator->CB_current_value)
#define highSpeedAgitator (requests_management_highSpeedAgitator->CB_current_value)

inline static int bottling_line__requests_management_preconditions()
{
	return(0);
}

inline static int bottling_line__requests_management_postconditions()
{
	return(0);
}

static int bottling_line__requests_management()
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

		__preconditions_value = bottling_line__requests_management_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:	/* Management of functional requests */
	valve1 = (preparationValve1 | productionValve1);
	valve2 = (preparationValve2 | productionValve2);
	valve3 = (preparationValve3 | productionValve3);
	valve4 = (preparationValve4 | productionValve4);
	highSpeedAgitator = productionHSAgitator;
label2:	/* Management of functional requests */
	pump1 = (preparationPump1 | productionPump1);
	pump2 = (preparationPump2 | productionPump2);
	lowSpeedAgitator = (preparationAgitator | productionLSAgitator);

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = bottling_line__requests_management_postconditions();
		if(__postconditions_value != 0) {
			return(__postconditions_value);
		}
	}

	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(requests_management_pump1);
		CB_freeze_bool(requests_management_pump2);
		CB_freeze_bool(requests_management_valve1);
		CB_freeze_bool(requests_management_valve2);
		CB_freeze_bool(requests_management_valve3);
		CB_freeze_bool(requests_management_valve4);
		CB_freeze_bool(requests_management_lowSpeedAgitator);
		CB_freeze_bool(requests_management_highSpeedAgitator);
	}
	}
	return 0;
}
#undef COUR
#undef FIGE
#undef FM
#undef FD
#undef preparationValve1
#undef preparationValve2
#undef preparationValve3
#undef preparationValve4
#undef preparationPump1
#undef preparationPump2
#undef preparationAgitator
#undef productionPump1
#undef productionPump2
#undef productionValve1
#undef productionValve2
#undef productionValve3
#undef productionValve4
#undef productionLSAgitator
#undef productionHSAgitator
#undef pump1
#undef pump2
#undef valve1
#undef valve2
#undef valve3
#undef valve4
#undef lowSpeedAgitator
#undef highSpeedAgitator

