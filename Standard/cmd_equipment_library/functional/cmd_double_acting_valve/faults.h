#ifndef mx_included_faults_h
#define mx_included_faults_h


/*****************************************************
                             Variables
******************************************************/

static FCT(int,cmd_equipment_library__faults,());

/*****************************************************
                     variables access macros :
******************************************************/
#define mx_acces_cmd_equipment_library__faults__ton_sec_1_i_ton Int[0].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_1_t1_ton Float[0].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_1_t2_ton Int[1].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_1_Q Bool[0].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_1_CV Int[2].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_2_i_ton Int[3].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_2_t1_ton Float[1].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_2_t2_ton Int[4].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_2_Q Bool[1].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_sec_2_CV Int[5].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_ms_3_i_tonms Int[6].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_ms_3_t1_tonms Float[2].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_ms_3_t2_tonms Int[7].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_ms_3_Q Bool[2].CB_current_value
#define mx_acces_cmd_equipment_library__faults__ton_ms_3_CV Int[8].CB_current_value
#define mx_acces_cmd_equipment_library__faults__presetMvt Int[9].CB_current_value
#define mx_acces_cmd_equipment_library__faults__presetDiscordance Int[10].CB_current_value
#define mx_acces_cmd_equipment_library__faults__discordanceFault Bool[3].CB_current_value
#define mx_acces_cmd_equipment_library__faults__openedSensorFault Bool[4].CB_current_value
#define mx_acces_cmd_equipment_library__faults__closedSensorFault Bool[5].CB_current_value

#endif
