/********************************************************************
 * _init.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_products.h"
#include "tri_chain/functional/creation/creation.h"

/* Low voltage specific */
int lv_iteration_step;

/* Input/output variables initialization function */
void inputOutputVariablesInit(void)
{
	creation_idProd = self.Int;
	self.Int++;
	creation_creationFailed = self.Bool;
	self.Bool++;
}

/* Main behavior initialization function */
int behaviorsInit(void)
{
	int old_self_num = self_num;

	creation__num = self_num;
	inputOutputVariablesInit();
	_tri_chain__creation_init();
	self_num = old_self_num;
	return 0;
}

/* Main behavior function */
int behaviorsStep(void)
{
	int old_self_num = self_num;
	int __ret;

	lv_iteration_step = 0;
	inputOutputVariablesInit();
	creation__num = self_num;
	__ret = tri_chain__creation();
	if (__ret != 0) {
		return __ret; /*execution failure*/
	}
	self_num = old_self_num;
	return 0;
}

/* Actors and products initialization */
T_ElementTableActeursProduits TableActeursProduits[] = {
	{0, {6, 524, 17, 53}, {0, 0, 0, 0},
		mx_nature_c, tri_chain__creation, 0, mx_status_static, 1, {{0, 0}, {0, 0}}},
	{0, {0, 0, 0, 0}, {0, 0, 0, 0},
	0, 0, 0, 0, 0, {{0, 0, 0}, {0, 0, 0}}}
};
T_Instance NbActeurs = 1;
T_Instance NbProduits = 0;
T_Instance NbActeursEtProduits = 1;



/* Global variables initialization */
void globalesInit(void)
{
}

/* Memory sizes initialization */
void memorySizeInit(CB_Offset *minSiz, CB_Offset *maxSiz, CB_Offset *memSiz)
{


	minSiz->Bool = 0;
	minSiz->Int = 0;
	minSiz->Float = 0;
	minSiz->Char = 0;

	maxSiz->Bool = 11;
	maxSiz->Int = 529;
	maxSiz->Float = 41;
	maxSiz->Char = 53;

	memSiz->Bool = 11;
	memSiz->Int = 529;
	memSiz->Float = 41;
	memSiz->Char = 53;
}


/* Location of memory starts*/
void memoryStartInit(CB_Object *pMem)
{
	extern int minBool, minInt, minFloat, minChar;

	pMem->Bool += minBool + 5;
	pMem->Int += minInt + 212;
	pMem->Float += minFloat + 7;
	pMem->Char += minChar + 53;
}

/* Initialization utils */
void CB_Bool_Init(char *Mem, int index, CB_Bool value)
{
	P_Bool(Mem, index)->CB_current_value = value;
	P_Bool(Mem, index)->CB_previous_value = value;
}

void CB_Int_Init(char *Mem, int index, CB_Int value)
{
	P_Int(Mem, index)->CB_current_value = value;
	P_Int(Mem, index)->CB_previous_value = value;
}

void CB_Float_Init(char *Mem, int index, CB_Float value)
{
	P_Float(Mem, index)->CB_current_value = value;
	P_Float(Mem, index)->CB_previous_value = value;
}

void CB_Char_Init(char *Mem, int index, CB_Char value)
{
	P_Char(Mem, index)->CB_current_value = value;
	P_Char(Mem, index)->CB_previous_value = value;
}

