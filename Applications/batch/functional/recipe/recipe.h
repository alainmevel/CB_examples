/*2023-10-03T11:13:37-01:00*/

/********************************************************************
 * recipe.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _BATCH__RECIPE_H
#define _BATCH__RECIPE_H


/********************** Variable declarations ***********************/

extern CB_Index recipe__num;
extern CB_Mem_Int *recipe_flourWeight;
extern CB_Mem_Int *recipe_syrup1Weight;
extern CB_Mem_Int *recipe_syrup2Weight;
extern CB_Mem_Int *recipe_syrup3Weight;
extern CB_Mem_Int *recipe_recipeNumber;

/********************** Function declarations ***********************/

extern int _batch__recipe_init(void);
extern int batch__recipe(void);

#endif /*_BATCH__RECIPE_H*/
