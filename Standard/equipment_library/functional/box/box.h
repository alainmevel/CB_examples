#ifndef mx_included_box_h
#define mx_included_box_h


/*****************************************************
                             Variables
******************************************************/
extern CB_Index box__num;
extern CB_Mem_Int *box_status_act_prod;
extern CB_Mem_Float *box_m11;
extern CB_Mem_Float *box_m12;
extern CB_Mem_Float *box_m13;
extern CB_Mem_Float *box_m14;
extern CB_Mem_Float *box_m21;
extern CB_Mem_Float *box_m22;
extern CB_Mem_Float *box_m23;
extern CB_Mem_Float *box_m24;
extern CB_Mem_Float *box_m31;
extern CB_Mem_Float *box_m32;
extern CB_Mem_Float *box_m33;
extern CB_Mem_Float *box_m34;
extern CB_Mem_Float *box_m41;
extern CB_Mem_Float *box_m42;
extern CB_Mem_Float *box_m43;
extern CB_Mem_Float *box_m44;
extern CB_Mem_Float *box_movementConv;
extern CB_Mem_Bool *box_contact;
extern CB_Mem_Float *box_centreRotX;
extern CB_Mem_Float *box_centreRotZ;
extern CB_Mem_Float *box_centreRotY;
extern CB_Mem_Int *box_moveDirection;
extern CB_Mem_Int *box_idConv;
extern CB_Mem_Bool *box_moveAuthorization;
extern CB_Mem_Int *box_number;
extern CB_Mem_Int *box_idProdBelow;
extern CB_Mem_Float *box_oldOtherPx;
extern CB_Mem_Float *box_oldOtherPy;
extern CB_Mem_Float *box_oldOtherPz;
extern CB_Mem_Float *box_oldOtherRx;
extern CB_Mem_Float *box_oldOtherRy;
extern CB_Mem_Float *box_oldOtherRz;
extern CB_Mem_Float *box_gravitySpeed;
extern CB_Mem_Int *box_oldIdConv;

extern int equipment_library__box();

extern int equipment_library__box__test_interarctions();

/*****************************************************
                     variables access macros :
******************************************************/
#define mx_acces_equipment_library__box__status_act_prod Int[0].CB_current_value
#define mx_acces_equipment_library__box__m11 Float[0].CB_current_value
#define mx_acces_equipment_library__box__m12 Float[1].CB_current_value
#define mx_acces_equipment_library__box__m13 Float[2].CB_current_value
#define mx_acces_equipment_library__box__m14 Float[3].CB_current_value
#define mx_acces_equipment_library__box__m21 Float[4].CB_current_value
#define mx_acces_equipment_library__box__m22 Float[5].CB_current_value
#define mx_acces_equipment_library__box__m23 Float[6].CB_current_value
#define mx_acces_equipment_library__box__m24 Float[7].CB_current_value
#define mx_acces_equipment_library__box__m31 Float[8].CB_current_value
#define mx_acces_equipment_library__box__m32 Float[9].CB_current_value
#define mx_acces_equipment_library__box__m33 Float[10].CB_current_value
#define mx_acces_equipment_library__box__m34 Float[11].CB_current_value
#define mx_acces_equipment_library__box__m41 Float[12].CB_current_value
#define mx_acces_equipment_library__box__m42 Float[13].CB_current_value
#define mx_acces_equipment_library__box__m43 Float[14].CB_current_value
#define mx_acces_equipment_library__box__m44 Float[15].CB_current_value
#define mx_acces_equipment_library__box__movementConv Float[16].CB_current_value
#define mx_acces_equipment_library__box__contact Bool[0].CB_current_value
#define mx_acces_equipment_library__box__centreRotX Float[17].CB_current_value
#define mx_acces_equipment_library__box__centreRotZ Float[18].CB_current_value
#define mx_acces_equipment_library__box__centreRotY Float[19].CB_current_value
#define mx_acces_equipment_library__box__moveDirection Int[1].CB_current_value
#define mx_acces_equipment_library__box__idConv Int[2].CB_current_value
#define mx_acces_equipment_library__box__moveAuthorization Bool[1].CB_current_value
#define mx_acces_equipment_library__box__number Int[3].CB_current_value
#define mx_acces_equipment_library__box__idProdBelow Int[4].CB_current_value
#define mx_acces_equipment_library__box__oldOtherPx Float[20].CB_current_value
#define mx_acces_equipment_library__box__oldOtherPy Float[21].CB_current_value
#define mx_acces_equipment_library__box__oldOtherPz Float[22].CB_current_value
#define mx_acces_equipment_library__box__oldOtherRx Float[23].CB_current_value
#define mx_acces_equipment_library__box__oldOtherRy Float[24].CB_current_value
#define mx_acces_equipment_library__box__oldOtherRz Float[25].CB_current_value
#define mx_acces_equipment_library__box__gravitySpeed Float[26].CB_current_value
#define mx_acces_equipment_library__box__oldIdConv Int[5].CB_current_value

#endif
