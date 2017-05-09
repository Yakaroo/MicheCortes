#include "..\..\script_macros.hpp"
/*
 File: fn_copSiren3.sqf
 Author: Bryan "Tonic" Boardwine / ammorosh
 Description:
 Starts the cop siren sound for other players
*/
private["_vehicle"];
_vehicle = param [0,ObjNull,[ObjNull]];
if (isNull _vehicle) exitWith {};
if (isNil {_vehicle getVariable "siren3"}) exitWith {};
for "_i" from 0 to 1 step 0 do {
 if (!(_vehicle getVariable "siren3")) exitWith {};
 if (count crew _vehicle isEqualTo 0) then {_vehicle setVariable ["siren2",false,true]};
 if (!alive _vehicle) exitWith {};
 if (isNull _vehicle) exitWith {};
 _vehicle say3D "medicSiren3";//Class/name specified in description.ext
 sleep 3;//Exactly matches the length of the audio file.
 if (!(_vehicle getVariable "siren3")) exitWith {};
};