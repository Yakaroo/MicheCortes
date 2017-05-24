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
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 9000;
    };
	
	class kohle {
        MaterialsReq[] = {{"kohle",6}};
        MaterialsGive[] = {{"diamond_uncut",1}};
        Text = "STR_Process_Kohle";
        //ScrollText = "Press Coal";
        NoLicenseCost = 5000;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 6000;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 15000;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",3}};
        MaterialsGive[] = {{"copper_refined",2}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 800;
    };
	
	class bananaJuice {
        MaterialsReq[] = {{"banana",4}};
        MaterialsGive[] = {{"banana_juice",1}};
        Text = "STR_Process_BananaJuice";
        //ScrollText = "Refine Bananas";
        NoLicenseCost = 400;
    };
	
	class strawberryJuice {
        MaterialsReq[] = {{"strawberry",4}};
        MaterialsGive[] = {{"strawberry_juice",1}};
        Text = "STR_Process_StrawberryJuice";
        //ScrollText = "Refine Strawberry";
        NoLicenseCost = 400;
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
	
	class zigarette {
        MaterialsReq[] = {{"tabak",2}};
        MaterialsGive[] = {{"zigarette",1}};
        Text = "STR_Process_Zigaretten";
        //ScrollText = "freeze source water";
        NoLicenseCost = 3000;
    };
	
	class kaffee {
        MaterialsReq[] = {{"kaffebohnen",4}};
        MaterialsGive[] = {{"kaffepulver",1}};
        Text = "STR_Process_Kaffe";
        //ScrollText = "freeze source water";
        NoLicenseCost = 400;
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
        NoLicenseCost = 1000;
    };
	
	class kakao {
        MaterialsReq[] = {{"kakao_unrefined",2}};
        MaterialsGive[] = {{"schokolade_refined",1}};
        Text = "STR_Process_Kakao";
        //ScrollText = "Refine Kakao";
        NoLicenseCost = 550;
    };
	
	class kartoffel {
        MaterialsReq[] = {{"kartoffel",6}};
        MaterialsGive[] = {{"chips",1}};
        Text = "STR_Process_Kartoffel";
        //ScrollText = "Refine Kartoffel";
        NoLicenseCost = 550;
    };
	
    class muschel {
        MaterialsReq[] = {{"muschel_unrefined",1}};
        MaterialsGive[] = {{"perle_refined",1}};
        Text = "STR_Process_Muschel";
        //ScrollText = "Refine muschel";
        NoLicenseCost = 18000;
    };
	
	 class goldnuggets {
        MaterialsReq[] = {{"goldkies",1}};
        MaterialsGive[] = {{"goldnuggets",1}};
        Text = "STR_Process_Goldnuggets";
        //ScrollText = "Refine Gold Gravel";
        NoLicenseCost = 800;
    };
	
	class goldbar {
        MaterialsReq[] = {{"goldnuggets",8}};
        MaterialsGive[] = {{"goldbar",1}};
        Text = "STR_Process_Goldbar";
        //ScrollText = "Refine Goldnuggets";
        NoLicenseCost = 800;
    };
	
    class holz {
        MaterialsReq[] = {{"holz_unrefined",1}};
        MaterialsGive[] = {{"holzkohle_refined",1}};
        Text = "STR_Process_Holz";
        //ScrollText = "Refine Holz";
        NoLicenseCost = 7000;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",4}};
        MaterialsGive[] = {{"iron_refined",2}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 800;
    };
	
    class silber {
        MaterialsReq[] = {{"silber_unrefined",1}};
        MaterialsGive[] = {{"silber_refined",1}};
        Text = "STR_Process_Silber";
        //ScrollText = "Refine Silber";
        NoLicenseCost = 6900;
    };
	
    class tea {
        MaterialsReq[] = {{"tea_unrefined",1}};
        MaterialsGive[] = {{"tea_refined",1}};
        Text = "STR_Process_Tea";
        //ScrollText = "Refine Tea";
        NoLicenseCost = 5000;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 8000;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 13000;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 15000;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 15000;
    };
	
	class lsd {
        MaterialsReq[] = {{"lsd_unprocessed",1}};
        MaterialsGive[] = {{"lsd_processed",1}};
        Text = "STR_Process_Lsd";
        //ScrollText = "Process Frogs";
        NoLicenseCost = 999999;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 3900;
    };
};
