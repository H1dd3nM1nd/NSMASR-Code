// Effect notes:
// Values 1-675 will always work
// Values 676-746 require Iggy (sprites 337/372) or the Magic Fireball Spawn Area
// Values 747-821 require Bowser Jr. (sprites 211/405/406) or the Bowser Jr. Castle Cutscene (sprite 408)
// Values 822-906 require Kamek (sprite 383)
// Values 907-981 require Bowser (sprite 419) or Bowser Fireballs (sprite 449) with the custom code
// Values 982-1045 require Larry (sprites 189/192) or the Magic Fireball Spawn Area
// Values 1046-1109 require Lemmy (sprites 340/381)
// Values 1110-1174 require Ludwig (sprites 348/365)
// Values 1175-1258 require Morton (sprites 344/349)
// Values 1259-1329 require Roy (sprite 364) or the Magic Fireball Spawn Area
// Values 1330-1395 require Wendy (sprites 336/375)
// Values 1396-1608 only work in Multiplayer mode
// Values 1609-1661 only work if the Ambush flag in the Area Settings is enabled

const char* EffectNameList [] = {
	"Wm_2d_1up01",
	"Wm_2d_1up02",
	"Wm_2d_coin100",
	"Wm_2d_coin100a",
	"Wm_2d_coinlight",
	"Wm_2d_continue",
	"Wm_2d_courseclear",
	"Wm_2d_courseclearsmcld01",
	"Wm_2d_courseclearsmcld02",
	"Wm_2d_courseclear_cld",
	"Wm_2d_courseclear_da",
	"Wm_2d_courseclear_kiraL",
	"Wm_2d_courseclear_kiraR",
	"Wm_2d_courseclear_smkL",
	"Wm_2d_courseclear_smkR",
	"Wm_2d_gameover",
	"Wm_2d_gameover_a",
	"Wm_2d_gameover_b",
	"Wm_2d_moviecoinkira",
	"Wm_2d_moviecoinvanish",
	"Wm_2d_movieopen",
	"Wm_2d_movieopen_a",
	"Wm_2d_movieopen_b1",
	"Wm_2d_movieopen_b2",
	"Wm_2d_mrstarkira",
	"Wm_2d_multiclear",
	"Wm_2d_result",
	"Wm_2d_resultno1",
	"Wm_2d_resultrest",
	"Wm_2d_resultscore",
	"Wm_2d_result_a1",
	"Wm_2d_result_a2",
	"Wm_2d_result_b1",
	"Wm_2d_result_b2",
	"Wm_2d_starcoinget",
	"Wm_2d_starcoinvanish",
	"Wm_2d_stockitem",
	"Wm_2d_stockitem_a",
	"Wm_2d_stockitem_b",
	"Wm_2d_timeup",
	"Wm_2d_timeupsmoke",
	"Wm_2d_timeupstar",
	"Wm_2d_timeupstarcld",
	"Wm_2d_titlestar01",
	"Wm_2d_titlestar02",
	"Wm_bg_volcano",
	"Wm_bg_volcano_a",
	"Wm_bg_volcano_b",
	"Wm_bs_kameckmagic",
	"Wm_bs_kameckmagic_a",
	"Wm_bs_kameckmagic_b",
	"Wm_bs_kameckmagic_c",
	"Wm_bs_kameckmagic_d",
	"Wm_bs_kameckmagic_e",
	"Wm_bs_kameckmagic_f",
	"Wm_en_atitismoke",
	"Wm_en_birikyu",
	"Wm_en_birikyu_biri",
	"Wm_en_birikyu_glw",
	"Wm_en_birikyu_kira",
	"Wm_en_blockcloud",
	"Wm_en_bombheibreak",
	"Wm_en_bombignition",
	"Wm_en_bomignition_gl01",
	"Wm_en_bomignition_ln",
	"Wm_en_bomignition_pati",
	"Wm_en_brakesmoke",
	"Wm_en_bubble",
	"Wm_en_bubble_a",
	"Wm_en_bubble_b",
	"Wm_en_burst_big",
	"Wm_en_burst_m",
	"Wm_en_burst_s",
	"Wm_en_burst_ss",
	"Wm_en_burst_water01",
	"Wm_en_burst_water02",
	"Wm_en_choroappear",
	"Wm_en_choroescape",
	"Wm_en_cmnmagmawave",
	"Wm_en_cmnwater",
	"Wm_en_cmnwater02",
	"Wm_en_cmnwaterdash",
	"Wm_en_cmnwatertail",
	"Wm_en_comattack",
	"Wm_en_crowattack_l",
	"Wm_en_crowattack_r",
	"Wm_en_crowfly",
	"Wm_en_crowhit",
	"Wm_en_dossunfall01",
	"Wm_en_dossunfall02",
	"Wm_en_dossunfall03",
	"Wm_en_explosion",
	"Wm_en_explosion_gl01",
	"Wm_en_explosion_gl02",
	"Wm_en_explosion_hd",
	"Wm_en_explosion_ln",
	"Wm_en_explosion_smk",
	"Wm_en_explosion_un",
	"Wm_en_firebar",
	"Wm_en_firebar_fire",
	"Wm_en_firebar_ind",
	"Wm_en_firebrnsign",
	"Wm_en_firebrnsignind",
	"Wm_en_firebros_fire",
	"Wm_en_firebros_fire_a",
	"Wm_en_firebros_fire_b",
	"Wm_en_fireburner",
	"Wm_en_fireburner3ind",
	"Wm_en_fireburner4ind",
	"Wm_en_fireburner6ind",
	"Wm_en_firesnkspark01",
	"Wm_en_firesnkspark02",
	"Wm_en_firesnk_icehitsmk_b",
	"Wm_en_firesnk_icehitsmk_h",
	"Wm_en_firesnk_icehit_b",
	"Wm_en_firesnk_icehit_h",
	"Wm_en_firevanish",
	"Wm_en_hanapetal",
	"Wm_en_hanapetal_a",
	"Wm_en_hanapetal_b",
	"Wm_en_hanasnort",
	"Wm_en_hanasnort_cld",
	"Wm_en_hanasnort_l",
	"Wm_en_hanasnort_r",
	"Wm_en_hit",
	"Wm_en_hit_ring",
	"Wm_en_huhubreath",
	"Wm_en_huhubreathstart",
	"Wm_en_huhudamage01",
	"Wm_en_huhudamage02",
	"Wm_en_huhufloat",
	"Wm_en_huhuhaze",
	"Wm_en_huhurevival01",
	"Wm_en_huhurevival02",
	"Wm_en_igafirehit",
	"Wm_en_iron",
	"Wm_en_keronpafire",
	"Wm_en_keronpafire_ca",
	"Wm_en_keronpafire_f",
	"Wm_en_keronpalight",
	"Wm_en_killershot",
	"Wm_en_killersmoke",
	"Wm_en_killervanish",
	"Wm_en_kingkiller",
	"Wm_en_kingkiller_gr",
	"Wm_en_kingkiller_rg",
	"Wm_en_kingkiller_sm",
	"Wm_en_kuribobigsplit",
	"Wm_en_kuribobigsplit_gr01",
	"Wm_en_kuribobigsplit_gr02",
	"Wm_en_kuribobigsplit_ht",
	"Wm_en_kuribobigsplit_rg",
	"Wm_en_kuribobigsplit_sk",
	"Wm_en_kuribosplit",
	"Wm_en_kuribosplit_gl01",
	"Wm_en_kuribosplit_gl02",
	"Wm_en_kuribosplit_sk",
	"Wm_en_landsmoke",
	"Wm_en_landsmoke_s",
	"Wm_en_magkillersmoke",
	"Wm_en_magmawave",
	"Wm_en_magmawave_a",
	"Wm_en_magmawave_b",
	"Wm_en_mgkillershot_l",
	"Wm_en_mgkillershot_r",
	"Wm_en_mgsearchkiller",
	"Wm_en_movecloud",
	"Wm_en_obakedoor",
	"Wm_en_obakedoor_ic",
	"Wm_en_obakedoor_sm",
	"Wm_en_pakkunfire",
	"Wm_en_pakkunfire00",
	"Wm_en_pakkunsweat",
	"Wm_en_pakkun_ball01",
	"Wm_en_pakkun_ball02",
	"Wm_en_pakkun_foo",
	"Wm_en_patametsweat",
	"Wm_en_poisoninbig01",
	"Wm_en_poisoninbig02",
	"Wm_en_poisonwave",
	"Wm_en_poisonwave_a",
	"Wm_en_poisonwave_b",
	"Wm_en_quicksand",
	"Wm_en_sanbohit",
	"Wm_en_sanbohitsmk",
	"Wm_en_sanbohit_hit",
	"Wm_en_sanbohit_ring",
	"Wm_en_sanbohit_smk",
	"Wm_en_sanbosmoke",
	"Wm_en_sanbospillsand",
	"Wm_en_searchkiller",
	"Wm_en_shellgreentail",
	"Wm_en_shellredtail",
	"Wm_en_sndlandsmk",
	"Wm_en_sndlandsmk_s",
	"Wm_en_sphitsmoke",
	"Wm_en_spindamage",
	"Wm_en_spindamage_big",
	"Wm_en_spindamage_big_rg",
	"Wm_en_spindamage_big_st",
	"Wm_en_spindamage_rg",
	"Wm_en_spindamage_star",
	"Wm_en_spsmoke",
	"Wm_en_sweat",
	"Wm_en_teresatail",
	"Wm_en_teresavanish",
	"Wm_en_vshit",
	"Wm_en_vshit_glow",
	"Wm_en_vshit_hit",
	"Wm_en_vshit_ring",
	"Wm_en_vshit_star",
	"Wm_en_watersplash",
	"Wm_en_watersplash_cld",
	"Wm_en_waterwave_in",
	"Wm_en_waterwave_in_a",
	"Wm_en_waterwave_in_b",
	"Wm_en_wfsplash_in01_l",
	"Wm_en_wfsplash_in01_r",
	"Wm_en_wfsplash_in02_l",
	"Wm_en_wfsplash_in02_r",
	"Wm_en_wfsplash_in_l",
	"Wm_en_wfsplash_in_r",
	"Wm_en_wfsplash_out01_l",
	"Wm_en_wfsplash_out01_r",
	"Wm_en_wfsplash_out02_l",
	"Wm_en_wfsplash_out02_r",
	"Wm_en_wfsplash_out_l",
	"Wm_en_wfsplash_out_r",
	"Wm_mr_1upkira",
	"Wm_mr_1upkira_01",
	"Wm_mr_1upkira_01_s",
	"Wm_mr_1upkira_01_ss",
	"Wm_mr_1upkira_02",
	"Wm_mr_1upkira_02_s",
	"Wm_mr_1upkira_s",
	"Wm_mr_1upkira_spin",
	"Wm_mr_1upkira_spin_s",
	"Wm_mr_1upkira_spin_ss",
	"Wm_mr_1upkira_ss",
	"Wm_mr_2dlandsmoke",
	"Wm_mr_atitismoke",
	"Wm_mr_balloonburst",
	"Wm_mr_balloonburst_h",
	"Wm_mr_balloonburst_w",
	"Wm_mr_beachbrakesmk",
	"Wm_mr_beachbrakesmk_ss",
	"Wm_mr_beachlandsmk",
	"Wm_mr_beachlandsmk_s",
	"Wm_mr_beachlandsmk_ss",
	"Wm_mr_beachslipsmk",
	"Wm_mr_beachslipsmk_ss",
	"Wm_mr_brakesmoke",
	"Wm_mr_brakesmoke_ss",
	"Wm_mr_brosquake",
	"Wm_mr_cliffcatch",
	"Wm_mr_cliffcatch_cd",
	"Wm_mr_cloud_on",
	"Wm_mr_cmnlandsmoke",
	"Wm_mr_cmnsndlandsmk",
	"Wm_mr_drop",
	"Wm_mr_electricshock",
	"Wm_mr_electricshock_biri01",
	"Wm_mr_electricshock_biri01_s",
	"Wm_mr_electricshock_biri02",
	"Wm_mr_electricshock_biri02_s",
	"Wm_mr_electricshock_glw",
	"Wm_mr_electricshock_glw_s",
	"Wm_mr_electricshock_kira",
	"Wm_mr_electricshock_kira_s",
	"Wm_mr_electricshock_s",
	"Wm_mr_fireball",
	"Wm_mr_fireball_a",
	"Wm_mr_fireball_b",
	"Wm_mr_fireball_hit",
	"Wm_mr_fireball_hit01",
	"Wm_mr_flaggetkira",
	"Wm_mr_flaggetkira_s",
	"Wm_mr_flaggetkira_ss",
	"Wm_mr_flutterkick",
	"Wm_mr_foot_beach",
	"Wm_mr_foot_ice",
	"Wm_mr_foot_sand",
	"Wm_mr_foot_snow",
	"Wm_mr_foot_water",
	"Wm_mr_fruitget",
	"Wm_mr_fruitget_h",
	"Wm_mr_fruitget_w",
	"Wm_mr_gauge",
	"Wm_mr_halfspin",
	"Wm_mr_hardhit",
	"Wm_mr_hardhit_glow",
	"Wm_mr_hardhit_grain",
	"Wm_mr_hardhit_spak",
	"Wm_mr_iceball",
	"Wm_mr_iceball_a",
	"Wm_mr_iceball_b",
	"Wm_mr_icebrakesmk",
	"Wm_mr_icebrakesmk_ss",
	"Wm_mr_iceslipsmk",
	"Wm_mr_iceslipsmk_ss",
	"Wm_mr_itemget01",
	"Wm_mr_itemget02",
	"Wm_mr_ivy",
	"Wm_mr_kickhit",
	"Wm_mr_kick_glow",
	"Wm_mr_kick_grain",
	"Wm_mr_landsmoke",
	"Wm_mr_landsmoke_s",
	"Wm_mr_landsmoke_ss",
	"Wm_mr_magmawave",
	"Wm_mr_magmawave_a",
	"Wm_mr_magmawave_b",
	"Wm_mr_misshit",
	"Wm_mr_misshit_ring",
	"Wm_mr_movecliff",
	"Wm_mr_normalspin",
	"Wm_mr_normalspin_pm",
	"Wm_mr_palm",
	"Wm_mr_palm_s",
	"Wm_mr_pbeachsmoke",
	"Wm_mr_pdesertsmoke",
	"Wm_mr_penguinice",
	"Wm_mr_penguinsmoke",
	"Wm_mr_penguinsnow",
	"Wm_mr_poisonwave",
	"Wm_mr_poisonwave_a",
	"Wm_mr_poisonwave_b",
	"Wm_mr_propellertail",
	"Wm_mr_p_iceslip",
	"Wm_mr_p_snowslip",
	"Wm_mr_quicksand",
	"Wm_mr_sanddive",
	"Wm_mr_sanddive_in",
	"Wm_mr_sanddive_in_m",
	"Wm_mr_sanddive_m",
	"Wm_mr_sanddive_out",
	"Wm_mr_sanddive_out_m",
	"Wm_mr_sanddive_s",
	"Wm_mr_sanddive_sb_s",
	"Wm_mr_sanddive_sd",
	"Wm_mr_sanddive_sd_m",
	"Wm_mr_sanddive_smk",
	"Wm_mr_sanddive_smk_m",
	"Wm_mr_sanddive_smk_s",
	"Wm_mr_sandsplash",
	"Wm_mr_sealandsmk",
	"Wm_mr_sealandsmk_s",
	"Wm_mr_sealandsmk_ss",
	"Wm_mr_slipsmoke",
	"Wm_mr_slipsmoke_big",
	"Wm_mr_slipsmoke_ss",
	"Wm_mr_sndbrakesmk",
	"Wm_mr_sndbrakesmk_ss",
	"Wm_mr_sndlandsmk",
	"Wm_mr_sndlandsmk_s",
	"Wm_mr_sndlandsmk_ss",
	"Wm_mr_sndslipsmk",
	"Wm_mr_sndslipsmk_ss",
	"Wm_mr_softhit",
	"Wm_mr_softhit_glow",
	"Wm_mr_softhit_spak",
	"Wm_mr_spindepart",
	"Wm_mr_spindepart_a",
	"Wm_mr_spindepart_b",
	"Wm_mr_spindown",
	"Wm_mr_spindownline",
	"Wm_mr_spindown_a",
	"Wm_mr_spindown_b",
	"Wm_mr_spinjump",
	"Wm_mr_spinjump_re",
	"Wm_mr_spinsmoke",
	"Wm_mr_spinstart",
	"Wm_mr_sprisesmoke",
	"Wm_mr_spsmoke",
	"Wm_mr_starkira",
	"Wm_mr_starkira_a",
	"Wm_mr_starkira_a_s",
	"Wm_mr_starkira_b",
	"Wm_mr_starkira_b_s",
	"Wm_mr_starkira_s",
	"Wm_mr_startail",
	"Wm_mr_stockitemuse",
	"Wm_mr_stockitemuse_a",
	"Wm_mr_stockitemuse_b",
	"Wm_mr_stockitemuse_c",
	"Wm_mr_swimpaddle",
	"Wm_mr_turn_beach_l",
	"Wm_mr_turn_beach_r",
	"Wm_mr_turn_ice_l",
	"Wm_mr_turn_ice_r",
	"Wm_mr_turn_sand_l",
	"Wm_mr_turn_sand_r",
	"Wm_mr_turn_snow_l",
	"Wm_mr_turn_snow_r",
	"Wm_mr_turn_usual_l",
	"Wm_mr_turn_usual_r",
	"Wm_mr_turn_water_l",
	"Wm_mr_turn_water_r",
	"Wm_mr_vshipattack",
	"Wm_mr_vshipattack_gl",
	"Wm_mr_vshipattack_hosi",
	"Wm_mr_vshipattack_ind",
	"Wm_mr_vshipattack_ind_a",
	"Wm_mr_vshipattack_ind_b",
	"Wm_mr_vshipattack_ind_c",
	"Wm_mr_vshipattack_line",
	"Wm_mr_vshipattack_ud",
	"Wm_mr_wallkick_b_l",
	"Wm_mr_wallkick_b_r",
	"Wm_mr_wallkick_b_ss_l",
	"Wm_mr_wallkick_b_ss_r",
	"Wm_mr_wallkick_b_s_l",
	"Wm_mr_wallkick_b_s_r",
	"Wm_mr_wallkick_cld_l",
	"Wm_mr_wallkick_cld_r",
	"Wm_mr_wallkick_cld_ss_l",
	"Wm_mr_wallkick_cld_ss_r",
	"Wm_mr_wallkick_cld_s_l",
	"Wm_mr_wallkick_cld_s_r",
	"Wm_mr_wallkick_c_l",
	"Wm_mr_wallkick_c_r",
	"Wm_mr_wallkick_c_ss_l",
	"Wm_mr_wallkick_c_ss_r",
	"Wm_mr_wallkick_c_s_l",
	"Wm_mr_wallkick_c_s_r",
	"Wm_mr_wallkick_dn_l",
	"Wm_mr_wallkick_dn_r",
	"Wm_mr_wallkick_dn_ss_l",
	"Wm_mr_wallkick_dn_ss_r",
	"Wm_mr_wallkick_dn_s_l",
	"Wm_mr_wallkick_dn_s_r",
	"Wm_mr_wallkick_l",
	"Wm_mr_wallkick_r",
	"Wm_mr_wallkick_ss_l",
	"Wm_mr_wallkick_ss_r",
	"Wm_mr_wallkick_s_l",
	"Wm_mr_wallkick_s_r",
	"Wm_mr_wallkick_up_l",
	"Wm_mr_wallkick_up_r",
	"Wm_mr_wallkick_up_ss_l",
	"Wm_mr_wallkick_up_ss_r",
	"Wm_mr_wallkick_up_s_l",
	"Wm_mr_wallkick_up_s_r",
	"Wm_mr_wallslip_cld",
	"Wm_mr_wallslip_cld_s",
	"Wm_mr_wallslip_cld_ss",
	"Wm_mr_wallslip_l",
	"Wm_mr_wallslip_r",
	"Wm_mr_wallslip_ss_l",
	"Wm_mr_wallslip_ss_r",
	"Wm_mr_wallslip_s_l",
	"Wm_mr_wallslip_s_r",
	"Wm_mr_waterrun_l_ss",
	"Wm_mr_waterrun_r_ss",
	"Wm_mr_watersplash",
	"Wm_mr_waterswim",
	"Wm_mr_waterwave_in",
	"Wm_mr_waterwave_in_a",
	"Wm_mr_waterwave_in_a_ss",
	"Wm_mr_waterwave_in_b",
	"Wm_mr_waterwave_in_b_ss",
	"Wm_mr_waterwave_in_c",
	"Wm_mr_waterwave_in_d",
	"Wm_mr_waterwave_in_ss",
	"Wm_mr_waterwave_out",
	"Wm_mr_waterwave_out_a",
	"Wm_mr_waterwave_out_a_ss",
	"Wm_mr_waterwave_out_b",
	"Wm_mr_waterwave_out_b_ss",
	"Wm_mr_waterwave_out_c",
	"Wm_mr_waterwave_out_ss",
	"Wm_mr_wfloatsplash",
	"Wm_mr_wfloatsplash_a",
	"Wm_mr_wfloatsplash_b",
	"Wm_mr_wirehit",
	"Wm_mr_wirehit_glow",
	"Wm_mr_wirehit_hit",
	"Wm_mr_wirehit_line",
	"Wm_mr_wirehit_star",
	"Wm_mr_yoshifire",
	"Wm_mr_yoshifirehit",
	"Wm_mr_yoshifirehit01",
	"Wm_mr_yoshifire_a",
	"Wm_mr_yoshifire_b",
	"Wm_mr_yoshiiceball",
	"Wm_mr_yoshiiceball_a",
	"Wm_mr_yoshiiceball_b",
	"Wm_mr_yoshiicehit",
	"Wm_mr_yoshiicehit_a",
	"Wm_mr_yoshiicehit_b",
	"Wm_mr_yoshistep",
	"Wm_mr_yoshistep_a",
	"Wm_mr_yoshistep_a_cld",
	"Wm_mr_yoshistep_b",
	"Wm_mr_yssweat",
	"Wm_mr_yssweatrun",
	"Wm_mr_ystonguehit",
	"Wm_mr_ystonguehit_a",
	"Wm_ob_bluecoinkira",
	"Wm_ob_boat",
	"Wm_ob_cmnboxgrain",
	"Wm_ob_cmnboxpiece",
	"Wm_ob_cmnboxsmoke",
	"Wm_ob_cmnicekira",
	"Wm_ob_cmnrockpiece",
	"Wm_ob_cmnshothit",
	"Wm_ob_cmnshotspark",
	"Wm_ob_cmnshotstar",
	"Wm_ob_cmnspark",
	"Wm_ob_cmnsparkloop",
	"Wm_ob_coin",
	"Wm_ob_coinkira",
	"Wm_ob_eggbreak_bl",
	"Wm_ob_eggbreak_gr",
	"Wm_ob_eggbreak_rd",
	"Wm_ob_eggbreak_yw",
	"Wm_ob_envsunlight",
	"Wm_ob_envsunlight_a",
	"Wm_ob_envsunlight_b",
	"Wm_ob_fallsmoke",
	"Wm_ob_fallsmoke_big",
	"Wm_ob_fallsmoke_s",
	"Wm_ob_firespillar01",
	"Wm_ob_firespillar02",
	"Wm_ob_firespillarunder",
	"Wm_ob_fireworks_1up",
	"Wm_ob_fireworks_1up01",
	"Wm_ob_fireworks_1up02",
	"Wm_ob_fireworks_1upcld1",
	"Wm_ob_fireworks_1upcld2",
	"Wm_ob_fireworks_1upgl01",
	"Wm_ob_fireworks_1upgl02",
	"Wm_ob_fireworks_b",
	"Wm_ob_fireworks_b01",
	"Wm_ob_fireworks_bcld",
	"Wm_ob_fireworks_g",
	"Wm_ob_fireworks_g01",
	"Wm_ob_fireworks_gcld",
	"Wm_ob_fireworks_k",
	"Wm_ob_fireworks_k01",
	"Wm_ob_fireworks_k02",
	"Wm_ob_fireworks_kcld1",
	"Wm_ob_fireworks_kcld2",
	"Wm_ob_fireworks_kgl01",
	"Wm_ob_fireworks_kgl02",
	"Wm_ob_fireworks_p",
	"Wm_ob_fireworks_p01",
	"Wm_ob_fireworks_pcld",
	"Wm_ob_fireworks_star",
	"Wm_ob_fireworks_star01",
	"Wm_ob_fireworks_star02",
	"Wm_ob_fireworks_starcld1",
	"Wm_ob_fireworks_starcld2",
	"Wm_ob_fireworks_stargl01",
	"Wm_ob_fireworks_stargl02",
	"Wm_ob_fireworks_y",
	"Wm_ob_fireworks_y01",
	"Wm_ob_fireworks_ycld",
	"Wm_ob_flagget",
	"Wm_ob_flaggetkira_cld",
	"Wm_ob_flagget_kira",
	"Wm_ob_flagget_light",
	"Wm_ob_greencoinkira",
	"Wm_ob_greencoinkira_a",
	"Wm_ob_greencoinkira_b",
	"Wm_ob_greencoinkira_c",
	"Wm_ob_iceattack",
	"Wm_ob_iceattackkira",
	"Wm_ob_iceattackline",
	"Wm_ob_iceattacksmk",
	"Wm_ob_icebreak",
	"Wm_ob_icebreaksmk",
	"Wm_ob_icebreakwt",
	"Wm_ob_iceevaporate",
	"Wm_ob_icehit",
	"Wm_ob_icehithit",
	"Wm_ob_icehitsmk",
	"Wm_ob_icehitwat",
	"Wm_ob_icemisshit",
	"Wm_ob_icemisshit_smk",
	"Wm_ob_icepoison",
	"Wm_ob_icethaw",
	"Wm_ob_icewait",
	"Wm_ob_icewaitwat",
	"Wm_ob_icicle",
	"Wm_ob_itemappear",
	"Wm_ob_itemappear_gl",
	"Wm_ob_itemappear_gl_ss",
	"Wm_ob_itemappear_r",
	"Wm_ob_itemappear_r_ss",
	"Wm_ob_itemappear_ss",
	"Wm_ob_itemfall",
	"Wm_ob_itemfall_a",
	"Wm_ob_itemfall_b",
	"Wm_ob_itemget",
	"Wm_ob_itemget_hit",
	"Wm_ob_itemget_hitlighit",
	"Wm_ob_itemget_ring",
	"Wm_ob_itemlandsmoke",
	"Wm_ob_itempropeller",
	"Wm_ob_itemsealandsmk",
	"Wm_ob_itemsndlandsmk",
	"Wm_ob_itemteil",
	"Wm_ob_keyfall",
	"Wm_ob_keyget01",
	"Wm_ob_keyget01_a",
	"Wm_ob_keyget01_b",
	"Wm_ob_keyget01_c",
	"Wm_ob_keyget01_d",
	"Wm_ob_keyget02",
	"Wm_ob_keyget02_gl01",
	"Wm_ob_keyget02_gl02",
	"Wm_ob_keyget02_hit",
	"Wm_ob_keyget02_kira",
	"Wm_ob_keyget02_lighit",
	"Wm_ob_keyget02_ring01",
	"Wm_ob_keyget02_ring02",
	"Wm_ob_keyget02_str",
	"Wm_ob_keywait",
	"Wm_ob_keywait_a",
	"Wm_ob_keywait_b",
	"Wm_ob_keywait_c",
	"Wm_ob_magmagear",
	"Wm_ob_magmasign01",
	"Wm_ob_magmasign02",
	"Wm_ob_powdown",
	"Wm_ob_powdown_ind",
	"Wm_ob_powdown_ind_a",
	"Wm_ob_powdown_ind_b",
	"Wm_ob_powdown_ind_c",
	"Wm_ob_redcioinitem01",
	"Wm_ob_redcioinitem02",
	"Wm_ob_redcioinitem02_a",
	"Wm_ob_redcioinitem02_b",
	"Wm_ob_redcioinitem_cd",
	"Wm_ob_redcioinkira",
	"Wm_ob_redcioinkira_cd",
	"Wm_ob_redcoinkira",
	"Wm_ob_redringget",
	"Wm_ob_redringget_a",
	"Wm_ob_redringget_b",
	"Wm_ob_redringget_c",
	"Wm_ob_redringkira",
	"Wm_ob_sandpillar01",
	"Wm_ob_sandpillar02",
	"Wm_ob_spillarsign01",
	"Wm_ob_spillarsign02",
	"Wm_ob_starcoinget",
	"Wm_ob_starcoinget_gl",
	"Wm_ob_starcoinget_hit",
	"Wm_ob_starcoinget_lighit",
	"Wm_ob_starcoinget_ring",
	"Wm_ob_starcoinget_str",
	"Wm_ob_startail",
	"Wm_ob_startail_kira",
	"Wm_ob_startail_star",
	"Wm_ob_stream",
	"Wm_ob_switch",
	"Wm_ob_switch01",
	"Wm_ob_treasurebox",
	"Wm_ob_treasureboxtail",
	"Wm_ob_treasureboxwait",
	"Wm_ob_treasureboxwait_a",
	"Wm_ob_treasureboxwait_b",
	"Wm_ob_warpcannonkira",
	"Wm_ob_waterbreak",
	"Wm_ob_waterbreak_a",
	"Wm_ob_waterbreak_b",
	"Wm_ob_waterbreak_c",
	"Wm_ob_witchcraft",
	"Wm_ob_witchcraftup",
	"Wm_seacloudout",
	"Wm_shellopen",
	"Wm_shellopen_a",
	"Wm_shellopen_b",
	"Wm_ig_bite",
	"Wm_ig_bite_a",
	"Wm_ig_damage",
	"Wm_ig_damagedie",
	"Wm_ig_damagedie02",
	"Wm_ig_damagedie02_a",
	"Wm_ig_damagedie02_b",
	"Wm_ig_damagedie02_bcld",
	"Wm_ig_damagedie02_c",
	"Wm_ig_damagedie02_d",
	"Wm_ig_damagedie02_e",
	"Wm_ig_damagedie02_f",
	"Wm_ig_damagedie_a",
	"Wm_ig_damagedie_b",
	"Wm_ig_damagedie_bcld",
	"Wm_ig_damagedie_cld",
	"Wm_ig_damagedie_f",
	"Wm_ig_damagedie_g",
	"Wm_ig_damage_a",
	"Wm_ig_damage_b",
	"Wm_ig_damage_c",
	"Wm_ig_damage_d",
	"Wm_ig_dizzy",
	"Wm_ig_dizzy_a",
	"Wm_ig_dizzy_b",
	"Wm_ig_firehit01",
	"Wm_ig_firehit02",
	"Wm_ig_firehit03",
	"Wm_ig_jumpend",
	"Wm_ig_jumpstart",
	"Wm_ig_landsmoke",
	"Wm_ig_landsmoke_a",
	"Wm_ig_landsmoke_b",
	"Wm_ig_liftbrake",
	"Wm_ig_liftbrake_a",
	"Wm_ig_liftbrake_b",
	"Wm_ig_magicattack",
	"Wm_ig_magicattack_a",
	"Wm_ig_magicattack_b",
	"Wm_ig_magicattack_c",
	"Wm_ig_magicattack_d",
	"Wm_ig_magicattack_e",
	"Wm_ig_magicattack_st",
	"Wm_ig_magicattack_st_a",
	"Wm_ig_magicattack_st_b",
	"Wm_ig_magicattack_st_c",
	"Wm_ig_magicattack_st_d",
	"Wm_ig_mgcwallhit",
	"Wm_ig_mgcwallhit01",
	"Wm_ig_mgcwallhit02",
	"Wm_ig_mgcwallhit03",
	"Wm_ig_mgcwallhit04",
	"Wm_ig_shellchange",
	"Wm_ig_shelllandsmoke01",
	"Wm_ig_shelllandsmoke02",
	"Wm_ig_shelltail",
	"Wm_ig_tap",
	"Wm_ig_turn01_l",
	"Wm_ig_turn01_r",
	"Wm_ig_turn02",
	"Wm_ig_turnbrake01",
	"Wm_ig_turnbrake02",
	"Wm_ig_wallhit",
	"Wm_ig_wallhit_a",
	"Wm_ig_wanwanbig",
	"Wm_mriggyttackhit_b",
	"Wm_mr_iggyattackhit",
	"Wm_mr_iggyattackhit_a",
	"Wm_mr_iggyattackhit_c",
	"Wm_mr_iggyattackhit_d",
	"Wm_mr_iggyattackhit_e",
	"Wm_jr_bomb",
	"Wm_jr_bombfuse",
	"Wm_jr_bombfuse_a",
	"Wm_jr_bombfuse_b",
	"Wm_jr_bombfuse_c",
	"Wm_jr_bombhit",
	"Wm_jr_bombring",
	"Wm_jr_bombsmoke",
	"Wm_jr_bombspark",
	"Wm_jr_bombstar",
	"Wm_jr_breaksmoke",
	"Wm_jr_crumble01",
	"Wm_jr_crumble02",
	"Wm_jr_damage",
	"Wm_jr_damagespin01",
	"Wm_jr_damagespin02",
	"Wm_jr_damage_a",
	"Wm_jr_damage_b",
	"Wm_jr_damage_c",
	"Wm_jr_damage_d",
	"Wm_jr_electricglow",
	"Wm_jr_electricline",
	"Wm_jr_electricline_a",
	"Wm_jr_electricline_b",
	"Wm_jr_electricline_spl",
	"Wm_jr_electricspark",
	"Wm_jr_electricstart",
	"Wm_jr_electricstart_a",
	"Wm_jr_electricstart_b",
	"Wm_jr_fireattack",
	"Wm_jr_fireattack_a",
	"Wm_jr_fireattack_b",
	"Wm_jr_fireattack_d",
	"Wm_jr_fireattack_e",
	"Wm_jr_fireattack_f",
	"Wm_jr_firehit",
	"Wm_jr_firehit_a",
	"Wm_jr_fireplace",
	"Wm_jr_fireplace_a",
	"Wm_jr_fireplace_b",
	"Wm_jr_fireplace_ind",
	"Wm_jr_jumpend",
	"Wm_jr_jumpstart",
	"Wm_jr_kbstepon",
	"Wm_jr_kbstepon_a",
	"Wm_jr_kickhit",
	"Wm_jr_kickhit_glow",
	"Wm_jr_kystepon",
	"Wm_jr_kystepon_a",
	"Wm_jr_landsmoke",
	"Wm_jr_landsmoke_a",
	"Wm_jr_landsmoke_c",
	"Wm_jr_lustepon",
	"Wm_jr_lustepon_a",
	"Wm_jr_misshit",
	"Wm_jr_misshit_a",
	"Wm_jr_misshit_b",
	"Wm_jr_misshit_s",
	"Wm_jr_misshit_ss",
	"Wm_jr_misshit_s_a",
	"Wm_jr_mrstepon",
	"Wm_jr_mrstepon_a",
	"Wm_jr_mrstepon_b",
	"Wm_jr_playerspin",
	"Wm_jr_propeller",
	"Wm_jr_shot",
	"Wm_jr_shothit",
	"Wm_jr_shotring",
	"Wm_jr_shotsmoke",
	"Wm_jr_shotspark",
	"Wm_jr_shotstar",
	"Wm_jr_stepon",
	"Wm_jr_stepon_a",
	"Wm_jr_stepon_b",
	"Wm_jr_sweat",
	"Wm_ka_block_l",
	"Wm_ka_block_l_a",
	"Wm_ka_block_l_b",
	"Wm_ka_block_l_c",
	"Wm_ka_block_m",
	"Wm_ka_block_m_a",
	"Wm_ka_block_m_b",
	"Wm_ka_block_m_c",
	"Wm_ka_block_s",
	"Wm_ka_block_s_a",
	"Wm_ka_block_s_b",
	"Wm_ka_block_s_c",
	"Wm_ka_changesmoke",
	"Wm_ka_change_e",
	"Wm_ka_change_l",
	"Wm_ka_change_l_a",
	"Wm_ka_change_l_b",
	"Wm_ka_change_l_c",
	"Wm_ka_change_l_d",
	"Wm_ka_change_l_e",
	"Wm_ka_change_l_fa",
	"Wm_ka_change_l_fb",
	"Wm_ka_change_l_st01",
	"Wm_ka_change_m",
	"Wm_ka_change_m_a",
	"Wm_ka_change_m_b",
	"Wm_ka_change_m_c",
	"Wm_ka_change_m_d",
	"Wm_ka_change_m_e",
	"Wm_ka_change_m_fa",
	"Wm_ka_change_m_fb",
	"Wm_ka_change_m_st01",
	"Wm_ka_change_s",
	"Wm_ka_change_s_a",
	"Wm_ka_change_s_b",
	"Wm_ka_change_s_c",
	"Wm_ka_change_s_d",
	"Wm_ka_change_s_fa",
	"Wm_ka_change_s_fb",
	"Wm_ka_change_s_st01",
	"Wm_ka_coin",
	"Wm_ka_damage",
	"Wm_ka_damagedie",
	"Wm_ka_damagediespin",
	"Wm_ka_damagedie_a",
	"Wm_ka_damagedie_b",
	"Wm_ka_damagedie_bcld",
	"Wm_ka_damagedie_cld",
	"Wm_ka_damagedie_f",
	"Wm_ka_damagedie_g",
	"Wm_ka_damage_a",
	"Wm_ka_damage_b",
	"Wm_ka_damage_c",
	"Wm_ka_damage_d",
	"Wm_ka_enemychange_l",
	"Wm_ka_enemychange_l_a",
	"Wm_ka_enemychange_l_b",
	"Wm_ka_enemychange_s",
	"Wm_ka_enemychange_s_a",
	"Wm_ka_enemychange_s_b",
	"Wm_ka_fade",
	"Wm_ka_firehit01",
	"Wm_ka_firehit02",
	"Wm_ka_firehit03",
	"Wm_ka_magicattack",
	"Wm_ka_magicattack_a",
	"Wm_ka_magicattack_c",
	"Wm_ka_magicattack_d",
	"Wm_ka_magicattack_e",
	"Wm_ka_magicattack_st",
	"Wm_ka_magicattack_st_a",
	"Wm_ka_magicattack_st_b",
	"Wm_ka_magicattack_st_c",
	"Wm_ka_magicattack_st_d",
	"Wm_ka_mgcwallhit",
	"Wm_ka_mgcwallhit01",
	"Wm_ka_mgcwallhit02",
	"Wm_ka_mgcwallhit03",
	"Wm_ka_mgcwallhit04",
	"Wm_mr_kameattackhit",
	"Wm_mr_kameattackhit_a",
	"Wm_mr_kameattackhit_b",
	"Wm_mr_kameattackhit_c",
	"Wm_mr_kameattackhit_d",
	"Wm_mr_kameattackhit_e",
	"Wm_ko_cage",
	"Wm_ko_cage_a",
	"Wm_ko_ceilingfall",
	"Wm_ko_ceilingfall_a",
	"Wm_ko_ceilingfall_b",
	"Wm_ko_ceilingfall_c",
	"Wm_ko_crumble01",
	"Wm_ko_crumble02",
	"Wm_ko_destroy",
	"Wm_ko_downsmoke",
	"Wm_ko_downsmokebig",
	"Wm_ko_fireattack",
	"Wm_ko_fireattack_a",
	"Wm_ko_fireattack_b",
	"Wm_ko_fireattack_d",
	"Wm_ko_fireattack_e",
	"Wm_ko_fireattack_f",
	"Wm_ko_fireattack_g",
	"Wm_ko_fireattack_h",
	"Wm_ko_firehit",
	"Wm_ko_firehitdie01",
	"Wm_ko_firehitdie02",
	"Wm_ko_firehitdie03",
	"Wm_ko_firehit_a",
	"Wm_ko_firehit_b",
	"Wm_ko_firehit_c",
	"Wm_ko_flicker",
	"Wm_ko_footsmoke",
	"Wm_ko_handhit",
	"Wm_ko_handhit_glow",
	"Wm_ko_landsmoke",
	"Wm_ko_landsmoke_a",
	"Wm_ko_landsmoke_b",
	"Wm_ko_landsmoke_c",
	"Wm_ko_magmafall",
	"Wm_ko_magmafall02",
	"Wm_ko_magmafall02_a",
	"Wm_ko_magmafall02_b",
	"Wm_ko_magmafall_a",
	"Wm_ko_magmafall_b",
	"Wm_ko_magmapocha",
	"Wm_ko_magmapochabig",
	"Wm_ko_magmapochabig_a",
	"Wm_ko_magmapochabig_b",
	"Wm_ko_magmapochabig_c",
	"Wm_ko_magmapochabig_in",
	"Wm_ko_magmapochabig_ou",
	"Wm_ko_magmapocha_a",
	"Wm_ko_magmapocha_b",
	"Wm_ko_magmapocha_c",
	"Wm_ko_magmapocha_in",
	"Wm_ko_magmapocha_ou",
	"Wm_ko_magmawalk",
	"Wm_ko_magmawalk02",
	"Wm_ko_magmawalk_a",
	"Wm_ko_magmawalk_b",
	"Wm_ko_rescuekira",
	"Wm_ko_rescuekira_a",
	"Wm_ko_rescuekira_b",
	"Wm_ko_shout",
	"Wm_ko_shout02",
	"Wm_ko_shout02_a",
	"Wm_ko_shout02_b",
	"Wm_ko_shout02_hinoko_a",
	"Wm_ko_shout02_hinoko_b",
	"Wm_ko_shout02_ind",
	"Wm_ko_shout_a",
	"Wm_ko_shout_b",
	"Wm_ko_shout_hinoko_a",
	"Wm_ko_shout_hinoko_b",
	"Wm_ko_shout_ind",
	"Wm_ko_switch",
	"Wm_ko_switch_a",
	"Wm_ko_switch_b",
	"Wm_ko_switch_c",
	"Wm_la_anger",
	"Wm_la_anger_cld",
	"Wm_la_damage",
	"Wm_la_damagedi02e_d",
	"Wm_la_damagedi02_f",
	"Wm_la_damagedie",
	"Wm_la_damagedie02",
	"Wm_la_damagedie02_a",
	"Wm_la_damagedie02_b",
	"Wm_la_damagedie02_bcld",
	"Wm_la_damagedie02_c",
	"Wm_la_damagedie02_e",
	"Wm_la_damagedie_a",
	"Wm_la_damagedie_b",
	"Wm_la_damagedie_bcld",
	"Wm_la_damagedie_cld",
	"Wm_la_damagedie_f",
	"Wm_la_damagedie_g",
	"Wm_la_damage_a",
	"Wm_la_damage_b",
	"Wm_la_damage_c",
	"Wm_la_damage_d",
	"Wm_la_firehit01",
	"Wm_la_firehit02",
	"Wm_la_firehit03",
	"Wm_la_jumpend",
	"Wm_la_jumpstart",
	"Wm_la_landsmoke",
	"Wm_la_landsmoke_a",
	"Wm_la_landsmoke_b",
	"Wm_la_landsmoke_c",
	"Wm_la_magicattack",
	"Wm_la_magicattack_a",
	"Wm_la_magicattack_b",
	"Wm_la_magicattack_c",
	"Wm_la_magicattack_d",
	"Wm_la_magicattack_e",
	"Wm_la_magicattack_st",
	"Wm_la_magicattack_st_a",
	"Wm_la_magicattack_st_b",
	"Wm_la_magicattack_st_c",
	"Wm_la_magicattack_st_d",
	"Wm_la_mgcwallhit",
	"Wm_la_mgcwallhit01",
	"Wm_la_mgcwallhit02",
	"Wm_la_mgcwallhit03",
	"Wm_la_mgcwallhit04",
	"Wm_la_shellchange",
	"Wm_la_shelllandsmoke01",
	"Wm_la_shelllandsmoke02",
	"Wm_la_shelltail",
	"Wm_la_turn01_l",
	"Wm_la_turn01_r",
	"Wm_la_turn02",
	"Wm_la_turnbrake01",
	"Wm_la_turnbrake02",
	"Wm_la_wallhit",
	"Wm_la_wallhit_a",
	"Wm_mr_larryattackhit",
	"Wm_mr_larryattackhit_a",
	"Wm_mr_larryattackhit_b",
	"Wm_mr_larryattackhit_c",
	"Wm_mr_larryattackhit_d",
	"Wm_mr_larryattackhit_e",
	"Wm_le_ballappear",
	"Wm_le_ballappear_a",
	"Wm_le_ballappear_b",
	"Wm_le_ballappear_c",
	"Wm_le_ballice",
	"Wm_le_damage",
	"Wm_le_damagedie",
	"Wm_le_damagedie02",
	"Wm_le_damagedie02_a",
	"Wm_le_damagedie02_b",
	"Wm_le_damagedie02_bcld",
	"Wm_le_damagedie02_c",
	"Wm_le_damagedie02_d",
	"Wm_le_damagedie02_e",
	"Wm_le_damagedie02_f",
	"Wm_le_damagedie_a",
	"Wm_le_damagedie_b",
	"Wm_le_damagedie_bcld",
	"Wm_le_damagedie_cld",
	"Wm_le_damagedie_f",
	"Wm_le_damagedie_g",
	"Wm_le_damage_a",
	"Wm_le_damage_b",
	"Wm_le_damage_c",
	"Wm_le_damage_d",
	"Wm_le_firehit01",
	"Wm_le_firehit02",
	"Wm_le_firehit03",
	"Wm_le_jumpend",
	"Wm_le_jumpstart",
	"Wm_le_landsmoke",
	"Wm_le_landsmoke_a",
	"Wm_le_landsmoke_b",
	"Wm_le_landsmoke_c",
	"Wm_le_magicattack_st",
	"Wm_le_magicattack_st_a",
	"Wm_le_magicattack_st_b",
	"Wm_le_magicattack_st_c",
	"Wm_le_magicattack_st_d",
	"Wm_le_mgcball",
	"Wm_le_mgcball_a",
	"Wm_le_mgcball_b",
	"Wm_le_mgcball_c",
	"Wm_le_mgcwallhit",
	"Wm_le_mgcwallhit01",
	"Wm_le_mgcwallhit02",
	"Wm_le_mgcwallhit03",
	"Wm_le_mgcwallhit04",
	"Wm_le_shellchange",
	"Wm_le_shelllandsmoke01",
	"Wm_le_shelllandsmoke02",
	"Wm_le_shelltail",
	"Wm_le_turn01_l",
	"Wm_le_turn01_r",
	"Wm_le_turn02",
	"Wm_le_turnbrake01",
	"Wm_le_turnbrake02",
	"Wm_mr_lemmyattackhit",
	"Wm_mr_lemmyattackhit_a",
	"Wm_mr_lemmyattackhit_b",
	"Wm_mr_lemmyattackhit_c",
	"Wm_mr_lemmyattackhit_d",
	"Wm_mr_lemmyattackhit_e",
	"Wm_ob_ballgrowbig",
	"Wm_lu_damage",
	"Wm_lu_damagedie",
	"Wm_lu_damagedie02",
	"Wm_lu_damagedie02_a",
	"Wm_lu_damagedie02_b",
	"Wm_lu_damagedie02_bcld",
	"Wm_lu_damagedie02_c",
	"Wm_lu_damagedie02_d",
	"Wm_lu_damagedie02_e",
	"Wm_lu_damagedie02_f",
	"Wm_lu_damagedie_a",
	"Wm_lu_damagedie_b",
	"Wm_lu_damagedie_bcld",
	"Wm_lu_damagedie_cld",
	"Wm_lu_damagedie_f",
	"Wm_lu_damagedie_g",
	"Wm_lu_damage_a",
	"Wm_lu_damage_b",
	"Wm_lu_damage_c",
	"Wm_lu_damage_d",
	"Wm_lu_firehit01",
	"Wm_lu_firehit02",
	"Wm_lu_firehit03",
	"Wm_lu_jumpend",
	"Wm_lu_jumpsmoke",
	"Wm_lu_jumpstart",
	"Wm_lu_landsmoke",
	"Wm_lu_landsmoke_a",
	"Wm_lu_landsmoke_b",
	"Wm_lu_landsmoke_c",
	"Wm_lu_liftspark",
	"Wm_lu_liftspark_a",
	"Wm_lu_liftspark_b",
	"Wm_lu_magicattack",
	"Wm_lu_magicattack_a",
	"Wm_lu_magicattack_b",
	"Wm_lu_magicattack_c",
	"Wm_lu_magicattack_d",
	"Wm_lu_magicattack_e",
	"Wm_lu_magicattack_st",
	"Wm_lu_magicattack_st_a",
	"Wm_lu_magicattack_st_b",
	"Wm_lu_magicattack_st_c",
	"Wm_lu_magicattack_st_d",
	"Wm_lu_mgcwallhit",
	"Wm_lu_mgcwallhit01",
	"Wm_lu_mgcwallhit02",
	"Wm_lu_mgcwallhit03",
	"Wm_lu_mgcwallhit04",
	"Wm_lu_shellchange",
	"Wm_lu_shelllandsmoke01",
	"Wm_lu_shelllandsmoke02",
	"Wm_lu_shelltail",
	"Wm_lu_sweat",
	"Wm_lu_turn01_l",
	"Wm_lu_turn01_r",
	"Wm_lu_turn02",
	"Wm_lu_turnbrake01",
	"Wm_lu_turnbrake02",
	"Wm_mr_ludwigattackhit",
	"Wm_mr_ludwigattackhit_a",
	"Wm_mr_ludwigattackhit_b",
	"Wm_mr_ludwigattackhit_c",
	"Wm_mr_ludwigattackhit_d",
	"Wm_mr_ludwigattackhit_e",
	"Wm_mo_damage",
	"Wm_mo_damagedie",
	"Wm_mo_damagedie02",
	"Wm_mo_damagedie02_a",
	"Wm_mo_damagedie02_b",
	"Wm_mo_damagedie02_bcld",
	"Wm_mo_damagedie02_c",
	"Wm_mo_damagedie02_d",
	"Wm_mo_damagedie02_e",
	"Wm_mo_damagedie02_f",
	"Wm_mo_damagedie_a",
	"Wm_mo_damagedie_b",
	"Wm_mo_damagedie_bcld",
	"Wm_mo_damagedie_cld",
	"Wm_mo_damagedie_f",
	"Wm_mo_damagedie_g",
	"Wm_mo_damage_a",
	"Wm_mo_damage_b",
	"Wm_mo_damage_c",
	"Wm_mo_damage_d",
	"Wm_mo_drop",
	"Wm_mo_firehit01",
	"Wm_mo_firehit02",
	"Wm_mo_firehit03",
	"Wm_mo_jumpend",
	"Wm_mo_jumpstart",
	"Wm_mo_landsmoke",
	"Wm_mo_landsmokebig",
	"Wm_mo_landsmokebig_a",
	"Wm_mo_landsmokebig_b",
	"Wm_mo_landsmokebig_c",
	"Wm_mo_landsmokebig_d",
	"Wm_mo_landsmoke_a",
	"Wm_mo_landsmoke_b",
	"Wm_mo_landsmoke_c",
	"Wm_mo_magicattack",
	"Wm_mo_magicattack_a",
	"Wm_mo_magicattack_b",
	"Wm_mo_magicattack_c",
	"Wm_mo_magicattack_d",
	"Wm_mo_magicattack_e",
	"Wm_mo_magicattack_st",
	"Wm_mo_magicattack_st_a",
	"Wm_mo_magicattack_st_b",
	"Wm_mo_magicattack_st_c",
	"Wm_mo_magicattack_st_d",
	"Wm_mo_magmapocha",
	"Wm_mo_magmapochas_a",
	"Wm_mo_magmapochas_in",
	"Wm_mo_magmapochas_ou",
	"Wm_mo_magmapocha_a",
	"Wm_mo_magmapocha_b",
	"Wm_mo_magmapocha_c",
	"Wm_mo_magmapocha_in",
	"Wm_mo_magmapocha_ou",
	"Wm_mo_magmapocha_s",
	"Wm_mo_mgcwallhit",
	"Wm_mo_mgcwallhit01",
	"Wm_mo_mgcwallhit02",
	"Wm_mo_mgcwallhit03",
	"Wm_mo_mgcwallhit04",
	"Wm_mo_pillarhit",
	"Wm_mo_pillarhit_b",
	"Wm_mo_pillarhit_c",
	"Wm_mo_pillarhit_d",
	"Wm_mo_pillarhi_a",
	"Wm_mo_shellchange",
	"Wm_mo_shelllandsmoke01",
	"Wm_mo_shelllandsmoke02",
	"Wm_mo_shelltail",
	"Wm_mo_turn01_l",
	"Wm_mo_turn01_r",
	"Wm_mo_turn02",
	"Wm_mo_turnbrake01",
	"Wm_mo_turnbrake02",
	"Wm_mo_wallhit",
	"Wm_mo_wallhit_a",
	"Wm_mr_moattackhit",
	"Wm_mr_moattackhit_a",
	"Wm_mr_moattackhit_b",
	"Wm_mr_moattackhit_c",
	"Wm_mr_moattackhit_d",
	"Wm_mr_moattackhit_e",
	"Wm_mr_quakewait",
	"Wm_mr_quakewait",
	"Wm_mr_royattackhit",
	"Wm_mr_royattackhit_a",
	"Wm_mr_royattackhit_b",
	"Wm_mr_royattackhit_c",
	"Wm_mr_royattackhit_d",
	"Wm_mr_royattackhit_e",
	"Wm_ro_damage",
	"Wm_ro_damagedie",
	"Wm_ro_damagedie02",
	"Wm_ro_damagedie02_a",
	"Wm_ro_damagedie02_b",
	"Wm_ro_damagedie02_bcld",
	"Wm_ro_damagedie02_c",
	"Wm_ro_damagedie02_d",
	"Wm_ro_damagedie02_e",
	"Wm_ro_damagedie02_f",
	"Wm_ro_damagedie_a",
	"Wm_ro_damagedie_b",
	"Wm_ro_damagedie_bcld",
	"Wm_ro_damagedie_cld",
	"Wm_ro_damagedie_f",
	"Wm_ro_damagedie_g",
	"Wm_ro_damage_a",
	"Wm_ro_damage_b",
	"Wm_ro_damage_c",
	"Wm_ro_damage_d",
	"Wm_ro_drop",
	"Wm_ro_firehit01",
	"Wm_ro_firehit02",
	"Wm_ro_firehit03",
	"Wm_ro_jumpend",
	"Wm_ro_jumpstart",
	"Wm_ro_landsmoke",
	"Wm_ro_landsmokebig",
	"Wm_ro_landsmokebig_a",
	"Wm_ro_landsmokebig_b",
	"Wm_ro_landsmokebig_c",
	"Wm_ro_landsmokebig_d",
	"Wm_ro_landsmoke_a",
	"Wm_ro_landsmoke_b",
	"Wm_ro_landsmoke_c",
	"Wm_ro_magicattack",
	"Wm_ro_magicattack_a",
	"Wm_ro_magicattack_b",
	"Wm_ro_magicattack_c",
	"Wm_ro_magicattack_d",
	"Wm_ro_magicattack_e",
	"Wm_ro_magicattack_st",
	"Wm_ro_magicattack_st_a",
	"Wm_ro_magicattack_st_b",
	"Wm_ro_magicattack_st_c",
	"Wm_ro_magicattack_st_d",
	"Wm_ro_mgcwallhit",
	"Wm_ro_mgcwallhit01",
	"Wm_ro_mgcwallhit02",
	"Wm_ro_mgcwallhit03",
	"Wm_ro_mgcwallhit04",
	"Wm_ro_pipeappear",
	"Wm_ro_pipepeep",
	"Wm_ro_shellchange",
	"Wm_ro_shelllandsmoke01",
	"Wm_ro_shelllandsmoke02",
	"Wm_ro_shelltail",
	"Wm_ro_turn01_l",
	"Wm_ro_turn01_r",
	"Wm_ro_turn02",
	"Wm_ro_turnbrake01",
	"Wm_ro_turnbrake02",
	"Wm_ro_wallhit",
	"Wm_ro_wallhit_a",
	"Wm_we_baton",
	"Wm_we_damage",
	"Wm_we_damagedie",
	"Wm_we_damagedie02",
	"Wm_we_damagedie02_a",
	"Wm_we_damagedie02_b",
	"Wm_we_damagedie02_bcld",
	"Wm_we_damagedie02_c",
	"Wm_we_damagedie02_d",
	"Wm_we_damagedie02_e",
	"Wm_we_damagedie02_f",
	"Wm_we_damagedie_a",
	"Wm_we_damagedie_b",
	"Wm_we_damagedie_bcld",
	"Wm_we_damagedie_cld",
	"Wm_we_damagedie_f",
	"Wm_we_damagedie_g",
	"Wm_we_damage_a",
	"Wm_we_damage_b",
	"Wm_we_damage_c",
	"Wm_we_damage_d",
	"Wm_we_firehit01",
	"Wm_we_firehit02",
	"Wm_we_firehit03",
	"Wm_we_jumpend",
	"Wm_we_jumpstart",
	"Wm_we_jumpwater",
	"Wm_we_landsmoke",
	"Wm_we_landsmoke_a",
	"Wm_we_landsmoke_c",
	"Wm_we_magicattack_st",
	"Wm_we_magicattack_st_a",
	"Wm_we_magicattack_st_b",
	"Wm_we_magicattack_st_c",
	"Wm_we_magicattack_st_d",
	"Wm_we_rainbow",
	"Wm_we_ringappear",
	"Wm_we_ringappear_a",
	"Wm_we_ringappear_b",
	"Wm_we_ringappear_c",
	"Wm_we_ringburst",
	"Wm_we_ringburst_a",
	"Wm_we_ringburst_b",
	"Wm_we_ringhit",
	"Wm_we_ringkira",
	"Wm_we_ringtail",
	"Wm_we_shellchange",
	"Wm_we_shelllandsmoke01",
	"Wm_we_shelllandsmoke02",
	"Wm_we_shelltail",
	"Wm_we_turn01_l",
	"Wm_we_turn01_r",
	"Wm_we_turn02",
	"Wm_we_turnbrake01",
	"Wm_we_turnbrake02",
	"Wm_we_wallhit",
	"Wm_we_wallhit_a",
	"Wm_we_water",
	"Wm_we_watersign",
	"Wm_we_waterup",
	"Wm_we_waterupsign",
	"Wm_we_waterupsign_a",
	"Wm_we_waterupsign_b",
	"Wm_we_waterup_a",
	"Wm_we_waterup_b",
	"Wm_we_wlandsmoke",
	"Wm_01mr_hardhit_glow",
	"Wm_01mr_hardhit_grain",
	"Wm_01mr_hardhit_spak",
	"Wm_01mr_kick_glow",
	"Wm_01mr_kick_grain",
	"Wm_01mr_softhit_glow",
	"Wm_01mr_softhit_spak",
	"Wm_01_mr_1upkira",
	"Wm_01_mr_1upkira_01",
	"Wm_01_mr_1upkira_01_s",
	"Wm_01_mr_1upkira_01_ss",
	"Wm_01_mr_1upkira_02",
	"Wm_01_mr_1upkira_s",
	"Wm_01_mr_1upkira_spin",
	"Wm_01_mr_1upkira_spin_s",
	"Wm_01_mr_1upkira_spin_ss",
	"Wm_01_mr_1upkira_ss",
	"Wm_01_mr_beachbrakesmk",
	"Wm_01_mr_beachbrakesmk_ss",
	"Wm_01_mr_beachlandsmk",
	"Wm_01_mr_beachlandsmk_s",
	"Wm_01_mr_beachlandsmk_ss",
	"Wm_01_mr_beachslipsmk",
	"Wm_01_mr_beachslipsmk_ss",
	"Wm_01_mr_brakesmoke",
	"Wm_01_mr_brakesmoke_ss",
	"Wm_01_mr_fireball_hit",
	"Wm_01_mr_fireball_hit01",
	"Wm_01_mr_hardhit",
	"Wm_01_mr_icebrakesmk",
	"Wm_01_mr_icebrakesmk_ss",
	"Wm_01_mr_iceslipsmk",
	"Wm_01_mr_iceslipsmk_ss",
	"Wm_01_mr_kickhit",
	"Wm_01_mr_landsmoke",
	"Wm_01_mr_landsmoke_s",
	"Wm_01_mr_landsmoke_ss",
	"Wm_01_mr_sealandsmk",
	"Wm_01_mr_sealandsmk_s",
	"Wm_01_mr_sealandsmk_ss",
	"Wm_01_mr_slipsmoke",
	"Wm_01_mr_slipsmoke_big",
	"Wm_01_mr_slipsmoke_ss",
	"Wm_01_mr_sndbrakesmk",
	"Wm_01_mr_sndbrakesmk_ss",
	"Wm_01_mr_sndlandsmk",
	"Wm_01_mr_sndlandsmk_s",
	"Wm_01_mr_sndlandsmk_ss",
	"Wm_01_mr_sndslipsmk",
	"Wm_01_mr_sndslipsmk_ss",
	"Wm_01_mr_softhit",
	"Wm_01_mr_starkira",
	"Wm_01_mr_starkira_a",
	"Wm_01_mr_starkira_a_s",
	"Wm_01_mr_starkira_b",
	"Wm_01_mr_starkira_b_s",
	"Wm_01_mr_starkira_s",
	"Wm_01_mr_waterwave_in",
	"Wm_01_mr_waterwave_in_a1",
	"Wm_01_mr_waterwave_in_a2",
	"Wm_01_mr_waterwave_in_a_ss",
	"Wm_01_mr_waterwave_in_b",
	"Wm_01_mr_waterwave_in_b_ss",
	"Wm_01_mr_waterwave_in_c",
	"Wm_01_mr_waterwave_in_ss",
	"Wm_01_mr_waterwave_out",
	"Wm_01_mr_waterwave_out_a",
	"Wm_01_mr_waterwave_out_a_ss",
	"Wm_01_mr_waterwave_out_b",
	"Wm_01_mr_waterwave_out_b_ss",
	"Wm_01_mr_waterwave_out_ss",
	"Wm_01_mr_wirehit",
	"Wm_01_mr_wirehit_glow",
	"Wm_01_mr_wirehit_hit",
	"Wm_01_mr_wirehit_line",
	"Wm_01_mr_wirehit_star",
	"Wm_02mr_hardhit_glow",
	"Wm_02mr_hardhit_spak",
	"Wm_02mr_kick_glow",
	"Wm_02mr_kick_grain",
	"Wm_02mr_softhit_glow",
	"Wm_02mr_softhit_spak",
	"Wm_02_mr_1upkira",
	"Wm_02_mr_1upkira_01",
	"Wm_02_mr_1upkira_01_s",
	"Wm_02_mr_1upkira_01_ss",
	"Wm_02_mr_1upkira_02",
	"Wm_02_mr_1upkira_s",
	"Wm_02_mr_1upkira_spin",
	"Wm_02_mr_1upkira_spin_s",
	"Wm_02_mr_1upkira_spin_ss",
	"Wm_02_mr_1upkira_ss",
	"Wm_02_mr_beachbrakesmk",
	"Wm_02_mr_beachbrakesmk_ss",
	"Wm_02_mr_beachlandsmk",
	"Wm_02_mr_beachlandsmk_s",
	"Wm_02_mr_beachlandsmk_ss",
	"Wm_02_mr_beachslipsmk",
	"Wm_02_mr_beachslipsmk_ss",
	"Wm_02_mr_brakesmoke",
	"Wm_02_mr_brakesmoke_ss",
	"Wm_02_mr_fireball_hit",
	"Wm_02_mr_hardhit",
	"Wm_02_mr_icebrakesmk",
	"Wm_02_mr_icebrakesmk_ss",
	"Wm_02_mr_iceslipsmk",
	"Wm_02_mr_iceslipsmk_ss",
	"Wm_02_mr_kickhit",
	"Wm_02_mr_landsmoke",
	"Wm_02_mr_landsmoke_s",
	"Wm_02_mr_landsmoke_ss",
	"Wm_02_mr_sealandsmk",
	"Wm_02_mr_sealandsmk_s",
	"Wm_02_mr_sealandsmk_ss",
	"Wm_02_mr_slipsmoke",
	"Wm_02_mr_slipsmoke_big",
	"Wm_02_mr_slipsmoke_ss",
	"Wm_02_mr_sndbrakesmk",
	"Wm_02_mr_sndbrakesmk_ss",
	"Wm_02_mr_sndlandsmk",
	"Wm_02_mr_sndlandsmk_s",
	"Wm_02_mr_sndlandsmk_ss",
	"Wm_02_mr_sndslipsmk",
	"Wm_02_mr_sndslipsmk_ss",
	"Wm_02_mr_softhit",
	"Wm_02_mr_starkira",
	"Wm_02_mr_starkira_a",
	"Wm_02_mr_starkira_a_s",
	"Wm_02_mr_starkira_b",
	"Wm_02_mr_starkira_b_s",
	"Wm_02_mr_starkira_s",
	"Wm_02_mr_waterwave_in",
	"Wm_02_mr_waterwave_in_a1",
	"Wm_02_mr_waterwave_in_a2",
	"Wm_02_mr_waterwave_in_a_ss",
	"Wm_02_mr_waterwave_in_b",
	"Wm_02_mr_waterwave_in_b_ss",
	"Wm_02_mr_waterwave_in_c",
	"Wm_02_mr_waterwave_in_ss",
	"Wm_02_mr_waterwave_out",
	"Wm_02_mr_waterwave_out_a",
	"Wm_02_mr_waterwave_out_a_ss",
	"Wm_02_mr_waterwave_out_b",
	"Wm_02_mr_waterwave_out_b_ss",
	"Wm_02_mr_waterwave_out_ss",
	"Wm_02_mr_wirehit",
	"Wm_02_mr_wirehit_glow",
	"Wm_02_mr_wirehit_hit",
	"Wm_02_mr_wirehit_line",
	"Wm_02_mr_wirehit_star",
	"Wm_03mr_hardhit_glow",
	"Wm_03mr_hardhit_spak",
	"Wm_03mr_kick_glow",
	"Wm_03mr_softhit_glow",
	"Wm_03mr_softhit_spak",
	"Wm_03_mr_1upkira",
	"Wm_03_mr_1upkira_01_s",
	"Wm_03_mr_1upkira_01_ss",
	"Wm_03_mr_1upkira_s",
	"Wm_03_mr_1upkira_spin_s",
	"Wm_03_mr_1upkira_spin_ss",
	"Wm_03_mr_1upkira_ss",
	"Wm_03_mr_beachbrakesmk",
	"Wm_03_mr_beachbrakesmk_ss",
	"Wm_03_mr_beachlandsmk",
	"Wm_03_mr_beachlandsmk_s",
	"Wm_03_mr_beachlandsmk_ss",
	"Wm_03_mr_beachslipsmk",
	"Wm_03_mr_beachslipsmk_ss",
	"Wm_03_mr_brakesmoke",
	"Wm_03_mr_brakesmoke_ss",
	"Wm_03_mr_fireball_hit",
	"Wm_03_mr_hardhit",
	"Wm_03_mr_icebrakesmk",
	"Wm_03_mr_icebrakesmk_ss",
	"Wm_03_mr_iceslipsmk",
	"Wm_03_mr_iceslipsmk_ss",
	"Wm_03_mr_kickhit",
	"Wm_03_mr_landsmoke",
	"Wm_03_mr_landsmoke_s",
	"Wm_03_mr_landsmoke_ss",
	"Wm_03_mr_sealandsmk",
	"Wm_03_mr_sealandsmk_s",
	"Wm_03_mr_sealandsmk_ss",
	"Wm_03_mr_slipsmoke",
	"Wm_03_mr_slipsmoke_big",
	"Wm_03_mr_slipsmoke_ss",
	"Wm_03_mr_sndbrakesmk",
	"Wm_03_mr_sndbrakesmk_ss",
	"Wm_03_mr_sndlandsmk",
	"Wm_03_mr_sndlandsmk_s",
	"Wm_03_mr_sndlandsmk_ss",
	"Wm_03_mr_sndslipsmk",
	"Wm_03_mr_sndslipsmk_ss",
	"Wm_03_mr_softhit",
	"Wm_03_mr_starkira",
	"Wm_03_mr_starkira_a",
	"Wm_03_mr_starkira_a_s",
	"Wm_03_mr_starkira_b",
	"Wm_03_mr_starkira_b_s",
	"Wm_03_mr_starkira_s",
	"Wm_03_mr_waterwave_in",
	"Wm_03_mr_waterwave_in_a1",
	"Wm_03_mr_waterwave_in_a2",
	"Wm_03_mr_waterwave_in_b",
	"Wm_03_mr_waterwave_in_ss",
	"Wm_03_mr_waterwave_out",
	"Wm_03_mr_waterwave_out_ss",
	"Wm_03_mr_wirehit",
	"Wm_03_mr_wirehit_glow",
	"Wm_03_mr_wirehit_hit",
	"Wm_03_mr_wirehit_line",
	"Wm_03_mr_wirehit_star",
	"Wm_mg_balloonburst",
	"Wm_mg_balloonburst_a",
	"Wm_mg_balloonget_a",
	"Wm_mg_balloonget_b",
	"Wm_mg_balloonget_cld",
	"Wm_mg_balloonget_g",
	"Wm_mg_balloonget_r",
	"Wm_mg_balloonget_y",
	"Wm_mg_cursor",
	"Wm_mg_cursor_2d",
	"Wm_mg_cursor_st",
	"Wm_mg_discharge01",
	"Wm_mg_discharge02",
	"Wm_mg_discharge03_a01",
	"Wm_mg_discharge03_b",
	"Wm_mg_discharge03_b01",
	"Wm_mg_discharge03_g",
	"Wm_mg_discharge03_mago",
	"Wm_mg_discharge03_r",
	"Wm_mg_discharge03_y",
	"Wm_mg_dischargetail01",
	"Wm_mg_dischargetail01b",
	"Wm_mg_dischargetail01c",
	"Wm_mg_dischargetail02",
	"Wm_mg_itemget_cld",
	"Wm_mg_itemget_fl",
	"Wm_mg_itemget_fl_ok",
	"Wm_mg_itemget_if",
	"Wm_mg_itemget_kn",
	"Wm_mg_itemget_mm",
	"Wm_mg_itemget_pn",
	"Wm_mg_itemget_pr",
	"Wm_mg_itemget_st",
	"Wm_mg_panelmiss",
	"Wm_mg_panelmiss02",
	"Wm_mg_panelmiss02_a",
	"Wm_mg_panelmiss02_b",
	"Wm_mg_panelmiss02_c",
	"Wm_mg_panelmiss02_d",
	"Wm_mg_panelmiss02_s",
	"Wm_mg_panelmiss02_s_a",
	"Wm_mg_panelmiss02_s_b",
	"Wm_mg_panelmiss02_s_c",
	"Wm_mg_panelmiss_a",
	"Wm_mg_panelmiss_b",
	"Wm_mg_panelmiss_c",
	"Wm_mg_panelmiss_d",
	"Wm_mg_panelmiss_s",
	"Wm_mg_panelmiss_s_a",
	"Wm_mg_panelmiss_s_b",
	"Wm_mg_panelmiss_s_c",
	"Wm_mg_panelopen",
	"Wm_mg_panelperfect"
};