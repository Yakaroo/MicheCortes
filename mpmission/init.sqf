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

[] execVM "core\markers\mapmarker1.sqf";

// [] execVM "core\cop\keycard.sqf"; 

[] execVM "dialog\function\statusBar.sqf";



ace_hearing_disableVolumeUpdate = true;

StartProgress = true;
