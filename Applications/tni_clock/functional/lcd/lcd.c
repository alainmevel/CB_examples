/*2023-10-03T11:13:47-01:00*/

/********************************************************************
 * lcd.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "lcd.h"


/**************************** Variables *****************************/

CB_Index lcd__num = 0;
CB_Mem_Int *lcd_displayValue;
CB_Mem_Char *lcd_displayString;
CB_Mem_Int *lcd_i;

/**************************** Variables *****************************/

#define displayValue(i) (*((unsigned char *)&(lcd_displayValue[i+1].CB_current_value) + ALIGN_OFFSET_CHAR))
#define displayString(i) (lcd_displayString[i+2].CB_current_value)
#define i (*((char *)&(lcd_i->CB_current_value) + ALIGN_OFFSET_CHAR))


/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _tni_clock__lcd_init(void)
{
	(self.Char+0+0)->CB_current_value = 0; /*displayString size1*/
	(self.Char+0+1)->CB_current_value = 8; /*displayString size2*/
	self.Int+=1;
	self.Char+=11;


	return 0;
}


/************************ Behavior function *************************/

int tni_clock__lcd(void)
{
	if (exec_term_node(self_num)) {

		/*********************** Internals variables ************************/

		lcd_displayString = self.Char+0;
		lcd_i = self.Int+0;

		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			{
				char _last_i = 8;
				for (i = 1; i <= _last_i; i += 1) {
					displayString(i) = displayValue(i);
				}
			}
		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Int += 1;
	self.Char += 11;

	return 0;
}

