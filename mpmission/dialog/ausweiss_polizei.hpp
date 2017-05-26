class life_polizei {
	idd = 47000;
	name= "ausweis";
	movingEnable = false;
	enableSimulation = true;
	
	class controls {
		
		class H_chouse_background : Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.05;
			w = 0.8;
			h = 0.84;
		};
		
		class H_chouse_head : Life_RscText {
			colorBackground[] = {0, 0, 0.3, 1};
			text = "";
			idc = 41456;
			x = 0.1;
			y = 0;
			w = 0.8;
			h = 0.04;
		};
		
		class H_chouse_pic1: Life_RscActiveText {
			idc = 410531;
			style = 48;
			text = "Textures\papiere\ausweiss.paa";
			x = 0.11;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Zivilausweiss zeigen";
			action = "[] call life_fnc_ausweiss; closeDialog 0;";
		};
		
		class H_chouse_pic2: Life_RscActiveText {
			idc = 41242;
			style = 48;
			text = "Textures\papiere\polizei\polizei.paa";
			x = 0.31;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Polizeiausweiss zeigen";
			action = "[] call life_fnc_polizeiausweiss; closeDialog 0;";
		};
		
		class H_chouse_pic3: Life_RscActiveText {
			idc = 413453;
			style = 48;
			text = "Textures\papiere\polizei\fbi.paa";
			x = 0.51;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Fbiausweiss zeigen";
			action = "[] call life_fnc_fbiausweiss; closeDialog 0;";
		};
		
		class H_chouse_pic4: Life_RscActiveText {
			idc = 41764;
			style = 48;
			text = "Textures\papiere\polizei\swat.paa";
			x = 0.71;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Swatausweiss zeigen";
			action = "[] call life_fnc_swatausweiss; closeDialog 0;";
		};
		
		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "Schließen";
			onButtonClick = "closeDialog 0;";
			x = 0.7;
			y = 0.9;
			w = 0.2;
			h = 0.04;
		};
	}; 
};

