/*2023-10-03T11:13:50-01:00*/

/********************************************************************
 * pb_door.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TNI_TRAIN__PB_DOOR_H
#define _TNI_TRAIN__PB_DOOR_H


/********************** Variable declarations ***********************/

extern CB_Index pb_door__num;
extern CB_Mem_Bool *pb_door_doorPB;
extern CB_Mem_Bool *pb_door_button;

/********************** Function declarations ***********************/

extern int _tni_train__pb_door_init(void);
extern int tni_train__pb_door(void);

#endif /*_TNI_TRAIN__PB_DOOR_H*/
