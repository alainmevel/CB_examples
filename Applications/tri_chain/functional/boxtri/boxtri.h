#ifndef mx_included_boxtri_h
#define mx_included_boxtri_h


/*****************************************************
                             Variables
******************************************************/
extern CB_Index boxtri__num;
extern CB_Mem_Int *boxtri_status_act_prod;
extern CB_Mem_Float *boxtri_m11;
extern CB_Mem_Float *boxtri_m12;
extern CB_Mem_Float *boxtri_m13;
extern CB_Mem_Float *boxtri_m14;
extern CB_Mem_Float *boxtri_m21;
extern CB_Mem_Float *boxtri_m22;
extern CB_Mem_Float *boxtri_m23;
extern CB_Mem_Float *boxtri_m24;
extern CB_Mem_Float *boxtri_m31;
extern CB_Mem_Float *boxtri_m32;
extern CB_Mem_Float *boxtri_m33;
extern CB_Mem_Float *boxtri_m34;
extern CB_Mem_Float *boxtri_m41;
extern CB_Mem_Float *boxtri_m42;
extern CB_Mem_Float *boxtri_m43;
extern CB_Mem_Float *boxtri_m44;
extern CB_Mem_Float *boxtri_px;
extern CB_Mem_Float *boxtri_py;
extern CB_Mem_Float *boxtri_pz;
extern CB_Mem_Float *boxtri_dx;
extern CB_Mem_Float *boxtri_dy;
extern CB_Mem_Float *boxtri_dz;
extern CB_Mem_Float *boxtri_sxInter;
extern CB_Mem_Float *boxtri_syInter;
extern CB_Mem_Float *boxtri_interacNb;

extern int tri_chain__boxtri();

extern int tri_chain__boxtri__test_interarctions();

/*****************************************************
                     variables access macros :
******************************************************/
#define mx_acces_tri_chain__boxtri__status_act_prod Int[0].CB_current_value
#define mx_acces_tri_chain__boxtri__m11 Float[0].CB_current_value
#define mx_acces_tri_chain__boxtri__m12 Float[1].CB_current_value
#define mx_acces_tri_chain__boxtri__m13 Float[2].CB_current_value
#define mx_acces_tri_chain__boxtri__m14 Float[3].CB_current_value
#define mx_acces_tri_chain__boxtri__m21 Float[4].CB_current_value
#define mx_acces_tri_chain__boxtri__m22 Float[5].CB_current_value
#define mx_acces_tri_chain__boxtri__m23 Float[6].CB_current_value
#define mx_acces_tri_chain__boxtri__m24 Float[7].CB_current_value
#define mx_acces_tri_chain__boxtri__m31 Float[8].CB_current_value
#define mx_acces_tri_chain__boxtri__m32 Float[9].CB_current_value
#define mx_acces_tri_chain__boxtri__m33 Float[10].CB_current_value
#define mx_acces_tri_chain__boxtri__m34 Float[11].CB_current_value
#define mx_acces_tri_chain__boxtri__m41 Float[12].CB_current_value
#define mx_acces_tri_chain__boxtri__m42 Float[13].CB_current_value
#define mx_acces_tri_chain__boxtri__m43 Float[14].CB_current_value
#define mx_acces_tri_chain__boxtri__m44 Float[15].CB_current_value
#define mx_acces_tri_chain__boxtri__px Float[16].CB_current_value
#define mx_acces_tri_chain__boxtri__py Float[17].CB_current_value
#define mx_acces_tri_chain__boxtri__pz Float[18].CB_current_value
#define mx_acces_tri_chain__boxtri__dx Float[19].CB_current_value
#define mx_acces_tri_chain__boxtri__dy Float[20].CB_current_value
#define mx_acces_tri_chain__boxtri__dz Float[21].CB_current_value
#define mx_acces_tri_chain__boxtri__sxInter Float[22].CB_current_value
#define mx_acces_tri_chain__boxtri__syInter Float[23].CB_current_value
#define mx_acces_tri_chain__boxtri__interacNb Float[24].CB_current_value

#endif
