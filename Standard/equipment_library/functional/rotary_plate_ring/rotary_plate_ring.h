/*2023-10-03T11:12:55-01:00*/

/********************************************************************
 * rotary_plate_ring.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__ROTARY_PLATE_RING_H
#define _EQUIPMENT_LIBRARY__ROTARY_PLATE_RING_H


/********************** Variable declarations ***********************/

extern CB_Index rotary_plate_ring__num;
extern CB_Mem_Float *rotary_plate_ring_incShiftX;
extern CB_Mem_Float *rotary_plate_ring_incShiftZ;
extern CB_Mem_Float *rotary_plate_ring_incShiftY;
extern CB_Mem_Float *rotary_plate_ring_rotationSpeed;
extern CB_Mem_Float *rotary_plate_ring_angleRotationRad;
extern CB_Mem_Float *rotary_plate_ring_incRotation;
extern CB_Mem_Float *rotary_plate_ring_centerX;
extern CB_Mem_Float *rotary_plate_ring_centerY;
extern CB_Mem_Float *rotary_plate_ring_centerZ;
extern CB_Mem_Float *rotary_plate_ring_angleRotationDeg;
extern CB_Mem_Int *rotary_plate_ring_status_act_prod;
extern CB_Mem_Float *rotary_plate_ring_m11;
extern CB_Mem_Float *rotary_plate_ring_m12;
extern CB_Mem_Float *rotary_plate_ring_m13;
extern CB_Mem_Float *rotary_plate_ring_m14;
extern CB_Mem_Float *rotary_plate_ring_m21;
extern CB_Mem_Float *rotary_plate_ring_m22;
extern CB_Mem_Float *rotary_plate_ring_m23;
extern CB_Mem_Float *rotary_plate_ring_m24;
extern CB_Mem_Float *rotary_plate_ring_m31;
extern CB_Mem_Float *rotary_plate_ring_m32;
extern CB_Mem_Float *rotary_plate_ring_m33;
extern CB_Mem_Float *rotary_plate_ring_m34;
extern CB_Mem_Float *rotary_plate_ring_m41;
extern CB_Mem_Float *rotary_plate_ring_m42;
extern CB_Mem_Float *rotary_plate_ring_m43;
extern CB_Mem_Float *rotary_plate_ring_m44;
extern CB_Mem_Float *rotary_plate_ring_incrementRotation;
extern CB_Mem_Float *rotary_plate_ring_positionsRecalage;
extern CB_Mem_Float *rotary_plate_ring_deltaPos;
extern CB_Mem_Bool *rotary_plate_ring_d_locking;
extern CB_Mem_Float *rotary_plate_ring_v_d_locking;
extern CB_Mem_Bool *rotary_plate_ring_d_position;
extern CB_Mem_Float *rotary_plate_ring_v_d_position;

/********************** Function declarations ***********************/

extern int _equipment_library__rotary_plate_ring_init(void);
extern int equipment_library__rotary_plate_ring(void);

/************************** Access macros ***************************/

#define mx_acces_equipment_library__rotary_plate_ring__status_act_prod Int[0].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m11 Float[0].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m12 Float[1].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m13 Float[2].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m14 Float[3].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m21 Float[4].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m22 Float[5].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m23 Float[6].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m24 Float[7].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m31 Float[8].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m32 Float[9].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m33 Float[10].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m34 Float[11].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m41 Float[12].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m42 Float[13].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m43 Float[14].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__m44 Float[15].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__incrementRotation Float[16].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__positionsRecalage Float[17].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__deltaPos Float[24].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__d_locking Bool[0].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__v_d_locking Float[25].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__d_position Bool[1].CB_current_value
#define mx_acces_equipment_library__rotary_plate_ring__v_d_position Float[26].CB_current_value

#endif /*_EQUIPMENT_LIBRARY__ROTARY_PLATE_RING_H*/
