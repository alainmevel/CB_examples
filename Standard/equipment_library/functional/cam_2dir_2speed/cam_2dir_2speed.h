/*2023-10-03T11:13:19-01:00*/

/********************************************************************
 * cam_2dir_2speed.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _EQUIPMENT_LIBRARY__CAM_2DIR_2SPEED_H
#define _EQUIPMENT_LIBRARY__CAM_2DIR_2SPEED_H


/********************** Variable declarations ***********************/

extern CB_Index cam_2dir_2speed__num;
extern CB_Mem_Bool *cam_2dir_2speed_highSpeed;
extern CB_Mem_Bool *cam_2dir_2speed_lowSpeed;
extern CB_Mem_Bool *cam_2dir_2speed_forward;
extern CB_Mem_Bool *cam_2dir_2speed_backward;
extern CB_Mem_Float *cam_2dir_2speed_positionTranslat;
extern CB_Mem_Float *cam_2dir_2speed_percentTranslat;
extern CB_Mem_Float *cam_2dir_2speed_incrementTranslat;
extern CB_Mem_Float *cam_2dir_2speed_angleRotationDeg;
extern CB_Mem_Float *cam_2dir_2speed_angleRotationRad;
extern CB_Mem_Bool *cam_2dir_2speed_firstCycle;
extern CB_Mem_Float *cam_2dir_2speed_incrementRotation;
extern CB_Mem_Bool *cam_2dir_2speed_memoHighSpeed;
extern CB_Mem_Bool *cam_2dir_2speed_memoLowSpeed;
extern CB_Mem_Bool *cam_2dir_2speed_memoFwd;
extern CB_Mem_Bool *cam_2dir_2speed_memoBwd;
extern CB_Mem_Float *cam_2dir_2speed_oldPosition;
extern CB_Mem_Float *cam_2dir_2speed_maxTranslat;
extern CB_Mem_Float *cam_2dir_2speed_highSpeedVal;
extern CB_Mem_Float *cam_2dir_2speed_initTranslat;
extern CB_Mem_Float *cam_2dir_2speed_lowSpeedVal;
extern CB_Mem_Float *cam_2dir_2speed_minTranslat;
extern CB_Mem_Bool *cam_2dir_2speed_d_locking;
extern CB_Mem_Bool *cam_2dir_2speed_v_d_locking;

/********************** Function declarations ***********************/

extern int _equipment_library__cam_2dir_2speed_init(void);
extern int equipment_library__cam_2dir_2speed(void);

#endif /*_EQUIPMENT_LIBRARY__CAM_2DIR_2SPEED_H*/