/* Variable initializations */
void variablesInitialization(void)
{

	CB_Float_Init((char *) memHeader, 10, 50000.0); /*simuperiod*/
	CB_Char_Init((char *) memHeader, 0 + 0, 0); /*taskname size1*/
	CB_Char_Init((char *) memHeader, 0 + 1, 50); /*taskname size2*/
	CB_Char_Init((char *) memHeader, 0 + 3, 'c');
	CB_Char_Init((char *) memHeader, 0 + 4, 'r');
	CB_Char_Init((char *) memHeader, 0 + 5, 'e');
	CB_Char_Init((char *) memHeader, 0 + 6, 'a');
	CB_Char_Init((char *) memHeader, 0 + 7, 't');
	CB_Char_Init((char *) memHeader, 0 + 8, 'i');
	CB_Char_Init((char *) memHeader, 0 + 9, 'o');
	CB_Char_Init((char *) memHeader, 0 + 10, 'n');
	CB_Char_Init((char *) memHeader, 0 + 11, '.');
	CB_Char_Init((char *) memHeader, 0 + 12, 'e');
	CB_Char_Init((char *) memHeader, 0 + 13, 'x');
	CB_Char_Init((char *) memHeader, 0 + 14, 'e');
	CB_Char_Init((char *) memHeader, 0 + 15, 0);
	CB_Bool_Init((char *) memHeader, 3, 1); /*allowpreconditions*/
	CB_Bool_Init((char *) memHeader, 4, 1); /*allowpostconditions*/
	CB_Int_Init((char *) memHeader, 524, 0); /*status_act_prod*/
	CB_Float_Init((char *) memHeader, 17, 1.0); /*m11*/
	CB_Float_Init((char *) memHeader, 18, 0.0); /*m12*/
	CB_Float_Init((char *) memHeader, 19, 0.0); /*m13*/
	CB_Float_Init((char *) memHeader, 20, 0.0); /*m14*/
	CB_Float_Init((char *) memHeader, 21, 0.0); /*m21*/
	CB_Float_Init((char *) memHeader, 22, 1.0); /*m22*/
	CB_Float_Init((char *) memHeader, 23, 0.0); /*m23*/
	CB_Float_Init((char *) memHeader, 24, 0.0); /*m24*/
	CB_Float_Init((char *) memHeader, 25, 0.0); /*m31*/
	CB_Float_Init((char *) memHeader, 26, 0.0); /*m32*/
	CB_Float_Init((char *) memHeader, 27, 1.0); /*m33*/
	CB_Float_Init((char *) memHeader, 28, 0.0); /*m34*/
	CB_Float_Init((char *) memHeader, 29, 0.0); /*m41*/
	CB_Float_Init((char *) memHeader, 30, 0.0); /*m42*/
	CB_Float_Init((char *) memHeader, 31, 0.0); /*m43*/
	CB_Float_Init((char *) memHeader, 32, 1.0); /*m44*/
}

/* Control Variables access */
void controlVariablesAccessInitialization(void)
{
	extern CB_Mem_Int *execstatus;
	extern CB_Mem_Float *simuperiod;
	extern CB_Mem_Float *minsimuperiod;
	extern CB_Mem_Float *maxsimuperiod;
	extern CB_Mem_Float *realsimuperiod;
	extern CB_Mem_Int *bpnoline;
	extern CB_Mem_Int *bpnoinstance;
	extern CB_Mem_Int *bpcurrentinstance;
	extern CB_Mem_Int *bpcurrentlocation;
	extern CB_Mem_Int *bpcurrentprepostcode;
	extern CB_Mem_Int *bpcurrenttypeerror;
	extern CB_Mem_Int *bpcurrentrank;
	extern CB_Mem_Int *signature;
	extern CB_Mem_Int *generationtime;
	extern CB_Mem_Char *taskname;
	extern CB_Mem_Bool *traceon;
	extern CB_Mem_Bool *resettrace;
	extern CB_Mem_Bool *tracesnapshop;
	extern CB_Mem_Float *mxmeanvariablemodification;
	extern CB_Mem_Float *mxminvariablemodification;
	extern CB_Mem_Float *mxmaxvariablemodification;
	extern CB_Mem_Bool *allowpreconditions;
	extern CB_Mem_Bool *allowpostconditions;

	execstatus = P_Int((char *) memHeader, 311);
	simuperiod = P_Float((char *) memHeader, 10);
	minsimuperiod = P_Float((char *) memHeader, 11);
	maxsimuperiod = P_Float((char *) memHeader, 12);
	realsimuperiod = P_Float((char *) memHeader, 13);
	bpnoline = P_Int((char *) memHeader, 312);
	bpnoinstance = P_Int((char *) memHeader, 414);
	bpcurrentinstance = P_Int((char *) memHeader, 516);
	bpcurrentlocation = P_Int((char *) memHeader, 517);
	bpcurrentprepostcode = P_Int((char *) memHeader, 518);
	bpcurrenttypeerror = P_Int((char *) memHeader, 519);
	bpcurrentrank = P_Int((char *) memHeader, 520);
	signature = P_Int((char *) memHeader, 521);
	generationtime = P_Int((char *) memHeader, 522);
	taskname = P_Char((char *) memHeader, 0);
	traceon = P_Bool((char *) memHeader, 0);
	resettrace = P_Bool((char *) memHeader, 1);
	tracesnapshop = P_Bool((char *) memHeader, 2);
	mxmeanvariablemodification = P_Float((char *) memHeader, 14);
	mxminvariablemodification = P_Float((char *) memHeader, 15);
	mxmaxvariablemodification = P_Float((char *) memHeader, 16);
	allowpreconditions = P_Bool((char *) memHeader, 3);
	allowpostconditions = P_Bool((char *) memHeader, 4);
}

/* Time cycle initialization */
void timeCycleInitialization(CB_Mem_Float *timecycle)
{
	timecycle->CB_current_value = 50000.0;
}

/* Starting mode */
void initStartingMode(CB_Mem_Int *pexecstatus)
{
	pexecstatus->CB_current_value = mx_exec_status_stop;
}

