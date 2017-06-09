/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",3}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 20;
    };
	
	class kohle {
        MaterialsReq[] = {{"kohle",5}};
        MaterialsGive[] = {{"diamond_uncut",1}};
        Text = "STR_Process_Kohle";
        //ScrollText = "Press Coal";
        NoLicenseCost = 20;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 20;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",4}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 120;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",2}};
        MaterialsGive[] = {{"copper_refined",2}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 20;
    };
	
	class bananaJuice {
        MaterialsReq[] = {{"banana",3}};
        MaterialsGive[] = {{"banana_juice",1}};
        Text = "STR_Process_BananaJuice";
        //ScrollText = "Refine Bananas";
        NoLicenseCost = 20;
    };
	
	class strawberryJuice {
        MaterialsReq[] = {{"strawberry",4}};
        MaterialsGive[] = {{"strawberry_juice",1}};
        Text = "STR_Process_StrawberryJuice";
        //ScrollText = "Refine Strawberry";
        NoLicenseCost = 20;
    };
	
	class icecube {
        MaterialsReq[] = {{"quellwasser",1}};
        MaterialsGive[] = {{"icecube",1}};
        Text = "STR_Process_Icecube";
        //ScrollText = "freeze source water";
        NoLicenseCost = 2;
    };
	
	class tabak {
        MaterialsReq[] = {{"tabakpflanze",2}};
        MaterialsGive[] = {{"tabak",1}};
        Text = "STR_Process_Tabak";
        //ScrollText = "freeze source water";
        NoLicenseCost = -1;
    };
	
	class muscheln {
        MaterialsReq[] = {{"muschel_unrefined",1}};
        MaterialsGive[] = {{"perle_refined",1}};
        Text = "STR_Process_Muscheln";
        //ScrollText = "freeze source water";
        NoLicenseCost = 10;
    };
	
	class kokosnuss {
        MaterialsReq[] = {{"kokosnuss",2}};
        MaterialsGive[] = {{"kokosnussmilch",1}};
        Text = "STR_Process_Kokosnuss";
        //ScrollText = "freeze source water";
        NoLicenseCost = 10;
    };
	
	class zigarette {
        MaterialsReq[] = {{"tabak",2}};
        MaterialsGive[] = {{"zigarette",1}};
        Text = "STR_Process_Zigaretten";
        //ScrollText = "freeze source water";
        NoLicenseCost = 10;
    };
	
	class kaffee {
        MaterialsReq[] = {{"kaffebohnen",2}};
        MaterialsGive[] = {{"kaffepulver",1}};
        Text = "STR_Process_Kaffe";
        //ScrollText = "freeze source water";
        NoLicenseCost = 10;
    };
	
	class schlangengift {
        MaterialsReq[] = {{"schlangen",1}};
        MaterialsGive[] = {{"schlangengift",1}};
        Text = "STR_Process_Schlangen";
        //ScrollText = "freeze source water";
        NoLicenseCost = -1;
    };
	
	class kotropfen {
        MaterialsReq[] = {{"schlangengift",2}};
        MaterialsGive[] = {{"kotropfen",1}};
        Text = "STR_Process_Kotropfen";
        //ScrollText = "freeze source water";
        NoLicenseCost = 100;
    };
	
	class kakao {
        MaterialsReq[] = {{"kakao_unrefined",3}};
        MaterialsGive[] = {{"schokolade_refined",1}};
        Text = "STR_Process_Kakao";
        //ScrollText = "Refine Kakao";
        NoLicenseCost = 10;
    };
	
	class kartoffel {
        MaterialsReq[] = {{"kartoffel",6}};
        MaterialsGive[] = {{"chips",1}};
        Text = "STR_Process_Kartoffel";
        //ScrollText = "Refine Kartoffel";
        NoLicenseCost = 10;
    };
	
    class muschel {
        MaterialsReq[] = {{"muschel_unrefined",1}};
        MaterialsGive[] = {{"perle_refined",1}};
        Text = "STR_Process_Muschel";
        //ScrollText = "Refine muschel";
        NoLicenseCost = 10;
    };
	
	 class goldnuggets {
        MaterialsReq[] = {{"goldkies",1}};
        MaterialsGive[] = {{"goldnuggets",1}};
        Text = "STR_Process_Goldnuggets";
        //ScrollText = "Refine Gold Gravel";
        NoLicenseCost = 10;
    };
	
	class goldbar {
        MaterialsReq[] = {{"goldnuggets",4}};
        MaterialsGive[] = {{"goldbar",1}};
        Text = "STR_Process_Goldbar";
        //ScrollText = "Refine Goldnuggets";
        NoLicenseCost = 10;
    };
	
    class holz {
        MaterialsReq[] = {{"holz_unrefined",1}};
        MaterialsGive[] = {{"holzkohle_refined",1}};
        Text = "STR_Process_Holz";
        //ScrollText = "Refine Holz";
        NoLicenseCost = 10;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",3}};
        MaterialsGive[] = {{"iron_refined",2}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 10;
    };
	
    class silber {
        MaterialsReq[] = {{"silber_unrefined",1}};
        MaterialsGive[] = {{"silber_refined",1}};
        Text = "STR_Process_Silber";
        //ScrollText = "Refine Silber";
        NoLicenseCost = 10;
    };
	
    class tea {
        MaterialsReq[] = {{"tea_unrefined",1}};
        MaterialsGive[] = {{"tea_refined",1}};
        Text = "STR_Process_Tea";
        //ScrollText = "Refine Tea";
        NoLicenseCost = 10;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 10;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 10;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",4}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 100;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",6}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 100;
    };
	
	class lsd {
        MaterialsReq[] = {{"lsd_unprocessed",1}};
        MaterialsGive[] = {{"lsd_processed",1}};
        Text = "STR_Process_Lsd";
        //ScrollText = "Process Frogs";
        NoLicenseCost = 100;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 10;
    };
};
