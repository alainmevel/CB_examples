/*2023-10-03T11:13:37-01:00*/

/********************************************************************
 * recipe.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "recipe.h"


/**************************** Variables *****************************/

CB_Index recipe__num = 0;
CB_Mem_Int *recipe_flourWeight;
CB_Mem_Int *recipe_syrup1Weight;
CB_Mem_Int *recipe_syrup2Weight;
CB_Mem_Int *recipe_syrup3Weight;
CB_Mem_Int *recipe_recipeNumber;

/**************************** Variables *****************************/

#define flourWeight (recipe_flourWeight->CB_current_value)
#define syrup1Weight (recipe_syrup1Weight->CB_current_value)
#define syrup2Weight (recipe_syrup2Weight->CB_current_value)
#define syrup3Weight (recipe_syrup3Weight->CB_current_value)
#define recipeNumber (recipe_recipeNumber->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _batch__recipe_init(void)
{
	(self.Int+0)->CB_current_value = 1; /*recipeNumber*/
	self.Int+=1;


	return 0;
}


/************************ Behavior function *************************/

int batch__recipe(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		recipe_recipeNumber = self.Int+0;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			switch (recipeNumber) {
			case 1:
				flourWeight = 200;
				syrup1Weight = 150;
				syrup2Weight = 100;
				syrup3Weight = 50;
				break;
			case 2:
				flourWeight = 200;
				syrup1Weight = 50;
				syrup2Weight = 150;
				syrup3Weight = 100;
				break;
			case 3:
				flourWeight = 200;
				syrup1Weight = 50;
				syrup2Weight = 100;
				syrup3Weight = 150;
				break;
			default:
				break;
			}
		}

		CB_post_int(recipe_flourWeight);
		CB_post_int(recipe_syrup1Weight);
		CB_post_int(recipe_syrup2Weight);
		CB_post_int(recipe_syrup3Weight);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Int += 1;

	return 0;
}

