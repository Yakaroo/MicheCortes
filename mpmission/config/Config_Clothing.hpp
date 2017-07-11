/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "CR_TargetShirt", "", 5000, "" },  
            { "CR_ISISShirt", "", 5000, "" }, 
            { "CR_CenaShrit", "", 5000, "" }, 
            { "CR_HawaiiShirt", "", 5000, "" }, 
            { "EF_suit_6", "", 5000, "" }, 
            { "EF_suit_5", "", 5000, "" }, 
            { "EF_suit_4", "", 5000, "" }, 
            { "EF_suit_3", "", 5000, "" }, 
            { "EF_suit_2", "", 5000, "" },  // 3
            { "ED_MX1", "", 5000, "" }, 
            { "EF_suit_1", "", 5000, "" }, 
            { "EF_HM_SG2", "", 5000, "" }, 
            { "EF_HM_OD2", "", 5000, "" }, 
            { "EF_HM_B2", "", 5000, "" }, 
            { "EF_HM_PP1", "", 5000, "" }, 
            { "EF_HM_SG1", "", 5000, "" }, 
            { "FF_HM_OD1", "", 5000, "" }, 
            { "FF_HM_BL1", "", 5000, "" },  
            { "FF_HM_B1", "", 5000, "" }, 
            { "CR_CheShirt", "", 5000, "" }, 
            { "CR_CatShirt", "", 5000, "" }, 
            { "CR_BloodShirt", "", 5000, "" }, 
            { "CR_Postal_Deude_Shirt", "", 5000, "" }, 
            { "CR_MisfitShirt", "", 5000, "" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, 
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, 
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, 
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, 
            { "B_Bergen_dgtl_f", "", 9500, "" }, 
            { "B_Bergen_tna_f", "", 9500, "" } 
        };
    };
	
    class frauen {
        title = "STR_Shops_C_frauen";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EF_FEM_3_5", "", 5000, "" },  
            { "EF_FEM_3_5VP", "", 5000, "" }, 
            { "EF_FEM_3_5BP", "", 5000, "" }, 
            { "EF_FEM_3_5B", "", 5000, "" }, 
            { "EF_FEM_3_73R", "", 5000, "" }, 
            { "EF_FEM_3_73", "", 5000, "" }, 
            { "EF_FEM_3_75R", "", 5000, "" }, 
            { "EF_FEM_3_3LPBR2", "", 5000, "" }, 
            { "EF_FEM_3_3LPBP2", "", 5000, "" },  // 3
            { "EF_FEM_3_3LPBPS2", "", 5000, "" }, 
            { "EF_FEM_3_3LPBL", "", 5000, "" }, 
            { "EF_FEM_3_3LPB", "", 5000, "" }, 
            { "EF_FEM_2BK", "", 5000, "" }, 
            { "EF_FEM_3_2", "", 5000, "" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "jamie_corrections", "", 25, "" },
            { "skn_u_nbc_opf_blue", "", 350, "" },
            { "skn_u_nbc_opf_red", "", 550, "" },
            { "jamie_police4_1", "", 25, "" },
            { "jamie_police4_2", "", 350, "" },
            { "jamie_police4_3", "", 550, "" },
            { "EF_FEM_3_3", "", 1250, "" },
            { "EF_FEM_3_3G", "", 25, "" },
            { "EF_HMFBI_2", "", 350, "" },
            { "EF_FEM_4_2", "", 550, "" },
            { "kenny_police5", "", 1250, "" },
            { "kenny_police3", "", 25, "" },
            { "kenny_police1", "", 350, "" },
            { "kenny_police2", "", 550, "" },
            { "kenny_police2_2", "", 25, "" },
            { "kenny_police2_3", "", 350, "" },
            { "kenny_police2_5", "", 550, "" },
            { "kenny_police2_4", "", 1250, "" },
            { "kenny_police3_1", "", 1250, "" },
            { "jamie_tou", "", 350, "" },
            { "fbi1_2", "", 1250, "" },
            { "U_bombsuit", "", 550, "" }, //1
            { "jamie_prison", "", 550, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "jamie_pcapblue", "", 25, "" },
            { "jamie_pcapblue2", "", 120, "" },
            { "jamie_pcapblack", "", 75, "" },
            { "jamie_blackhelmet", "", 80, "" },
			{ "H_Bombsuit_Helmet", "", 550, "" },
			{ "H_Titan_Helmet_", "", 550, "" },
			{ "FBI_Helmet1", "", 550, "" },
			{ "FBI_Helmet2", "", 550, "" },
			{ "H_Titan_Helmet_0", "", 550, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "k_black_so", "", 80, "" },
            { "jamie_black2", "", 100, "" },
            { "kenny_vest_police", "", 100, "" }, 
            { "kenny_vest_security", "", 150, "" },
            { "FBI_V1", "", 100, "" },
            { "jamie_black", "", 100, "" },
            { "TRYK_V_Bulletproof_BL", "", 150, "" },
            { "TRYK_V_Bulletproof", "", 100, "" },
            { "TRYK_V_Bulletproof_BLK", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_anprc155", "", 500, "" },
			{ "ACE_TacticalLadder_Pack", "", 500, "" } //Tactical Ladder
        };
    };
	
	class cop_swat {
        title = "STR_Shops_C_SWAT";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_bombsuit", "", 550, "" }, //1
            { "RM_SWAT_Uniform_02", "", 1250, "" },
            { "RM_SWAT_Uniform_01", "", 1250, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "gign_Balaclava", "SWAT Balaclava", 25, "" },
			{ "Rainman_HelmetIA_Splinter_Urban", "", 50, "" },
			{ "Rainman_HelmetB_Light_Splinter_Urban", "", 50, "" },
			{ "RM_SWAT_MilCap_Black", "", 50, "" },
			{ "RM_SWAT_Helmet_01", "", 50, "" },
            { "gign_helm", "SWAT Heavy Helmet", 120, "" },
            { "gign_helm3", "SWAT Operator Helmet", 75, "" },
            { "gign_helm4", "SWAT Operator Helmet ESS", 80, "" },
			{ "skn_m04_gas_mask_blk", "", 80, "" },
			{ "H_Bombsuit_Helmet", "", 550, "call life_coplevel >= 6" },
			{ "H_Titan_Helmet_", "", 550, "call life_coplevel >= 6" },
			{ "H_Titan_Helmet_0", "", 550, "call life_coplevel >= 6" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_RM_SWAT_Balaclava", "", 10, "" },
			{ "G_RM_SWAT_Glasses", "", 10, "" },
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "RM_SWAT_Vest_01", "", 80, "" }, //1
            { "RM_SWAT_Vest_Red_01", "", 100, "" },
            { "RM_SWAT_Vest_Blue_01", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_anprc155", "", 500, "" },
			{ "ACE_TacticalLadder_Pack", "", 500, "" } //Tactical Ladder
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "kenny_doc", "", 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }, 
            { "jamie_reflective", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, 
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, 
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, 
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, 
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, 
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, 
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } 
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } 
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
