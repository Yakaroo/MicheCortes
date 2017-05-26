waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
    File: fn_statusBar.sqf
    Author: Some French Guy named Osef I presume, given the variable on the status bar
    Edited by: Darkwin Duck & Shriver Basdekis
	Keine Verwendung ohne Erlaubnis by Darkwin Duck & Shriver Basdekis
    Description: Puts a small bar in the bottom right of screen to display in-game information
*/

4 cutRsc ["osefStatusBarAdmin","PLAIN"];
 
[] spawn {
    sleep 5;
    _counter = 240;
    _timeSinceLastUpdate = 0;
    Server_Session = 14348;
    _statusText = "...";
    _gangName = "";
    while {true} do
    {
        TimeTillRestart = Server_Session - ServerTime;
        sleep 1;
        if(isNull ((uiNamespace getVariable "osefStatusBarAdmin")displayCtrl 55554)) then
        {
            diag_log "Statusbar Loaded";
            disableSerialization;
            _rscLayer = "osefStatusBarAdmin" call BIS_fnc_rscLayer;
            _rscLayer cutRsc["osefStatusBarAdmin","PLAIN"];
        };
        if(!isNil {group player getVariable "gang_name"}) then
        {
            _gangName = format["%1",group player getVariable "gang_name"];
        }
        else
        {
            _gangName = "";
        };
		_hunger = round(life_hunger);
		_thirst = round(life_thirst);
		_fps = format["%1", diag_fps];
        _counter = _counter - 1;
		_damage = round ((1 - (damage player)) * 100);
		_pp = life_currentPerkPoints;
		_explevel = life_currentExpLevel;
		_exp = life_currentExp;

		
		
		
        ((uiNamespace getVariable "osefStatusBarAdmin")displayCtrl 55554)ctrlSetStructuredText parseText format["<t color='#ffffff'>Hunger: %1</t>      |      <t color='#ffffff'>Durst: %2</t>      |      <t color='#ffffff'>Leben: %3</t>      |      <t color='#ffffff' >Bankkonto %4:</t>      |       <t color='#ffffff' >Bargeld: %5</t>      |      <t color='#ffffff'>PERK-Punkte: %6</t>      |      <t color='#ffffff'>EXP-Level: %7</t>      |      <t color='#ffffff'>EXP: %8</t>", _hunger,_thirst,_damage,[life_atmbank] call life_fnc_numberText,[life_cash] call life_fnc_numberText,_pp,_explevel,_exp];
    };
};