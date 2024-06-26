/*2023-10-03T11:13:52-01:00*/

/********************************************************************
 * car.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TNI_TRAIN__CAR_H
#define _TNI_TRAIN__CAR_H


/********************** Variable declarations ***********************/

extern CB_Index car__num;
extern CB_Mem_Bool *car_AuthorizationClosingLeftC1;
extern CB_Mem_Bool *car_AuthorizationOpeningRightC1;
extern CB_Mem_Bool *car_AuthorizationClosingRightC1;
extern CB_Mem_Bool *car_AuthorizationOpeningLeftC1;
extern CB_Mem_Bool *car_AuthorizationClosingLeftC2;
extern CB_Mem_Bool *car_AuthorizationOpeningRightC2;
extern CB_Mem_Bool *car_AuthorizationClosingRightC2;
extern CB_Mem_Bool *car_AuthorizationOpeningLeftC2;
extern CB_Mem_Bool *car_doorL1Closed;
extern CB_Mem_Bool *car_doorL1Opened;
extern CB_Mem_Int *car_doorL1Fault;
extern CB_Mem_Bool *car_doorL2Closed;
extern CB_Mem_Bool *car_doorL2Opened;
extern CB_Mem_Int *car_doorL2Fault;
extern CB_Mem_Bool *car_doorL3Closed;
extern CB_Mem_Bool *car_doorL3Opened;
extern CB_Mem_Int *car_doorL3Fault;
extern CB_Mem_Bool *car_doorR1Closed;
extern CB_Mem_Bool *car_doorR1Opened;
extern CB_Mem_Int *car_doorR1Fault;
extern CB_Mem_Bool *car_doorR2Closed;
extern CB_Mem_Bool *car_doorR2Opened;
extern CB_Mem_Int *car_doorR2Fault;
extern CB_Mem_Bool *car_doorR3Closed;
extern CB_Mem_Bool *car_doorR3Opened;
extern CB_Mem_Int *car_doorR3Fault;
extern CB_Mem_Bool *car_AlarmD1L;
extern CB_Mem_Bool *car_AlarmD2L;
extern CB_Mem_Bool *car_AlarmD3L;
extern CB_Mem_Bool *car_AlarmD1R;
extern CB_Mem_Bool *car_AlarmD2R;
extern CB_Mem_Bool *car_AlarmD3R;

/********************** Function declarations ***********************/

extern int _tni_train__car_init(void);
extern int tni_train__car(void);

#endif /*_TNI_TRAIN__CAR_H*/
