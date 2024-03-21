/*2023-10-03T11:13:55-01:00*/

/********************************************************************
 * rangesensor.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _TRI_CHAIN__RANGESENSOR_H
#define _TRI_CHAIN__RANGESENSOR_H


/********************** Variable declarations ***********************/

extern CB_Index rangesensor__num;
extern CB_Mem_Float *rangesensor_level;
extern CB_Mem_Bool *rangesensor_sensorSupply;
extern CB_Mem_Bool *rangesensor_rangeSensor;
extern CB_Mem_Int *rangesensor_status_act_prod;
extern CB_Mem_Float *rangesensor_m11;
extern CB_Mem_Float *rangesensor_m12;
extern CB_Mem_Float *rangesensor_m13;
extern CB_Mem_Float *rangesensor_m14;
extern CB_Mem_Float *rangesensor_m21;
extern CB_Mem_Float *rangesensor_m22;
extern CB_Mem_Float *rangesensor_m23;
extern CB_Mem_Float *rangesensor_m24;
extern CB_Mem_Float *rangesensor_m31;
extern CB_Mem_Float *rangesensor_m32;
extern CB_Mem_Float *rangesensor_m33;
extern CB_Mem_Float *rangesensor_m34;
extern CB_Mem_Float *rangesensor_m41;
extern CB_Mem_Float *rangesensor_m42;
extern CB_Mem_Float *rangesensor_m43;
extern CB_Mem_Float *rangesensor_m44;
extern CB_Mem_Float *rangesensor_threshold;
extern CB_Mem_Float *rangesensor_range;
extern CB_Mem_Bool *rangesensor_wiringLogic;
extern CB_Mem_Bool *rangesensor_d_sensor;
extern CB_Mem_Bool *rangesensor_v_d_sensor;

/********************** Function declarations ***********************/

extern int _tri_chain__rangesensor_init(void);
extern int tri_chain__rangesensor(void);

/************************** Access macros ***************************/

#define mx_acces_tri_chain__rangesensor__status_act_prod Int[0].CB_current_value
#define mx_acces_tri_chain__rangesensor__m11 Float[0].CB_current_value
#define mx_acces_tri_chain__rangesensor__m12 Float[1].CB_current_value
#define mx_acces_tri_chain__rangesensor__m13 Float[2].CB_current_value
#define mx_acces_tri_chain__rangesensor__m14 Float[3].CB_current_value
#define mx_acces_tri_chain__rangesensor__m21 Float[4].CB_current_value
#define mx_acces_tri_chain__rangesensor__m22 Float[5].CB_current_value
#define mx_acces_tri_chain__rangesensor__m23 Float[6].CB_current_value
#define mx_acces_tri_chain__rangesensor__m24 Float[7].CB_current_value
#define mx_acces_tri_chain__rangesensor__m31 Float[8].CB_current_value
#define mx_acces_tri_chain__rangesensor__m32 Float[9].CB_current_value
#define mx_acces_tri_chain__rangesensor__m33 Float[10].CB_current_value
#define mx_acces_tri_chain__rangesensor__m34 Float[11].CB_current_value
#define mx_acces_tri_chain__rangesensor__m41 Float[12].CB_current_value
#define mx_acces_tri_chain__rangesensor__m42 Float[13].CB_current_value
#define mx_acces_tri_chain__rangesensor__m43 Float[14].CB_current_value
#define mx_acces_tri_chain__rangesensor__m44 Float[15].CB_current_value
#define mx_acces_tri_chain__rangesensor__threshold Float[16].CB_current_value
#define mx_acces_tri_chain__rangesensor__range Float[17].CB_current_value
#define mx_acces_tri_chain__rangesensor__wiringLogic Bool[0].CB_current_value
#define mx_acces_tri_chain__rangesensor__d_sensor Bool[1].CB_current_value
#define mx_acces_tri_chain__rangesensor__v_d_sensor Bool[2].CB_current_value

#endif /*_TRI_CHAIN__RANGESENSOR_H*/