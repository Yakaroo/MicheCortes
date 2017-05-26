class CfgGather {
    class Resources {

        class heroin_unprocessed {
            amount = 1;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 60;
        };

        class cocaine_unprocessed {
            amount = 1;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 60;
        };

        class cannabis {
            amount = 2;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 60;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 1;
            zones[] = { "copper_1" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 60;
        };
		
		class kakao_unrefined {
            amount = 1;
            zones[] = { "kakao_1" };
            item = "";
            mined[] = {"kakao_unrefined" };
            zoneSize = 60;
        };
		
		class banana {
            amount = 2;
            zones[] = { "banana_1", "banana_2" };
            item = "";
            mined[] = {"banana" };
            zoneSize = 60;
        };
		
		class strawberry {
            amount = 2;
            zones[] = { "strawberry_1" };
            item = "";
            mined[] = {"strawberry" };
            zoneSize = 60;
        };
		
		class quellwasser {
            amount = 2;
            zones[] = { "quellwasser_1" };
            item = "";
            mined[] = {"quellwasser" };
            zoneSize = 60;
        };
		
		class tabakpflanze {
            amount = 3;
            zones[] = { "tabakpflanze_1" };
            item = "";
            mined[] = {"tabakpflanze" };
            zoneSize = 6o;
        };
		
		class kartoffel {
            amount = 1;
            zones[] = { "kartoffel_1" };
            item = "";
            mined[] = {"kartoffel" };
            zoneSize = 60;
        };
		
		class kaffebohnen {
            amount = 2;
            zones[] = { "kaffebohnen_1" };
            item = "";
            mined[] = {"kaffebohnen" };
            zoneSize = 60;
        };

        class iron_unrefined {
            amount = 1;
            zones[] = { "iron_1" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 60;
        };
		
		 class kohle {
            amount = 1;
            zones[] = { "kohle_1" };
            item = "pickaxe";
            mined[] = { "kohle" };
            zoneSize = 60;
        };
		
		class goldkies {
            amount = 1;
            zones[] = { "goldkies_1" };
            item = "schaufel";
            mined[] = { "goldkies" };
            zoneSize = 60;
        };
		
		class muschel {
            amount = 1;
            zones[] = { "muschel_1" };
            item = "netz";
            mined[] = { "muschel_unrefined" };
            zoneSize = 60;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 60;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 60;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 60;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 60;
        };
		
		class schlangen {
            amount = 1;
            zones[] = { "schlangen_1" };
            item = "handschuhe";
            mined[] = { "schlangen" };
            zoneSize = 60;
        };
		
		class kokosnuss {
            amount = 1;
            zones[] = { "kokosnuss_1" };
            item = "";
            mined[] = { "kokosnuss" };
            zoneSize = 60;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 60;
        };
    };
};