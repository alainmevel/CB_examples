#define mx_self_is_logi
#include "cb_comp.h"
#include "iec_1131.h"

extern FCT(int, execNode,(int));
extern int raise_debug_break(int cpos, int prePostCode, int typeOfBreak, int rank);

/*****************************************************
                             Variables
******************************************************/
static CB_Index gestion_demandes__num = 0;
static CB_Mem_Bool *gestion_demandes_preparationVanne1;
static CB_Mem_Bool *gestion_demandes_preparationVanne2;
static CB_Mem_Bool *gestion_demandes_preparationVanne3;
static CB_Mem_Bool *gestion_demandes_preparationVanne4;
static CB_Mem_Bool *gestion_demandes_preparationPompe1;
static CB_Mem_Bool *gestion_demandes_preparationPompe2;
static CB_Mem_Bool *gestion_demandes_preparationAgitateur;
static CB_Mem_Bool *gestion_demandes_prodPompe1;
static CB_Mem_Bool *gestion_demandes_prodPompe2;
static CB_Mem_Bool *gestion_demandes_prodVanne1;
static CB_Mem_Bool *gestion_demandes_prodVanne2;
static CB_Mem_Bool *gestion_demandes_prodVanne3;
static CB_Mem_Bool *gestion_demandes_prodVanne4;
static CB_Mem_Bool *gestion_demandes_prodAgitateurLent;
static CB_Mem_Bool *gestion_demandes_prodAgitateurRapide;
static CB_Mem_Bool *gestion_demandes_pompe1;
static CB_Mem_Bool *gestion_demandes_pompe2;
static CB_Mem_Bool *gestion_demandes_vanne1;
static CB_Mem_Bool *gestion_demandes_vanne2;
static CB_Mem_Bool *gestion_demandes_vanne3;
static CB_Mem_Bool *gestion_demandes_vanne4;
static CB_Mem_Bool *gestion_demandes_agitateurLent;
static CB_Mem_Bool *gestion_demandes_agitateurRapide;
extern int compteur_char_alloc;
extern int compteur_booleen_alloc;
extern int compteur_entier_alloc;
extern int compteur_reel_alloc;

#define COUR(v) (gestion_demandes_##v->CB_current_value)
#define FIGE(v) (gestion_demandes_##v->CB_previous_value)
#define FM(v) (gestion_demandes_##v->CB_positive_edge)
#define FD(v) (gestion_demandes_##v->CB_negative_edge)
/*****************************************************
                             Variables
******************************************************/
#define preparationVanne1 (gestion_demandes_preparationVanne1->CB_previous_value)
#define preparationVanne2 (gestion_demandes_preparationVanne2->CB_previous_value)
#define preparationVanne3 (gestion_demandes_preparationVanne3->CB_previous_value)
#define preparationVanne4 (gestion_demandes_preparationVanne4->CB_previous_value)
#define preparationPompe1 (gestion_demandes_preparationPompe1->CB_previous_value)
#define preparationPompe2 (gestion_demandes_preparationPompe2->CB_previous_value)
#define preparationAgitateur (gestion_demandes_preparationAgitateur->CB_previous_value)
#define prodPompe1 (gestion_demandes_prodPompe1->CB_previous_value)
#define prodPompe2 (gestion_demandes_prodPompe2->CB_previous_value)
#define prodVanne1 (gestion_demandes_prodVanne1->CB_previous_value)
#define prodVanne2 (gestion_demandes_prodVanne2->CB_previous_value)
#define prodVanne3 (gestion_demandes_prodVanne3->CB_previous_value)
#define prodVanne4 (gestion_demandes_prodVanne4->CB_previous_value)
#define prodAgitateurLent (gestion_demandes_prodAgitateurLent->CB_previous_value)
#define prodAgitateurRapide (gestion_demandes_prodAgitateurRapide->CB_previous_value)
#define pompe1 (gestion_demandes_pompe1->CB_current_value)
#define pompe2 (gestion_demandes_pompe2->CB_current_value)
#define vanne1 (gestion_demandes_vanne1->CB_current_value)
#define vanne2 (gestion_demandes_vanne2->CB_current_value)
#define vanne3 (gestion_demandes_vanne3->CB_current_value)
#define vanne4 (gestion_demandes_vanne4->CB_current_value)
#define agitateurLent (gestion_demandes_agitateurLent->CB_current_value)
#define agitateurRapide (gestion_demandes_agitateurRapide->CB_current_value)

inline static int bottling_line__gestion_demandes_preconditions()
{
	return(0);
}

inline static int bottling_line__gestion_demandes_postconditions()
{
	return(0);
}

static int bottling_line__gestion_demandes()
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

		__preconditions_value = bottling_line__gestion_demandes_preconditions();
		if(__preconditions_value != 0) {
			return(__preconditions_value);
		}
	}

label1:	/* Gestion des demandes fonctionnelles */
	vanne1 = (preparationVanne1 | prodVanne1);
	vanne2 = (preparationVanne2 | prodVanne2);
	vanne3 = (preparationVanne3 | prodVanne3);
	vanne4 = (preparationVanne4 | prodVanne4);
	agitateurRapide = prodAgitateurRapide;
label2:
	pompe1 = (preparationPompe1 | prodPompe1);
	pompe2 = (preparationPompe2 | prodPompe2);
	agitateurLent = (preparationAgitateur | prodAgitateurLent);
	if(compteur_char_alloc != 0) free_all_char();
	if(compteur_booleen_alloc != 0) free_all_booleen();
	if(compteur_entier_alloc != 0) free_all_entier();
	if(compteur_reel_alloc != 0) free_all_reel();
	if(withoutDelay) {
		CB_freeze_bool(gestion_demandes_pompe1);
		CB_freeze_bool(gestion_demandes_pompe2);
		CB_freeze_bool(gestion_demandes_vanne1);
		CB_freeze_bool(gestion_demandes_vanne2);
		CB_freeze_bool(gestion_demandes_vanne3);
		CB_freeze_bool(gestion_demandes_vanne4);
		CB_freeze_bool(gestion_demandes_agitateurLent);
		CB_freeze_bool(gestion_demandes_agitateurRapide);
	}
	}

/*****************************************************
                             Post-conditions execution
******************************************************/
	if(allowpostconditions->CB_current_value){
		int __postconditions_value;

		__postconditions_value = bottling_line__gestion_demandes_postconditions();
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
#undef preparationVanne1
#undef preparationVanne2
#undef preparationVanne3
#undef preparationVanne4
#undef preparationPompe1
#undef preparationPompe2
#undef preparationAgitateur
#undef prodPompe1
#undef prodPompe2
#undef prodVanne1
#undef prodVanne2
#undef prodVanne3
#undef prodVanne4
#undef prodAgitateurLent
#undef prodAgitateurRapide
#undef pompe1
#undef pompe2
#undef vanne1
#undef vanne2
#undef vanne3
#undef vanne4
#undef agitateurLent
#undef agitateurRapide

