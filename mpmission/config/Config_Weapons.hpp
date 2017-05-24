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
			{ "RH_muzi", "", 50000, 3500, "" },
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
			{ "RH_30Rnd_9x19_UZI", "", 200, 125, "" },
        };
        accs[] = {
            { "RH_pmir", "", 120, 1250, "" },
			{ "optic_Yorris", "", 100, 1250, "" },
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
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
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
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 3" } //Apex DLC Sniper
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };
	
	class cop_swat {
        name = "Swat Waffenshop";
        side = "cop";
        conditions = "";
        items[] = {
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 3" } //Apex DLC Sniper
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
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
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 2000, 1000, "" },
			{ "ARP_Objects_card_black_m", "", 10, 1000, "" },
			{ "tf_anprc148jem", "", 10, 100, "" },
			{ "ACE_Flashlight_MX991", "", 2000, 1000, "" },
			{ "ACE_Altimeter", "", 2000, 1000, "" },
			{ "ACE_wirecutter", "", 2000, 1000, "" },
			{ "NVGoggles_OPFOR", "", 2000, 1000, "" },
			{ "NVGoggles_tna_F", "", 2000, 1000, "" },
			{ "ACE_NVG_Wide", "", 2000, 15000, "call life_coplevel >= 6" },
			{ "ACE_EarPlugs", "", 5, 1000, "" },
			{ "ACE_CableTie", "", 10, 1000, "" },
			{ "ACE_fieldDressing", "", 10, 1000, "" },
			{ "ACE_quikclot", "", 10, 1000, "" },
			{ "ACE_elasticBandage", "", 10, 1000, "" },
			{ "ACE_packingBandage", "", 10, 1000, "" },
			{ "ACE_tourniquet", "", 25, 1000, "" },
			{ "ACE_SpraypaintGreen", "", 25, 1000, "" },
			{ "ACE_SpraypaintRed", "", 25, 1000, "" }
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
            { "Binocular", "", 150, 75, "" },
			{ "Rangefinder", "", 200, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 2000, 1000, "" },
			{ "ACE_Flashlight_MX991", "", 2000, 1000, "" },
			{ "NVGoggles_OPFOR", "", 2000, 1000, "" },
			{ "NVGoggles_tna_F", "", 2000, 1000, "" },
			{ "ACE_EarPlugs", "", 5, 1000, "" },
			{ "ACE_fieldDressing", "", 10, 1000, "" },
			{ "ACE_quikclot", "", 10, 1000, "" },
			{ "ACE_elasticBandage", "", 10, 1000, "" },
			{ "ACE_packingBandage", "", 10, 1000, "" },
			{ "ACE_tourniquet", "", 25, 1000, "" },
			{ "ACE_morphine", "", 30, 1000, "" },
			{ "ACE_epinephrine", "", 30, 1000, "" },
			{ "ACE_atropine", "", 10, 1000, "" },
			{ "ACE_salineIV_250", "", 10, 1000, "" },
			{ "ACE_salineIV_500", "", 10, 1000, "" },
			{ "ACE_salineIV", "", 10, 1000, "" },
			{ "ACE_surgicalKit", "", 10, 1000, "" },
			{ "ACE_personalAidKit", "", 10, 1000, "" },
			{ "ACE_bodyBag", "", 25, 1000, "" },
        };
        mags[] = {};
        accs[] = {};
    };
};
