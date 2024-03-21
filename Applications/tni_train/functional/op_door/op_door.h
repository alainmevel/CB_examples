/*2023-10-03T11:13:48-01:00*/

/********************************************************************
 * op_door.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TNI_TRAIN__OP_DOOR_H
#define _TNI_TRAIN__OP_DOOR_H


/********************** Variable declarations ***********************/

extern CB_Index op_door__num;
extern CB_Mem_Float *op_door_compressedAir;
extern CB_Mem_Bool *op_door_cmdSupply;
extern CB_Mem_Bool *op_door_sensorSupply;
extern CB_Mem_Bool *op_door_openDoorCmd;
extern CB_Mem_Bool *op_door_closeDoorCmd;
extern CB_Mem_Bool *op_door_lockActive;
extern CB_Mem_Bool *op_door_doorOpened;
extern CB_Mem_Bool *op_door_doorClosed;
extern CB_Mem_Float *op_door_increment;
extern CB_Mem_Bool *op_door_openDoor;
extern CB_Mem_Bool *op_door_closeDoor;
extern CB_Mem_Float *op_door_doorPosition;
extern CB_Mem_Float *op_door_length;
extern CB_Mem_Bool *op_door_doorClosedSensorLogic;
extern CB_Mem_Bool *op_door_doorOpenedSensorLogic;
extern CB_Mem_Bool *op_door_d_locking;
extern CB_Mem_Float *op_door_v_d_locking;
extern CB_Mem_Bool *op_door_d_doorClosedSensor;
extern CB_Mem_Bool *op_door_v_d_doorClosedSensor;
extern CB_Mem_Bool *op_door_d_doorOpenedSensor;
extern CB_Mem_Bool *op_door_v_d_doorOpenedSensor;

/********************** Function declarations ***********************/

extern int _tni_train__op_door_init(void);
extern int tni_train__op_door(void);

#endif /*_TNI_TRAIN__OP_DOOR_H*/
