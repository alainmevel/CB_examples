/*2023-10-03T11:13:58-01:00*/

/********************************************************************
 * shuttle_control.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "shuttle_control.h"


/**************************** Variables *****************************/

CB_Index shuttle_control__num = 0;
CB_Mem_Bool *shuttle_control_globalRunning;
CB_Mem_Bool *shuttle_control_sensorPos1;
CB_Mem_Bool *shuttle_control_sensorPos2;
CB_Mem_Bool *shuttle_control_sensorPos3;
CB_Mem_Bool *shuttle_control_requestCapture1;
CB_Mem_Bool *shuttle_control_endCapture1;
CB_Mem_Bool *shuttle_control_requestCapture2;
CB_Mem_Bool *shuttle_control_endCapture2;
CB_Mem_Bool *shuttle_control_requestCapture3;
CB_Mem_Bool *shuttle_control_endCapture3;
CB_Mem_Bool *shuttle_control_depositRequest;
CB_Mem_Bool *shuttle_control_depositFinished;
CB_Mem_Bool *shuttle_control_enableCapture1;
CB_Mem_Bool *shuttle_control_enableCapture2;
CB_Mem_Bool *shuttle_control_enableCapture3;
CB_Mem_Bool *shuttle_control_enableCapture;
CB_Mem_Bool *shuttle_control_enableDeposit;
CB_Mem_Bool *shuttle_control_moveToLeft;
CB_Mem_Bool *shuttle_control_moveToRight;
CB_Mem_Bool *shuttle_control_goTo1;
CB_Mem_Bool *shuttle_control_goTo2;
CB_Mem_Bool *shuttle_control_goTo3;
CB_Mem_Bool *shuttle_control_shuttleInPosition;
CB_Mem_Bool *shuttle_control__X_10;
CB_Mem_Bool *shuttle_control__X_11;
CB_Mem_Bool *shuttle_control__X_12;
CB_Mem_Bool *shuttle_control__X_17;
CB_Mem_Bool *shuttle_control__X_18;
CB_Mem_Bool *shuttle_control__X_19;
CB_Mem_Bool *shuttle_control__X_13;
CB_Mem_Bool *shuttle_control__X_14;
CB_Mem_Bool *shuttle_control__X_15;
CB_Mem_Bool *shuttle_control__X_16;
CB_Mem_Bool *shuttle_control__X_20;
CB_Mem_Bool *shuttle_control__X_21;
CB_Mem_Bool *shuttle_control__X_22;
CB_Mem_Bool *shuttle_control__X_30;
CB_Mem_Bool *shuttle_control__X_31;
CB_Mem_Bool *shuttle_control__X_32;
CB_Mem_Bool *shuttle_control__X_40;
CB_Mem_Bool *shuttle_control__X_41;
CB_Mem_Bool *shuttle_control__X_42;
CB_Mem_Bool *shuttle_control__X_11_PREV;
CB_Mem_Bool *shuttle_control__X_12_PREV;
CB_Mem_Bool *shuttle_control__X_17_PREV;
CB_Mem_Bool *shuttle_control__X_18_PREV;
CB_Mem_Bool *shuttle_control__X_19_PREV;
CB_Mem_Bool *shuttle_control__X_13_PREV;
CB_Mem_Bool *shuttle_control__X_14_PREV;
CB_Mem_Bool *shuttle_control__X_15_PREV;
CB_Mem_Bool *shuttle_control__X_16_PREV;
CB_Mem_Bool *shuttle_control__X_21_PREV;
CB_Mem_Bool *shuttle_control__X_22_PREV;
CB_Mem_Bool *shuttle_control__X_31_PREV;
CB_Mem_Bool *shuttle_control__X_32_PREV;
CB_Mem_Bool *shuttle_control__X_41_PREV;
CB_Mem_Bool *shuttle_control__X_42_PREV;

/**************************** Variables *****************************/

