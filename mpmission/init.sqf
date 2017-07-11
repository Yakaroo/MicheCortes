/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

[] execVM "core\markers\mapmarker.sqf";
[] execVM "core\cop\keycard.sqf"; 


[] execVM "core\admin\antihack.sqf"; 


ace_hearing_disableVolumeUpdate = true;

StartProgress = true;
