#include "..\..\script_macros.hpp"
/*
    File: fn_removeLicenses.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Used for stripping certain licenses off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
    /*//Death while being wanted
    case 0: {
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("heroin","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("marijuana","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("cocaine","civ"),false];
    };

    //Jail licenses
    case 1: {
        missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
    };

    //Remove motor vehicle licenses
    case 2: {
        if (missionNamespace getVariable LICENSE_VARNAME("driver","civ") || missionNamespace getVariable LICENSE_VARNAME("pilot","civ") || missionNamespace getVariable LICENSE_VARNAME("trucking","civ") || missionNamespace getVariable LICENSE_VARNAME("boat","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("boat","civ"),false];
            hint localize "STR_Civ_LicenseRemove_1";
        };
    };

    //Killing someone while owning a gun license
    case 3: {
        if (missionNamespace getVariable LICENSE_VARNAME("gun","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
        }; */
		
    // Führerschein Lizenz
    case 10: {
        license_civ_driver = false;
        hint localize "STR_Civ_RevokeLicense_Driver";
    };
	
    // LKW Führerschein Lizenz
    case 11: {
        license_civ_truck = false;
        hint localize "STR_Civ_RevokeLicense_Truck";
    };
	
	// Helikopter Führerschein Lizenz
    case 12: {
        license_civ_helikopter = false;
        hint localize "STR_Civ_RevokeLicense_Helicopter";
    };
	
	// Gewerbepilot Führerschein Lizenz
    case 13: {
        license_civ_bigpilot = false;
        hint localize "STR_Civ_RevokeLicense_Bigpilot";
    };
 
    // Pilotenschein Lizenz
    case 14: {
        license_civ_air = false;
        hint localize "STR_Civ_RevokeLicense_Pilot";
    };
	
    // Bootsschein Lizenz
    case 15: {
        license_civ_boat = false;
        hint localize "STR_Civ_RevokeLicense_Boating";
    };
	
    // Taucherschein Lizenz
    case 16: {
        license_civ_dive = false;
        hint localize "STR_Civ_RevokeLicense_Diving";
    };
 
    // Taxischein Lizenz
    case 17: {
        license_civ_taxi = false;
        hint localize "STR_Civ_RevokeLicense_Taxi";
    };
	
	// Waffenschein Lizenz
    case 18: {
        license_civ_gun = false;
        hint localize "STR_Civ_RevokeLicense_Gun";
    };
 };
 