#define globalRunning (shuttle_control_globalRunning->CB_current_value)
#define sensorPos1 (shuttle_control_sensorPos1->CB_current_value)
#define sensorPos2 (shuttle_control_sensorPos2->CB_current_value)
#define sensorPos3 (shuttle_control_sensorPos3->CB_current_value)
#define requestCapture1 (shuttle_control_requestCapture1->CB_current_value)
#define endCapture1 (shuttle_control_endCapture1->CB_current_value)
#define requestCapture2 (shuttle_control_requestCapture2->CB_current_value)
#define endCapture2 (shuttle_control_endCapture2->CB_current_value)
#define requestCapture3 (shuttle_control_requestCapture3->CB_current_value)
#define endCapture3 (shuttle_control_endCapture3->CB_current_value)
#define depositRequest (shuttle_control_depositRequest->CB_current_value)
#define depositFinished (shuttle_control_depositFinished->CB_current_value)
#define enableCapture1 (shuttle_control_enableCapture1->CB_current_value)
#define enableCapture2 (shuttle_control_enableCapture2->CB_current_value)
#define enableCapture3 (shuttle_control_enableCapture3->CB_current_value)
#define enableCapture (shuttle_control_enableCapture->CB_current_value)
#define enableDeposit (shuttle_control_enableDeposit->CB_current_value)
#define moveToLeft (shuttle_control_moveToLeft->CB_current_value)
#define moveToRight (shuttle_control_moveToRight->CB_current_value)
#define goTo1 (shuttle_control_goTo1->CB_current_value)
#define goTo2 (shuttle_control_goTo2->CB_current_value)
#define goTo3 (shuttle_control_goTo3->CB_current_value)
#define shuttleInPosition (shuttle_control_shuttleInPosition->CB_current_value)
#define _X_10 (shuttle_control__X_10->CB_current_value)
#define _X_11 (shuttle_control__X_11->CB_current_value)
#define _X_12 (shuttle_control__X_12->CB_current_value)
#define _X_17 (shuttle_control__X_17->CB_current_value)
#define _X_18 (shuttle_control__X_18->CB_current_value)
#define _X_19 (shuttle_control__X_19->CB_current_value)
#define _X_13 (shuttle_control__X_13->CB_current_value)
#define _X_14 (shuttle_control__X_14->CB_current_value)
#define _X_15 (shuttle_control__X_15->CB_current_value)
#define _X_16 (shuttle_control__X_16->CB_current_value)
#define _X_20 (shuttle_control__X_20->CB_current_value)
#define _X_21 (shuttle_control__X_21->CB_current_value)
#define _X_22 (shuttle_control__X_22->CB_current_value)
#define _X_30 (shuttle_control__X_30->CB_current_value)
#define _X_31 (shuttle_control__X_31->CB_current_value)
#define _X_32 (shuttle_control__X_32->CB_current_value)
#define _X_40 (shuttle_control__X_40->CB_current_value)
#define _X_41 (shuttle_control__X_41->CB_current_value)
#define _X_42 (shuttle_control__X_42->CB_current_value)
#define _X_11_PREV (shuttle_control__X_11_PREV->CB_current_value)
#define _X_12_PREV (shuttle_control__X_12_PREV->CB_current_value)
#define _X_17_PREV (shuttle_control__X_17_PREV->CB_current_value)
#define _X_18_PREV (shuttle_control__X_18_PREV->CB_current_value)
#define _X_19_PREV (shuttle_control__X_19_PREV->CB_current_value)
#define _X_13_PREV (shuttle_control__X_13_PREV->CB_current_value)
#define _X_14_PREV (shuttle_control__X_14_PREV->CB_current_value)
#define _X_15_PREV (shuttle_control__X_15_PREV->CB_current_value)
#define _X_16_PREV (shuttle_control__X_16_PREV->CB_current_value)
#define _X_21_PREV (shuttle_control__X_21_PREV->CB_current_value)
#define _X_22_PREV (shuttle_control__X_22_PREV->CB_current_value)
#define _X_31_PREV (shuttle_control__X_31_PREV->CB_current_value)
#define _X_32_PREV (shuttle_control__X_32_PREV->CB_current_value)
#define _X_41_PREV (shuttle_control__X_41_PREV->CB_current_value)
#define _X_42_PREV (shuttle_control__X_42_PREV->CB_current_value)


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tri_chain__shuttle_control_init(void)
{
	(self.Bool+4)->CB_current_value = 1; /*_X_10*/
	(self.Bool+14)->CB_current_value = 1; /*_X_20*/
	(self.Bool+17)->CB_current_value = 1; /*_X_30*/
	(self.Bool+20)->CB_current_value = 1; /*_X_40*/
	self.Bool+=38;


	return 0;
}


