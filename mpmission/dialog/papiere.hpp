/*
	Datei:	dialog
	Datum:   -
	Ersteller: "PSEUDONYM" Shriver Basdekis
	Kontakt: http://steamcommunity.com/profiles/76561198107872048/
	Disclaimer: Niemand ist berechtigt meine Scripts zu verwenden oder zu editieren, außer ICH gebe die Erlaubnis dazu !
	Ich behalte mir jederzeit das Recht die Erlaubnis zu entziehen.
	
	Beschreibung:
	
*/
class life_papiere {
	idd = 41000;
	name= "ausweis";
	movingEnable = false;
	enableSimulation = true;
	
	class controls {
		
		class H_choose_background : Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.05;
			w = 0.8;
			h = 0.84;
		};
		
		class H_choose_head : Life_RscText {
			colorBackground[] = {0, 0, 0.3, 1};
			text = "";
			idc = 41013;
			x = 0.1;
			y = 0;
			w = 0.8;
			h = 0.04;
		};
		
		class H_choose_pic1: Life_RscActiveText {
			idc = 41001;
			style = 48;
			text = "Textures\papiere\ausweiss.paa";
			x = 0.11;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Ausweiss zeigen";
			action = "[] call life_fnc_ausweiss; closeDialog 0;";
		};
		
		class H_choose_pic2: Life_RscActiveText {
			idc = 41002;
			style = 48;
			text = "Textures\papiere\pkw.paa";
			x = 0.31;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "PKW Führerschein zeigen";
			action = "[] call life_fnc_pkw; closeDialog 0;";
		};
		
		class H_choose_pic3: Life_RscActiveText {
			idc = 41003;
			style = 48;
			text = "Textures\papiere\lkw.paa";
			x = 0.51;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "LKW Führerschein zeigen";
			action = "[] call life_fnc_lkw; closeDialog 0;";
		};
		
		class H_choose_pic4: Life_RscActiveText {
			idc = 41004;
			style = 48;
			text = "Textures\papiere\helikopter.paa";
			x = 0.71;
			y = 0.06;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Helikopterschein zeigen";
			action = "[] call life_fnc_helikopter; closeDialog 0;";
		};
		
		class H_choose_pic5: Life_RscActiveText {
			idc = 41005;
			style = 48;
			text = "Textures\papiere\flugzeuge.paa";
			x = 0.11;
			y = 0.32;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Flugschein zeigen";
			action = "[] call life_fnc_flugzeug; closeDialog 0;";
		};
		
		class H_choose_pic6: Life_RscActiveText {
			idc = 41006;
			style = 48;
			text = "Textures\papiere\waffenschein.paa";
			x = 0.31;
			y = 0.32;
			w = 0.18;
			h = 0.18 * (4 / 3);
			tooltip = "Waffenschein zeigen";
			action = "[] call life_fnc_waffenschein; closeDialog 0;";
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

