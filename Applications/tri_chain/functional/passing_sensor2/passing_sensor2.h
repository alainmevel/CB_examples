/*2023-10-03T11:13:57-01:00*/

/********************************************************************
 * passing_sensor2.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TRI_CHAIN__PASSING_SENSOR2_H
#define _TRI_CHAIN__PASSING_SENSOR2_H


/********************** Variable declarations ***********************/

extern CB_Index passing_sensor2__num;
extern CB_Mem_Bool *passing_sensor2_sensorSupply;
extern CB_Mem_Float *passing_sensor2_deltaTranslation;
extern CB_Mem_Bool *passing_sensor2_passing;
extern CB_Mem_Int *passing_sensor2_status_act_prod;
extern CB_Mem_Float *passing_sensor2_m11;
extern CB_Mem_Float *passing_sensor2_m12;
extern CB_Mem_Float *passing_sensor2_m13;
extern CB_Mem_Float *passing_sensor2_m14;
extern CB_Mem_Float *passing_sensor2_m21;
extern CB_Mem_Float *passing_sensor2_m22;
extern CB_Mem_Float *passing_sensor2_m23;
extern CB_Mem_Float *passing_sensor2_m24;
extern CB_Mem_Float *passing_sensor2_m31;
extern CB_Mem_Float *passing_sensor2_m32;
extern CB_Mem_Float *passing_sensor2_m33;
extern CB_Mem_Float *passing_sensor2_m34;
extern CB_Mem_Float *passing_sensor2_m41;
extern CB_Mem_Float *passing_sensor2_m42;
extern CB_Mem_Float *passing_sensor2_m43;
extern CB_Mem_Float *passing_sensor2_m44;
extern CB_Mem_Float *passing_sensor2_px;
extern CB_Mem_Float *passing_sensor2_py;
extern CB_Mem_Float *passing_sensor2_pz;
extern CB_Mem_Float *passing_sensor2_dx;
extern CB_Mem_Float *passing_sensor2_dy;
extern CB_Mem_Float *passing_sensor2_dz;
extern CB_Mem_Bool *passing_sensor2_detection;
extern CB_Mem_Bool *passing_sensor2_passingLogic;
extern CB_Mem_Float *passing_sensor2_initialPosition;
extern CB_Mem_Bool *passing_sensor2_d_passing;
extern CB_Mem_Bool *passing_sensor2_v_d_passing;

/********************** Function declarations ***********************/

extern int _tri_chain__passing_sensor2_init(void);
extern int tri_chain__passing_sensor2(void);

/************************** Access macros ***************************/

#define mx_acces_tri_chain__passing_sensor2__status_act_prod Int[0].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m11 Float[0].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m12 Float[1].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m13 Float[2].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m14 Float[3].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m21 Float[4].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m22 Float[5].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m23 Float[6].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m24 Float[7].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m31 Float[8].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m32 Float[9].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m33 Float[10].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m34 Float[11].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m41 Float[12].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m42 Float[13].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m43 Float[14].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__m44 Float[15].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__px Float[16].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__py Float[17].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__pz Float[18].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__dx Float[19].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__dy Float[20].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__dz Float[21].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__detection Bool[0].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__passingLogic Bool[1].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__initialPosition Float[22].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__d_passing Bool[2].CB_current_value
#define mx_acces_tri_chain__passing_sensor2__v_d_passing Bool[3].CB_current_value

#endif /*_TRI_CHAIN__PASSING_SENSOR2_H*/
