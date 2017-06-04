/*
	Datei:	dialog
	Datum:   -
	Ersteller: "PSEUDONYM" Shriver Basdekis
	Kontakt: http://steamcommunity.com/profiles/76561198107872048/
	Disclaimer: Niemand ist berechtigt meine Scripts zu verwenden oder zu editieren, außer ICH gebe die Erlaubnis dazu !
	Ich behalte mir jederzeit das Recht die Erlaubnis zu entziehen.
	
	Beschreibung:
	
*/
class Life_jobcaffe
{
	idd = 440;
	movingEnable = 0;
	enableSimulation = 1;

	class controlsBackground {
		class InventoryBack:Life_RscPicture {
			text = "textures\UI\jobcaffe.paa";
			idc = -1;
			x = 0.0978125 * safezoneW + safezoneX;
			y = -0.05 * safezoneH + safezoneY;
			w = 0.825 * safezoneW;
			h = 1.1 * safezoneH;
		};
	};

	class controls
	{

		class CloseBtn : Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "$STR_Global_Close";

			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
		};
		
		class Ablehnen : Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			x = 0.295812 * safezoneW + safezoneX;
			y = 0.72275 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.03245 * safezoneH;
			tooltip = "Ablehnen";

			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
		};

		class annehmen : life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "closeDialog 0; [] call life_fnc_caffeannhemen; ";
			x = 0.445138 * safezoneW + safezoneX;
			y = 0.72275 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.03245 * safezoneH;
			tooltip = "Job Annehmen";

			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorBackground2[] = {0,0,0,0};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
		};
	};
};