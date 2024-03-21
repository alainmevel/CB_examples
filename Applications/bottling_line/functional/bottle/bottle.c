/*2023-10-03T11:13:40-01:00*/

/********************************************************************
 * bottle.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "bottle.h"



/**************************** Variables *****************************/

CB_Index bottle__num = 0;
CB_Mem_Bool *bottle_pulseGenerator;
CB_Mem_Bool *bottle_loading;
CB_Mem_Bool *bottle_evacuation;
CB_Mem_Float *bottle_inputFlow;
CB_Mem_Bool *bottle_bottleFilled;
CB_Mem_Bool *bottle_bottlePresent;
CB_Mem_Bool *bottle_existenceOfBottle1;
CB_Mem_Bool *bottle_existenceOfBottle2;
CB_Mem_Bool *bottle_existenceOfBottle3;
CB_Mem_Float *bottle_levelOfBottle1;
CB_Mem_Float *bottle_levelOfBottle2;
CB_Mem_Float *bottle_levelOfBottle3;
CB_Mem_Int *bottle_positionOfBottle1;
CB_Mem_Int *bottle_positionOfBottle2;
CB_Mem_Int *bottle_positionOfBottle3;
CB_Mem_Bool *bottle_edge_loading;
CB_Mem_Bool *bottle_edge_evacuation;
CB_Mem_Bool *bottle_edge_pulseGenerator;
CB_Mem_Bool *bottle_first;
CB_Mem_Float *bottle_maxLevel;
CB_Mem_Int *bottle_increment;

/**************************** Variables *****************************/

#define pulseGenerator (bottle_pulseGenerator->CB_current_value)
#define loading (bottle_loading->CB_current_value)
#define evacuation (bottle_evacuation->CB_current_value)
#define inputFlow (bottle_inputFlow->CB_current_value)
#define bottleFilled (bottle_bottleFilled->CB_current_value)
#define bottlePresent (bottle_bottlePresent->CB_current_value)
#define existenceOfBottle1 (bottle_existenceOfBottle1->CB_current_value)
#define existenceOfBottle2 (bottle_existenceOfBottle2->CB_current_value)
#define existenceOfBottle3 (bottle_existenceOfBottle3->CB_current_value)
#define levelOfBottle1 (bottle_levelOfBottle1->CB_current_value)
#define levelOfBottle2 (bottle_levelOfBottle2->CB_current_value)
#define levelOfBottle3 (bottle_levelOfBottle3->CB_current_value)
#define positionOfBottle1 (bottle_positionOfBottle1->CB_current_value)
#define positionOfBottle2 (bottle_positionOfBottle2->CB_current_value)
#define positionOfBottle3 (bottle_positionOfBottle3->CB_current_value)
#define edge_loading (bottle_edge_loading->CB_current_value)
#define edge_evacuation (bottle_edge_evacuation->CB_current_value)
#define edge_pulseGenerator (bottle_edge_pulseGenerator->CB_current_value)
#define first (bottle_first->CB_current_value)
#define maxLevel (bottle_maxLevel->CB_current_value)
#define increment (*((short *)&(bottle_increment->CB_current_value) + ALIGN_OFFSET_SHORT))


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _bottling_line__bottle_init(void)
{
	(self.Bool+6)->CB_current_value = 1; /*first*/
	(self.Float+3)->CB_current_value = 100.0; /*maxLevel*/
	*((short *)&((self.Int+3)->CB_current_value) + ALIGN_OFFSET_SHORT) = 1; /*increment*/
	self.Bool+=7;
	self.Int+=4;
	self.Float+=4;


	return 0;
}


/************************ Behavior function *************************/

