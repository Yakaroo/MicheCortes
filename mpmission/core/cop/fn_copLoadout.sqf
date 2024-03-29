/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "kenny_police1";
player addVest "jamie_black";
player addBackpack "tf_anprc155";

player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "tf_anprc148jem";

/* Polizei Karte */

player addItem "ARP_Objects_card_black_m";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
