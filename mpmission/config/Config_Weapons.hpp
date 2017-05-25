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
            { "RH_mak", "", 3000, 3250, "" },
			{ "RH_vp70", "", 3200, 3500, "" },
			{ "sab_mauser96_handgun", "", 3200, 3500, "" },
            { "RH_cz75", "", 3500, 3500, "" },
			{ "RH_mk2", "", 3700, 3500, "" },
			{ "RH_p226", "", 4000, 3500, "" },
			{ "RH_tt33", "", 4200, 3500, "" },
			{ "RH_m9", "", 4600, 3500, "" },
			{ "KA_Mk23_black", "", 5000, 3500, "" },
			{ "RH_sw659", "", 5200, 3500, "" },
			{ "R3F_PAMAS", "", 5500, 3500, "" },
			{ "RH_python", "", 6000, 3500, "" },
			{ "RH_vz61", "", 25000, 3500, "" },
			{ "RH_tec9", "", 35000, 3500, "" },
			{ "RH_muzi", "", 50000, 3500, "" }
        };
        mags[] = {
            { "RH_8Rnd_9x18_Mak", "", 50, 60, "" },
            { "RH_18Rnd_9x19_VP", "", 50, 75, "" },
			{ "sab_wwiplanes_6rnd_mauser_mag", "", 50, 75, "" },
            { "RH_16Rnd_9x19_CZ", "", 50, 100, "" },
            { "RH_10Rnd_22LR_mk2", "", 50, 125, "" },
            { "RH_15Rnd_9x19_SIG", "", 50, 125, "" },
            { "RH_8Rnd_762_tt33", "", 50, 125, "" },
			{ "RH_15Rnd_9x19_M9", "", 50, 125, "" },
			{ "KA_12Rnd_45ACP_FMJ_Mag", "", 50, 125, "" },
			{ "RH_14Rnd_9x19_sw", "", 50, 125, "" },
			{ "R3F_15Rnd_9x19_PAMAS", "", 50, 125, "" },
			{ "RH_6Rnd_357_Mag", "", 50, 125, "" },
			{ "RH_20Rnd_32caI_vz61", "", 200, 125, "" },
			{ "RH_32Rnd_9x19_tec", "", 200, 125, "" },
			{ "RH_30Rnd_9x19_UZI", "", 200, 125, "" }
        };
        accs[] = {
            { "RH_pmir", "", 120, 1250, "" },
			{ "optic_Yorris", "", 100, 1250, "" }
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
            { "Binocular", "", 60, 75, "" },
            { "ItemGPS", "", 40, 50, "" },
            { "ItemMap", "", 10, 25, "" },
			{ "ACE_Flashlight_MX991", "", 100, 1000, "" },
            { "ItemCompass", "", 15, 25, "" },
            { "ItemWatch", "", 5, 25, "" },
			{ "tf_fadak", "", 25, 25, "" },
            { "NVGoggles", "", 500, 1000, "" },
			{ "SAN_Headlamp_v1", "", 25, 1000, "" },
			{ "ACE_fieldDressing", "", 10, 1000, "" },
			{ "ACE_quikclot", "", 10, 1000, "" },
			{ "ACE_elasticBandage", "", 10, 1000, "" },
			{ "ACE_packingBandage", "", 10, 1000, "" },
            { "Chemlight_red", "", 20, 150, "" },
            { "Chemlight_yellow", "", 20, 150, "" },
            { "Chemlight_green", "", 20, 150, "" },
            { "Chemlight_blue", "", 20, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 80, 75, "" },
            { "ItemGPS", "", 60, 50, "" },
            { "ItemMap", "", 20, 25, "" },
            { "ItemCompass", "", 10, 25, "" },
            { "ItemWatch", "", 10, 25, "" },
            { "NVGoggles", "", 500, 1000, "" },
			{ "ACE_fieldDressing", "", 15, 1000, "" },
			{ "ACE_quikclot", "", 15, 1000, "" },
			{ "ACE_elasticBandage", "", 15, 1000, "" },
			{ "ACE_packingBandage", "", 15, 1000, "" },
            { "Chemlight_red", "", 20, 150, "" },
            { "Chemlight_yellow", "", 20, 150, "" },
            { "Chemlight_green", "", 20, 150, "" },
            { "Chemlight_blue", "", 20, 150, "" }
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
            { "RH_g19", "", 800, 3750, "" },
            { "RH_fn57", "", 1000, 3750, "" },
			{ "RH_usp", "", 1000, 3750, "" },
			{ "RH_bullb", "", 1500, 3750, "" },
			{ "SMG_05_F", "", 1700, 3750, "call life_coplevel >= 2" },
			{ "KA_UMP40", "", 2000, 3750, "call life_coplevel >= 2" },
			{ "hlc_smg_mp5k", "", 3000, 3750, "call life_coplevel >= 3" },
			{ "hlc_smg_MP5N", "", 2000, 3750, "call life_coplevel >= 4" },
			{ "hlc_rifle_m4", "", 4000, 3750, "call life_coplevel >= 5" },
			{ "R3F_Famas_surb", "", 5000, 3750, "call life_coplevel >= 5" },
			{ "srifle_DMR_02_F", "", 20000, 3750, "call life_coplevel >= 6" },
			{ "hlc_rifle_M14_Rail", "", 15000, 3750, "call life_coplevel >= 6" },
			{ "hlc_rifle_G36A1", "", 6000, 3750, "call life_coplevel >= 7" },
			{ "hlc_rifle_g3a3ris", "", 8000, 3750, "call life_coplevel >= 7" },
			{ "hlc_rifle_ACR_SBR_black", "", 9000, 15000, "call life_coplevel >= 8" },
			{ "hlc_rifle_vendimus", "", 10000, 15000, "call life_coplevel >= 9" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 30, 60, "" },
			{ "RH_17Rnd_9x19_g17", "", 30, 60, "" },
			{ "RH_20Rnd_57x28_FN", "", 30, 60, "" },
			{ "RH_12Rnd_45cal_usp", "", 30, 60, "" },
			{ "RH_6Rnd_454_Mag", "", 40, 60, "" },
			{ "KA_30Rnd_40SW_FMJ_Mag", "", 40, 60, "" },
			{ "prpl_8Rnd_12Gauge_Pellets", "", 40, 60, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 60, "" },
			{ "R3F_30Rnd_556x45_FAMAS", "", 50, 60, "" },
			{ "R3F_25Rnd_556x45_FAMAS", "", 50, 60, "" },
			{ "29rnd_300BLK_STANAG", "", 50, 60, "" },
			{ "hlc_30rnd_556x45_EPR_G36", "", 50, 60, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 60, "" },
			{ "KA_50Rnd_57x28_SS190", "", 50, 60, "" },
			{ "hlc_30Rnd_9x19_B_MP5", "", 50, 60, "" },
			{ "20Rnd_762x51_Mag", "", 50, 60, "" },
			{ "hlc_30rnd_68x43_FMJ", "", 80, 60, "" },
			{ "hlc_20Rnd_762x51_B_M14", "", 80, 60, "" },
			{ "hlc_20rnd_762x51_b_G3", "", 80, 60, "" },
			{ "29rnd_300BLK_STANAG", "", 80, 60, "" },
			{ "10Rnd_338_Mag", "", 80, 60, "" },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 80, 60, "" },
            { "11Rnd_45ACP_Mag", "", 30, 65, "" },
            { "30Rnd_65x39_caseless_mag", "", 30, 65, "" },
            { "30Rnd_9x21_Mag", "", 30, 125, "" },
            { "9Rnd_45ACP_Mag", "", 30, 100, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 30, 100, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 500, 325, "" },
			{ "RH_m6x", "", 100, 1375, "" },
            { "optic_MRD", "", 100, 1375, "" },
			{ "optic_Holosight_blk_F", "", 100, 1375, "" },
			{ "optic_Holosight_khk_F", "", 100, 1375, "" },
			{ "optic_ACO_grn_smg", "", 150, 1375, "" },
			{ "optic_aco_smg", "", 150, 1375, "" },
			{ "optic_ACO_grn", "", 150, 1375, "" },
			{ "optic_aco", "", 150, 1375, "" },
			{ "R3F_AIMPOINT", "", 150, 1375, "" },
			{ "R3F_EOTECH", "", 150, 1375, "" },
			{ "R3F_J4", "", 150, 1375, "" },
            { "acc_flashlight", "", 80, 375, "" },
			{ "acc_pointer_IR", "", 80, 375, "" },
            { "optic_Holosight", "", 100, 600, "" },
            { "optic_Arco", "", 150, 1250, "" },
			{ "optic_Arco_ghex_F", "", 150, 1250, "" },
			{ "optic_Arco_blk_F", "", 150, 1250, "" },
			{ "optic_ERCO_khk_F", "", 150, 1250, "" },
			{ "optic_ERCO_blk_F", "", 150, 1250, "" },
			{ "optic_hamr", "", 150, 1250, "" },
			{ "optic_Hamr_khk_F", "", 150, 1250, "" },
			{ "HLC_Optic_G36Dualoptic15x", "", 150, 1250, "" },
			{ "HLC_Optic_G36dualoptic35x", "", 150, 1250, "" },
			{ "optic_AMS_khk", "", 300, 1375, "" },
			{ "optic_AMS", "", 300, 1375, "" },
			{ "optic_DMS", "", 300, 1250, "" },
			{ "optic_DMS_ghex_F", "", 300, 1250, "" },
			{ "optic_KHS_blk", "", 300, 1250, "" },
			{ "optic_LRPS", "", 300, 1250, "" },
			{ "optic_LRPS_ghex_F", "", 300, 1250, "" },
			{ "optic_SOS", "", 300, 1250, "" },
			{ "optic_SOS_khk_F", "", 300, 1250, "" },
			{ "optic_NVS", "", 300, 1250, "call life_coplevel >= 5" },
            { "muzzle_snds_H", "", 500, 1375, "call life_coplevel >= 6" }
        };
    };
	
	class cop_swat {
        name = "Swat Waffenshop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "ACE_M84", "", 200, 3750, "" },
			{ "TRYK_SPgear_PHC2_NV", "", 10, 3750, "" },
            { "hlc_smg_MP5N", "", 2000, 3750, "" },
			{ "R3F_Famas_surb", "", 5000, 3750, "" },
			{ "hlc_rifle_bcmblackjack", "", 8000, 3750, "" },
			{ "R3F_Famas_F1", "", 5500, 3750, "" },
			{ "SMG_03C_black", "", 12000, 3750, "" },
            { "arifle_SPAR_03_blk_F", "", 10000, 3750, "" },
			{ "arifle_SPAR_01_blk_F", "", 5000, 3750, "" },
			{ "hlc_rifle_auga3_bl", "", 7000, 3750, "" },
            { "srifle_DMR_07_blk_F", "", 10000, 16000, "" },
			{ "prpl_benelli", "", 2500, 16000, "" },
			{ "hlc_rifle_awmagnum_BL", "", 30000, 3750, "" },
			{ "hlc_rifle_awMagnum_BL_ghillie", "", 30000, 3750, "" },
			{ "hlc_rifle_ACR68_full_black", "", 12000, 3750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 30, 60, "" },
			{ "RH_17Rnd_9x19_g17", "", 30, 60, "" },
			{ "RH_20Rnd_57x28_FN", "", 30, 60, "" },
			{ "RH_12Rnd_45cal_usp", "", 30, 60, "" },
			{ "RH_6Rnd_454_Mag", "", 40, 60, "" },
			{ "KA_30Rnd_40SW_FMJ_Mag", "", 40, 60, "" },
			{ "prpl_8Rnd_12Gauge_Pellets", "", 40, 60, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 60, "" },
			{ "R3F_30Rnd_556x45_FAMAS", "", 50, 60, "" },
			{ "R3F_25Rnd_556x45_FAMAS", "", 50, 60, "" },
			{ "29rnd_300BLK_STANAG", "", 50, 60, "" },
			{ "hlc_30rnd_556x45_EPR_G36", "", 50, 60, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50, 60, "" },
			{ "KA_50Rnd_57x28_SS190", "", 50, 60, "" },
			{ "hlc_30Rnd_9x19_B_MP5", "", 50, 60, "" },
			{ "20Rnd_762x51_Mag", "", 50, 60, "" },
			{ "hlc_30rnd_68x43_FMJ", "", 80, 60, "" },
			{ "hlc_20rnd_762x51_b_G3", "", 80, 60, "" },
			{ "29rnd_300BLK_STANAG", "", 80, 60, "" },
			{ "10Rnd_338_Mag", "", 80, 60, "" },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 80, 60, "" },
            { "11Rnd_45ACP_Mag", "", 30, 65, "" },
            { "30Rnd_65x39_caseless_mag", "", 30, 65, "" },
            { "30Rnd_9x21_Mag", "", 30, 125, "" },
            { "9Rnd_45ACP_Mag", "", 30, 100, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 30, 100, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 500, 325, "" },
			{ "RH_m6x", "", 100, 1375, "" },
            { "optic_MRD", "", 100, 1375, "" },
			{ "optic_Holosight_blk_F", "", 100, 1375, "" },
			{ "optic_Holosight_khk_F", "", 100, 1375, "" },
			{ "optic_ACO_grn_smg", "", 150, 1375, "" },
			{ "optic_aco_smg", "", 150, 1375, "" },
			{ "optic_ACO_grn", "", 150, 1375, "" },
			{ "optic_aco", "", 150, 1375, "" },
			{ "R3F_AIMPOINT", "", 150, 1375, "" },
			{ "R3F_EOTECH", "", 150, 1375, "" },
			{ "R3F_J4", "", 150, 1375, "" },
			{ "KA_P90_Silencer_A", "", 250, 1375, "" },
            { "acc_flashlight", "", 80, 375, "" },
			{ "acc_pointer_IR", "", 80, 375, "" },
            { "optic_Holosight", "", 100, 600, "" },
            { "optic_Arco", "", 150, 1250, "" },
			{ "optic_Arco_ghex_F", "", 150, 1250, "" },
			{ "optic_Arco_blk_F", "", 150, 1250, "" },
			{ "optic_ERCO_khk_F", "", 150, 1250, "" },
			{ "optic_ERCO_blk_F", "", 150, 1250, "" },
			{ "optic_hamr", "", 150, 1250, "" },
			{ "optic_Hamr_khk_F", "", 150, 1250, "" },
			{ "HLC_Optic_G36Dualoptic15x", "", 150, 1250, "" },
			{ "HLC_Optic_G36dualoptic35x", "", 150, 1250, "" },
			{ "optic_AMS_khk", "", 300, 1375, "" },
			{ "optic_AMS", "", 300, 1375, "" },
			{ "optic_DMS", "", 300, 1250, "" },
			{ "optic_DMS_ghex_F", "", 300, 1250, "" },
			{ "optic_KHS_blk", "", 300, 1250, "" },
			{ "optic_LRPS", "", 300, 1250, "" },
			{ "optic_LRPS_ghex_F", "", 300, 1250, "" },
			{ "optic_SOS", "", 300, 1250, "" },
			{ "optic_SOS_khk_F", "", 300, 1250, "" },
			{ "bipod_01_F_blk", "", 300, 1250, "" },
			{ "optic_NVS", "", 300, 1250, "" },
			{ "muzzle_snds_m_khk_F", "", 500, 1250, "" },
			{ "hlc_muzzle_556NATO__KAC", "", 500, 1250, "" },
            { "muzzle_snds_H", "", 500, 1375, "" }
        };
    };
	
	class cop_general {
        name = "Polizei General Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
			{ "Rangefinder", "", 200, 75, "" },
			{ "ACE_Vector", "", 200, 75, "" },
			{ "tf_anprc152", "", 200, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 2000, 1000, "" },
			{ "ARP_Objects_card_black_m", "", 10, 1000, "" },
			{ "tf_anprc148jem", "", 10, 100, "" },
			{ "ACE_Flashlight_MX991", "", 2000, 1000, "" },
			{ "ACE_Altimeter", "", 2000, 1000, "" },
			{ "ACE_wirecutter", "", 2000, 1000, "" },
			{ "EF_BADGE_P_NV", "", 2000, 1000, "" },
			{ "ACE_EarPlugs", "", 5, 1000, "" },
			{ "ACE_CableTie", "", 10, 1000, "" },
			{ "ACE_fieldDressing", "", 10, 1000, "" },
			{ "ACE_quikclot", "", 10, 1000, "" },
			{ "ACE_elasticBandage", "", 10, 1000, "" },
			{ "ACE_packingBandage", "", 10, 1000, "" },
			{ "ACE_tourniquet", "", 25, 1000, "" },
			{ "ACE_SpraypaintGreen", "", 50, 1000, "" },
			{ "ACE_SpraypaintRed", "", 50, 1000, "" }
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
            { "Binocular", "", 50, 75, "" },
			{ "Rangefinder", "", 100, 75, "" },
            { "ItemGPS", "", 20, 50, "" },
            { "ItemMap", "", 10, 1000, "" },
			{ "ACE_Flashlight_MX991", "", 80, 1000, "" },
			{ "NVGoggles_OPFOR", "", 250, 1000, "" },
			{ "NVGoggles_tna_F", "", 250, 1000, "" },
			{ "ACE_EarPlugs", "", 5, 1000, "" },
			{ "ACE_fieldDressing", "", 8, 1000, "" },
			{ "ACE_quikclot", "", 8, 1000, "" },
			{ "ACE_elasticBandage", "", 8, 1000, "" },
			{ "ACE_packingBandage", "", 8, 1000, "" },
			{ "ACE_tourniquet", "", 20, 1000, "" },
			{ "ACE_morphine", "", 25, 1000, "" },
			{ "ACE_epinephrine", "", 25, 1000, "" },
			{ "ACE_atropine", "", 20, 1000, "" },
			{ "ACE_salineIV_250", "", 20, 1000, "" },
			{ "ACE_salineIV_500", "", 30, 1000, "" },
			{ "ACE_salineIV", "", 40, 1000, "" },
			{ "ACE_surgicalKit", "", 50, 1000, "" },
			{ "ACE_personalAidKit", "", 75, 1000, "" },
			{ "ACE_bodyBag", "", 25, 1000, "" },
        };
        mags[] = {};
        accs[] = {};
    };
};