int bottling_line__bottle(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		bottle_existenceOfBottle1 = self.Bool+0;
		bottle_existenceOfBottle2 = self.Bool+1;
		bottle_existenceOfBottle3 = self.Bool+2;
		bottle_levelOfBottle1 = self.Float+0;
		bottle_levelOfBottle2 = self.Float+1;
		bottle_levelOfBottle3 = self.Float+2;
		bottle_positionOfBottle1 = self.Int+0;
		bottle_positionOfBottle2 = self.Int+1;
		bottle_positionOfBottle3 = self.Int+2;
		bottle_edge_loading = self.Bool+3;
		bottle_edge_evacuation = self.Bool+4;
		bottle_edge_pulseGenerator = self.Bool+5;
		bottle_first = self.Bool+6;
		bottle_maxLevel = self.Float+3;
		bottle_increment = self.Int+3;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* Arrival of a bottle on the conveyor belt			*/
			/* -------------------------------------------------------------------------------------------	*/
			if(first) {
				edge_loading = loading;
				edge_evacuation = evacuation;
				edge_pulseGenerator = pulseGenerator;
				first = 0;
			}
			if (loading > edge_loading)
			     if (! existenceOfBottle1) 
			          {
			          existenceOfBottle1=1;
			          positionOfBottle1=0;
			          }
			     else 
			          if (! existenceOfBottle2) 
			               {
			               existenceOfBottle2=1;
			               positionOfBottle2=0;
			               }
			          else 
			               if (! existenceOfBottle3) 
			                    {
			                    existenceOfBottle3=1;
			                    positionOfBottle3=0;
			                    }


			/* Evacuation of a bottle at the end of the conveyor belt	*/
			/* -------------------------------------------------------------------------------------------	*/
			if (evacuation > edge_evacuation)
			     {
			     if (existenceOfBottle1 && (positionOfBottle1 >= 20)) 
			          {
			          existenceOfBottle1=0;
			          levelOfBottle1=0;
			          }
			     if (existenceOfBottle2 && (positionOfBottle2 >= 20)) 
			          {
			          existenceOfBottle2=0;
			          levelOfBottle2=0;
			          }
			     if (existenceOfBottle3 && (positionOfBottle3 >= 20)) 
			          {
			          existenceOfBottle3=0;
			          levelOfBottle3=0;
			          }
			     }


			/* Movement of the bottles on the conveyor			*/
			/* -------------------------------------------------------------------------------------------	*/
			if (pulseGenerator > edge_pulseGenerator)
			     {
			     if existenceOfBottle1 positionOfBottle1=positionOfBottle1+increment;
			     if existenceOfBottle2 positionOfBottle2=positionOfBottle2+increment;
			     if existenceOfBottle3 positionOfBottle3=positionOfBottle3+increment;
			      }

			/* Detection of a bottle in the filling area			*/
			/* --------------------------------------------------------------------------------------------	*/
			if (existenceOfBottle1 && (positionOfBottle1 >=10) && (positionOfBottle1 <= 15)) 
			     {
			     bottlePresent=1;
			     levelOfBottle1=levelOfBottle1+inputFlow;
			     if (levelOfBottle1 >= maxLevel) 
			          {
			          bottleFilled=1;
			          levelOfBottle1=maxLevel;
			          }
			     else bottleFilled=0;
			     }
			else
			     if (existenceOfBottle2 && (positionOfBottle2 >=10) && (positionOfBottle2 <= 15)) 
			          {
			          bottlePresent=1;
			          levelOfBottle2=levelOfBottle2+inputFlow;
			          if (levelOfBottle2 >= maxLevel) 
			          {
			               bottleFilled=1;
			               levelOfBottle2=maxLevel;
			               }
			          else bottleFilled=0;
			          }
			     else
			          if (existenceOfBottle3 && (positionOfBottle3 >=10) && (positionOfBottle3 <= 15)) 
			               {
			               bottlePresent=1;
			               levelOfBottle3=levelOfBottle3+inputFlow;
			               if (levelOfBottle3 >= maxLevel) 
			                    {
			                   bottleFilled=1;
			                   levelOfBottle3=maxLevel;
			                   }
			               else bottleFilled=0;
			               }
			          else bottlePresent=0;

			edge_loading = loading;
			edge_evacuation = evacuation;
			edge_pulseGenerator = pulseGenerator;
		}

		CB_post_bool(bottle_bottleFilled);
		CB_post_bool(bottle_bottlePresent);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 7;
	self.Int += 4;
	self.Float += 4;

	return 0;
}

