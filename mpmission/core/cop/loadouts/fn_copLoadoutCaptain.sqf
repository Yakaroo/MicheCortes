#include "..\..\script_macros.hpp"
/*
 File: fn_copLoadout.sqf
 Author: Bryan "Tonic" Boardwine
 Edited: Itsyuka
 Description:
 Loads the cops out with the default gear.
*/

private["_handle","_price"];
_price = 6000;

if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith { hint "Du bist kein Polizeibeamter!" };
if ((BANK < _price) && (CASH < _price)) exitWith { hint "Du hast nicht genügend Geld" };
if (FETCH_CONST(life_coplevel) != 6) exitWith { hint "Du hast nicht den Rang Captain!" };


_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "kenny_sheriff";
player addBackpack "tf_anprc155";


/* TAZER */
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";

/* SCHARFE WAFFE */
player addWeapon "R3F_Famas_surb";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";
player addMagazine "R3F_30Rnd_556x45_FAMAS";


/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

/* ACE Items */
player addItem "ARP_Objects_card_black_m";
player addItem "ACE_EarPlugs";
player addItem "ACE_CableTie";
player addItem "ACE_CableTie";
player addItem "ACE_CableTie";
player addItem "ACE_CableTie";
player addItem "ACE_CableTie";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_fieldDressing";
player addItem "ACE_quikclot";
player addItem "ACE_quikclot";
player addItem "ACE_quikclot";
player addItem "ACE_quikclot";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_elasticBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_packingBandage";
player addItem "ACE_tourniquet";




/* Dafür wirst du noch bezahlen */
If (CASH >= 3000) then { CASH = CASH - _price } else { BANK = BANK - 3000 };
hint "Vielen Dank für Ihren Einkauf!";
 


[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;