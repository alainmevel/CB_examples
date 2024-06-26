/*2023-10-03T11:13:51-01:00*/

/********************************************************************
 * tni_train.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "tni_train.h"
#include "tni_train/functional/cab/cab.h"
#include "tni_train/functional/car/car.h"


/**************************** Variables *****************************/

CB_Index tni_train__num = 0;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset tni_train__tni_train_offset_cab1;
static CB_Offset tni_train__tni_train_offset_cab2;
static CB_Offset tni_train__tni_train_offset_motorCar1;
static CB_Offset tni_train__tni_train_offset_car1;
static CB_Offset tni_train__tni_train_offset_car2;
static CB_Offset tni_train__tni_train_offset_car3;
static CB_Offset tni_train__tni_train_offset_motorCar2;
static CB_Offset tni_train__tni_train_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _tni_train__tni_train_init(void)
{
	CB_Object __start = self;
	self.Bool+=104;
	self.Int+=30;

	/*initialize child cab1 (tni_train.cab):*/
	self_num++;
	tni_train__tni_train_offset_cab1.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_cab1.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_cab1.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_cab1.Char = self.Char - __start.Char;
	cab_keyCabEnabled2 = __start.Bool+92; /*tni_train__cn_12*/
	cab_keyCabDisabled2 = __start.Bool+93; /*tni_train__cn_11*/
	cab_enableOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
	cab_enableOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
	cab_enableClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
	cab_enableClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
	cab_cabEnabled = __start.Bool+94; /*tni_train__cn_10*/
	cab_cabDisabled = __start.Bool+95; /*tni_train__cn_9*/
	cab_cabIncoherence = __start.Bool+91; /*tni_train__cn_13*/
	_tni_train__cab_init();

	/*initialize child cab2 (tni_train.cab):*/
	self_num++;
	tni_train__tni_train_offset_cab2.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_cab2.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_cab2.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_cab2.Char = self.Char - __start.Char;
	cab_keyCabEnabled2 = __start.Bool+94; /*tni_train__cn_10*/
	cab_keyCabDisabled2 = __start.Bool+95; /*tni_train__cn_9*/
	cab_enableOpeningRightC1 = __start.Bool+101; /*tni_train__cn_3*/
	cab_enableOpeningLeftC1 = __start.Bool+103; /*tni_train__cn_1*/
	cab_enableClosingRightC1 = __start.Bool+102; /*tni_train__cn_2*/
	cab_enableClosingLeftC1 = __start.Bool+100; /*tni_train__cn_4*/
	cab_cabEnabled = __start.Bool+92; /*tni_train__cn_12*/
	cab_cabDisabled = __start.Bool+93; /*tni_train__cn_11*/
	cab_cabIncoherence = __start.Bool+90; /*tni_train__cn_14*/
	_tni_train__cab_init();

	/*initialize child motorCar1 (tni_train.car):*/
	self_num++;
	tni_train__tni_train_offset_motorCar1.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_motorCar1.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_motorCar1.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_motorCar1.Char = self.Char - __start.Char;
	car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
	car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
	car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
	car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
	car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
	car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
	car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
	car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
	car_doorL1Closed = __start.Bool+89; /*tni_train__cn_15*/
	car_doorL1Opened = __start.Bool+88; /*tni_train__cn_16*/
	car_doorL1Fault = __start.Int+29; /*tni_train__cn_17*/
	car_doorL2Closed = __start.Bool+87; /*tni_train__cn_18*/
	car_doorL2Opened = __start.Bool+86; /*tni_train__cn_19*/
	car_doorL2Fault = __start.Int+28; /*tni_train__cn_20*/
	car_doorL3Closed = __start.Bool+85; /*tni_train__cn_21*/
	car_doorL3Opened = __start.Bool+84; /*tni_train__cn_22*/
	car_doorL3Fault = __start.Int+27; /*tni_train__cn_23*/
	car_doorR1Closed = __start.Bool+83; /*tni_train__cn_24*/
	car_doorR1Opened = __start.Bool+82; /*tni_train__cn_25*/
	car_doorR1Fault = __start.Int+26; /*tni_train__cn_26*/
	car_doorR2Closed = __start.Bool+81; /*tni_train__cn_27*/
	car_doorR2Opened = __start.Bool+80; /*tni_train__cn_28*/
	car_doorR2Fault = __start.Int+25; /*tni_train__cn_29*/
	car_doorR3Closed = __start.Bool+79; /*tni_train__cn_30*/
	car_doorR3Opened = __start.Bool+78; /*tni_train__cn_31*/
	car_doorR3Fault = __start.Int+24; /*tni_train__cn_32*/
	car_AlarmD1L = __start.Bool+77; /*tni_train__cn_33*/
	car_AlarmD2L = __start.Bool+76; /*tni_train__cn_34*/
	car_AlarmD3L = __start.Bool+75; /*tni_train__cn_35*/
	car_AlarmD1R = __start.Bool+74; /*tni_train__cn_36*/
	car_AlarmD2R = __start.Bool+73; /*tni_train__cn_37*/
	car_AlarmD3R = __start.Bool+72; /*tni_train__cn_38*/
	_tni_train__car_init();

	/*initialize child car1 (tni_train.car):*/
	self_num++;
	tni_train__tni_train_offset_car1.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_car1.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_car1.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_car1.Char = self.Char - __start.Char;
	car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
	car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
	car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
	car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
	car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
	car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
	car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
	car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
	car_doorL1Closed = __start.Bool+71; /*tni_train__cn_39*/
	car_doorL1Opened = __start.Bool+70; /*tni_train__cn_40*/
	car_doorL1Fault = __start.Int+23; /*tni_train__cn_41*/
	car_doorL2Closed = __start.Bool+69; /*tni_train__cn_42*/
	car_doorL2Opened = __start.Bool+68; /*tni_train__cn_43*/
	car_doorL2Fault = __start.Int+22; /*tni_train__cn_44*/
	car_doorL3Closed = __start.Bool+67; /*tni_train__cn_45*/
	car_doorL3Opened = __start.Bool+66; /*tni_train__cn_46*/
	car_doorL3Fault = __start.Int+21; /*tni_train__cn_47*/
	car_doorR1Closed = __start.Bool+65; /*tni_train__cn_48*/
	car_doorR1Opened = __start.Bool+64; /*tni_train__cn_49*/
	car_doorR1Fault = __start.Int+20; /*tni_train__cn_50*/
	car_doorR2Closed = __start.Bool+63; /*tni_train__cn_51*/
	car_doorR2Opened = __start.Bool+62; /*tni_train__cn_52*/
	car_doorR2Fault = __start.Int+19; /*tni_train__cn_53*/
	car_doorR3Closed = __start.Bool+61; /*tni_train__cn_54*/
	car_doorR3Opened = __start.Bool+60; /*tni_train__cn_55*/
	car_doorR3Fault = __start.Int+18; /*tni_train__cn_56*/
	car_AlarmD1L = __start.Bool+59; /*tni_train__cn_57*/
	car_AlarmD2L = __start.Bool+58; /*tni_train__cn_58*/
	car_AlarmD3L = __start.Bool+57; /*tni_train__cn_59*/
	car_AlarmD1R = __start.Bool+56; /*tni_train__cn_60*/
	car_AlarmD2R = __start.Bool+55; /*tni_train__cn_61*/
	car_AlarmD3R = __start.Bool+54; /*tni_train__cn_62*/
	_tni_train__car_init();

	/*initialize child car2 (tni_train.car):*/
	self_num++;
	tni_train__tni_train_offset_car2.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_car2.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_car2.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_car2.Char = self.Char - __start.Char;
	car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
	car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
	car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
	car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
	car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
	car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
	car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
	car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
	car_doorL1Closed = __start.Bool+53; /*tni_train__cn_63*/
	car_doorL1Opened = __start.Bool+52; /*tni_train__cn_64*/
	car_doorL1Fault = __start.Int+17; /*tni_train__cn_65*/
	car_doorL2Closed = __start.Bool+51; /*tni_train__cn_66*/
	car_doorL2Opened = __start.Bool+50; /*tni_train__cn_67*/
	car_doorL2Fault = __start.Int+16; /*tni_train__cn_68*/
	car_doorL3Closed = __start.Bool+49; /*tni_train__cn_69*/
	car_doorL3Opened = __start.Bool+48; /*tni_train__cn_70*/
	car_doorL3Fault = __start.Int+15; /*tni_train__cn_71*/
	car_doorR1Closed = __start.Bool+47; /*tni_train__cn_72*/
	car_doorR1Opened = __start.Bool+46; /*tni_train__cn_73*/
	car_doorR1Fault = __start.Int+14; /*tni_train__cn_74*/
	car_doorR2Closed = __start.Bool+45; /*tni_train__cn_75*/
	car_doorR2Opened = __start.Bool+44; /*tni_train__cn_76*/
	car_doorR2Fault = __start.Int+13; /*tni_train__cn_77*/
	car_doorR3Closed = __start.Bool+43; /*tni_train__cn_78*/
	car_doorR3Opened = __start.Bool+42; /*tni_train__cn_79*/
	car_doorR3Fault = __start.Int+12; /*tni_train__cn_80*/
	car_AlarmD1L = __start.Bool+41; /*tni_train__cn_81*/
	car_AlarmD2L = __start.Bool+40; /*tni_train__cn_82*/
	car_AlarmD3L = __start.Bool+39; /*tni_train__cn_83*/
	car_AlarmD1R = __start.Bool+38; /*tni_train__cn_84*/
	car_AlarmD2R = __start.Bool+37; /*tni_train__cn_85*/
	car_AlarmD3R = __start.Bool+36; /*tni_train__cn_86*/
	_tni_train__car_init();

	/*initialize child car3 (tni_train.car):*/
	self_num++;
	tni_train__tni_train_offset_car3.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_car3.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_car3.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_car3.Char = self.Char - __start.Char;
	car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
	car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
	car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
	car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
	car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
	car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
	car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
	car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
	car_doorL1Closed = __start.Bool+35; /*tni_train__cn_87*/
	car_doorL1Opened = __start.Bool+34; /*tni_train__cn_88*/
	car_doorL1Fault = __start.Int+11; /*tni_train__cn_89*/
	car_doorL2Closed = __start.Bool+33; /*tni_train__cn_90*/
	car_doorL2Opened = __start.Bool+32; /*tni_train__cn_91*/
	car_doorL2Fault = __start.Int+10; /*tni_train__cn_92*/
	car_doorL3Closed = __start.Bool+31; /*tni_train__cn_93*/
	car_doorL3Opened = __start.Bool+30; /*tni_train__cn_94*/
	car_doorL3Fault = __start.Int+9; /*tni_train__cn_95*/
	car_doorR1Closed = __start.Bool+29; /*tni_train__cn_96*/
	car_doorR1Opened = __start.Bool+28; /*tni_train__cn_97*/
	car_doorR1Fault = __start.Int+8; /*tni_train__cn_98*/
	car_doorR2Closed = __start.Bool+27; /*tni_train__cn_99*/
	car_doorR2Opened = __start.Bool+26; /*tni_train__cn_100*/
	car_doorR2Fault = __start.Int+7; /*tni_train__cn_101*/
	car_doorR3Closed = __start.Bool+25; /*tni_train__cn_102*/
	car_doorR3Opened = __start.Bool+24; /*tni_train__cn_103*/
	car_doorR3Fault = __start.Int+6; /*tni_train__cn_104*/
	car_AlarmD1L = __start.Bool+23; /*tni_train__cn_105*/
	car_AlarmD2L = __start.Bool+22; /*tni_train__cn_106*/
	car_AlarmD3L = __start.Bool+21; /*tni_train__cn_107*/
	car_AlarmD1R = __start.Bool+20; /*tni_train__cn_108*/
	car_AlarmD2R = __start.Bool+19; /*tni_train__cn_109*/
	car_AlarmD3R = __start.Bool+18; /*tni_train__cn_110*/
	_tni_train__car_init();

	/*initialize child motorCar2 (tni_train.car):*/
	self_num++;
	tni_train__tni_train_offset_motorCar2.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset_motorCar2.Int = self.Int - __start.Int;
	tni_train__tni_train_offset_motorCar2.Float = self.Float - __start.Float;
	tni_train__tni_train_offset_motorCar2.Char = self.Char - __start.Char;
	car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
	car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
	car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
	car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
	car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
	car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
	car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
	car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
	car_doorL1Closed = __start.Bool+17; /*tni_train__cn_111*/
	car_doorL1Opened = __start.Bool+16; /*tni_train__cn_112*/
	car_doorL1Fault = __start.Int+5; /*tni_train__cn_113*/
	car_doorL2Closed = __start.Bool+15; /*tni_train__cn_114*/
	car_doorL2Opened = __start.Bool+14; /*tni_train__cn_115*/
	car_doorL2Fault = __start.Int+4; /*tni_train__cn_116*/
	car_doorL3Closed = __start.Bool+13; /*tni_train__cn_117*/
	car_doorL3Opened = __start.Bool+12; /*tni_train__cn_118*/
	car_doorL3Fault = __start.Int+3; /*tni_train__cn_119*/
	car_doorR1Closed = __start.Bool+11; /*tni_train__cn_120*/
	car_doorR1Opened = __start.Bool+10; /*tni_train__cn_121*/
	car_doorR1Fault = __start.Int+2; /*tni_train__cn_122*/
	car_doorR2Closed = __start.Bool+9; /*tni_train__cn_123*/
	car_doorR2Opened = __start.Bool+8; /*tni_train__cn_124*/
	car_doorR2Fault = __start.Int+1; /*tni_train__cn_125*/
	car_doorR3Closed = __start.Bool+7; /*tni_train__cn_126*/
	car_doorR3Opened = __start.Bool+6; /*tni_train__cn_127*/
	car_doorR3Fault = __start.Int+0; /*tni_train__cn_128*/
	car_AlarmD1L = __start.Bool+5; /*tni_train__cn_129*/
	car_AlarmD2L = __start.Bool+4; /*tni_train__cn_130*/
	car_AlarmD3L = __start.Bool+3; /*tni_train__cn_131*/
	car_AlarmD1R = __start.Bool+2; /*tni_train__cn_132*/
	car_AlarmD2R = __start.Bool+1; /*tni_train__cn_133*/
	car_AlarmD3R = __start.Bool+0; /*tni_train__cn_134*/
	_tni_train__car_init();

	tni_train__tni_train_offset__end.Bool = self.Bool - __start.Bool;
	tni_train__tni_train_offset__end.Int = self.Int - __start.Int;
	tni_train__tni_train_offset__end.Float = self.Float - __start.Float;
	tni_train__tni_train_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int tni_train__tni_train(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

																																																																																																																																																																																																																																																																												
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + tni_train__tni_train_offset_cab1.Bool;
			self.Int = __start.Int + tni_train__tni_train_offset_cab1.Int;
			self.Float = __start.Float + tni_train__tni_train_offset_cab1.Float;
			self.Char = __start.Char + tni_train__tni_train_offset_cab1.Char;

			/************************** cab1 execution **************************/

			self_num++;
			if (cab__num != self_num) {
				cab__num = self_num;
				cab_keyCabEnabled2 = __start.Bool+92; /*tni_train__cn_12*/
				cab_keyCabDisabled2 = __start.Bool+93; /*tni_train__cn_11*/
				cab_enableOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
				cab_enableOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
				cab_enableClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
				cab_enableClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
				cab_cabEnabled = __start.Bool+94; /*tni_train__cn_10*/
				cab_cabDisabled = __start.Bool+95; /*tni_train__cn_9*/
				cab_cabIncoherence = __start.Bool+91; /*tni_train__cn_13*/
			}
			__ret = tni_train__cab();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************** cab2 execution **************************/

			self_num++;
			if (cab__num != self_num) {
				cab__num = self_num;
				cab_keyCabEnabled2 = __start.Bool+94; /*tni_train__cn_10*/
				cab_keyCabDisabled2 = __start.Bool+95; /*tni_train__cn_9*/
				cab_enableOpeningRightC1 = __start.Bool+101; /*tni_train__cn_3*/
				cab_enableOpeningLeftC1 = __start.Bool+103; /*tni_train__cn_1*/
				cab_enableClosingRightC1 = __start.Bool+102; /*tni_train__cn_2*/
				cab_enableClosingLeftC1 = __start.Bool+100; /*tni_train__cn_4*/
				cab_cabEnabled = __start.Bool+92; /*tni_train__cn_12*/
				cab_cabDisabled = __start.Bool+93; /*tni_train__cn_11*/
				cab_cabIncoherence = __start.Bool+90; /*tni_train__cn_14*/
			}
			__ret = tni_train__cab();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** motorCar1 execution ************************/

			self_num++;
			if (car__num != self_num) {
				car__num = self_num;
				car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
				car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
				car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
				car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
				car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
				car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
				car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
				car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
				car_doorL1Closed = __start.Bool+89; /*tni_train__cn_15*/
				car_doorL1Opened = __start.Bool+88; /*tni_train__cn_16*/
				car_doorL1Fault = __start.Int+29; /*tni_train__cn_17*/
				car_doorL2Closed = __start.Bool+87; /*tni_train__cn_18*/
				car_doorL2Opened = __start.Bool+86; /*tni_train__cn_19*/
				car_doorL2Fault = __start.Int+28; /*tni_train__cn_20*/
				car_doorL3Closed = __start.Bool+85; /*tni_train__cn_21*/
				car_doorL3Opened = __start.Bool+84; /*tni_train__cn_22*/
				car_doorL3Fault = __start.Int+27; /*tni_train__cn_23*/
				car_doorR1Closed = __start.Bool+83; /*tni_train__cn_24*/
				car_doorR1Opened = __start.Bool+82; /*tni_train__cn_25*/
				car_doorR1Fault = __start.Int+26; /*tni_train__cn_26*/
				car_doorR2Closed = __start.Bool+81; /*tni_train__cn_27*/
				car_doorR2Opened = __start.Bool+80; /*tni_train__cn_28*/
				car_doorR2Fault = __start.Int+25; /*tni_train__cn_29*/
				car_doorR3Closed = __start.Bool+79; /*tni_train__cn_30*/
				car_doorR3Opened = __start.Bool+78; /*tni_train__cn_31*/
				car_doorR3Fault = __start.Int+24; /*tni_train__cn_32*/
				car_AlarmD1L = __start.Bool+77; /*tni_train__cn_33*/
				car_AlarmD2L = __start.Bool+76; /*tni_train__cn_34*/
				car_AlarmD3L = __start.Bool+75; /*tni_train__cn_35*/
				car_AlarmD1R = __start.Bool+74; /*tni_train__cn_36*/
				car_AlarmD2R = __start.Bool+73; /*tni_train__cn_37*/
				car_AlarmD3R = __start.Bool+72; /*tni_train__cn_38*/
			}
			__ret = tni_train__car();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************** car1 execution **************************/

			self_num++;
			if (car__num != self_num) {
				car__num = self_num;
				car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
				car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
				car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
				car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
				car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
				car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
				car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
				car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
				car_doorL1Closed = __start.Bool+71; /*tni_train__cn_39*/
				car_doorL1Opened = __start.Bool+70; /*tni_train__cn_40*/
				car_doorL1Fault = __start.Int+23; /*tni_train__cn_41*/
				car_doorL2Closed = __start.Bool+69; /*tni_train__cn_42*/
				car_doorL2Opened = __start.Bool+68; /*tni_train__cn_43*/
				car_doorL2Fault = __start.Int+22; /*tni_train__cn_44*/
				car_doorL3Closed = __start.Bool+67; /*tni_train__cn_45*/
				car_doorL3Opened = __start.Bool+66; /*tni_train__cn_46*/
				car_doorL3Fault = __start.Int+21; /*tni_train__cn_47*/
				car_doorR1Closed = __start.Bool+65; /*tni_train__cn_48*/
				car_doorR1Opened = __start.Bool+64; /*tni_train__cn_49*/
				car_doorR1Fault = __start.Int+20; /*tni_train__cn_50*/
				car_doorR2Closed = __start.Bool+63; /*tni_train__cn_51*/
				car_doorR2Opened = __start.Bool+62; /*tni_train__cn_52*/
				car_doorR2Fault = __start.Int+19; /*tni_train__cn_53*/
				car_doorR3Closed = __start.Bool+61; /*tni_train__cn_54*/
				car_doorR3Opened = __start.Bool+60; /*tni_train__cn_55*/
				car_doorR3Fault = __start.Int+18; /*tni_train__cn_56*/
				car_AlarmD1L = __start.Bool+59; /*tni_train__cn_57*/
				car_AlarmD2L = __start.Bool+58; /*tni_train__cn_58*/
				car_AlarmD3L = __start.Bool+57; /*tni_train__cn_59*/
				car_AlarmD1R = __start.Bool+56; /*tni_train__cn_60*/
				car_AlarmD2R = __start.Bool+55; /*tni_train__cn_61*/
				car_AlarmD3R = __start.Bool+54; /*tni_train__cn_62*/
			}
			__ret = tni_train__car();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************** car2 execution **************************/

			self_num++;
			if (car__num != self_num) {
				car__num = self_num;
				car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
				car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
				car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
				car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
				car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
				car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
				car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
				car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
				car_doorL1Closed = __start.Bool+53; /*tni_train__cn_63*/
				car_doorL1Opened = __start.Bool+52; /*tni_train__cn_64*/
				car_doorL1Fault = __start.Int+17; /*tni_train__cn_65*/
				car_doorL2Closed = __start.Bool+51; /*tni_train__cn_66*/
				car_doorL2Opened = __start.Bool+50; /*tni_train__cn_67*/
				car_doorL2Fault = __start.Int+16; /*tni_train__cn_68*/
				car_doorL3Closed = __start.Bool+49; /*tni_train__cn_69*/
				car_doorL3Opened = __start.Bool+48; /*tni_train__cn_70*/
				car_doorL3Fault = __start.Int+15; /*tni_train__cn_71*/
				car_doorR1Closed = __start.Bool+47; /*tni_train__cn_72*/
				car_doorR1Opened = __start.Bool+46; /*tni_train__cn_73*/
				car_doorR1Fault = __start.Int+14; /*tni_train__cn_74*/
				car_doorR2Closed = __start.Bool+45; /*tni_train__cn_75*/
				car_doorR2Opened = __start.Bool+44; /*tni_train__cn_76*/
				car_doorR2Fault = __start.Int+13; /*tni_train__cn_77*/
				car_doorR3Closed = __start.Bool+43; /*tni_train__cn_78*/
				car_doorR3Opened = __start.Bool+42; /*tni_train__cn_79*/
				car_doorR3Fault = __start.Int+12; /*tni_train__cn_80*/
				car_AlarmD1L = __start.Bool+41; /*tni_train__cn_81*/
				car_AlarmD2L = __start.Bool+40; /*tni_train__cn_82*/
				car_AlarmD3L = __start.Bool+39; /*tni_train__cn_83*/
				car_AlarmD1R = __start.Bool+38; /*tni_train__cn_84*/
				car_AlarmD2R = __start.Bool+37; /*tni_train__cn_85*/
				car_AlarmD3R = __start.Bool+36; /*tni_train__cn_86*/
			}
			__ret = tni_train__car();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************** car3 execution **************************/

			self_num++;
			if (car__num != self_num) {
				car__num = self_num;
				car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
				car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
				car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
				car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
				car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
				car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
				car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
				car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
				car_doorL1Closed = __start.Bool+35; /*tni_train__cn_87*/
				car_doorL1Opened = __start.Bool+34; /*tni_train__cn_88*/
				car_doorL1Fault = __start.Int+11; /*tni_train__cn_89*/
				car_doorL2Closed = __start.Bool+33; /*tni_train__cn_90*/
				car_doorL2Opened = __start.Bool+32; /*tni_train__cn_91*/
				car_doorL2Fault = __start.Int+10; /*tni_train__cn_92*/
				car_doorL3Closed = __start.Bool+31; /*tni_train__cn_93*/
				car_doorL3Opened = __start.Bool+30; /*tni_train__cn_94*/
				car_doorL3Fault = __start.Int+9; /*tni_train__cn_95*/
				car_doorR1Closed = __start.Bool+29; /*tni_train__cn_96*/
				car_doorR1Opened = __start.Bool+28; /*tni_train__cn_97*/
				car_doorR1Fault = __start.Int+8; /*tni_train__cn_98*/
				car_doorR2Closed = __start.Bool+27; /*tni_train__cn_99*/
				car_doorR2Opened = __start.Bool+26; /*tni_train__cn_100*/
				car_doorR2Fault = __start.Int+7; /*tni_train__cn_101*/
				car_doorR3Closed = __start.Bool+25; /*tni_train__cn_102*/
				car_doorR3Opened = __start.Bool+24; /*tni_train__cn_103*/
				car_doorR3Fault = __start.Int+6; /*tni_train__cn_104*/
				car_AlarmD1L = __start.Bool+23; /*tni_train__cn_105*/
				car_AlarmD2L = __start.Bool+22; /*tni_train__cn_106*/
				car_AlarmD3L = __start.Bool+21; /*tni_train__cn_107*/
				car_AlarmD1R = __start.Bool+20; /*tni_train__cn_108*/
				car_AlarmD2R = __start.Bool+19; /*tni_train__cn_109*/
				car_AlarmD3R = __start.Bool+18; /*tni_train__cn_110*/
			}
			__ret = tni_train__car();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/*********************** motorCar2 execution ************************/

			self_num++;
			if (car__num != self_num) {
				car__num = self_num;
				car_AuthorizationClosingLeftC1 = __start.Bool+96; /*tni_train__cn_8*/
				car_AuthorizationOpeningRightC1 = __start.Bool+97; /*tni_train__cn_7*/
				car_AuthorizationClosingRightC1 = __start.Bool+98; /*tni_train__cn_6*/
				car_AuthorizationOpeningLeftC1 = __start.Bool+99; /*tni_train__cn_5*/
				car_AuthorizationClosingLeftC2 = __start.Bool+100; /*tni_train__cn_4*/
				car_AuthorizationOpeningRightC2 = __start.Bool+101; /*tni_train__cn_3*/
				car_AuthorizationClosingRightC2 = __start.Bool+102; /*tni_train__cn_2*/
				car_AuthorizationOpeningLeftC2 = __start.Bool+103; /*tni_train__cn_1*/
				car_doorL1Closed = __start.Bool+17; /*tni_train__cn_111*/
				car_doorL1Opened = __start.Bool+16; /*tni_train__cn_112*/
				car_doorL1Fault = __start.Int+5; /*tni_train__cn_113*/
				car_doorL2Closed = __start.Bool+15; /*tni_train__cn_114*/
				car_doorL2Opened = __start.Bool+14; /*tni_train__cn_115*/
				car_doorL2Fault = __start.Int+4; /*tni_train__cn_116*/
				car_doorL3Closed = __start.Bool+13; /*tni_train__cn_117*/
				car_doorL3Opened = __start.Bool+12; /*tni_train__cn_118*/
				car_doorL3Fault = __start.Int+3; /*tni_train__cn_119*/
				car_doorR1Closed = __start.Bool+11; /*tni_train__cn_120*/
				car_doorR1Opened = __start.Bool+10; /*tni_train__cn_121*/
				car_doorR1Fault = __start.Int+2; /*tni_train__cn_122*/
				car_doorR2Closed = __start.Bool+9; /*tni_train__cn_123*/
				car_doorR2Opened = __start.Bool+8; /*tni_train__cn_124*/
				car_doorR2Fault = __start.Int+1; /*tni_train__cn_125*/
				car_doorR3Closed = __start.Bool+7; /*tni_train__cn_126*/
				car_doorR3Opened = __start.Bool+6; /*tni_train__cn_127*/
				car_doorR3Fault = __start.Int+0; /*tni_train__cn_128*/
				car_AlarmD1L = __start.Bool+5; /*tni_train__cn_129*/
				car_AlarmD2L = __start.Bool+4; /*tni_train__cn_130*/
				car_AlarmD3L = __start.Bool+3; /*tni_train__cn_131*/
				car_AlarmD1R = __start.Bool+2; /*tni_train__cn_132*/
				car_AlarmD2R = __start.Bool+1; /*tni_train__cn_133*/
				car_AlarmD3R = __start.Bool+0; /*tni_train__cn_134*/
			}
			__ret = tni_train__car();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + tni_train__tni_train_offset__end.Bool;
	self.Int = __start.Int + tni_train__tni_train_offset__end.Int;
	self.Float = __start.Float + tni_train__tni_train_offset__end.Float;
	self.Char = __start.Char + tni_train__tni_train_offset__end.Char;

	return 0;
}