/************************ Behavior function *************************/

int tri_chain__shuttle_control(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		shuttle_control_goTo1 = self.Bool+0;
		shuttle_control_goTo2 = self.Bool+1;
		shuttle_control_goTo3 = self.Bool+2;
		shuttle_control_shuttleInPosition = self.Bool+3;
		shuttle_control__X_10 = self.Bool+4;
		shuttle_control__X_11 = self.Bool+5;
		shuttle_control__X_12 = self.Bool+6;
		shuttle_control__X_17 = self.Bool+7;
		shuttle_control__X_18 = self.Bool+8;
		shuttle_control__X_19 = self.Bool+9;
		shuttle_control__X_13 = self.Bool+10;
		shuttle_control__X_14 = self.Bool+11;
		shuttle_control__X_15 = self.Bool+12;
		shuttle_control__X_16 = self.Bool+13;
		shuttle_control__X_20 = self.Bool+14;
		shuttle_control__X_21 = self.Bool+15;
		shuttle_control__X_22 = self.Bool+16;
		shuttle_control__X_30 = self.Bool+17;
		shuttle_control__X_31 = self.Bool+18;
		shuttle_control__X_32 = self.Bool+19;
		shuttle_control__X_40 = self.Bool+20;
		shuttle_control__X_41 = self.Bool+21;
		shuttle_control__X_42 = self.Bool+22;
		shuttle_control__X_11_PREV = self.Bool+23;
		shuttle_control__X_12_PREV = self.Bool+24;
		shuttle_control__X_17_PREV = self.Bool+25;
		shuttle_control__X_18_PREV = self.Bool+26;
		shuttle_control__X_19_PREV = self.Bool+27;
		shuttle_control__X_13_PREV = self.Bool+28;
		shuttle_control__X_14_PREV = self.Bool+29;
		shuttle_control__X_15_PREV = self.Bool+30;
		shuttle_control__X_16_PREV = self.Bool+31;
		shuttle_control__X_21_PREV = self.Bool+32;
		shuttle_control__X_22_PREV = self.Bool+33;
		shuttle_control__X_31_PREV = self.Bool+34;
		shuttle_control__X_32_PREV = self.Bool+35;
		shuttle_control__X_41_PREV = self.Bool+36;
		shuttle_control__X_42_PREV = self.Bool+37;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			unsigned char _Y_16;
			unsigned char _Y_15;
			unsigned char _Y_14;
			unsigned char _Y_13;
			unsigned char _Y_12;
			unsigned char _Y_11;
			unsigned char _Y_19;
			unsigned char _Y_18;
			unsigned char _Y_17;
			unsigned char _Y_22;
			unsigned char _Y_21;
			unsigned char _Y_20;
			unsigned char _Y_49;
			unsigned char _Y_48;
			unsigned char _Y_47;
			unsigned char _Y_50;
			unsigned char _Y_63;
			unsigned char _Y_62;
			unsigned char _Y_61;
			unsigned char _Y_64;
			unsigned char _Y_77;
			unsigned char _Y_76;
			unsigned char _Y_75;
			unsigned char _Y_78;
			/*pre-SFC*/
			/*transitions G1*/
			_Y_16 = _X_10 && (requestCapture1 && globalRunning);
			_Y_15 = _X_11 && shuttleInPosition;
			_Y_14 = _X_12 && (endCapture1 && depositRequest);
			_Y_13 = _X_17 && shuttleInPosition;
			_Y_12 = _X_18 && depositFinished;
			_Y_11 = _X_19 && shuttleInPosition;
			_Y_19 = _X_10 && (!_Y_16 && (requestCapture2 && globalRunning));
			_Y_18 = _X_13 && shuttleInPosition;
			_Y_17 = _X_14 && (endCapture2 && depositRequest);
			_Y_22 = _X_10 && (!_Y_16 && (!_Y_19 && (requestCapture3 && globalRunning)));
			_Y_21 = _X_15 && shuttleInPosition;
			_Y_20 = _X_16 && (endCapture3 && depositRequest);
			/*transitions G2*/
			_Y_49 = _X_20 && (goTo2 && !sensorPos2);
			_Y_48 = _X_21 && sensorPos2;
			_Y_47 = _X_22;
			_Y_50 = _X_20 && (!_Y_49 && (goTo2 && sensorPos2));
			/*transitions G3*/
			_Y_63 = _X_30 && (goTo1 && !sensorPos1);
			_Y_62 = _X_31 && sensorPos1;
			_Y_61 = _X_32;
			_Y_64 = _X_30 && (!_Y_63 && (goTo1 && sensorPos1));
			/*transitions G4*/
			_Y_77 = _X_40 && (goTo3 && !sensorPos3);
			_Y_76 = _X_41 && sensorPos3;
			_Y_75 = _X_42;
			_Y_78 = _X_40 && (!_Y_77 && (goTo3 && sensorPos3));
			/*evolutions G1*/
			if (_Y_16) {
				_X_10 = 0;
			}
			if (_Y_15) {
				_X_11 = 0;
			}
			if (_Y_14) {
				_X_12 = 0;
			}
			if (_Y_13) {
				_X_17 = 0;
			}
			if (_Y_12) {
				_X_18 = 0;
			}
			if (_Y_11) {
				_X_19 = 0;
			}
			if (_Y_19) {
				_X_10 = 0;
			}
			if (_Y_18) {
				_X_13 = 0;
			}
			if (_Y_17) {
				_X_14 = 0;
			}
			if (_Y_22) {
				_X_10 = 0;
			}
			if (_Y_21) {
				_X_15 = 0;
			}
			if (_Y_20) {
				_X_16 = 0;
			}
			if (_Y_16) {
				_X_11 = 1;
			}
			if (_Y_15) {
				_X_12 = 1;
			}
			if (_Y_14) {
				_X_17 = 1;
			}
			if (_Y_13) {
				_X_18 = 1;
			}
			if (_Y_12) {
				_X_19 = 1;
			}
			if (_Y_11) {
				_X_10 = 1;
			}
			if (_Y_19) {
				_X_13 = 1;
			}
			if (_Y_18) {
				_X_14 = 1;
			}
			if (_Y_17) {
				_X_17 = 1;
			}
			if (_Y_22) {
				_X_15 = 1;
			}
			if (_Y_21) {
				_X_16 = 1;
			}
			if (_Y_20) {
				_X_17 = 1;
			}
			/*timers G1*/
			/*actions G1*/
			if (CB_edge_bool(_X_11, _X_11_PREV) < 0) {
				goTo1 = 0;
			}
			if (CB_edge_bool(_X_12, _X_12_PREV) < 0) {
				enableCapture = 0;
				enableCapture1 = 0;
			}
			if (CB_edge_bool(_X_17, _X_17_PREV) < 0) {
				goTo3 = 0;
			}
			if (CB_edge_bool(_X_18, _X_18_PREV) < 0) {
				enableDeposit = 0;
			}
			if (CB_edge_bool(_X_19, _X_19_PREV) < 0) {
				goTo2 = 0;
			}
			if (CB_edge_bool(_X_13, _X_13_PREV) < 0) {
				goTo2 = 0;
			}
			if (CB_edge_bool(_X_14, _X_14_PREV) < 0) {
				enableCapture = 0;
				enableCapture2 = 0;
			}
			if (CB_edge_bool(_X_15, _X_15_PREV) < 0) {
				goTo3 = 0;
			}
			if (CB_edge_bool(_X_16, _X_16_PREV) < 0) {
				enableCapture = 0;
				enableCapture3 = 0;
			}
			if (_X_11) {
				goTo1 = 1;
			}
			if (_X_12) {
				enableCapture = 1;
				enableCapture1 = 1;
			}
			if (_X_17) {
				goTo3 = 1;
			}
			if (_X_18) {
				enableDeposit = 1;
			}
			if (_X_19) {
				goTo2 = 1;
			}
			if (_X_13) {
				goTo2 = 1;
			}
			if (_X_14) {
				enableCapture = 1;
				enableCapture2 = 1;
			}
			if (_X_15) {
				goTo3 = 1;
			}
			if (_X_16) {
				enableCapture = 1;
				enableCapture3 = 1;
			}
			/*evolutions G2*/
			if (_Y_49) {
				_X_20 = 0;
			}
			if (_Y_48) {
				_X_21 = 0;
			}
			if (_Y_47) {
				_X_22 = 0;
			}
			if (_Y_50) {
				_X_20 = 0;
			}
			if (_Y_49) {
				_X_21 = 1;
			}
			if (_Y_48) {
				_X_22 = 1;
			}
			if (_Y_47) {
				_X_20 = 1;
			}
			if (_Y_50) {
				_X_22 = 1;
			}
			/*timers G2*/
			/*actions G2*/
			if (CB_edge_bool(_X_21, _X_21_PREV) < 0) {
				moveToLeft = 0;
			}
			if (CB_edge_bool(_X_22, _X_22_PREV) < 0) {
				shuttleInPosition = 0;
			}
			if (_X_21) {
				moveToLeft = 1;
			}
			if (_X_22) {
				shuttleInPosition = 1;
			}
			/*evolutions G3*/
			if (_Y_63) {
				_X_30 = 0;
			}
			if (_Y_62) {
				_X_31 = 0;
			}
			if (_Y_61) {
				_X_32 = 0;
			}
			if (_Y_64) {
				_X_30 = 0;
			}
			if (_Y_63) {
				_X_31 = 1;
			}
			if (_Y_62) {
				_X_32 = 1;
			}
			if (_Y_61) {
				_X_30 = 1;
			}
			if (_Y_64) {
				_X_32 = 1;
			}
			/*timers G3*/
			/*actions G3*/
			if (CB_edge_bool(_X_31, _X_31_PREV) < 0) {
				moveToLeft = 0;
			}
			if (CB_edge_bool(_X_32, _X_32_PREV) < 0) {
				shuttleInPosition = 0;
			}
			if (_X_31) {
				moveToLeft = 1;
			}
			if (_X_32) {
				shuttleInPosition = 1;
			}
			/*evolutions G4*/
			if (_Y_77) {
				_X_40 = 0;
			}
			if (_Y_76) {
				_X_41 = 0;
			}
			if (_Y_75) {
				_X_42 = 0;
			}
			if (_Y_78) {
				_X_40 = 0;
			}
			if (_Y_77) {
				_X_41 = 1;
			}
			if (_Y_76) {
				_X_42 = 1;
			}
			if (_Y_75) {
				_X_40 = 1;
			}
			if (_Y_78) {
				_X_42 = 1;
			}
			/*timers G4*/
			/*actions G4*/
			if (CB_edge_bool(_X_41, _X_41_PREV) < 0) {
				moveToRight = 0;
			}
			if (CB_edge_bool(_X_42, _X_42_PREV) < 0) {
				shuttleInPosition = 0;
			}
			if (_X_41) {
				moveToRight = 1;
			}
			if (_X_42) {
				shuttleInPosition = 1;
			}
			/*post-SFC*/
			_X_31_PREV = _X_31;
			_X_18_PREV = _X_18;
			_X_13_PREV = _X_13;
			_X_16_PREV = _X_16;
			_X_41_PREV = _X_41;
			_X_11_PREV = _X_11;
			_X_21_PREV = _X_21;
			_X_42_PREV = _X_42;
			_X_14_PREV = _X_14;
			_X_19_PREV = _X_19;
			_X_12_PREV = _X_12;
			_X_17_PREV = _X_17;
			_X_15_PREV = _X_15;
			_X_22_PREV = _X_22;
			_X_32_PREV = _X_32;
		}

		CB_post_bool(shuttle_control_enableCapture1);
		CB_post_bool(shuttle_control_enableCapture2);
		CB_post_bool(shuttle_control_enableCapture3);
		CB_post_bool(shuttle_control_enableCapture);
		CB_post_bool(shuttle_control_enableDeposit);
		CB_post_bool(shuttle_control_moveToLeft);
		CB_post_bool(shuttle_control_moveToRight);

		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool += 38;

	return 0;
}

