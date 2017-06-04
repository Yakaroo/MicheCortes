/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "RH_mak", "", 3000, 1500, "" },
			{ "RH_vp70", "", 3200, 1600, "" },
			{ "sab_mauser96_handgun", "", 3200, 1600, "" },
            { "RH_cz75", "", 3500, 1600, "" },
			{ "RH_mk2", "", 3700, 1700, "" },
			{ "RH_p226", "", 4000, 2000, "" },
			{ "RH_tt33", "", 4200, 2100, "" },
			{ "RH_m9", "", 4600, 2300, "" },
			{ "KA_Mk23_black", "", 5000, 2500, "" },
			{ "RH_sw659", "", 5200, 2700, "" },
			{ "R3F_PAMAS", "", 5500, 2900, "" },
			{ "RH_python", "", 6000, 3000, "" },
			{ "RH_vz61", "", 25000, 15000, "" },
			{ "RH_tec9", "", 35000, 20000, "" },
			{ "RH_muzi", "", 50000, 30000, "" }
        };
        mags[] = {
            { "RH_8Rnd_9x18_Mak", "", 40, 10, "" },
            { "RH_18Rnd_9x19_VP", "", 40, 10, "" },
			{ "sab_wwiplanes_6rnd_mauser_mag", "", 40, 10, "" },
            { "RH_16Rnd_9x19_CZ", "", 40, 10, "" },
            { "RH_10Rnd_22LR_mk2", "", 40, 10, "" },
            { "RH_15Rnd_9x19_SIG", "", 40, 10, "" },
            { "RH_8Rnd_762_tt33", "", 40, 10, "" },
			{ "RH_15Rnd_9x19_M9", "", 40, 10, "" },
			{ "KA_12Rnd_45ACP_FMJ_Mag", "", 40, 10, "" },
			{ "RH_14Rnd_9x19_sw", "", 40, 10, "" },
			{ "R3F_15Rnd_9x19_PAMAS", "", 40, 10, "" },
			{ "RH_6Rnd_357_Mag", "", 40, 10, "" },
			{ "RH_20Rnd_32cal_vz61", "", 200, 30, "" },
			{ "RH_32Rnd_9x19_tec", "", 200, 30, "" },
			{ "RH_30Rnd_9x19_UZI", "", 200, 30, "" }
        };
        accs[] = {
            { "RH_pmir", "", 120, 50, "" },
			{ "optic_Yorris", "", 100, 40, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 60, 50, "" },
            { "ItemGPS", "", 40, 20, "" },
            { "ItemMap", "", 10, 5, "" },
            { "ItemCompass", "", 10, 5, "" },
            { "ItemWatch", "", 5, 2, "" },
			{ "tf_fadak", "", 25, 10, "" },
            { "TRYK_Shemagh_G_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_TAN_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_WH_NV", "", 10, 10, "" },
			{ "SAN_Headlamp_v1", "", 25, 10, "" },
			{ "ACE_fieldDressing", "", 10, 5, "" },
			{ "ACE_quikclot", "", 10, 5, "" },
			{ "ACE_elasticBandage", "", 10, 5, "" },
			{ "ACE_packingBandage", "", 10, 5, "" },
            { "Chemlight_red", "", 20, 5, "" },
            { "Chemlight_yellow", "", 20, 5, "" },
            { "Chemlight_green", "", 20, 5, "" },
            { "Chemlight_blue", "", 20, 5, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 80, 50, "" },
            { "ItemGPS", "", 60, 20, "" },
            { "ItemMap", "", 20, 5, "" },
            { "ItemCompass", "", 15, 5, "" },
            { "ItemWatch", "", 10, 2, "" },
			{ "tf_fadak", "", 25, 10, "" },
            { "TRYK_Shemagh_MESH_NC", "", 10, 10, "" },
            { "TRYK_Shemagh_G_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_TAN_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_WH_NV", "", 10, 10, "" },
			{ "murshun_cigs_cigpack", "", 10, 10, "" },
			{ "murshun_cigs_lighter", "", 6, 4, "" },
			{ "SAN_Headlamp_v1", "", 25, 10, "" },
			{ "ACE_fieldDressing", "", 15, 5, "" },
			{ "ACE_quikclot", "", 15, 5, "" },
			{ "ACE_elasticBandage", "", 15, 5, "" },
			{ "ACE_packingBandage", "", 15, 5, "" },
            { "Chemlight_red", "", 20, 5, "" },
            { "Chemlight_yellow", "", 20, 5, "" },
            { "Chemlight_green", "", 20, 5, "" },
            { "Chemlight_blue", "", 20, 5, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Polizei Waffenshop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "DDOPPX_X26", "X26 Taser", 200, 100, "" },
            { "RH_g19", "", 500, 200, "" },
            { "RH_fn57", "", 750, 400, "" },
			{ "RH_usp", "", 800, 500, "" },
			{ "RH_bullb", "", 1000, 600, "" },
			{ "SMG_05_F", "", 1500, 800, "call life_coplevel >= 2" },
			{ "KA_UMP40", "", 1700, 900, "call life_coplevel >= 3" },
			{ "hlc_smg_MP5N", "", 2000, 1000, "call life_coplevel >= 4" },
			{ "hlc_rifle_RU556", "", 3000, 1100, "call life_coplevel >= 4" },
			{ "hlc_rifle_m4", "", 4000, 1500, "call life_coplevel >= 5" },
			{ "R3F_Famas_surb", "", 5000, 2500, "call life_coplevel >= 5" },
			{ "srifle_DMR_02_F", "", 20000, 10000, "call life_coplevel >= 6" },
			{ "hlc_rifle_M14_Rail", "", 15000, 8000, "call life_coplevel >= 6" },
			{ "hlc_rifle_G36A1", "", 6000, 3750, "call life_coplevel >= 7" },
			{ "hlc_rifle_g3a3ris", "", 8000, 4500, "call life_coplevel >= 7" },
			{ "hlc_rifle_ACR_SBR_black", "", 9000, 4500, "call life_coplevel >= 8" },
			{ "KA_SCAR_H_Black_Grip", "", 10000, 5000, "call life_coplevel >= 9" },
			{ "hlc_rifle_vendimus", "", 10000, 5000, "call life_coplevel >= 9" }
        };
        mags[] = {
			{ "DDOPP_6Rnd_X26", "", 10, 5, "" },
            { "16Rnd_9x21_Mag", "", 30, 10, "" },
			{ "RH_17Rnd_9x19_g17", "", 30, 10, "" },
			{ "EN_3Rnd_Tazer", "", 30, 10, "" },
			{ "RH_20Rnd_57x28_FN", "", 30, 10, "" },
			{ "RH_12Rnd_45cal_usp", "", 30, 10, "" },
			{ "RH_6Rnd_454_Mag", "", 40, 15, "" },
			{ "KA_30Rnd_40SW_FMJ_Mag", "", 40, 15, "" },
			{ "prpl_8Rnd_12Gauge_Pellets", "", 40, 15, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 20, "" },
			{ "R3F_30Rnd_556x45_FAMAS", "", 50, 20, "" },
			{ "R3F_25Rnd_556x45_FAMAS", "", 50, 20, "" },
			{ "29rnd_300BLK_STANAG", "", 50, 20, "" },
			{ "hlc_30rnd_556x45_EPR_G36", "", 50, 20, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 20, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 50, 20, "" },
			{ "KA_50Rnd_57x28_SS190", "", 50, 20, "" },
			{ "20Rnd_762x51_Mag", "", 50, 20, "" },
			{ "hlc_30rnd_68x43_FMJ", "", 80, 30, "" },
			{ "hlc_20Rnd_762x51_B_M14", "", 80, 30, "" },
			{ "hlc_20rnd_762x51_b_G3", "", 80, 30, "" },
			{ "29rnd_300BLK_STANAG", "", 80, 30, "" },
			{ "29rnd_300BLK_STANAG", "", 80, 30, "" },
			{ "hlc_30Rnd_9x19_B_MP5", "", 80, 30, "" },
			{ "10Rnd_338_Mag", "", 80, 30, "" },
			{ "KA_SCAR_H_20rnd_Mk319_SOST_mag", "", 80, 30, "" },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 80, 30, "" },
            { "11Rnd_45ACP_Mag", "", 30, 10, "" },
            { "30Rnd_65x39_caseless_mag", "", 30, 10, "" },
            { "30Rnd_9x21_Mag", "", 30, 10, "" },
            { "9Rnd_45ACP_Mag", "", 30, 10, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 30, 10, "" }
        };
        accs[] = {};
        
    };
	
	class cop_swat {
        name = "Swat Waffenshop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "ACE_M84", "", 200, 100, "" },
			{ "TRYK_SPgear_PHC2_NV", "", 10, 5, "" },
            { "hlc_smg_MP5N", "", 2000, 1000, "" },
			{ "R3F_Famas_surb", "", 5000, 3000, "" },
			{ "hlc_rifle_bcmblackjack", "", 8000, 4000, "" },
			{ "R3F_Famas_F1", "", 5500, 3200, "" },
			{ "SMG_03C_black", "", 12000, 5750, "" },
			{ "arifle_SPAR_01_blk_F", "", 5000, 3750, "" },
			{ "R3F_HK416M_HG", "", 6000, 3750, "" },
            { "arifle_SPAR_03_blk_F", "", 10000, 3750, "" },
			{ "hlc_rifle_auga3_b", "", 9000, 3750, "" },
            { "srifle_DMR_07_blk_F", "", 10000, 6000, "" },
			{ "prpl_benelli", "", 2500, 1000, "" },
			{ "hlc_rifle_awmagnum_BL", "", 30000, 17000, "" },
			{ "hlc_rifle_awMagnum_BL_ghillie", "", 30000, 17000, "" },
			{ "hlc_rifle_ACR68_full_black", "", 12000, 6000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 30, 10, "" },
			{ "RH_17Rnd_9x19_g17", "", 30, 10, "" },
			{ "RH_20Rnd_57x28_FN", "", 30, 10, "" },
			{ "RH_12Rnd_45cal_usp", "", 30, 10, "" },
			{ "RH_6Rnd_454_Mag", "", 40, 15, "" },
			{ "KA_30Rnd_40SW_FMJ_Mag", "", 40, 15, "" },
			{ "prpl_8Rnd_12Gauge_Pellets", "", 40, 15, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 20, "" },
			{ "R3F_30Rnd_556x45_FAMAS", "", 50, 20, "" },
			{ "R3F_25Rnd_556x45_FAMAS", "", 50, 20, "" },
			{ "29rnd_300BLK_STANAG", "", 50, 20, "" },
			{ "hlc_30rnd_556x45_EPR_G36", "", 50, 20, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 20, "" },
			{ "KA_50Rnd_57x28_SS190", "", 50, 20, "" },
			{ "hlc_30Rnd_9x19_B_MP5", "", 50, 20, "" },
			{ "20Rnd_762x51_Mag", "", 50, 20, "" },
			{ "hlc_30rnd_68x43_FMJ", "", 80, 30, "" },
			{ "hlc_20rnd_762x51_b_G3", "", 80, 30, "" },
			{ "29rnd_300BLK_STANAG", "", 80, 30, "" },
			{ "hlc_30Rnd_556x45_B_AUG", "", 50, 20, "" },
			{ "10Rnd_338_Mag", "", 80, 30, "" },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 80, 30, "" },
            { "11Rnd_45ACP_Mag", "", 30, 10, "" },
            { "30Rnd_65x39_caseless_mag", "", 30, 10, "" },
            { "30Rnd_9x21_Mag", "", 30, 10, "" },
			{ "R3F_30Rnd_556x45_HK416", "", 30, 10, "" },
            { "9Rnd_45ACP_Mag", "", 30, 10, "" },
			{ "30Rnd_556x45_Stanag", "", 30, 10, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 30, 10, "" }
        };
        accs[] = {};
        
    };
	
	class cop_accs {
        name = "Police Attachments Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "RH_m6x", "", 100, 10, "" },
            { "optic_MRD", "", 100, 10, "" },
			{ "FHQ_optic_MicroCCO", "", 100, 10, "" },
			{ "FHQ_optic_MARS", "", 100, 10, "" },
			{ "optic_Holosight_blk_F", "", 100, 10, "" },
			{ "optic_Holosight_khk_F", "", 100, 10, "" },
			{ "optic_ACO_grn_smg", "", 150, 15, "" },
			{ "optic_aco_smg", "", 150, 15, "" },
			{ "optic_ACO_grn", "", 150, 15, "" },
			{ "optic_aco", "", 150, 15, "" },
			{ "optic_NVS", "", 300, 30, "call life_coplevel >= 5" },
			{ "optic_Holosight", "", 100, 15, "" },
            { "optic_Arco", "", 150, 15, "" },
			{ "optic_Arco_ghex_F", "", 150, 15, "" },
			{ "optic_Arco_blk_F", "", 150, 15, "" },
			{ "optic_ERCO_khk_F", "", 150, 15, "" },
			{ "optic_ERCO_blk_F", "", 150, 15, "" },
			{ "optic_hamr", "", 150, 15, "" },
			{ "optic_Hamr_khk_F", "", 150, 15, "" },
			{ "HLC_Optic_G36Dualoptic15x", "", 150, 15, "" },
			{ "HLC_Optic_G36dualoptic35x", "", 150, 15, "" },
			{ "FHQ_optic_AC11704", "", 150, 15, "" },
			{ "FHQ_optic_AC12136", "", 150, 15, "" },
			{ "FHQ_optic_ACOG", "", 150, 15, "" },
			{ "FHQ_optic_AIM", "", 150, 15, "" },
			{ "FHQ_optic_AimM_BLK", "", 150, 15, "" },
			{ "FHQ_optic_HWS", "", 150, 15, "" },
			{ "FHQ_optic_HWS_G33", "", 150, 15, "" },
			{ "R3F_AIMPOINT", "", 150, 15, "" },
			{ "R3F_EOTECH", "", 150, 15, "" },
			{ "R3F_J4", "", 150, 15, "" },
			{ "FHQ_optic_VCOG", "", 200, 20, "" },
			{ "optic_AMS_khk", "", 300, 30, "" },
			{ "optic_AMS", "", 300, 30, "" },
			{ "optic_DMS", "", 300, 30, "" },
			{ "optic_DMS_ghex_F", "", 300, 30, "" },
			{ "optic_KHS_blk", "", 300, 30, "" },
			{ "optic_LRPS", "", 300, 30, "" },
			{ "optic_LRPS_ghex_F", "", 300, 30, "" },
			{ "optic_SOS", "", 300, 30, "" },
			{ "optic_SOS_khk_F", "", 300, 30, "" },
			{ "FHQ_optic_LeupoldERT", "", 300, 30, "" },
            { "acc_flashlight", "", 80, 10, "" },
			{ "KA_SCAR_H_Flashlight_Laser_Black", "", 80, 10, "" },
			{ "SCAR_20_Inches_Barrel", "", 80, 10, "" },
			{ "SCAR_20_Inches_Barrel_Silencer", "", 80, 10, "" },
			{ "acc_pointer_IR", "", 80, 10, "" },
			{ "bipod_01_F_blk", "", 300, 30, "" },
			{ "R3F_SILENCIEUX_HK416", "", 500, 50, "call life_coplevel >= 6" },
			{ "muzzle_snds_m_khk_F", "", 500, 50, "call life_coplevel >= 6" },
			{ "hlc_muzzle_556NATO_KAC", "", 500, 50, "call life_coplevel >= 6" },
			{ "KA_P90_Silencer_A", "", 500, 50, "call life_coplevel >= 6" },
			{ "hlc_muzzle_300blk_KAC", "", 500, 50, "call life_coplevel >= 6" },
            { "muzzle_snds_H", "", 500, 50, "call life_coplevel >= 6" },
			{ "muzzle_snds_L", "", 500, 50, "call life_coplevel >= 6" }
        };
		mags[] = {};
        accs[] = {};
    };
	
	class cop_general {
        name = "Polizei General Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 50, "" },
			{ "Rangefinder", "", 200, 75, "" },
			{ "ACE_Vector", "", 200, 75, "" },
			{ "tf_anprc152", "", 150, 75, "" },
            { "TRYK_Shemagh_MESH_NC", "", 10, 10, "" },
            { "TRYK_Shemagh_G_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_TAN_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_WH_NV", "", 10, 10, "" },
            { "ItemGPS", "", 80, 50, "" },
            { "ItemMap", "", 20, 5, "" },
			{ "ARP_Objects_card_black_m", "", 10, 5, "" },
			{ "tf_anprc148jem", "", 10, 5, "" },
			{ "ACE_Altimeter", "", 80, 10, "" },
			{ "ACE_wirecutter", "", 100, 10, "" },
			{ "EF_BADGE_P_NV", "", 100, 10, "" },
			{ "ACE_EarPlugs", "", 5, 2, "" },
			{ "ACE_CableTie", "", 10, 5, "" },
			{ "ACE_fieldDressing", "", 10, 5, "" },
			{ "ACE_quikclot", "", 10, 5, "" },
			{ "ACE_elasticBandage", "", 10, 5, "" },
			{ "ACE_packingBandage", "", 10, 5, "" },
			{ "ACE_tourniquet", "", 25, 10, "" },
			{ "ACE_SpraypaintGreen", "", 50, 10, "" },
			{ "ACE_SpraypaintRed", "", 50, 10, "" }
        };
		mags[] = {};
        accs[] = {};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "Binocular", "", 50, 10, "" },
			{ "Rangefinder", "", 100, 10, "" },
            { "ItemGPS", "", 20, 5, "" },
            { "ItemMap", "", 10, 5, "" },
            { "TRYK_Shemagh_MESH_NC", "", 10, 10, "" },
            { "TRYK_Shemagh_G_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_TAN_NV", "", 10, 10, "" },
            { "TRYK_Shemagh_WH_NV", "", 10, 10, "" },
			{ "ACE_EarPlugs", "", 5, 10, "" },
			{ "ACE_fieldDressing", "", 8, 10, "" },
			{ "ACE_quikclot", "", 8, 10, "" },
			{ "ACE_elasticBandage", "", 8, 10, "" },
			{ "ACE_packingBandage", "", 8, 10, "" },
			{ "ACE_tourniquet", "", 20, 10, "" },
			{ "ACE_morphine", "", 25, 10, "" },
			{ "ACE_epinephrine", "", 25, 10, "" },
			{ "ACE_atropine", "", 20, 10, "" },
			{ "ACE_salineIV_250", "", 20, 10, "" },
			{ "ACE_salineIV_500", "", 30, 10, "" },
			{ "ACE_salineIV", "", 40, 10, "" },
			{ "ACE_surgicalKit", "", 50, 10, "" },
			{ "ACE_personalAidKit", "", 75, 10, "" },
			{ "ACE_bodyBag", "", 25, 10, "" },
        };
        mags[] = {};
        accs[] = {};
    };
};
