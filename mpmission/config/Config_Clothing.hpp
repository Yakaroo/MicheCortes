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
            { "CR_TargetShirt", "", 10, "" },  
            { "CR_ISISShirt", "", 10, "" }, 
            { "CR_CenaShrit", "", 10, "" }, 
            { "CR_HawaiiShirt", "", 10, "" },
            { "CR_CheShirt", "", 10, "" }, 
            { "CR_CatShirt", "", 10, "" }, 
            { "CR_BloodShirt", "", 10, "" },
            { "CR_MisfitShirt", "", 10, "" },			
            { "CR_Postal_Deude_Shirt", "", 10, "" },
            { "CR_PresidenteShirt", "", 10, "" },
			{ "CR_SpidercatShirt", "", 10, "" },
			{ "Xnooz_t_shirt11", "", 10, "" },
			{ "Xnooz_t_shirt12", "", 10, "" },
			{ "Xnooz_t_shirt1", "", 10, "" },
			{ "Xnooz_t_shirt10", "", 10, "" },
			{ "Xnooz_t_shirt14", "", 10, "" },
            { "camo_farmer", "", 10, "" },			
            { "EF_suit_6", "", 20, "" }, 
            { "EF_suit_5", "", 20, "" }, 
            { "EF_suit_4", "", 20, "" }, 
            { "EF_suit_3", "", 20, "" }, 
            { "EF_suit_2", "", 20, "" },
			{ "TRYK_SUITS_BLK_F", "", 20, "" },
			{ "TRYK_SUITS_BR_F", "", 20, "" },
			{ "tacs_Suit_VIP", "", 20, "" },
            { "ED_MX1", "", 10, "" },
            { "EF_MX1", "", 10, "" }, 			
            { "EF_suit_1", "", 20, "" }, 
            { "EF_HM_SG2", "", 10, "" }, 
            { "EF_HM_OD2", "", 10, "" }, 
            { "EF_HM_B2", "", 10, "" },
            { "EF_HM_BL2", "", 10, "" },			
            { "EF_HM_PP1", "", 10, "" }, 
            { "EF_HM_SG1", "", 10, "" }, 
            { "FF_HM_OD1", "", 10, "" }, 
            { "FF_HM_BL1", "", 10, "" },  
            { "FF_HM_B1", "", 10, "" },
            { "EF_MKJKT", "", 10, "" },
			{ "EF_MKJKT2", "", 10, "" },
            { "EF_M_jkt2", "", 10, "" },
			{ "EF_M_jkt2_4", "", 10, "" },
            { "EF_M_jkt1_3", "", 10, "" },
            { "EF_M_jkt4", "", 10, "" },
            { "EF_M_jkt42", "", 10, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 10, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 10, "" },
            { "eaglkey_wwi_fr_pilot_cloth", "", 10, "" },				
            { "EF_HM_LPBP", "", 10, "" },
            { "EF_HM_LPBPS", "", 10, "" },
			{ "EF_HM_LPBW", "", 10, "" },
			{ "EF_HM_LPB", "", 10, "" },
			{ "EF_HM_LPBL", "", 10, "" },
			{ "TRYK_U_B_PCUHsW9", "", 10, "" },
			{ "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 10, "" },
			{ "TRYK_shirts_DENIM_BK", "", 10, "" },
			{ "TRYK_shirts_DENIM_BL", "", 10, "" },
			{ "TRYK_shirts_DENIM_BWH", "", 10, "" },
			{ "TRYK_shirts_DENIM_od", "", 10, "" },
			{ "TRYK_shirts_DENIM_R", "", 10, "" },
			{ "TRYK_shirts_DENIM_BWH", "", 10, "" },
			{ "TRYK_shirts_DENIM_WH", "", 10, "" },
			{ "TRYK_shirts_DENIM_WHB", "", 10, "" },
			{ "TRYK_U_denim_hood_3c", "", 10, "" },
			{ "TRYK_U_denim_hood_blk", "", 10, "" },
			{ "TRYK_U_denim_hood_mc", "", 10, "" },
			{ "TRYK_U_denim_hood_nc", "", 10, "" },
			{ "TRYK_U_denim_jersey_blk", "", 10, "" },
			{ "TRYK_U_denim_jersey_blu", "", 10, "" },
			{ "TRYK_U_B_BLK_T_BG_BK", "", 10, "" },
			{ "TRYK_U_B_RED_T_BG_BR", "", 10, "" },
			{ "TRYK_U_B_BLK_T_BG_WH", "", 10, "" }
			
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 5, "" },
            { "H_Bandanna_surfer", "", 5, "" },
            { "H_Bandanna_khk", "", 5, "" },
            { "H_Cap_blu", "", 5, "" },
            { "H_Cap_grn", "", 5, "" },
            { "H_Cap_grn_BI", "", 5, "" },
            { "H_Cap_oli", "", 5, "" },
            { "H_Cap_red", "", 5, "" },
            { "H_Cap_tan", "", 5, "" },
			{ "tacs_Cap_Backwards_TanLogoo", "", 5, "" },
			{ "tacs_Cap_Backwards_BlackLogoo", "", 5, "" },
			{ "TRYK_H_headsetcap_blk_Glasses", "", 5, "" },
			{ "TRYK_H_pakol2", "", 5, "" },
			{ "BL_us_hat", "", 5, "" },
			{ "BL_party_hat", "", 5, "" },
            { "H_Helmet_Skate", "", 5, "" }, 
            { "H_Bandanna_gry", "", 5, "" },
            { "H_Bandanna_sgg", "", 5, "" },
            { "H_Bandanna_cbr", "", 5, "" },
            { "H_StrawHat", "", 5, "" },
            { "H_Hat_tan", "", 5, "" },
            { "H_Hat_brown", "", 5, "" },
            { "H_Hat_grey", "", 5, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 5, "" },
            { "H_Hat_blue", "", 5, "" },
            { "H_Hat_checker", "", 5, "" },
            { "H_Booniehat_tan", "", 5, "" },
            { "H_Booniehat_grn", "", 5, "" },
			{ "BL_einmer_Hat", "", 5, "" },
			{ "UR_Beerhat_Green1", "", 5, "" },
			{ "UR_Beerhat_Green2", "", 5, "" },
			{ "UR_Beerhat_Red1", "", 5, "" },
			{ "UR_Beerhat_Red2", "", 5, "" },
			{ "UR_Beerhat_Yellow", "", 5, "" },
			{ "BHD_Protec_helmet2", "", 5, "" },
			{ "BHD_Protec_helmet", "", 5, "" },
			{ "BHD_Protec_helmet3", "", 5, "" },
			{ "Casque_Moto", "", 5, "" },
			{ "ALE_H_NewEra_Redsox", "", 5, "" },
			{ "ALE_H_NewEra_Rouge", "", 5, "" },
			{ "ALE_H_NewEra_Lakers", "", 5, "" },
			{ "ALE_H_NewEra_Cyan", "", 5, "" },
			{ "ALE_H_NewEra_Black", "", 5, "" },
			{ "ALE_H_NewEra_Monster", "", 5, "" },
			{ "ALE_H_NewEra_Superman", "", 5, "" },
			{ "ALE_H_Cowboy_Brown", "", 5, "" },
			{ "ALE_H_Cowboy_Black", "", 5, "" },
			{ "ALE_H_Cowboy_White", "", 5, "" },
			{ "Kio_Pirate_Hat", "", 5, "" },
			{ "Kio_Spinning_Hat", "", 5, "" },
			{ "EF_wig_DHBR", "", 5, "" },
			{ "EF_BNE_BK", "", 5, "" },
			{ "EF_BNE_BL", "", 5, "" },
			{ "EF_BNE_BR", "", 5, "" },
			{ "EF_BNE_R", "", 5, "" },
			{ "EF_BNE_V", "", 5, "" },
			{ "EF_BNE_W", "", 5, "" },
			{ "EF_HAT_BK", "", 5, "" },
			{ "EF_HAT_BW", "", 5, "" },
			{ "EF_HAT_CL", "", 5, "" },
			{ "EF_HAT_PI", "", 5, "" },
			{ "H_mas_ww2_turbanuk", "", 5, "" },
			{ "H_mas_ww2_cap_ger", "", 5, "" },
			{ "H_mas_wwa_cap_ger", "", 5, "" },
			{ "H_mas_ww2_cap_jap", "", 5, "" },
			{ "H_mas_ww2_hat_rus", "", 5, "" },
			{ "H_mas_ww2_beret_rus", "", 5, "" },
			{ "H_mas_ww2_beret_ger", "", 5, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 8, "" },
            { "G_Shades_Blue", "", 8, "" },
            { "G_Shades_Green", "", 8, "" },
            { "G_Shades_Red", "", 8, "" },
            { "G_Sport_Blackred", "", 8, "" },
            { "G_Sport_BlackWhite", "", 8, "" },
            { "G_Sport_Blackyellow", "", 8, "" },
            { "G_Sport_Checkered", "", 8, "" },
            { "G_Sport_Greenblack", "", 8, "" },
            { "G_Sport_Red", "", 8, "" },
            { "G_Lowprofile", "", 8, "" },
            { "G_Squares", "", 8, "" },
            { "G_Aviator", "", 8, "" },
			{ "G_Combat", "", 8, "" },
			{ "immersion_pops_pop0", "", 8, "" },
			{ "EF_AC1", "", 8, "" },
			{ "EF_AC2", "", 8, "" },
			{ "EF_AC3", "", 8, "" },
			{ "EF_RG1", "", 8, "" },
			{ "EF_SC_C1", "", 8, "" },
			{ "EF_SC_CY1", "", 8, "" },
			{ "EF_SC_MG1", "", 8, "" },
			{ "EF_SC_P1", "", 8, "" },
			{ "EF_SC_PP1", "", 8, "" },
			{ "EF_SC_W1", "", 8, "" },
			{ "EF_PG1", "", 8, "" },
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 50, "" },
            { "B_AssaultPack_khk", "", 55, "" },
            { "B_AssaultPack_dgtl", "", 55, "" },
            { "B_AssaultPack_rgr", "", 55, "" },
            { "B_AssaultPack_sgg", "", 55, "" },
            { "B_AssaultPack_blk", "", 55, "" },
            { "B_AssaultPack_cbr", "", 55, "" },
            { "B_AssaultPack_mcamo", "", 55, "" },
            { "B_AssaultPack_tna_f", "", 55, "" }, 
            { "B_TacticalPack_oli", "", 60, "" },
            { "B_Kitbag_mcamo", "", 80, "" },
            { "B_Kitbag_sgg", "", 80, "" },
            { "B_Kitbag_cbr", "", 80, "" },
            { "B_FieldPack_blk", "", 85, "" },
            { "B_FieldPack_ocamo", "", 85, "" },
            { "B_FieldPack_oucamo", "", 85, "" },
            { "B_FieldPack_ghex_f", "", 85, "" }, 
            { "B_Bergen_sgg", "", 120, "" },
            { "B_Bergen_mcamo", "", 120, "" },
            { "B_Bergen_rgr", "", 120, "" },
            { "B_Bergen_blk", "", 120, "" },
            { "B_Carryall_ocamo", "", 120, "" },
            { "B_Carryall_oucamo", "", 120, "" },
            { "B_Carryall_mcamo", "", 120, "" },
            { "B_Carryall_oli", "", 120, "" },
            { "B_Carryall_khk", "", 120, "" },
            { "B_Carryall_cbr", "", 120, "" },
            { "B_Carryall_ghex_f", "", 120, "" }
        };
    };
	
    class frauen {
        title = "STR_Shops_C_frauen";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EF_FEM_3_5", "", 10, "" },  
            { "EF_FEM_3_5VP", "", 10, "" }, 
            { "EF_FEM_3_5BP", "", 10, "" }, 
            { "EF_FEM_3_5B", "", 10, "" }, 
            { "EF_FEM_3_73R", "", 10, "" }, 
            { "EF_FEM_3_73", "", 10, "" }, 
            { "EF_FEM_3_75R", "", 10, "" }, 
            { "EF_FEM_3_3LPBR2", "", 10, "" }, 
            { "EF_FEM_3_3LPBP2", "", 10, "" },  // 3
            { "EF_FEM_3_3LPBPS2", "", 10, "" }, 
            { "EF_FEM_3_3LPBL", "", 10, "" }, 
            { "EF_FEM_3_3LPB", "", 10, "" }, 
            { "EF_FEM_2BK", "", 10, "" }, 
            { "EF_FEM_3_2", "", 10, "" }

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
			{ "kenny_police1", "Cadeten-Uniform", 20, "" },
			{ "kenny_police2", "Deputy-Uniform", 20, "call life_coplevel >= 2" },
			{ "kenny_police3", "Corporal-Uniform", 20, "call life_coplevel >= 3" },
			{ "kenny_police4", "Sergeant-Uniform", 20, "call life_coplevel >= 4" },
			{ "kenny_police5", "Lieutenant-Uniform", 20, "call life_coplevel >= 5" },
			{ "kenny_sheriff", "Captain-Uniform", 20, "call life_coplevel >= 6" },
			{ "kenny_sheriff4", "Major-Uniform", 20, "call life_coplevel >= 7" },
			{ "kenny_sheriff2", "Assistant Sheriff-Uniform", 20, "call life_coplevel >= 8" },
			{ "kenny_sheriff3", "Sheriff-Uniform", 20, "call life_coplevel >= 9" },
			{ "jamie_corrections", "", 20, "" },
            { "jamie_prison", "", 20, "" },
			{ "U_bombsuit", "", 100, "call life_coplevel >= 6" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "jamie_pcapblue", "", 10, "" },
            { "jamie_pcapblue2", "", 10, "" },
            { "jamie_pcapblack", "", 10, "" },
            { "jamie_blackhelmet", "", 10, "" },
			{ "EF_Mcap_PB", "", 10, "" },
			{ "AM_PatrolHat", "", 10, "" },
			{ "H_Watchcap_blk", "", 10, "call life_coplevel >= 4" },
			{ "jamie_pcapgreen", "", 10, "call life_coplevel >= 8" },
			{ "jamie_pcapgreen2", "", 10, "call life_coplevel >= 8" },
			{ "H_Bombsuit_Helmet", "", 50, "call life_coplevel >= 6" },
			{ "H_Titan_Helmet_", "", 50, "call life_coplevel >= 6" },
			{ "H_Titan_Helmet_0", "", 50, "call life_coplevel >= 6" },
			{ "jamie_pcapcorrections", "", 10, "" }
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
            { "G_Aviator", "", 100, "call life_coplevel >= 7" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "jamie_blelt", "", 25, "" },
			{ "jamie_black", "", 100, "" },
			{ "TAC_PBDFG2P_B", "", 100, "call life_coplevel >= 3" },
			{ "jamie_black2", "", 100, "call life_coplevel >= 4" },
			{ "EF_PBDF_M1", "", 100, "call life_coplevel >= 4" },
			{ "kenny_vest_detective", "", 100, "call life_coplevel >= 5" },
			{ "Specter_RAV_BLK", "", 100, "call life_coplevel >= 7" },
			{ "jamie_sheriff_vest", "", 100, "call life_coplevel >= 8" },
			{ "TAC_Sheriff_BA_OD", "", 100, "call life_coplevel >= 8" },
			{ "kenny_vest_traffic", "", 100, "" },
			{ "kenny_vest_security", "", 100, "" },
			{ "TAC_PBDFG2_B_1", "", 100, "" },
			{ "FIR_SaftyVest_Yellow", "", 75, "" },
			{ "jamie_corrections_vest", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_anprc155", "", 200, "" },
			{ "ACE_TacticalLadder_Pack", "", 500, "" } //Tactical Ladder
        };
    };
	
	class cop_swat {
        title = "STR_Shops_C_SWAT";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "RM_SWAT_Uniform_02", "", 10, "" },
            { "RM_SWAT_Uniform_01", "", 10, "" },
			{ "U_bombsuit", "", 550, "call life_coplevel >= 6" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "gign_Balaclava", "SWAT Balaclava", 25, "" },
			{ "Rainman_HelmetIA_Splinter_Urban", "", 50, "" },
			{ "Rainman_HelmetB_Light_Splinter_Urban", "", 50, "" },
			{ "RM_SWAT_MilCap_Black", "", 50, "" },
			{ "RM_SWAT_Helmet_01", "", 50, "" },
			{ "ATHhelm_Balaclava3", "", 50, "" },
            { "gign_helm", "SWAT Heavy Helmet", 50, "" },
            { "gign_helm3", "SWAT Operator Helmet", 50, "" },
            { "gign_helm4", "SWAT Operator Helmet ESS", 50, "" },
			{ "skn_m04_gas_mask_blk", "", 80, "" },
			{ "H_Bombsuit_Helmet", "", 550, "call life_coplevel >= 6" },
			{ "H_Titan_Helmet_", "", 550, "call life_coplevel >= 6" },
			{ "H_Titan_Helmet_0", "", 550, "call life_coplevel >= 6" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_RM_SWAT_Balaclava", "", 10, "" },
			{ "G_RM_SWAT_Glasses", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "RM_SWAT_Vest_01", "", 80, "" },
            { "RM_SWAT_Vest_Red_01", "", 100, "" },
            { "RM_SWAT_Vest_Blue_01", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_anprc155", "", 500, "" },
			{ "ACE_TacticalLadder_Pack", "", 500, "" } //Tactical Ladder
        };
    };
	
	class cop_fbi {
        title = "STR_Shops_C_FBI";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "fbi1_2", "", 10, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "FBI_Helmet", "", 100, "" },
			{ "FBI_Helmet2", "", 100, "" },
			{ "tacs_Cap_Earpiece_BlackLogo", "", 50, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Squares", "", 100, "" },
			{ "TRYK_Shemagh_shade", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "A3L_fbivest1_Fix", "", 100, "" },
			{ "FBI_V1", "", 100, "" },
			{ "TAC_V_tacv1_FBI2", "", 100, "" },
			{ "TAC_V_tacv1_FBI", "", 100, "" },
			{ "TAC_V_tacv1LC_FBI", "", 100, "" },
			{ "TAC_PBDFG2CPFBI_B_1", "", 100, "" },
			{ "TAC_PBDFG2SACFBI_RG_1", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_anprc155", "", 300, "" },
			{ "tacs_Backpack_Kitbag_DarkBlack", "", 150, "" }
        };
    };
	
	class cop_dea {
        title = "STR_Shops_C_FBI";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "Custom_Camo_Black", "", 10, "" },
			{ "Custom_Camo_Black_SS", "", 10, "" },
			{ "Custom_Camo", "", 10, "" },
			{ "Custom_Camo_SS", "", 10, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "DEA_Helmet3", "", 50, "" },
			{ "DEA_Helmet2", "", 50, "" },
			{ "tacs_Cap_Earpiece_BlackLogo", "", 50, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Squares", "", 100, "" },
			{ "TRYK_Shemagh_shade", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "Custom_Vest7", "", 100, "" },
			{ "Custom_Vest5", "", 100, "" },
			{ "Custom_Vest2", "", 100, "" },
			{ "Custom_Vest4", "", 100, "" },
			{ "Custom_Vest1", "", 100, "" },
			{ "TAC_PBDFG2CPDEA_B_1", "", 100, "" },
			{ "TAC_PBDFG2SACDEA_CY_1", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_anprc155", "", 300, "" },
			{ "tacs_Backpack_Kitbag_DarkBlack", "", 150, "" }
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
	
	class civ_mask {
        title = "STR_Shops_C_Mask";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "UR_Bag18", "", 200, "" },
			{ "UR_Bag13", "", 200, "" },
			{ "UR_Bag6", "", 200, "" },
			{ "UR_Bag26", "", 200, "" },
			{ "UR_Bag8", "", 200, "" },
			{ "UR_Bag10", "", 200, "" },
			{ "UR_Bag2", "", 200, "" },
			{ "UR_Bag4", "", 200, "" },
			{ "UR_Bag7", "", 200, "" },
			{ "UR_Bag17", "", 200, "" },
			{ "UR_Bag25", "", 200, "" },
			{ "UR_Bag19", "", 200, "" },
			{ "UR_Bag20", "", 200, "" },
			{ "UR_Bag24", "", 200, "" },
			{ "UR_Bag11", "", 200, "" },
			{ "UR_Bag16", "", 200, "" },
			{ "UR_Bag12", "", 200, "" },
			{ "UR_Bag22", "", 200, "" },
			{ "UR_Bag5", "", 200, "" },
			{ "UR_Bag23", "", 200, "" },
			{ "UR_Bag1", "", 200, "" },
			{ "UR_Bag14", "", 200, "" },
			{ "UR_Bear_Brown", "", 200, "" },
			{ "UR_Bear_Gray", "", 200, "" },
			{ "UR_Buffalo", "", 200, "" },
			{ "UR_Cat_Gray", "", 200, "" },
			{ "UR_Cat_Tabby", "", 200, "" },
			{ "UR_Dino_Brown", "", 200, "" },
			{ "UR_Dino_Striped", "", 200, "" },
			{ "UR_Fox", "", 200, "" },
			{ "UR_Hawk_Brown", "", 200, "" },
			{ "UR_Hawk_White", "", 200, "" },
			{ "cg_horsehead", "", 200, "" },
			{ "cg_horsehead_2", "", 200, "" },
			{ "cg_horsehead_blk", "", 200, "" },
			{ "cg_horsehead_pnk", "", 200, "" },
			{ "UR_Monkey", "", 200, "" },
			{ "UR_Monkey_DarkBrown", "", 200, "" },
			{ "UR_Monkey_Grey", "", 200, "" },
			{ "UR_Monkey_LightBrown", "", 200, "" },
			{ "UR_Owl", "", 200, "" },
			{ "UR_Penguin", "", 200, "" },
			{ "UR_Pig", "", 200, "" },
			{ "UR_Pig_Bloody", "", 200, "" },
			{ "UR_Wolf", "", 200, "" },
			{ "UR_Zombie", "", 200, "" },
			{ "UR_Zombie_Grey", "", 200, "" },
			{ "UR_Skull_Black", "", 200, "" },
			{ "UR_Skull_Bone", "", 200, "" },
			{ "UR_Skull_Brown", "", 200, "" },
			{ "UR_Skull_Grey", "", 200, "" },
			{ "UR_Hockey_Mask_Skull_BLACK", "", 200, "" },
			{ "UR_Hockey_Mask_Skull_DIGITAL", "", 200, "" },
			{ "UR_Hockey_Mask_Skull_GREEN", "", 200, "" },
			{ "UR_Hockey_Mask_Skull_GREY", "", 200, "" },
			{ "UR_Hockey_Mask_4_BULLSEYE", "", 200, "" },
			{ "UR_Hockey_Mask_4_CARBON", "", 200, "" },
			{ "UR_Hockey_Mask_4_CIRCUIT", "", 200, "" },
			{ "UR_Hockey_Mask_4_DIRTY", "", 200, "" },
			{ "UR_Hockey_Mask_4_LIGHTNING", "", 200, "" },
			{ "UR_Hockey_Mask_4_STEEL", "", 200, "" },
			{ "UR_Hockey_Mask_4_TRON1", "", 200, "" },
			{ "UR_Hockey_Mask_4_TRON2", "", 200, "" },
			{ "UR_Hockey_Mask_4_WOOD", "", 200, "" },
			{ "jokermask", "", 200, "" },
			{ "BL_medieval_hat", "", 200, "" },
			{ "Masque_Alien1", "", 200, "" },
			{ "Masque_Anonymous", "", 200, "" },
			{ "Masque_archNemesis", "", 200, "" },
			{ "Masque_Arnold", "", 200, "" },
			{ "Masque_Aubrey", "", 200, "" },
			{ "Masque_Bonnie", "", 200, "" },
			{ "Masque_Bush", "", 200, "" },
			{ "Masque_Chains", "", 200, "" },
			{ "Masque_Chuck", "", 200, "" },
			{ "Masque_Clinton", "", 200, "" },
			{ "Masque_Clover", "", 200, "" },
			{ "Masque_Dallas", "", 200, "" },
			{ "Masque_Fish", "", 200, "" },
			{ "Masque_forceAlpha", "", 200, "" },
			{ "Masque_Gombo", "", 200, "" },
			{ "Masque_GdG", "", 200, "" },
			{ "Masque_Hockey", "", 200, "" },
			{ "Masque_Hoxton", "", 200, "" },
			{ "Masque_Incendiaire", "", 200, "" },
			{ "Masque_Lincoln", "", 200, "" },
			{ "Masque_Lion", "", 200, "" },
			{ "Masque_Macrilleuse", "", 200, "" },
			{ "Masque_Mark", "", 200, "" },
			{ "Masque_Metalhead", "", 200, "" },
			{ "Masque_Momie", "", 200, "" },
			{ "Masque_Optimiste", "", 200, "" },
			{ "Masque_Orc", "", 200, "" },
			{ "Masque_Religieuse", "", 200, "" },
			{ "Masque_Santa", "", 200, "" },
			{ "Masque_Smiley", "", 200, "" },
			{ "Masque_Mempo", "", 200, "" },
			{ "Masque_speedRunner", "", 200, "" },
			{ "Masque_Unic", "", 200, "" },
			{ "Masque_Wolfv2", "", 200, "" },
            { "BL_mask_Hat", "", 200, "" }			
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
            { "EF_MKJKT_EMS2", "", 50, "" },
			{ "U_Depanneur", "", 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" },
			{ "CasqueDepanneur", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" },
			{ "Masque_Chirurgical", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }, 
            { "jamie_reflective", "", 10, "" },
			{ "FIR_SaftyVest_Yellow", "", 10, "" }
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
