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
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" },
            { "C_Offroad_02_unarmed_F", "" } //Apex DLC
        };
    };
	
    class civ_freizeit {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "sga_hover_board", "" },
            { "dbo_CIV_ol_bike", " " },
            { "dbo_CIV_new_bike", " " }
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
            { "BRP_1969_White", "" },
            { "BRP_1969_Green", "" },
            { "BRP_1969_Black", "" },
            { "ivory_rs4_taxi", "" },
            { "ivory_rs4", "" },
            { "Audi_S8_F", "" },
            { "ivory_c", "" },
            { "Guillaume9545_Bmw_M5", "" },
            { "ivory_suburban", "" },
            { "AMG_Suburban2015", "" },
            { "ivory_isf", "" },
            { "C_Jas_MX5Miata11_F", "" },
            { "Jonzie_Quattroporte", "" },
            { "Xiphoid87_W222", "" }, //1
            { "C_Sal_nissan_gtr_2017_alt_F", "" },
            { "C_Sal_nissan_gtr_2017_whiteF_F", "" },
            { "C_Sal_nissan_gtr_2017_redW_F", "" },
            { "C_Sal_nissan_gtr_2017_F", "" },
            { "C_Sal_nissan_gtr_2017_Grey_F", "" },
            { "ivory_evox", "" },
            { "ivory_gt500", "" },
            { "ivory_wrx", "" },
            { "Jonzie_STI", "" }
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
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "NH90", "" }
        };
    };
	
	
	class civ_plane {
        side = "civ";
        conditions = "";
        vehicles[] = {
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
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
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
			{ "ivory_suburban_ems", "" },
            { "Dacia_Duster_gn", "" },
            { "c4h_gnb", "" },
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

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "ivory_m3_marked", "" },
			{ "ivory_rs4_marked", "call life_coplevel >= 2" },
            { "ivory_rs4_slicktop", "call life_coplevel >= 2" },
			{ "ivory_isf_slicktop", "call life_coplevel >= 3" },
            { "ivory_isf_marked", "call life_coplevel >= 3" },
			{ "ivory_suburban_slicktop", "call life_coplevel >= 4" },
            { "ivory_suburban_marked", "call life_coplevel >= 4" },
            { "ivory_evox_slicktop", "call life_coplevel >= 5" },
            { "ivory_evox_marked", "call life_coplevel >= 5" },
            { "ivory_wrx_slicktop", "call life_coplevel >= 6" },
            { "ivory_wrx_marked", "call life_coplevel >= 6" },
			{ "DAR_ExplorerSheriff", "call life_coplevel >= 7" },
			{ "FaisalAlYahya_CVPI_police", "call life_coplevel >= 8" },
			{ "Faisal_Youkun2015_PD", "call life_coplevel >= 8" }
        };
    };
	
	class cop_car_fbi {
        side = "cop";
        conditions = "fbi";
        vehicles[] = {
			{ "ivory_m3_unmarked", "" },
            { "ivory_isf_unmarked", "" },
            { "ivory_suburban_unmarked", "" },
            { "ivory_rs4_unmarked", "" },
            { "AMG_TahoePolice", "" },
            { "ivory_wrx_unmarked", "" },
            { "ivory_evox_unmarked", "" },
            { "ivory_wrx_unmarked", "" },
            { "", "" },
            { "", "" },
            { "", "" },
            { "", "" }
        };
    };
	
	class cop_swat {
        side = "cop";
        conditions = "swat";
        vehicles[] = {
            { "DAR_SWATPolice", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "ivory_b206_RCMP", "" },
            { "EC635_Unarmed", "" },
			{ "MELB_MH6M", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
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
	
	// CIV Freizeit Händler Anfang
    class dbo_CIV_ol_bike {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class dbo_CIV_new_bike {
        vItemSpace = 100;
        conditions = "";
        price = 600;
        textures[] = {};
    };
	
    class sga_hover_board {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	// CIV Freizeit Händler Ende
	
	// CIV Luxus Händler Anfang
	
    class Guillaume9545_Bmw_M5_Blanche {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_bleu {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_bleufonce {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_gris {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_jaune {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_Violette {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_VertFonce {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_Vert {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5_Rouge_fonce {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class Guillaume9545_Bmw_M5_noir {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_Orange {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_Blanche {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_bleu {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_bleufonce {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_gris {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_jaune {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_Violette {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_VertFonce {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class Guillaume9545_Shelby_Cobra_Vert {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_Rouge_fonce {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Shelby_Cobra_noir {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Faisal_MaybachLaundet57 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class BRP_1969_White {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class BRP_1969_Green {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class BRP_1969_Black {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_rs4_taxi {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_rs4 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class Audi_S8_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_c {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Guillaume9545_Bmw_M5 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_suburban {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class AMG_Suburban2015 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_isf {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class C_Jas_MX5Miata11_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class AMG_Charger_12 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Jonzie_Quattroporte {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class AMG_MercedesBenz6x6 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Xiphoid87_W222 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_alt_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_whiteF_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_redW_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class C_Sal_nissan_gtr_2017_Grey_F {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_evox {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class ivory_gt500 {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_wrx {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	    class Jonzie_STI {
        vItemSpace = 100;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	// CIV Luxus Händler Ende
	
	// CIV Flugzeug Anfang
	
	class Sab_sea3_An2 {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Sab_sea2_An2 {
        vItemSpace = 20;
        conditions = "";
        price = 380000;
        textures[] = {};
    };
	
	class Sab_yel_An2 {
        vItemSpace = 20;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	class Sab_ca_An2 {
        vItemSpace = 20;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	    class Sab_tk_An2 {
        vItemSpace = 20;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	    class Sab_af_An2 {
        vItemSpace = 20;
        conditions = "";
        price = 350000;
        textures[] = {};
    };
	
	    class Sab_aeroc {
        vItemSpace = 20;
        conditions = "";
        price = 5000030;
        textures[] = {};
    };
	
	    class Sab_aeroc_3 {
        vItemSpace = 20;
        conditions = "";
        price = 500000;
        textures[] = {};
    };
	
	    class Sab_737_2 {
        vItemSpace = 30;
        conditions = "";
        price = 5000000;
        textures[] = {};
    };
	
	    class Sab_737_6 {
        vItemSpace = 30;
        conditions = "";
        price = 5000000;
        textures[] = {};
    };
	
	
	// CIV Flugzeug Ende
	
	// CIV Heli Anfang
	
	
	
	class NH90 {
        vItemSpace = 25;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
	
	
	// Fara Autos - Anfang
	
	class ivory_suburban_ems {
        vItemSpace = 50;
        conditions = "";
        price = 500;
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
        price = 700;
        textures[] = {};
    };
	
	class Bcas {
        vItemSpace = 75;
        conditions = "";
        price = 700;
        textures[] = {};
    };
	
	// Fara Autos - Ende
	
	//Fara Helicopter - Anfang
	
	class EC635_ADAC {
        vItemSpace = 50;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
	
	
	//Fara Helicopter - Ende
	
	//Cop Autos - Anfang	
    class FaisalAlYahya_CVPI_police {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {
            { "Polizei", "cop", {
			"textures\cvpi.paa"
            }, "" }
        };
    };
	
    class ivory_isf_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class Faisal_Youkun2015_PD {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_rs4_marked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_rs4_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class DAR_ExplorerSheriff {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_suburban_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_suburban_marked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_isf_marked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_evox_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	 class ivory_m3_marked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class zorak_audi_rs3_police {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_evox_marked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_wrx_slicktop {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
    class ivory_wrx_marked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class DAR_SWATPolice {
        vItemSpace = 30;
        conditions = "";
        price = 5000;
        textures[] = {};
    };
	// Cop Auto Ende
	
	// Cop FBI Autos - Anfang
	
	class ivory_wrx_unmarked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class ivory_evox_unmarked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class ivory_wrx_unmarked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class AMG_TahoePolice {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class ivory_m3_unmarked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class ivory_rs4_unmarked {
        vItemSpace = 30;
        conditions = "";
        price = 500;
        textures[] = {};
    };
	
	class ivory_suburban_unmarked {
        vItemSpace = 30;
        conditions = "";
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
        conditions = "swat";
        price = 5000;
        textures[] = {};
    };
	
	// Cop Heli Ende
	
    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
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
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
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
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
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
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
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
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
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
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
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
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
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
