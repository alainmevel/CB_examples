/*2023-10-03T11:13:28-01:00*/

/********************************************************************
 * logical_or_10.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "logical_or_10.h"



/**************************** Variables *****************************/

CB_Index logical_or_10__num = 0;
CB_Mem_Bool *logical_or_10_inputBit1;
CB_Mem_Bool *logical_or_10_inputBit2;
CB_Mem_Bool *logical_or_10_inputBit3;
CB_Mem_Bool *logical_or_10_inputBit4;
CB_Mem_Bool *logical_or_10_inputBit5;
CB_Mem_Bool *logical_or_10_inputBit6;
CB_Mem_Bool *logical_or_10_inputBit7;
CB_Mem_Bool *logical_or_10_inputBit8;
CB_Mem_Bool *logical_or_10_inputBit9;
CB_Mem_Bool *logical_or_10_inputBit10;
CB_Mem_Bool *logical_or_10_outputBit;
CB_Mem_Bool *logical_or_10_input1Logic;
CB_Mem_Bool *logical_or_10_input2Logic;
CB_Mem_Bool *logical_or_10_input3Logic;
CB_Mem_Bool *logical_or_10_input4Logic;
CB_Mem_Bool *logical_or_10_input5Logic;
CB_Mem_Bool *logical_or_10_input6Logic;
CB_Mem_Bool *logical_or_10_input7Logic;
CB_Mem_Bool *logical_or_10_input8Logic;
CB_Mem_Bool *logical_or_10_input9Logic;
CB_Mem_Bool *logical_or_10_input10Logic;
CB_Mem_Bool *logical_or_10_outputLogic;
CB_Mem_Int *logical_or_10_nbInputs;
CB_Mem_Bool *logical_or_10_d_output;
CB_Mem_Bool *logical_or_10_v_d_output;

/**************************** Variables *****************************/

#define inputBit1 (logical_or_10_inputBit1->CB_current_value)
#define inputBit2 (logical_or_10_inputBit2->CB_current_value)
#define inputBit3 (logical_or_10_inputBit3->CB_current_value)
#define inputBit4 (logical_or_10_inputBit4->CB_current_value)
#define inputBit5 (logical_or_10_inputBit5->CB_current_value)
#define inputBit6 (logical_or_10_inputBit6->CB_current_value)
#define inputBit7 (logical_or_10_inputBit7->CB_current_value)
#define inputBit8 (logical_or_10_inputBit8->CB_current_value)
#define inputBit9 (logical_or_10_inputBit9->CB_current_value)
#define inputBit10 (logical_or_10_inputBit10->CB_current_value)
#define outputBit (logical_or_10_outputBit->CB_current_value)
#define input1Logic (logical_or_10_input1Logic->CB_current_value)
#define input2Logic (logical_or_10_input2Logic->CB_current_value)
#define input3Logic (logical_or_10_input3Logic->CB_current_value)
#define input4Logic (logical_or_10_input4Logic->CB_current_value)
#define input5Logic (logical_or_10_input5Logic->CB_current_value)
#define input6Logic (logical_or_10_input6Logic->CB_current_value)
#define input7Logic (logical_or_10_input7Logic->CB_current_value)
#define input8Logic (logical_or_10_input8Logic->CB_current_value)
#define input9Logic (logical_or_10_input9Logic->CB_current_value)
#define input10Logic (logical_or_10_input10Logic->CB_current_value)
#define outputLogic (logical_or_10_outputLogic->CB_current_value)
#define nbInputs (logical_or_10_nbInputs->CB_current_value)
#define d_output (logical_or_10_d_output->CB_current_value)
#define v_d_output (logical_or_10_v_d_output->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _equipment_library__logical_or_10_init(void)
{
	(self.Bool+0)->CB_current_value = 1; /*input1Logic*/
	(self.Bool+1)->CB_current_value = 1; /*input2Logic*/
	(self.Bool+2)->CB_current_value = 1; /*input3Logic*/
	(self.Bool+3)->CB_current_value = 1; /*input4Logic*/
	(self.Bool+4)->CB_current_value = 1; /*input5Logic*/
	(self.Bool+5)->CB_current_value = 1; /*input6Logic*/
	(self.Bool+6)->CB_current_value = 1; /*input7Logic*/
	(self.Bool+7)->CB_current_value = 1; /*input8Logic*/
	(self.Bool+8)->CB_current_value = 1; /*input9Logic*/
	(self.Bool+9)->CB_current_value = 1; /*input10Logic*/
	(self.Bool+10)->CB_current_value = 1; /*outputLogic*/
	(self.Int+0)->CB_current_value = 10; /*nbInputs*/
	(self.Bool+12)->CB_current_value = 1; /*v_d_output*/
	self.Bool+=13;
	self.Int+=1;


	return 0;
}


/************************ Behavior function *************************/

int equipment_library__logical_or_10(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		logical_or_10_input1Logic = self.Bool+0;
		logical_or_10_input2Logic = self.Bool+1;
		logical_or_10_input3Logic = self.Bool+2;
		logical_or_10_input4Logic = self.Bool+3;
		logical_or_10_input5Logic = self.Bool+4;
		logical_or_10_input6Logic = self.Bool+5;
		logical_or_10_input7Logic = self.Bool+6;
		logical_or_10_input8Logic = self.Bool+7;
		logical_or_10_input9Logic = self.Bool+8;
		logical_or_10_input10Logic = self.Bool+9;
		logical_or_10_outputLogic = self.Bool+10;
		logical_or_10_nbInputs = self.Int+0;
		logical_or_10_d_output = self.Bool+11;
		logical_or_10_v_d_output = self.Bool+12;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			/* ----------------------------------------------------------------	*/
			/* Type : Model of Operative Behaviour					*/
			/* Category :  Toolbox							*/
			/* Author : Dassault Systemes						*/
			/* Update date : June 2018						*/
			/* ----------------------------------------------------------------	*/
			/* This module makes a "logical OR" operation between inputs. 	*/
			/* Number of inputs can gone from 2 to 10. 				*/
			/* Number of inputs is given by the nbInputs parameter.		*/
			/* Result is a boolean.							*/
			/* The output can be preset	by the user					*/
			/* ----------------------------------------------------------------	*/

			/* Declaration area of temporary variables */

			CB_Bool inputsArray[11];
			CB_Bool logicArray[11];
			CB_Int index;



			if (d_output|| (nbInputs<2) || (nbInputs>10)) outputBit=v_d_output;
			else  {
				inputsArray[0]=inputBit1; logicArray[0]=input1Logic;
				inputsArray[1]=inputBit2; logicArray[1]=input2Logic;
				inputsArray[2]=inputBit3; logicArray[2]=input3Logic;
				inputsArray[3]=inputBit4; logicArray[3]=input4Logic;
				inputsArray[4]=inputBit5; logicArray[4]=input5Logic;
				inputsArray[5]=inputBit6; logicArray[5]=input6Logic;
				inputsArray[6]=inputBit7; logicArray[6]=input7Logic;
				inputsArray[7]=inputBit8; logicArray[7]=input8Logic;
				inputsArray[8]=inputBit9; logicArray[8]=input9Logic;
				inputsArray[9]=inputBit10; logicArray[9]=input10Logic;
				outputBit = 0;
				for (index=0;index<nbInputs;index++)
					outputBit = outputBit | (inputsArray[index] ^ ! logicArray[index]);
				outputBit = outputBit ^ ! outputLogic;
			}
		}

		CB_post_bool(logical_or_10_outputBit);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 13;
	self.Int += 1;

	return 0;
}

