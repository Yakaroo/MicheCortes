#include "..\..\script_macros.hpp"
/*
    File: fn_repairTruck.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main functionality for toolkits, to be revised in later version.
*/
private ["_veh","_upp","_ui","_progress","_pgText","_cP","_displayName","_test","_sideRepairArray"];
_veh = cursorObject;
_vehicle = param [0,objNull,[objNull]];
life_interrupted = false;
if (isNull _veh) exitWith {};
if ((_veh isKindOf "Car") || (_veh isKindOf "Ship") || (_veh isKindOf "Air")) then {
    if (life_inv_toolkit > 0) then {
        life_action_inUse = true;
        _displayName = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _veh),"displayName");
        _upp = format [localize "STR_NOTF_Repairing",_displayName];

        //Setup our progress bar.
        disableSerialization;
        "progressBar" cutRsc ["life_progress","PLAIN"];
        _ui = uiNamespace getVariable "life_progress";
        _progress = _ui displayCtrl 38201;
        _pgText = _ui displayCtrl 38202;
        _pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
        _progress progressSetPosition 0.01;
        _cP = 0.01;
		
		playSound "repair";

        for "_i" from 0 to 1 step 0 do {
			if(animationState player != "InBaseMoves_repairVehiclePne") then {
				[player,"InBaseMoves_repairVehiclePne",true] remoteExec ["life_fnc_animSync",0];
				player switchMove "InBaseMoves_repairVehiclePne";
				player playMoveNow "InBaseMoves_repairVehiclePne";
			};

            sleep 0.27;
            _cP = _cP + 0.01;
            _progress progressSetPosition _cP;
            _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
            if (_cP >= 1) exitWith {};
            if (!alive player) exitWith {};
            if !(isNull objectParent player) exitWith {};
            if (life_interrupted) exitWith {};
        };

        life_action_inUse = false;
        "progressBar" cutText ["","PLAIN"];
        player playActionNow "stop";
        if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
        if !(isNull objectParent player) exitWith {titleText[localize "STR_NOTF_ActionInVehicle","PLAIN"];};

        _sideRepairArray = LIFE_SETTINGS(getArray,"vehicle_infiniteRepair");

		//Gibt Fara geld beim Reparieren
        if (playerSide isEqualTo independent or playerSide isEqualTo west) then {
		
            if (_vehicle in life_vehicles) then {
                hint "Du hast dein Eigenes Fahrzeug repariert & erhälst nun kein Geld !";
		    } else {
				["repair"] spawn mav_ttm_fnc_addExp;
				life_cash = life_cash + 500;
				hint "Du hast 500 € & 1 EXP für das reparieren eines Fahrzeugs bekommen !";
				
			};
		};
		
		//Gibt Civs XP
        if (playerSide isEqualTo civilian) then {
		
            if (_vehicle in life_vehicles) then {
                hint "Du hast dein Eigenes Fahrzeug repariert & erhälst nun keine EXP !";
		    } else {
				["repair"] spawn mav_ttm_fnc_addExp;
				hint "Du hast ein Farzeug eines anderen Bürgers repariert & erhäst nun EXP!";
				
			};
		};		
		
        //Check if playerSide has infinite repair enabled
        if (playerSide isEqualTo civilian && (_sideRepairArray select 0) isEqualTo 0) then {
            [false,"toolkit",1] call life_fnc_handleInv;
        };
        if (playerSide isEqualTo west && (_sideRepairArray select 1) isEqualTo 0) then {
            [false,"toolkit",1] call life_fnc_handleInv;
        };
        if (playerSide isEqualTo independent && (_sideRepairArray select 2) isEqualTo 0) then {
            [false,"toolkit",1] call life_fnc_handleInv;
        };
        if (playerSide isEqualTo east && (_sideRepairArray select 3) isEqualTo 0) then {
            [false,"toolkit",1] call life_fnc_handleInv;
        };

        _veh setDamage 0;
        titleText[localize "STR_NOTF_RepairedVehicle","PLAIN"];
    };
};
