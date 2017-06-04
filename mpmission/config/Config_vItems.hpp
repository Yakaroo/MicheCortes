/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "pickaxe", "netz", "schaufel", "axt", "handschuhe", "fuelFull", "toolkit", "storagesmall", "storagebig", "waterBottle", "chips", "rabbit", "banana", "strawberry", "tbacon", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };
	
    class rebellen {
        name = "STR_Shops_Rebellen";
        side = "civ";
        license = "rebel";
        conditions = "";
        items[] = { "pickaxe", "netz", "schaufel", "axt", "lockpick", "zipties", "fuelFull", "toolkit", "waterBottle", "blindfold", "banana", "tbacon"};
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "banana", "strawberry", "tbacon", "toolkit", "fuelFull" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "banana", "strawberry", "tbacon", "lockpick", "pickaxe", "netz", "toolkit", "fuelFull", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "banana", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "pickaxe", "netz", "oil_processed", "schaufel", "axt", "fuelFull", "toolkit", "storagesmall", "storagebig", "waterBottle", "redgull", "rabbit", "banana", "tbacon", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };
	
	class undergroundDealer {
        name = "STR_Shops_UndergroundDealer";
        side = "civ";
        license = "lsd";
        conditions = "";
        items[] = { "lsd_processed" };
    };
	
	class tempeldisco {
        name = "STR_Shops_Tempeldisco";
        side = "civ";
        conditions = "";
        items[] = { "kotropfen", "lsd_processed" };
    };
	
	class metaltrader {
        name = "STR_Shops_Metal";
        side = "civ";
        conditions = "";
        items[] = { "copper_refined", "iron_refined", "goldbar" };
    };
	
	class seetraderlegal {
        name = "STR_Shops_Seetraderlegal";
        side = "civ";
        conditions = "";
        items[] = { "alpenmilch", "cornseeds" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };
	
    class bauernhof  {
        name = "STR_Shops_Bauernhof";
        side = "civ";
        conditions = "";
        items[] = { "getreide_unrefined", "mais_unrefined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_cut", "perle_refined" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };
	
    class tea {
        name = "STR_Shops_Tea";
        side = "civ";
        conditions = "";
        items[] = { "tea_refined" };
    };
	
    class kakao {
        name = "STR_Shops_Kakao";
        side = "civ";
        conditions = "";
        items[] = { "schokolade_refined" };
		
    };
	
	class kaffe {
        name = "STR_Shops_Kaffe";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "kaffepulver" };
		
    };
	
    class holz {
        name = "STR_Shops_holz";
        side = "civ";
        conditions = "";
        items[] = { "holzkohle_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };
	
    class redburger {
        name = "STR_Shops_redburger";
        side = "civ";
        conditions = "";
        items[] = { "burger", "steak", "brezenstange", "softdrink" };
    };
	
	class blueking {
        name = "STR_Shops_blueking";
        side = "civ";
        conditions = "";
        items[] = { "pizza", "bratwurst", "broetchen", "bloddymary" };
    };
	
	class wikibar {
        name = "STR_Shops_WikiBar";
        side = "civ";
        conditions = "";
        items[] = { "banana_juice", "strawberry_juice", "icecube", "kokosnussmilch" };
    };
	
	class seeds {
        name = "STR_Shops_seeds";
        side = "civ";
        conditions = "";
        items[] = { "maisseeds", "cornseeds" };
    };

	class pfand {
        name = "STR_Shops_pfand";
        side = "civ";
        conditions = "";
        items[] = { "pfandflasche" };
    };
	
	class zigarette {
        name = "STR_Shops_Zigarette";
        side = "civ";
        conditions = "";
        items[] = { "zigarette" };
    };
 
    class cop {
        name = "STR_Shops_Cop";
        side = "cop";

        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "redgull", "toolkit", "fuelFull", "defusekit", "lockpick" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
	
    class netz {
        variable = "netz";
        displayName = "STR_Item_netz";
        weight = 2;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_perlennetz.paa";
    };
	
    class schaufel {
        variable = "schaufel";
        displayName = "STR_Item_schaufel";
        weight = 2;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_schaufel.paa";
		
    };
	
    class axt {
        variable = "axt";
        displayName = "STR_Item_axt";
        weight = 2;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_axt.paa";
    };
	
    class schlauch {
        variable = "schlauch";
        displayName = "STR_Item_schlauch";
        weight = 2;
        buyPrice = 30;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_schlauch.paa";
    };
	
	class handschuhe {
        variable = "handschuhe";
        displayName = "STR_Item_Handschuhe";
        weight = 2;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_handschuhe.paa";
    };

// Medic
	
    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };
	
    class sid {
        variable = "sid";
        displayName = "STR_Item_sid";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sid.paa";
    };
	
    class antibiotika {
        variable = "antibiotika";
        displayName = "STR_Item_antibiotika";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_antibiotika.paa";
    };
	
    class pfandflasche {
        variable = "pfandflasche";
        displayName = "STR_Item_pfandflasche";
        weight = 1;
        buyPrice = -1;
        sellPrice = 290;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pfand.paa";
    };
	
    class bandage {
        variable = "bandage";
        displayName = "STR_Item_bandage";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_bandage.paa";
    };
	
    class diaet {
        variable = "diaet";
        displayName = "STR_Item_diaet";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diaet.paa";
    };
	
    class lolli {
        variable = "lolli";
        displayName = "STR_Item_lolli";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lolli.paa";
    };
	
    class medictee {
        variable = "medictee";
        displayName = "STR_Item_medictee";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_medictee.paa";
    };
	
    class pflaster {
        variable = "pflaster";
        displayName = "STR_Item_pflaster";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pflaster.paa";
    };
	
    class salbe {
        variable = "salbe";
        displayName = "STR_Item_salbe";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salbe.paa";
    };
	
    class schwerzmittel {
        variable = "schwerzmittel";
        displayName = "STR_Item_schwerzmittel";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_schwerzmittel.paa";
    };
	
    class skalpell {
        variable = "skalpell";
        displayName = "STR_Item_skalpell";
        weight = 1;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_skalpell.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 30;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 30;
        sellPrice = 30;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };
	
	class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 1;
        buyPrice = 1200;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ziptie.paa";
    };
	
	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 1;
        buyPrice = 600;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\blindfold.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 3;
        buyPrice = -1;
        sellPrice = 86;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };
	// Samen
    class appleseeds {
        variable = "appleseeds";
        displayName = "STR_Item_appleseeds";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_seeds.paa";
    };
	
    class peachseeds {
        variable = "peachseeds";
        displayName = "STR_Item_peachseeds";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_seeds.paa";
    };
	
    class cornseeds {
        variable = "cornseeds";
        displayName = "STR_Item_cornseeds";
        weight = 1;
        buyPrice = 60;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_seeds.paa";
    };
	
    class maisseeds {
        variable = "maisseeds";
        displayName = "STR_Item_maisseeds";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_seeds.paa";
    };
    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 2;
        buyPrice = 30;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
	
	class kakao_unrefined {
        variable = "kakaoUnrefined";
        displayName = "STR_Item_Kakao";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kakao.paa";
    };

    class schokolade_refined {
        variable = "schokoladeRefined";
        displayName = "STR_Item_Schokolade";
        weight = 2;
        buyPrice = 25;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        icon = "icons\ico_schokolade.paa";
		
    };
	
	class muschel_unrefined {
        variable = "muschelUnrefined";
        displayName = "STR_Item_muschelOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muschel.paa";
    };

    class perle_refined {
        variable = "perleRefined";
        displayName = "STR_Item_perle";
        weight = 1;
        buyPrice = 200;
        sellPrice = 145;
        illegal = false;
        edible = -1;
        icon = "icons\ico_perle.paa";
    };
	
	class holz_unrefined {
        variable = "holzUnrefined";
        displayName = "STR_Item_holzOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_holz.paa";
    };

    class holzkohle_refined {
        variable = "holzkohleRefined";
        displayName = "STR_Item_holzkohle";
        weight = 3;
        buyPrice = 4500;
        sellPrice = 3127;
        illegal = false;
        edible = -1;
        icon = "icons\ico_holzkohle.paa";
    };

	class getreide_unrefined {
        variable = "getreideUnrefined";
        displayName = "STR_Item_getreideOre";
        weight = 4;
        buyPrice = 4000;
        sellPrice = 3229;
        illegal = false;
        edible = -1;
        icon = "icons\ico_getreideOre.paa";
    };
	
	class mais_unrefined {
        variable = "maisUnrefined";
        displayName = "STR_Item_maisOre";
        weight = 3;
        buyPrice = 3200;
        sellPrice = 1629;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mais.paa";
    };
	
    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = 38;
        sellPrice = 32;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };
	
	class kokosnuss {
        variable = "kokosnuss";
        displayName = "STR_Item_Kokosnuss";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kokos.paa";
    };
	
	class kokosnussmilch {
        variable = "kokosnussmilch";
        displayName = "STR_Item_Kokosnussmilch";
        weight = 2;
        buyPrice = -1;
        sellPrice = 18;
        illegal = false;
        edible = 100;
        icon = "icons\ico_kokosmilch.paa";
    };
	
	class kohle {
        variable = "kohle";
        displayName = "STR_Item_Kohle";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kohle.paa";
    };
	
	class goldkies {
        variable = "goldKies";
        displayName = "STR_Item_GoldKies";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_goldKies.paa";
    };
	
	class goldnuggets {
        variable = "goldNuggets";
        displayName = "STR_Item_GoldNuggets";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_goldnuggets.paa";
    };
	
	class kartoffel {
        variable = "kartoffel";
        displayName = "STR_Item_Kartoffel";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kartoffel.paa";
    };
	
	class chips {
        variable = "chips";
        displayName = "STR_Item_Chips";
        weight = 1;
        buyPrice = 32;
        sellPrice = 26;
        illegal = false;
        edible = 5;
        icon = "icons\ico_chips.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = 6000;
        sellPrice = 4303;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = 3000;
        sellPrice = 2986;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = 500;
        sellPrice = 120;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 3;
        buyPrice = 3000;
        sellPrice = 2711;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class icecube {
        variable = "icecube";
        displayName = "STR_Item_Icecube";
        weight = 1;
        buyPrice = -1;
        sellPrice = 3;
        illegal = false;
        edible = 75;
        icon = "icons\ico_eiswuerfel.paa";
    };
	
	class tabakpflanze {
        variable = "tabakPflanze";
        displayName = "STR_Item_Tabakpflanze";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tabakpflanze.paa";
    };
	
	class tabak {
        variable = "tabak";
        displayName = "STR_Item_Tabak";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tabak.paa";
    };
	
	class zigarette {
        variable = "zigarette";
        displayName = "STR_Item_Zigarette";
        weight = 1;
        buyPrice = -1;
        sellPrice = 70;
        illegal = false;
        edible = -1;
        icon = "icons\ico_zigaretten.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 1;
        buyPrice = 220;
        sellPrice = 170;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 1;
        buyPrice = 150;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 1;
        buyPrice = 200;
        sellPrice = 160;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };
	
	class lsd_unprocessed {
        variable = "lsdUnprocessed";
        displayName = "STR_Item_LsdU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_frog.paa";
        processedItem = "lsd_processed";
    };
	
	class lsd_processed {
        variable = "lsdProcessed";
        displayName = "STR_Item_LsdP";
        weight = 3;
        buyPrice = 20000;
        sellPrice = 12500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lsd.paa";
    };
	
	class schlangen {
        variable = "schlangen";
        displayName = "STR_Item_Schlangen";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_schlangen.paa";
    };

    class schlangengift {
        variable = "schlangengift";
        displayName = "STR_Item_Schlangengift";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_schlangengift.paa";
    };

    class kotropfen {
        variable = "kotropfen";
        displayName = "STR_Item_Kotropfen";
        weight = 2;
        buyPrice = 200;
        sellPrice = 140;
        illegal = true;
        edible = 10;
        icon = "icons\ico_kotropfen.paa";
    };	

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 2;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 50;
        icon = "icons\ico_redgull.paa";
    };
	
	class banana_juice {
        variable = "bananaJuice";
        displayName = "STR_Item_Banana_Juice";
        weight = 2;
        buyPrice = 20;
        sellPrice = 15;
        illegal = false;
        edible = 50;
        icon = "icons\ico_bananaJuice.paa";
    };
	
	class strawberry_juice {
        variable = "strawberryJuice";
        displayName = "STR_Item_Strawberry_Juice";
        weight = 2;
        buyPrice = 22;
        sellPrice = 16;
        illegal = false;
        edible = 50;
        icon = "icons\ico_strawberryJuice.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 50;
        icon = "icons\ico_coffee.paa";
    };
	
	class alpenmilch {
        variable = "alpenmilch";
        displayName = "STR_Item_Alpenmilch";
        weight = 2;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = 50;
        icon = "icons\ico_alpenmilchfass.paa";
    };
	
	class softdrink {
        variable = "softdrink";
        displayName = "STR_Item_softdrink";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 50;
        icon = "icons\ico_softdrink.paa";
    };
	
	class bloddymary {
        variable = "bloddymary";
        displayName = "STR_Item_bloddymary";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 50;
        icon = "icons\ico_bloddymary.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 50;
        icon = "icons\ico_waterBottle.paa";
    };
	
	class quellwasser {
        variable = "quellwasser";
        displayName = "STR_Item_Quellwasser";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = 75;
        icon = "icons\ico_quellwasser.paa";
    };
	
	class kaffebohnen {
        variable = "kaffebohnen";
        displayName = "STR_Item_Kaffebohnen";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kaffebohnen.paa";
    };
	
	class kaffepulver {
        variable = "kaffepulver";
        displayName = "STR_Item_Kaffepulver";
        weight = 2;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kaffeepulver.paa";
    };

    //Food
    class banana {
        variable = "banana";
        displayName = "STR_Item_Banana";
        weight = 3;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = 25;
        icon = "icons\ico_banana.paa";
    };
	
	class strawberry {
        variable = "strawberry";
        displayName = "STR_Item_Strawberry";
        weight = 2;
        buyPrice = 12;
        sellPrice = 7;
        illegal = false;
        edible = 15;
        icon = "icons\ico_strawberry.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };
	
    class burger {
        variable = "burger";
        displayName = "STR_Item_burger";
        weight = 1;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = 40;                          
        icon = "icons\ico_burger.paa";
    };
	
	class steak {
        variable = "steak";
        displayName = "STR_Item_steak";
        weight = 1;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = 40;
        icon = "icons\ico_steak.paa";
    };
	
    class brezenstange {
        variable = "brezenstange";
        displayName = "STR_Item_brezenstange";
        weight = 1;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = 40;
        icon = "icons\ico_brezenstange.paa";
    };
	
    class pizza {
        variable = "piza";
        displayName = "STR_Item_pizza";
        weight = 1;
        buyPrice = 10;
        sellPrice = 10;
        illegal = false;
        edible = 40;
        icon = "icons\ico_pizza.paa";
    };
	
    class bratwurst {
        variable = "bratwurst";
        displayName = "STR_Item_bratwurst";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_bratwurst.paa";
    };
	
    class broetchen {
        variable = "broetchen";
        displayName = "STR_Item_broetchen";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_brötchen.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 15000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 25000;
        sellPrice = 23000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
	
	class sos {
        variable = "sos";
        displayName = "sos";
        weight = 1;
        buyPrice = 150;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\sos.paa";
    };
};