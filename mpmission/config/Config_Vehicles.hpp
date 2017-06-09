class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
  /*  */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "Jonzie_Mini_Cooper", "" }, 
            { "Maisha_Peugeot_207_civ", "" },
            { "Guillaume9545_Peugeot_207_civ_vert", "" },
            { "Guillaume9545_Peugeot_207_civ_orange", "" },
            { "Guillaume9545_Peugeot_207_civ_jaune", "" },
            { "Guillaume9545_Peugeot_207_civ_bleu", "" },
			{ "Mrshounka_c4_p_civ", "" },
			{ "Mrshounka_c4_p_bleufonce", "" },
			{ "Mrshounka_c4_p_grise", "" },
			{ "Mrshounka_c4_p_jaune", "" },
			{ "Mrshounka_c4_p_noir", "" },
			{ "Mrshounka_c4_p_orange", "" },
			{ "Mrshounka_c4_p_violet", "" },
			{ "Mrshounka_Vandura_civ", "" },
			{ "Mrshounka_Vandura_civ_bleufonce", "" },
			{ "Mrshounka_Vandura_civ_grise", "" },
			{ "Mrshounka_Vandura_civ_jaune", "" },
			{ "Mrshounka_Vandura_civ_noir", "" },
			{ "Mrshounka_Vandura_civ_orange", "" },
			{ "Mrshounka_Vandura_civ_rose", "" },
			{ "Mrshounka_Vandura_civ_rouge", "" },
			{ "Mrshounka_Vandura_civ_violet", "" },
			{ "Jonzie_Ceed", "" },
            { "IVORY_PRIUS", "" },
            { "Mrshounka_golfvi_civ", "" },
            { "Mrshounka_golfvi_civ_bleufonce", "" },
            { "Mrshounka_golfvi_civ_grise", "" },
            { "Mrshounka_golfvi_civ_jaune", "" },
            { "Mrshounka_golfvi_civ_noir", "" },
            { "Mrshounka_golfvi_civ_orange", "" },
            { "Mrshounka_golfvi_civ_rose", "" },
            { "Mrshounka_golfvi_civ_rouge", "" },
            { "Mrshounka_golfvi_civ_violet", "" },			
			{ "Mrshounka_a3_ds3_civ", "" },
            { "Mrshounka_a3_ds3_civ_bleufonce", "" },
            { "Mrshounka_a3_ds3_civ_civ_grise", "" },
            { "Mrshounka_a3_ds3_civ_civ_jaune", "" },
			{ "Mrshounka_a3_ds3_civ_noir", "" },	
            { "Mrshounka_a3_ds3_civ_civ_orange", "" },
            { "Mrshounka_a3_ds3_civ_civ_rose", "" },
            { "Mrshounka_a3_ds3_civ_civ_rouge", "" },
            { "Mrshounka_a3_ds3_civ_civ_violet", "" },
            { "shounka_a3_ds4_civ", "" },
            { "shounka_a3_ds4_bleufonce", "" },
            { "shounka_a3_ds4_grise", "" },
            { "shounka_a3_ds4_jaune", "" },
            { "shounka_a3_ds4_noir", "" },
            { "shounka_a3_ds4_orange", "" },
            { "shounka_a3_ds4_rose", "" },
            { "shounka_a3_ds4_rouge", "" },
            { "shounka_a3_ds4_violet", "" },
			{ "shounka_a3_cliors_civ", "" },
			{ "shounka_a3_cliors_civ_bleufonce", "" },
			{ "shounka_a3_cliors_civ_grise", "" },
			{ "shounka_a3_cliors_civ_jaune", "" },
			{ "shounka_a3_cliors_civ_noir", "" },
			{ "shounka_a3_cliors_civ_orange", "" },
			{ "shounka_a3_cliors_civ_rose", "" },
			{ "shounka_a3_cliors_civ_rouge", "" },
			{ "shounka_a3_cliors_civ_violet", "" },
            { "shounka_nemo", "" },
            { "shounka_nemo_bleufonce", "" },
            { "shounka_nemo_grise", "" },
            { "shounka_nemo_jaune", "" },
            { "shounka_nemo_orange", "" },
            { "shounka_nemo_rose", "" },
            { "shounka_nemo_rouge", "" },
            { "shounka_nemo_violet", "" },
			{ "Quiet_ford_raptor_blanche_f", "" },
			{ "Quiet_ford_raptor_bleu_f", "" },
			{ "Quiet_ford_raptor_noir_f", "" },
			{ "Quiet_ford_raptor_rouge_f", "" },
			{ "Quiet_ford_raptor_chrome_f", "" }
        };
    };
	
    class civ_freizeit {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "sga_hover_board", "" },
            { "dbo_CIV_ol_bike", " " },
            { "dbo_CIV_new_bike", " " },
			{ "shounka_buggy", " " },
			{ "shounka_buggy_noir", " " },
			{ "shounka_buggy_bleufonce", " " },
			{ "shounka_buggy_grise", " " },
			{ "shounka_buggy_jaune", " " },
			{ "shounka_buggy_orange", " " },
			{ "shounka_buggy_rose", " " },
			{ "shounka_buggy_rouge", " " },
			{ "shounka_buggy_violet", " " },
			{ "shounka_monsteur", " " },
			{ "shounka_monsteur_bleufonce", " " },
			{ "shounka_monsteur_grise", " " },
			{ "shounka_monsteur_jaune", " " },
			{ "shounka_monsteur_noir", " " },
			{ "shounka_monsteur_orange", " " },
			{ "shounka_monsteur_rose", " " },
			{ "shounka_monsteur_rouge", " " },
			{ "shounka_monsteur_violet", " " },
        };
    };
	
    class civ_luxus {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Guillaume9545_Bmw_M5_Blanche", "" },
            { "Guillaume9545_Bmw_M5_bleu", "" },
            { "Guillaume9545_Bmw_M5_bleufonce", "" },
            { "Guillaume9545_Bmw_M5_gris", "" },
            { "Guillaume9545_Bmw_M5_jaune", "" },
            { "Guillaume9545_Bmw_M5_Violette", "" },
            { "Guillaume9545_Bmw_M5_VertFonce", "" },
            { "Guillaume9545_Bmw_M5_Vert", "" },
            { "Guillaume9545_Bmw_M5_Rouge_fonce", "" },
            { "Guillaume9545_Bmw_M5_noir", "" },
            { "Guillaume9545_Shelby_Cobra_Orange", "" },
            { "Guillaume9545_Shelby_Cobra_Blanche", "" },
            { "Guillaume9545_Shelby_Cobra_bleu", "" },
            { "Guillaume9545_Shelby_Cobra_bleufonce", "" },
            { "Guillaume9545_Shelby_Cobra_gris", "" },
            { "Guillaume9545_Shelby_Cobra_jaune", "" },
            { "Guillaume9545_Shelby_Cobra_Violette", "" },
            { "Guillaume9545_Shelby_Cobra_VertFonce", "" },
            { "Guillaume9545_Shelby_Cobra_Vert", "" },
            { "Guillaume9545_Shelby_Cobra_Rouge_fonce", "" },
            { "Guillaume9545_Shelby_Cobra_noir", "" },
			{ "Mrshounka_Alfa_Romeo_civ", "" },
			{ "Mrshounka_Alfa_Romeo_bleufonce", "" },
			{ "Mrshounka_Alfa_Romeo_grise", "" },
			{ "Mrshounka_Alfa_Romeo_jaune", "" },
			{ "Mrshounka_Alfa_Romeo_noir", "" },
			{ "Mrshounka_Alfa_Romeo_orange", "" },
			{ "Mrshounka_Alfa_Romeo_rose", "" },
			{ "Mrshounka_Alfa_Romeo_rouge", "" },
			{ "Mrshounka_Alfa_Romeo_violet", "" },
			{ "Mrshounka_cherokee_noir", "" },
			{ "Mrshounka_cherokee_noir_mat", "" },
			{ "Mrshounka_cherokee_noir_blanc", "" },
			{ "Mrshounka_cherokee_noir_blanc_mat", "" },
			{ "Mrshounka_cherokee_noir_bleu", "" },
			{ "Mrshounka_cherokee_noir_bleu_mat", "" },
			{ "Mrshounka_cherokee_noir_rouge", "" },
			{ "Mrshounka_cherokee_noir_rouge_mat", "" },
			{ "Mrshounka_cherokee_noir_violet", "" },
			{ "Mrshounka_cherokee_noir_violet_mat", "" },
			{ "Mrshounka_evox_civ", "" },
			{ "Mrshounka_evox_bleufonce", "" },
			{ "Mrshounka_evox_grise", "" },
			{ "Mrshounka_evox_jaune", "" },
			{ "Mrshounka_evox_noir", "" },
			{ "Mrshounka_evox_orange", "" },
			{ "Mrshounka_evox_rose", "" },
			{ "Mrshounka_evox_rouge", "" },
			{ "Mrshounka_evox_violet", "" },
			{ "Mrshounka_rs4_civ", "" },
			{ "Mrshounka_rs4_civ_bleufonce", "" },
			{ "Mrshounka_rs4_civ_grise", "" },
			{ "Mrshounka_rs4_civ_jaune", "" },
			{ "Mrshounka_rs4_civ_noir", "" },
			{ "Mrshounka_rs4_civ_orange", "" },
			{ "Mrshounka_rs4_civ_rose", "" },
			{ "Mrshounka_rs4_civ_rouge", "" },
			{ "Mrshounka_rs4_civ_violet", "" },
			{ "shounka_a3_rs5_civ", "" },
			{ "shounka_a3_rs5_civ_bleufonce", "" },
			{ "shounka_a3_rs5_civ_grise", "" },
			{ "shounka_a3_rs5_civ_jaune", "" },
			{ "shounka_a3_rs5_civ_noir", "" },
			{ "shounka_a3_rs5_civ_orange", "" },
			{ "shounka_a3_rs5_civ_rose", "" },
			{ "shounka_a3_rs5_civ_rouge", "" },
			{ "shounka_a3_rs5_civ_violet", "" },
			{ "shounka_rs6", "" },
			{ "shounka_rs6_bleufonce", "" },
			{ "shounka_rs6_grise", "" },
			{ "shounka_rs6_jaune", "" },
			{ "shounka_rs6_noir", "" },
			{ "shounka_rs6_orange", "" },
			{ "shounka_rs6_rose", "" },
			{ "shounka_rs6_rouge", "" },
			{ "shounka_rs6_violet", "" },
			{ "shounka_f430_spider", "" },
			{ "shounka_f430_spider_bleufonce", "" },
			{ "shounka_f430_spider_grise", "" },
			{ "shounka_f430_spider_jaune", "" },
			{ "shounka_f430_spider_noir", "" },
			{ "shounka_f430_spider_orange", "" },
			{ "shounka_f430_spider_rose", "" },
			{ "shounka_f430_spider_rouge", "" },
			{ "shounka_f430_spider_violet", "" },
			{ "Mrshounka_bmwm1_civ", "" },
			{ "Mrshounka_bmwm1_civ_bleufonce", "" },
			{ "Mrshounka_bmwm1_civ_grise", "" },
			{ "Mrshounka_bmwm1_civ_jaune", "" },
			{ "Mrshounka_bmwm1_civ_noir", "" },
			{ "Mrshounka_bmwm1_civ_orange", "" },
			{ "Mrshounka_bmwm1_civ_rose", "" },
			{ "Mrshounka_bmwm1_civ_rouge", "" },
			{ "Mrshounka_bmwm1_civ_violet", "" },
			{ "Mrshounka_bmwm6_civ", "" },
			{ "Mrshounka_bmwm6_bleufonce", "" },
			{ "Mrshounka_bmwm6_grise", "" },
			{ "Mrshounka_bmwm6_jaune", "" },
			{ "Mrshounka_bmwm6_noir", "" },
			{ "Mrshounka_bmwm6_orange", "" },
			{ "Mrshounka_bmwm6_rose", "" },
			{ "Mrshounka_bmwm6_rouge", "" },
			{ "Mrshounka_bmwm6_violet", "" },
			{ "Mrshounka_corbillard_c", "" },
			{ "Mrshounka_corbillard_c_bleufonce", "" },
			{ "Mrshounka_corbillard_c_grise", "" },
			{ "Mrshounka_corbillard_c_jaune", "" },
			{ "Mrshounka_corbillard_c_noir", "" },
			{ "Mrshounka_corbillard_c_orange", "" },
			{ "Mrshounka_corbillard_c_rose", "" },
			{ "Mrshounka_corbillard_c_rouge", "" },
			{ "Mrshounka_corbillard_c_violet", "" },
			{ "Quiet_Cadillac_blanche_f", "" },
			{ "Quiet_Cadillac_noir_f", "" },
			{ "Quiet_Cadillac_bleu_f", "" },
			{ "Quiet_Cadillac_rouge_f", "" },
			{ "Quiet_Cadillac_chrome_f", "" },
			{ "Quiet_1969charger_blanche_f", "" },
			{ "Quiet_1969charger_bleu_f", "" },
			{ "Quiet_1969charger_noir_f", "" },
			{ "Quiet_1969charger_rouge_f", "" },
			{ "Quiet_1969charger_chrome_f", "" },
			{ "Mrshounka_a3_dodge15_civ", "" },
			{ "Mrshounka_a3_dodge15_civ_bleufonce", "" },
			{ "Mrshounka_a3_dodge15_civ_grise", "" },
			{ "Mrshounka_a3_dodge15_civ_jaune", "" },
			{ "Mrshounka_a3_dodge15_civ_noir", "" },
			{ "Mrshounka_a3_dodge15_civ_orange", "" },
			{ "Mrshounka_a3_dodge15_civ_rose", "" },
			{ "Mrshounka_a3_dodge15_civ_rouge", "" },
			{ "Mrshounka_a3_dodge15_civ_violet", "" },
			{ "Mrshounka_mustang_civ", "" },
			{ "Mrshounka_mustang_mat", "" },
			{ "Mrshounka_mustang_bleufonce", "" },
			{ "Mrshounka_mustang_mat_b", "" },
			{ "Mrshounka_mustang_grise", "" },
			{ "Mrshounka_mustang_jaune", "" },
			{ "Mrshounka_mustang_noir", "" },
			{ "Mrshounka_mustang_mat_n", "" },
			{ "Mrshounka_mustang_orange", "" },
			{ "Mrshounka_mustang_rose", "" },
			{ "Mrshounka_mustang_rouge", "" },
			{ "Mrshounka_mustang_violet", "" },
			{ "shounka_limo_civ", "" },
			{ "shounka_limo_civ_bleufonce", "" },
			{ "shounka_limo_civ_grise", "" },
			{ "shounka_limo_civ_jaune", "" },
			{ "shounka_limo_civ_noir", "" },
			{ "shounka_limo_civ_orange", "" },
			{ "shounka_limo_civ_rose", "" },
			{ "shounka_limo_civ_rouge", "" },
			{ "shounka_limo_civ_violet", "" },
			{ "shounka_gt", "" },
			{ "shounka_gt_bleufonce", "" },
			{ "shounka_gt_grise", "" },
			{ "shounka_gt_jaune", "" },
			{ "shounka_gt_noir", "" },
			{ "shounka_gt_orange", "" },
			{ "shounka_gt_rose", "" },
			{ "shounka_gt_rouge", "" },
			{ "shounka_gt_violet", "" },
			{ "SIG_SuperBeeB", "" },
			{ "SIG_SuperBeeG", "" },
			{ "SIG_SuperBeeL", "" },
			{ "SIG_SuperBeeM", "" },
			{ "SIG_SuperBee", "" },
			{ "SIG_SuperBeeY", "" },
			{ "Jonzie_Datsun_Z432", "" },
			{ "Jonzie_Viper", "" },
			{ "zorak_audi_rs3", "" },
			{ "zorak_audi_S8", "" },
            { "BRP_1960_White", "" },
            { "BRP_1960_Green", "" },
            { "BRP_1960_Black", "" },
			{ "ADM_Monte_Carlo", "" },
			{ "ADM_Monte_Carlo_20", "" },
			{ "ADM_Monte_Carlo_48", "" },
            { "ivory_rs4_taxi", "" },
            { "ivory_rs4", "" },            
            { "ivory_c", "" },
            { "Guillaume9545_Bmw_M5", "" },
            { "ivory_suburban", "" },
            { "AMG_Suburban2015", "" },
            { "ivory_isf", "" },
            { "C_Jas_MX5Miata11_F", "" },
            { "Jonzie_Quattroporte", "" },            
            { "C_Sal_nissan_gtr_2017_alt_F", "" },
            { "C_Sal_nissan_gtr_2017_whiteF_F", "" },
            { "C_Sal_nissan_gtr_2017_redW_F", "" },
            { "C_Sal_nissan_gtr_2017_F", "" },
            { "C_Sal_nissan_gtr_2017_Grey_F", "" },
            { "ivory_evox", "" },
            { "ivory_gt500", "" },
            { "ivory_wrx", "" },
			{ "sk_car_bmw_e46_black", "" },
			{ "sk_car_bmw_e46_black_mat", "" },
			{ "sk_car_bmw_e46_blue", "" },
			{ "sk_car_bmw_e46_blue_mat", "" },
			{ "sk_car_bmw_e46_orange", "" },
			{ "sk_car_bmw_e46_red_mat", "" },
			{ "sk_car_bmw_e46_grey", "" },
			{ "Mrshounka_Bowler_c", "" },
			{ "Mrshounka_Bowler_c_noir", "" },
			{ "Mrshounka_Bowler_c_bleufonce", "" },
			{ "Mrshounka_Bowler_c_grise", "" },
			{ "Mrshounka_Bowler_c_jaune", "" },
			{ "Mrshounka_Bowler_c_violet", "" },
			{ "quiet_Ford_shelbyGT500_blanche_f", "" },
			{ "quiet_Ford_shelbyGT500_bleu_f", "" },
			{ "quiet_Ford_shelbyGT500_noir_f", "" },
			{ "quiet_Ford_shelbyGT500_rouge_f", "" },
			{ "quiet_Ford_shelbyGT500_chrome_f", "" },
			{ "Tal_Maserati_Black", "" },
			{ "Tal_Maserati_Blue", "" },
			{ "Tal_Maserati_LightBlue", "" },
			{ "Tal_Maserati_Green", "" },
			{ "Tal_Maserati_Lime", "" },
			{ "Tal_Maserati_Orange", "" },
			{ "Tal_Maserati_Pink", "" },
			{ "Tal_Maserati_Purple", "" },
			{ "Tal_Maserati_Red", "" },
			{ "Tal_Maserati_White", "" },
			{ "Tal_Maserati_Grey", "" },
			{ "C_Jas_Ford_Sierra500_Black_F", "" },
			{ "C_Jas_Ford_Sierra500_White_F", "" },			
            { "Jonzie_STI", "" }
        };
    };
	
	class civ_supersport {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "Tal_Murci_Black", "" },
			{ "Tal_Murci_LightBlue", "" },
			{ "Tal_Murci_Blue", "" },
			{ "Tal_Murci_Lime", "" },
			{ "Tal_Murci_Green", "" },
			{ "Tal_Murci_Orange", "" },
			{ "Tal_Murci_Pink", "" },
			{ "Tal_Murci_Purple", "" },
			{ "Tal_Murci_Red", "" },
			{ "Tal_Murci_Grey", "" },
			{ "Tal_Murci_White", "" },
			{ "Mrshounka_agera_p", "" },
			{ "Mrshounka_agera_p_bleu", "" },
			{ "Mrshounka_agera_p_jaune", "" },
			{ "Mrshounka_agera_p_noir", "" },
			{ "Quiet_v2_r8plus_blanche_f", "" },
			{ "Quiet_v2_r8plus_bleu_f", "" },
			{ "Quiet_v2_r8plus_noir_f", "" },
			{ "Quiet_v2_r8plus_rouge_f", "" },
			{ "Quiet_v2_r8plus_chrome_f", "" },
			{ "ivory_mp4", "" },
			{ "IVORY_R8", "" },
			{ "IVORY_R8SPYDER", "" },
			{ "mrshounka_huracan_c", "" },
			{ "mrshounka_huracan_c_bleufonce", "" },
			{ "mrshounka_huracan_c_grise", "" },
			{ "mrshounka_huracan_c_jaune", "" },
			{ "mrshounka_huracan_c_noir", "" },
			{ "mrshounka_huracan_c_orange", "" },
			{ "mrshounka_huracan_c_rose", "" },
			{ "mrshounka_huracan_c_violet", "" },
			{ "Mrshounka_veneno_c", "" },
			{ "Mrshounka_veneno_c_bleu", "" },
			{ "Mrshounka_veneno_c_jaune", "" },
			{ "Mrshounka_veneno_c_noir", "" },
			{ "ivory_veyron", "" },
			{ "quiet_Bugatti_blanche_f", "" },
			{ "quiet_Bugatti_bleu_f", "" },
			{ "quiet_Bugatti_noir_f", "" },
			{ "quiet_Bugatti_rouge_f", "" },
			{ "quiet_Bugatti_chrome_f", "" },
            { "fox_787", "" },
            { "Fox_GT1", " " }
        };
    };
	
	class civ_motorcycle {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "shounka_harley_a3", "" },
			{ "shounka_harley_a3_bleu", "" },
			{ "shounka_harley_a3_lolz", "" },
			{ "shounka_harley_a3_noir", "" },
			{ "shounka_harley_a3_rouge", "" },
			{ "Mrshounka_ducati_p", "" },
			{ "Mrshounka_ducati_p_bf", "" },
			{ "Mrshounka_ducati_p_g", "" },
			{ "Mrshounka_ducati_p_j", "" },
			{ "Mrshounka_ducati_p_noir", "" },
			{ "Mrshounka_ducati_p_o", "" },
			{ "Mrshounka_ducati_p_r", "" },
			{ "Mrshounka_ducati_p_rose", "" },
			{ "Mrshounka_ducati_p_v", "" },
			{ "Mrshouka_yamaha_p_noir", "" },
			{ "Mrshouka_yamaha_p_bf", "" },
			{ "Mrshouka_yamaha_p_g", "" },
			{ "Mrshouka_yamaha_p_o", "" },
			{ "Mrshouka_yamaha_p_j", "" },
			{ "Mrshouka_yamaha_p_r", "" },
			{ "Mrshouka_yamaha_p_v", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "Jonzie_Flat_Bed", "" },
			{ "Jonzie_Log_Truck", "" },
			{ "SLB2k11_Scania_420_black", "" },
			{ "SLB2k11_Scania_420_blau", "" },
			{ "SLB2k11_Scania_420_orange", "" },
			{ "SLB2k11_Scania_420_weis", "" },
            { "Jonzie_Box_Truck", "" }
        };
    };
	
    class civ_transport {
        side = "civ";
        conditions = "";
        vehicles[] = {
/*			{ "kangool2_civ", "" },
			{ "kangool2_civ_bleu", "" },
			{ "kangool2_civ_gris", "" },
			{ "kangool2_civ_yellow", "" },
			{ "kangool2_civ_noir", "" },
			{ "kangool2_civ_rouge", "" }, // 1
			{ "kangool2c_civ", "" },
			{ "kangool2c_civ_bleu", "" },
			{ "kangool2c_civ_gris", "" },                        MODS WERDEN NICHT GELADEN !
			{ "kangool2c_civ_yellow", "" },
			{ "kangool2c_civ_noir", "" },
			{ "kangool2c_civ_rouge", "" }, // 2
			{ "Renault_Escape_civ", "" },
			{ "Renault_Escape_civ_bleu", "" },
			{ "Renault_Escape_civ_gris", "" },
			{ "Renault_Escape_civ_yellow", "" },
			{ "Renault_Escape_civ_noir", "" },
			{ "Renault_Escape_civ_rouge", "" }, // 3 */
			{ "chvwt5_civ", "" },
			{ "chvwt5_civ", "" },
			{ "chvwt5_civ_bleu", "" },
			{ "chvwt5_civ_gris", "" },
			{ "chvwt5_civ_yellow", "" },
			{ "chvwt5_civ_noir", "" },
			{ "chvwt5_civ_rouge", "" },
			{ "Mer_Vito_civ", "" },
			{ "Mer_Vito_civ_bleu", "" },
			{ "Mer_Vito_civ_gris", "" },
			{ "Mer_Vito_civ_yellow", "" },
			{ "Mer_Vito_civ_noir", "" },
			{ "Mer_Vito_civ_rouge", "" },
			{ "Renault_Master_civ", "" },
			{ "Renault_Master_civ_bleu", "" },
			{ "Renault_Master_civ_gris", "" },
			{ "Renault_Master_civ_yellow", "" },
			{ "Renault_Master_civ_noir", "" },
			{ "Renault_Master_civ_rouge", "" },
			{ "Peugeot_Boxer_civ", "" },
			{ "Peugeot_Boxer_civ_bleu", "" },
			{ "Peugeot_Boxer_civ_gris", "" },
			{ "Peugeot_Boxer_civ_yellow", "" },
			{ "Peugeot_Boxer_civ_noir", "" },
			{ "Peugeot_Boxer_civ_rouge", "" },
			{ "ivecoCh_civ", "" },
			{ "ivecoCh_civ_bleu", "" },
			{ "ivecoCh_civ_gris", "" },
			{ "ivecoCh_civ_yellow", "" },
			{ "ivecoCh_civ_noir", "" },
			{ "ivecoCh_civ_rouge", "" },
			{ "ivecoCh_cciv", "" },
			{ "ivecoCh_cciv_bleu", "" },
			{ "ivecoCh_cciv_gris", "" },
			{ "ivecoCh_cciv_yellow", "" },
			{ "ivecoCh_cciv_noir", "" },
			{ "ivecoCh_cciv_rouge", "" },
			{ "shounka_avalanche", "" },
			{ "shounka_avalanche_bleufonce", "" },
			{ "shounka_avalanche_grise", "" },
			{ "shounka_avalanche_jaune", "" },
			{ "shounka_avalanche_noir", "" },
			{ "shounka_avalanche_orange", "" },
			{ "shounka_avalanche_rose", "" },
			{ "shounka_avalanche_rouge", "" },
			{ "shounka_avalanche_violet", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "ivory_b206", "" },
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "NH90", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "B_Heli_Transport_01_F", "" },
            { "O_Heli_Transport_04_F", "" }
        };
    };
	
	
	class civ_plane {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "sab_ultralight", "" },
			{ "sab_ultralight_4", "" },
			{ "sab_ultralight_2", "" },
            { "C_Plane_Civil_01_F", "" },
			{ "Sab_af_An2", "" },
			{ "Sab_tk_An2", "" },
			{ "Sab_ca_An2", "" },
			{ "Sab_yel_An2", "" },
			{ "Sab_sea2_An2", "" },
			{ "Sab_sea3_An2", "" },
            { "Sab_aeroc", "" },
			{ "Sab_aeroc_3", "" },
            { "Sab_737_2", "" },
			{ "Sab_737_6", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
			{ "C_Scooter_Transport_01_F", "" },
			{ "Lexx_Jetboat_H", "" },
			{ "sab_boat", "" },
			{ "C_Boat_Civil_01_F", "" },
            { "C_Boat_Transport_02_F", "" },
			{ "vvv_NewYacht", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
			{ "shounka_nemo_pompier", "" },
			{ "shounka_a3_suburbangign_pompier", "" },
			{ "ivory_suburban_ems", "" },
            { "Dacia_Duster_gn", "" },
            { "c4h_gnb", "" },
			{ "Jonzie_Tow_Truck", "" },
            { "Transit_gn", "" },
            { "Mer_Vito_gn", "" },
            { "Jonzie_Ambulance", "" },
            { "Bcas", "" },				
            { "depanren", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "EC635_ADAC", "" }
        };
    };
	
	class med_ship {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Boat_Civil_01_rescue_F", "" },
            { "B_Lifeboat", "" },
			{ "", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "FaisalAlYahya_CVPI_police", "" },
			{ "shounka_a3_cliors_gend_civ", "" },
			{ "shounka_a3_gendsprinter", "" },
			{ "shounka_a3_508gend", "call life_coplevel >= 2" },
			{ "Mrshounka_Volkswagen_Tourareg_police_police", "call life_coplevel >= 3" },
			{ "shounka_a3_audiq7_v2_gendarmerie", "call life_coplevel >= 3" },
			{ "Mrshounka_tahoe", "call life_coplevel >= 4" },
			{ "Mrshounka_bmw_gend", "call life_coplevel >= 5" },
			{ "Mrshounka_a3_dodge15_pol", "call life_coplevel >= 5" },
			{ "Mrshounka_a3_dodge15_pol2", "call life_coplevel >= 5" },
			{ "Mrshounka_ducati_police_p", "call life_coplevel >= 5" },
			{ "vvv_HarleyDavidson_CustomBobber", "call life_coplevel >= 7" },
			{ "Mrshounka_agera_gend_p", "call life_coplevel >= 9" }
        };
    };
	
	class cop_car_fbi {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "AMG_TahoePolice", "" }, 
            { "zorak_audi_rs3_police", "" },
			{ "zorak_audi_S8_police", "" },
			{ "Mrshounka_rs4_gend_p_blanc", "" },
			{ "Mrshounka_rs4_gend_p_bleufonce", "" },
			{ "Mrshounka_rs4_gend_p_jaune", "" },
			{ "Mrshounka_rs4_gend_p_noir", "" }
        };
    };
	
	class cop_swat {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "DAR_SWATPolice", "" },
			{ "shounka_a3_brinks_noir", "" },
			{ "shounka_a3_suburbangign", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "ivory_b206_RCMP", "call life_coplevel >= 3" },
            { "EC635_Unarmed", "call life_coplevel >= 5" },
			{ "MELB_MH6M", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" },
			{ "B_CBS_WaterShadow730_F", "" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };
	// Civ transport Anfang
	
    class kangool2_civ {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2525;
        textures[] = {};
    };
	
    class kangool2_civ_bleu {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2525;
        textures[] = {};
    };
	
    class kangool2_civ_gris {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2525;
        textures[] = {};
    };
	
    class kangool2_civ_yellow {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2525;
        textures[] = {};
    };
	
    class kangool2_civ_noir {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2525;
        textures[] = {};
    };
	
    class kangool2_civ_rouge {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2525;
        textures[] = {};
    }; // ende
	
    class kangool2c_civ {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850;
        textures[] = {};
    };
	
    class kangool2c_civ_bleu {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850;
        textures[] = {};
    };
	
    class kangool2c_civ_gris {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850;
        textures[] = {};
    };
	
    class kangool2c_civ_yellow {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850;
        textures[] = {};
    };
	
    class kangool2c_civ_noir {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850;
        textures[] = {};
    };
	
    class kangool2c_civ_rouge {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850;
        textures[] = {};
    }; // ende
	
    class Renault_Escape_civ {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5200;
        textures[] = {};
    };
	
    class Renault_Escape_civ_bleu {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5200;
        textures[] = {};
    };
	
    class Renault_Escape_civ_gris {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5200;
        textures[] = {};
    };
	
    class Renault_Escape_civ_yellow {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5200;
        textures[] = {};
    };
	
    class Renault_Escape_civ_noir {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5200;
        textures[] = {};
    };
	
    class Renault_Escape_civ_rouge {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5200;
        textures[] = {};
    }; // ende
	
    class chvwt5_civ {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class chvwt5_civ_bleu {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class chvwt5_civ_gris {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };

    class chvwt5_civ_yellow {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class chvwt5_civ_noir {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class chvwt5_civ_rouge {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    }; // ende
	
    class Mer_Vito_civ {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class Mer_Vito_civ_bleu {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class Mer_Vito_civ_gris {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class Mer_Vito_civ_yellow {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class Mer_Vito_civ_noir {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    };
	
    class Mer_Vito_civ_rouge {
        vItemSpace = 110;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8500;
        textures[] = {};
    }; // ende
	
    class Renault_Master_civ {
        vItemSpace = 145;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11000;
        textures[] = {};
    };
	
    class Renault_Master_civ_bleu {
        vItemSpace = 145;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11000;
        textures[] = {};
    };
	
    class Renault_Master_civ_gris {
        vItemSpace = 145;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11000;
        textures[] = {};
    };
	
    class Renault_Master_civ_yellow {
        vItemSpace = 145;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11000;
        textures[] = {};
    };
	
    class Renault_Master_civ_noir {
        vItemSpace = 145;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11000;
        textures[] = {};
    };
	
    class Renault_Master_civ_rouge {
        vItemSpace = 145;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11000;
        textures[] = {};
    }; // ende
	
    class Peugeot_Boxer_civ {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11500;
        textures[] = {};
    };
	
    class Peugeot_Boxer_civ_bleu {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11500;
        textures[] = {};
    };
	
    class Peugeot_Boxer_civ_gris {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11500;
        textures[] = {};
    };
	
    class Peugeot_Boxer_civ_yellow {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11500;
        textures[] = {};
    };
	
    class Peugeot_Boxer_civ_noir {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11500;
        textures[] = {};
    };
	
    class Peugeot_Boxer_civ_rouge {
        vItemSpace = 165;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11500;
        textures[] = {};
    }; // ende
	
    class ivecoCh_civ {
        vItemSpace = 180;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12900;
        textures[] = {};
    };
	
    class ivecoCh_civ_bleu {
        vItemSpace = 180;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12900;
        textures[] = {};
    };
	
    class ivecoCh_civ_gris {
        vItemSpace = 180;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12900;
        textures[] = {};
    };
	
    class ivecoCh_civ_yellow {
        vItemSpace = 180;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12900;
        textures[] = {};
    };
	
    class ivecoCh_civ_noir {
        vItemSpace = 180;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12900;
        textures[] = {};
    };
	
    class ivecoCh_civ_rouge {
        vItemSpace = 180;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12900;
        textures[] = {};
    }; // ende
	
    class ivecoCh_cciv {
        vItemSpace = 220;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16500;
        textures[] = {};
    };
	
    class ivecoCh_cciv_bleu {
        vItemSpace = 220;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16500;
        textures[] = {};
    };
	
    class ivecoCh_cciv_gris {
        vItemSpace = 220;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16500;
        textures[] = {};
    };
	
    class ivecoCh_cciv_yellow {
        vItemSpace = 220;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16500;
        textures[] = {};
    };
	
    class ivecoCh_cciv_noir {
        vItemSpace = 220;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16500;
        textures[] = {};
    };
	
    class ivecoCh_cciv_rouge {
        vItemSpace = 220;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 16500;
        textures[] = {};
    };
	
	class shounka_avalanche {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_bleufonce {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_grise {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_jaune {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_noir {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_orange {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_rose {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_rouge {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	class shounka_avalanche_violet {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42000;
        textures[] = {};
    };
	
	
	// Civ transport Ende
	
	// Civ motorcycle Anfang
	
	class shounka_harley_a3 {
        vItemSpace = 5;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
	class shounka_harley_a3_bleu {
        vItemSpace = 5;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
	class shounka_harley_a3_lolz {
        vItemSpace = 5;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
	class shounka_harley_a3_noir {
        vItemSpace = 5;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
	class shounka_harley_a3_rouge {
        vItemSpace = 5;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_noir {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_bf {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_g {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_j {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_bf {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_g {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_j {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_noir {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_o {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_rose {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_r {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_v {
        vItemSpace = 5;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	
	// Civ motorcycle Ende
	
	// CIV Freizeit Händler Anfang
    class dbo_CIV_ol_bike {
        vItemSpace = 10;
        conditions = "";
        price = 80;
        textures[] = {};
    };
	
    class dbo_CIV_new_bike {
        vItemSpace = 10;
        conditions = "";
        price = 100;
        textures[] = {};
    };
	
    class sga_hover_board {
        vItemSpace = 10;
        conditions = "";
        price = 100;
        textures[] = {};
    };
	
	class shounka_buggy {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_bleufonce {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_jaune {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_rose {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_rouge {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_violet {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_orange {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_grise {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_buggy_noir {
        vItemSpace = 5;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class shounka_monsteur {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_bleufonce {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_grise {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_noir {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_orange {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_rose {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_rouge {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class shounka_monsteur_violet {
        vItemSpace = 10;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	
	// CIV Freizeit Händler Ende
	
	// CIV Gebraucht - Anfang
	
    class AMG_Caprice1993 {
        vItemSpace = 15;
        conditions = "";
        price = 4500;
        textures[] = {};
    };
	
	class GeK_Renault_Trafic {
        vItemSpace = 20;
        conditions = "";
        price = 6000;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_bleufonce {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_grise {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_jaune {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_noir {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_orange {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_rose {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_rouge {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Mrshounka_golfvi_civ_violet {
        vItemSpace = 40;
        conditions = "";
        price = 2300;
        textures[] = {};
    };
	
	class Jonzie_Ceed {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2300;
        textures[] = {};
    };
	
	class Jonzie_Mini_Cooper {
        vItemSpace = 10;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600;
        textures[] = {};
    };
	
	class Quiet_ford_raptor_blanche_f {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {};
    };
	
	class Quiet_ford_raptor_bleu_f {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {};
    };
	
	class Quiet_ford_raptor_noir_f {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {};
    };
	
	class Quiet_ford_raptor_rouge_f {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {};
    };
	
	class Quiet_ford_raptor_chrome_f {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 28000;
        textures[] = {};
    };
	
	class IVORY_PRIUS {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2950;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_bleufonce {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_grise {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_jaune {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_noir {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_orange {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_rose {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_rouge {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
	class Mrshounka_Vandura_civ_violet {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 13500;
        textures[] = {};
    };
	
    class Jonzie_30CSL {
        vItemSpace = 15;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = {};
    };
	
	class Jonzie_Corolla {
        vItemSpace = 15;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5600;
        textures[] = {};
    };
	
    class _Peugeot_207_civ_violet {
        vItemSpace = 10;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3500;
        textures[] = {};
    };
	
    class Maisha_Peugeot_207_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1800;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_civ {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
	class Mrshounka_c4_p_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2150;
        textures[] = {};
    };
	
    class Guillaume9545_Peugeot_207_civ_vert {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
    class Guillaume9545_Peugeot_207_civ_orange {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
    class Guillaume9545_Peugeot_207_civ_jaune {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
    class Guillaume9545_Peugeot_207_civ_bleu {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class Jonzie_Datsun_510 {
        vItemSpace = 15;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3500;
        textures[] = {};
    };
	
	class Jonzie_XB {
        vItemSpace = 15;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_bleufonce {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_civ_grise {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_civ_jaune {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_noir {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_civ_orange {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_civ_rose {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_civ_rouge {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_a3_ds3_civ_civ_violet {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {};
    };
	
	class shounka_a3_ds4_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_bleufonce {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_grise {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_jaune {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_noir {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_orange {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_rose {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_rouge {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_a3_ds4_violet {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2700;
        textures[] = {};
    };
	
	class shounka_nemo {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_bleufonce {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_grise {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_jaune {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_rose {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_rouge {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_nemo_violet {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3800;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_bleufonce {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_grise {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_jaune {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_noir {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_orange {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_rose {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_rouge {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_cliors_civ_violet {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
	
	// CIV Gebraucht - Ende
	
	// CIV Boot - Anfang
	
	class Lexx_Jetboat_H {
        vItemSpace = 10;
        conditions = "";
        price = 30000;
        textures[] = {};
    };
	
	class sab_boat {
        vItemSpace = 20;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	
	// CIV Boot - Ende
	
	// CIV Luxus Händler Anfang
	
    class Guillaume9545_Bmw_M5_Blanche {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_bleu {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_gris {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_Violette {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_VertFonce {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_Vert {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_Rouge_fonce {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	
        class Guillaume9545_Bmw_M5_noir {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	
	    class C_Jas_Ford_Sierra500_Black_F {
        vItemSpace = 20;
        conditions = "";
        price = 37000;
        textures[] = {};
    };
	
	    class C_Jas_Ford_Sierra500_White_F_F {
        vItemSpace = 20;
        conditions = "";
        price = 37000;
        textures[] = {};
    
    };
	
	    class Guillaume9545_Shelby_Cobra_Orange {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_Blanche {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_bleu {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_bleufonce {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_gris {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_Violette {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
	    class Guillaume9545_Shelby_Cobra_VertFonce {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	
    class Guillaume9545_Shelby_Cobra_Vert {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_Rouge_fonce {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_noir {
        vItemSpace = 10;
        conditions = "";
        price = 30500;
        textures[] = {};
    };
	    class Faisal_MaybachLaundet57 {
        vItemSpace = 20;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class BRP_1960_White {
        vItemSpace = 20;
        conditions = "";
        price = 40000;
        textures[] = {};
    };
	    class BRP_1960_Green {
        vItemSpace = 20;
        conditions = "";
        price = 40000;
        textures[] = {};
    };
	    class BRP_1960_Black {
        vItemSpace = 20;
        conditions = "";
        price = 40000;
        textures[] = {};
    };
	    class ivory_rs4_taxi {
        vItemSpace = 20;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

	 class ivory_rs4 {
        vItemSpace = 20;
        conditions = "";
        price = 60000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_bleufonce {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_grise {
        vItemSpace = 25;
        conditions = "";
        price = 62000;																													
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_jaune {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_noir {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_orange {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_rose {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_rouge {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_corbillard_c_violet {
        vItemSpace = 25;
        conditions = "";
        price = 62000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_gend_p_blanc {
        vItemSpace = 20;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_gend_p_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_gend_p_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_gend_p_noir {
        vItemSpace = 20;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_grise {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_noir {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_orange {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_rose {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class Mrshounka_rs4_civ_violet {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    };
	
	class SIG_SuperBee {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class SIG_SuperBeeB {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class SIG_SuperBeeG {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class SIG_SuperBeeL {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class SIG_SuperBeeM {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class SIG_SuperBeeY {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	   
	    class ivory_c {
        vItemSpace = 20;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5 {
        vItemSpace = 20;
        conditions = "";
        price = 15500;
        textures[] = {};
    };
	    class ivory_suburban {
        vItemSpace = 30;
        conditions = "";
        price = 37000;
        textures[] = {};
    };
	    class AMG_Suburban2015 {
        vItemSpace = 30;
        conditions = "";
        price = 37000;
        textures[] = {};
    };
	    class ivory_isf {
        vItemSpace = 20;
        conditions = "";
        price = 42700;
        textures[] = {};
    };
	    class C_Jas_MX5Miata11_F {
        vItemSpace = 20;
        conditions = "";
        price = 29300;
        textures[] = {};
    };
	    class AMG_Charger_12 {
        vItemSpace = 20;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Jonzie_Quattroporte {
        vItemSpace = 20;
        conditions = "";
        price = 110000;
        textures[] = {};
    };
	
    class AMG_MercedesBenz6x6 {
        vItemSpace = 20;
        conditions = "";
        price = 500000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_civ {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_grise {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_noir {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_orange {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_rose {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
    
    };
	
	class Mrshounka_Alfa_Romeo_violet {
        vItemSpace = 20;
        conditions = "";
        price = 65000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_mat {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_blanc {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_blanc_mat {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_bleu {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_bleu_mat {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_rouge {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_rouge_mat {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_violet {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_cherokee_noir_violet_mat {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_civ {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_bleufonce {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_grise {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_jaune {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_noir {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_orange {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_rose {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_rouge {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class Mrshounka_evox_violet {
        vItemSpace = 15;
        conditions = "";
        price = 95000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_bleufonce {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_grise {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_jaune {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_noir {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_orange {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_rose {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_rouge {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	class shounka_limo_civ_violet {
        vItemSpace = 15;
        conditions = "";
        price = 184000;
        textures[] = {};
   
    };
	
	    class C_Sal_nissan_gtr_2017_alt_F {
        vItemSpace = 20;
        conditions = "";
        price = 155000;
        textures[] = {};
    };
	
	    class C_Sal_nissan_gtr_2017_whiteF_F {
        vItemSpace = 20;
        conditions = "";
        price = 155000;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_redW_F {
        vItemSpace = 20;
        conditions = "";
        price = 155000;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_F {
        vItemSpace = 20;
        conditions = "";
        price = 155000;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_Grey_F {
        vItemSpace = 20;
        conditions = "";
        price = 155000;
        textures[] = {};
    };
	    class ivory_evox {
        vItemSpace = 20;
        conditions = "";
        price = 54000;
        textures[] = {};
    };
	    class ivory_gt500 {
        vItemSpace = 20;
        conditions = "";
        price = 32750;
        textures[] = {};
    };
	
    class ivory_wrx {
        vItemSpace = 20;
        conditions = "";
        price = 41000;
        textures[] = {};
    };
	
	class Jonzie_STI {
        vItemSpace = 20;
        conditions = "";
        price = 85200;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_grise {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_noir {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_orange {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_rose {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_a3_rs5_civ_violet {
        vItemSpace = 20;
        conditions = "";
        price = 280000;
        textures[] = {};
    };
	
	class shounka_rs6 {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_grise {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_noir {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_orange {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_rose {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class shounka_rs6_violet {
        vItemSpace = 20;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_grise {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_noir {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_orange {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_rose {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_violet {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_civ {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_grise {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_noir {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_orange {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_rose {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm6_violet {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };
	
	class Tal_Maserati_Black {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Blue {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_LightBlue {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Green {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Quiet_Cadillac_blanche_f {
        vItemSpace = 30;
        conditions = "";
        price = 87000;
        textures[] = {};
    };
	
	class Quiet_Cadillac_bleu_f {
        vItemSpace = 30;
        conditions = "";
        price = 87000;
        textures[] = {};
    };
	
	class Quiet_Cadillac_rouge_f {
        vItemSpace = 30;
        conditions = "";
        price = 87000;
        textures[] = {};
    };
	
	class Quiet_Cadillac_noir_f {
        vItemSpace = 30;
        conditions = "";
        price = 87000;
        textures[] = {};
    };
	
	class Quiet_Cadillac_chrome_f {
        vItemSpace = 30;
        conditions = "";
        price = 180000;
        textures[] = {};
    };
	
	class Tal_Maserati_Lime {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Orange {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Pink {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Purple {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Red {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_White {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class Tal_Maserati_Grey {
        vItemSpace = 10;
        conditions = "";
        price = 125850;
        textures[] = {};
    };
	
	class ADM_Monte_Carlo {
        vItemSpace = 5;
        conditions = "";
        price = 35000;
        textures[] = {};
    };
	
	class ADM_Monte_Carlo_20 {
        vItemSpace = 5;
        conditions = "";
        price = 35000;
        textures[] = {};
    };
	
	class ADM_Monte_Carlo_48 {
        vItemSpace = 5;
        conditions = "";
        price = 35000;
        textures[] = {};
    };
	
	class zorak_audi_rs3 {
        vItemSpace = 20;
        conditions = "";
        price = 70680;
        textures[] = {};
    };
	
	class zorak_audi_S8 {
        vItemSpace = 20;
        conditions = "";
        price = 85000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_black {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_black_mat {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_blue {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_blue_mat {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_grey {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_orange {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class sk_car_bmw_e46_red_mat {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };
	
	class Mrshouka_bmwm6_civ {
        vItemSpace = 20;
        conditions = "";
        price = 92000;
        textures[] = {};
    };
	
	class Mrshouka_bmwm6_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 92000;
        textures[] = {};
    };
	
	class Mrshouka_bmwm6_grise {
        vItemSpace = 20;
        conditions = "";
        price = 92000;
        textures[] = {};
    };
	
	class Mrshouka_bmwm6_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 92000;
        textures[] = {};
    };
	
	class Mrshouka_bmwm6_noir {
        vItemSpace = 20;
        conditions = "";
        price = 92000;
        textures[] = {};
    };
	
	class Mrshouka_bmwm6_violet {
        vItemSpace = 20;
        conditions = "";
        price = 92000;
        textures[] = {};
    };
	
	class quiet_Ford_shelbyGT500_blanche_f {
        vItemSpace = 20;
        conditions = "";
        price = 182000;
        textures[] = {};
    };
	
	class quiet_Ford_shelbyGT500_bleu_f {
        vItemSpace = 20;
        conditions = "";
        price = 182000;
        textures[] = {};
    };
	
	class quiet_Ford_shelbyGT500_noir_f {
        vItemSpace = 20;
        conditions = "";
        price = 182000;
        textures[] = {};
    };
	
	class quiet_Ford_shelbyGT500_rouge_f {
        vItemSpace = 20;
        conditions = "";
        price = 182000;
        textures[] = {};
    };
	
	class quiet_Ford_shelbyGT500_chrome_f {
        vItemSpace = 20;
        conditions = "";
        price = 240000;
        textures[] = {};
    };
	
	class Mrshounka_Bowler_c {
        vItemSpace = 25;
        conditions = "";
        price = 76780;
        textures[] = {};
    };
	
	class Mrshounka_Bowler_c_noir {
        vItemSpace = 25;
        conditions = "";
        price = 76780;
        textures[] = {};
    };
	
	class Mrshounka_Bowler_c_bleufonce {
        vItemSpace = 25;
        conditions = "";
        price = 76780;
        textures[] = {};
    };
	
	class Mrshounka_Bowler_c_grise {
        vItemSpace = 25;
        conditions = "";
        price = 76780;
        textures[] = {};
    };
	
	class Mrshounka_Bowler_c_jaune {
        vItemSpace = 25;
        conditions = "";
        price = 76780;
        textures[] = {};
    };
	
	class Mrshounka_Bowler_c_violet {
        vItemSpace = 25;
        conditions = "";
        price = 76780;
        textures[] = {};
    };
	
	class Jonzie_Datsun_Z432 {
        vItemSpace = 15;
        conditions = "";
        price = 18000;
        textures[] = {};
    };
	
	class Jonzie_Viper {
        vItemSpace = 10;
        conditions = "";
        price = 50500;
        textures[] = {};
    };
	
	class Quiet_1969charger_blanche_f {
        vItemSpace = 15;
        conditions = "";
        price = 40500;
        textures[] = {};
    };
	
	class Quiet_1969charger_bleu_f {
        vItemSpace = 15;
        conditions = "";
        price = 40500;
        textures[] = {};
    };
	
	class Quiet_1969charger_noir_f {
        vItemSpace = 15;
        conditions = "";
        price = 40500;
        textures[] = {};
    };
	
	class Quiet_1969charger_rouge_f {
        vItemSpace = 15;
        conditions = "";
        price = 40500;
        textures[] = {};
    };
	
	class Quiet_1969charger_chrome_f {
        vItemSpace = 15;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ {
        vItemSpace = 20;
        conditions = "";
        price = 110000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_grise {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_orange {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_rose {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ_violet {
        vItemSpace = 20;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class shounka_f430_spider {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_bleufonce {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_grise {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_noir {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_orange {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_rose {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_rouge {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_f430_spider_violet {
        vItemSpace = 10;
        conditions = "";
        price = 452000;
        textures[] = {};
    };
	
	class shounka_gt {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_bleufonce {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_grise {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_noir {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_orange {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_rose {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_rouge {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class shounka_gt_violet {
        vItemSpace = 10;
        conditions = "";
        price = 351000;
        textures[] = {};
    };
	
	class Mrshounka_mustang_civ {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_mat {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_bleufonce {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_mat_b {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_grise {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_noir {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_mat_n {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_orange {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_rose {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_rouge {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	class Mrshounka_mustang_violet {
        vItemSpace = 10;
        conditions = "";
        price = 320050;
        textures[] = {};
    };
	
	
	// CIV Luxus Händler Ende
	
	// CIV Supersport - Anfang
	
	class Mrshounka_agera_p {
        vItemSpace = 10;
        conditions = "";
        price = 870000;
        textures[] = {};
    };
	
	class Mrshounka_agera_p_bleu {
        vItemSpace = 10;
        conditions = "";
        price = 870000;
        textures[] = {};
    };
	
	class Mrshounka_agera_p_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 870000;
        textures[] = {};
    };
	
	class Mrshounka_agera_p_noir {
        vItemSpace = 10;
        conditions = "";
        price = 870000;
        textures[] = {};
    };
	
	class Mrshounka_agera_gend_p {
        vItemSpace = 10;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_o {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_r {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Mrshouka_yamaha_p_v {
        vItemSpace = 5;
        conditions = "";
        price = 530000;
        textures[] = {};
    };
	
	class Quiet_v2_r8plus_blanche_f {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };
	
	class Quiet_v2_r8plus_bleu_f {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };
	
	class Quiet_v2_r8plus_noir_f {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };
	
	class Quiet_v2_r8plus_rouge_f {
        vItemSpace = 10;
        conditions = "";
        price = 750000;
        textures[] = {};
    };
	
	class Quiet_v2_r8plus_chrome_f {
        vItemSpace = 10;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class quiet_Bugatti_blanche_f {
        vItemSpace = 10;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class quiet_Bugatti_bleu_f {
        vItemSpace = 10;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class quiet_Bugatti_noir_f {
        vItemSpace = 10;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class quiet_Bugatti_rouge_f {
        vItemSpace = 10;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class quiet_Bugatti_chrome_f {
        vItemSpace = 10;
        conditions = "";
        price = 5000000;
        textures[] = {};
    };
	
	class ivory_mp4 {
        vItemSpace = 10;
        conditions = "";
        price = 1400000;
        textures[] = {};
    };
	
	class Tal_Murci_Black {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_LightBlue {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Blue {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Green {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Grey {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Lime {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Orange {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Pink {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Purple {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_Red {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class Tal_Murci_White {
        vItemSpace = 10;
        conditions = "";
        price = 520000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_bleufonce {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_grise {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_noir {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_orange {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_rose {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class mrshounka_huracan_c_violet {
        vItemSpace = 10;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_veneno_c {
        vItemSpace = 10;
        conditions = "";
        price = 3600000;
        textures[] = {};
    };
	
	class Mrshounka_veneno_c_bleu {
        vItemSpace = 10;
        conditions = "";
        price = 3600000;
        textures[] = {};
    };
	
	class Mrshounka_veneno_c_jaune {
        vItemSpace = 10;
        conditions = "";
        price = 3600000;
        textures[] = {};
    };
	
	class Mrshounka_veneno_c_noir {
        vItemSpace = 10;
        conditions = "";
        price = 3600000;
        textures[] = {};
    };
	
	class IVORY_R8SPYDER {
        vItemSpace = 10;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class IVORY_R8 {
        vItemSpace = 10;
        conditions = "";
        price = 914000;
        textures[] = {};
    };
	
	class fox_787 {
        vItemSpace = 10;
        conditions = "";
        price = 1630000;
        textures[] = {};
    };
	
	class Fox_GT1 {
        vItemSpace = 10;
        conditions = "";
        price = 1970000;
        textures[] = {};
    };
	
	class ivory_veyron {
        vItemSpace = 10;
        conditions = "";
        price = 2300000;
        textures[] = {};
    };
	
	
	// CIV Supersport - Ende
	
	
	// CIV LKW - Anfang
	
	class SLB2k11_Scania_420_black {
        vItemSpace = 420;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class SLB2k11_Scania_420_blau {
        vItemSpace = 420;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class SLB2k11_Scania_420_orange {
        vItemSpace = 420;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class SLB2k11_Scania_420_weis {
        vItemSpace = 420;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	 class Jonzie_Box_Truck {
        vItemSpace = 480;
        conditions = "";
        price = 84000;
        textures[] = {};
    };
	
	class Jonzie_Flat_Bed {
        vItemSpace = 325;
        conditions = "";
        price = 47800;
        textures[] = {};
    };
	
	class Jonzie_Log_Truck {
        vItemSpace = 340;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Jonzie_Tanker_Truck {
        vItemSpace = 420;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	// CIV LKW - Ende
	
	// CIV Boot - Anfang
	
	class vvv_NewYacht {
        vItemSpace = 40;
        conditions = "";
        price = 5000000;
        textures[] = {};
    };
	
	// CIV Boot - Ende
	
	// CIV Flugzeug Anfang
	
	class sab_ultralight {
        vItemSpace = 1;
        conditions = "";
        price = 28050;
        textures[] = {};
    };
	
	class sab_ultralight_2 {
        vItemSpace = 1;
        conditions = "";
        price = 28050;
        textures[] = {};
    };
	
	class sab_ultralight_4 {
        vItemSpace = 1;
        conditions = "";
        price = 28050;
        textures[] = {};
    };
	
	class Sab_sea3_An2 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 280000;
        textures[] = {};
    };
	
	class Sab_sea2_An2 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 230000;
        textures[] = {};
    };
	
	class Sab_yel_An2 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 230000;
        textures[] = {};
    };
	
	class Sab_ca_An2 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 230000;
        textures[] = {};
    };
	
	    class Sab_tk_An2 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 230000;
        textures[] = {};
    };
	
	    class Sab_af_An2 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 230000;
        textures[] = {};
    };
	
	    class Sab_aeroc {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = {};
    };
	
	    class Sab_aeroc_3 {
        vItemSpace = 20;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = {};
    };
	
	    class Sab_737_2 {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 5500000;
        textures[] = {};
    };
	
	    class Sab_737_6 {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 5500000;
        textures[] = {};
    };
	
	
	// CIV Flugzeug Ende
	
	// CIV Heli Anfang
	
	
	
	class NH90 {
        vItemSpace = 25;
        conditions = "license_civ_helikopter || {!(playerSide isEqualTo civilian)}";
        price = 555050;
        textures[] = {};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 25;
        conditions = "license_civ_bigpilot || {!(playerSide isEqualTo civilian)}";
        price = 500000;
        textures[] = {};
    };
	
	class ivory_b206 {
        vItemSpace = 10;
        conditions = "license_civ_helikopter || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {};
    };
	
	
	// Fara Autos - Anfang
	
	class shounka_nemo_pompier {
        vItemSpace = 50;
        conditions = "";
        price = 150;
        textures[] = {};
    };
	
	class ivory_suburban_ems {
        vItemSpace = 50;
        conditions = "";
        price = 750;
        textures[] = {};
    };
	
    class Dacia_Duster_gn {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class c4h_gnb {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class Transit_gn {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class Mer_Vito_gn {
        vItemSpace = 50;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class depanren {
        vItemSpace = 75;
        conditions = "";
        price = 1000;
        textures[] = {};
    };
	
	class Jonzie_Tow_Truck {
        vItemSpace = 75;
        conditions = "";
        price = 1000;
        textures[] = {};
    };
	
	class Jonzie_Ambulance {
        vItemSpace = 75;
        conditions = "";
        price = 1500;
        textures[] = {};
    };
	
	class Bcas {
        vItemSpace = 75;
        conditions = "";
        price = 1500;
        textures[] = {};
    };
	
	class shounka_a3_suburbangign_pompier {
        vItemSpace = 75;
        conditions = "";
        price = 1500;
        textures[] = {};
    };
	
	// Fara Autos - Ende
	
	// Fara Helicopter - Anfang
	
	class EC635_ADAC {
        vItemSpace = 50;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	
	// Fara Helicopter - Ende
	
	// Fara Boot - Anfang
	
	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 50;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class B_Lifeboat {
        vItemSpace = 50;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	// Fara Boot - Ende
	
	//Cop Autos - Anfang	
    class FaisalAlYahya_CVPI_police {
        vItemSpace = 30;
        conditions = "";
        price = 1000;
        textures[] = {
            { "Polizei", "cop", {
			"textures\cvpi.paa"
            }, "" }
        };
    };
	
    class ivory_isf_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 1200;
        textures[] = {};
    };
	
	class Faisal_Youkun2015_PD {
        vItemSpace = 30;
        conditions = "";
        price = 1200;
        textures[] = {};
    };
	
    class ivory_rs4_marked {
        vItemSpace = 30;
        conditions = "";
        price = 1200;
        textures[] = {};
    };
	
    class ivory_rs4_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 1200;
        textures[] = {};
    };
	
	class DAR_ExplorerSheriff {
        vItemSpace = 35;
        conditions = "";
        price = 2500;
        textures[] = {};
    };
	
	class Mrshounka_ducati_police_p {
        vItemSpace = 10;
        conditions = "";
        price = 4500;
        textures[] = {};
    };
	
    class ivory_suburban_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
    class ivory_suburban_marked {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_tahoe {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
    class ivory_isf_marked {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_Volkswagen_Tourareg_police_police {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
    class ivory_evox_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	 class ivory_m3_marked {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_pol {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_pol2 {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_508gend {
        vItemSpace = 30;
        conditions = "";
        price = 1700;
        textures[] = {};
    };
	
	class shounka_a3_gendsprinter {
        vItemSpace = 100;
        conditions = "license_cop_ausbilder";
        price = 500;
        textures[] = {};
    };
	
	class shounka_a3_cliors_gend_civ {
        vItemSpace = 30;
        conditions = "";
        price = 250;
        textures[] = {};
    };
	
	class Mrshounka_bmw_gend {
        vItemSpace = 30;
        conditions = "";
        price = 4000;
        textures[] = {};
    };
	
	class zorak_audi_rs3_police {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {
            { "Polizei", "cop", {
			"textures\schwarz.jpg"
            }, "" }
        };
    };
	
    class ivory_evox_marked {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_suburbangign {
        vItemSpace = 30;
        conditions = "license_cop_swat";
        price = 3200;
        textures[] = {};
    };
	
    class ivory_wrx_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
    class ivory_wrx_marked {
        vItemSpace = 30;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	class shounka_a3_audiq7_v2_gendarmerie {
        vItemSpace = 30;
        conditions = "";
        price = 2700;
        textures[] = {};
    };
	
	class DAR_SWATPolice {
        vItemSpace = 40;
        conditions = "license_cop_swat";
        price = 5000;
        textures[] = {};
    };
	
	class shounka_a3_brinks_noir {
        vItemSpace = 40;
        conditions = "license_cop_swat";
        price = 5000;
        textures[] = {};
    };
	
	class vvv_HarleyDavidson_CustomBobber {
        vItemSpace = 30;
        conditions = "";
        price = 5000;
        textures[] = {};
    };
	// Cop Auto Ende
	
	// Cop FBI Autos - Anfang
		
	class ivory_evox_unmarked {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	class ivory_wrx_unmarked {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	class AMG_TahoePolice {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	class ivory_m3_unmarked {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	class ivory_rs4_unmarked {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	class ivory_suburban_unmarked {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	class zorak_audi_S8_police {
        vItemSpace = 30;
        conditions = "license_cop_fbi";
        price = 500;
        textures[] = {};
    };
	
	// Cop FBI Autos - Ende
	
	// Cop Heli Anfang
    class ivory_b206_RCMP {
        vItemSpace = 50;
        conditions = "";
        price = 3500;
        textures[] = {};
    };
	
	class EC635_Unarmed {
        vItemSpace = 50;
        conditions = "";
        price = 8000;
        textures[] = {};
    };
	
	class MELB_MH6M {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 5000;
        textures[] = {};
    };
	
	// Cop Heli Ende
	
	// Cop Boot - Anfang
	
	class B_CBS_WaterShadow730_F {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
    };
	
	// Cop Boot - Ende
	
    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 30;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            },"" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 10;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 140000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 5;
        conditions = "";
        price = 1000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 40;
        conditions = "license_civ_bigpilot || {!(playerSide isEqualTo civilian)}";
        price = 700000;
        textures[] = {};
    };
	
	 class O_Heli_Transport_04_F {
        vItemSpace = 30;
        conditions = "license_civ_bigpilot || {!(playerSide isEqualTo civilian)}";
        price = 2500000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 5;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 344000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 10;
        conditions = "";
        price = 344000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 10;
		conditions = "license_civ_helikopter || {!(playerSide isEqualTo civilian)}"
        price = 288000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 20;
        conditions = "license_civ_helikopter || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 470000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
};
