/*
	Datei:	Tankstelle
	Datum:   -
	Ersteller: "PSEUDONYM" Shriver Basdekis
	Kontakt: http://steamcommunity.com/profiles/76561198107872048/
	Disclaimer: Niemand ist berechtigt meine Scripts zu verwenden oder zu editieren, außer ICH gebe die Erlaubnis dazu !
	Ich behalte mir jederzeit das Recht die Erlaubnis zu entziehen.
	
	Beschreibung:
	
*/
private["_ui","_progress","_rell","_pgText","_cp","_this","_countCop","_kassa"];
_rell = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_countCop = (west countSide playableUnits);

	if (_countCop == 0) exitWith { hint "Zu wenig Polizisten im Staat. Es Fehlen 3 Polizisten"; };
	if (_countCop == 1) exitWith { hint "Zu wenig Polizisten im Staat. Es Fehlen 2 Polizisten"; };
	if (_countCop == 2) exitWith { hint "Zu wenig Polizisten im Staat. Es Fehlt 1 Polizist"; };
	if (playerSide != civilian) exitWith { hint "Du bist kein Zivilist."; };
	if (player distance _rell > 5) exitWith { hint "Du bist ziemlich weit wech!!"; };
	if (currentWeapon player == "") exitWith { hint "Mutig mutig, so ganz ohne Waffe"; };
	if (vehicle player != player) exitWith { hint "Nicht ausm Fahrzeug raus."; };
	if (isNull player OR isNull _rell) exitWith {};
	if (life_relltanke) exitWith { hint "Die Kasse ist leer."; };
	if (!alive player) exitWith {};

_t5 = [
    localize "STR_Global_Auftrag",
    localize "STR_Global_Schrift",
    localize "STR_Global_Geld",
    localize "STR_Global_happymeal"
] call BIS_fnc_guiMessage;
	
if (_t5) then {
	
life_relltanke = true;
publicVariable "life_relltanke";
	
_kassa = 50 + round(random 80);

[_rell,"moneybank"] remoteExec ["life_fnc_globalSoundClient",0];
[[1,2],"Die Rell-Tankstelle wird ausgeraubt !!!"] remoteExec ["life_fnc_broadcast",west];

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Du raubst die Rell-Tankstelle aus (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do
{
	uisleep 2.2;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["Du raubst die Rell-Tankstelle aus (%1%2)...",round(_cP * 100),"%"];
	
		_Pos = position player; // by ehno: get player pos
		_marker = createMarker ["Marker200", _Pos]; //by ehno
		"Marker200" setMarkerColor "ColorRed";
		"Marker200" setMarkerText "Tankstellenüberfall";
		"Marker200" setMarkerType "mil_warning";
		"Marker200" setMarkerShape "ELLIPSE"; 
		"Marker200" setMarkerSize [250, 250];
		
		_marker = createMarker ["Marker900", _Pos];
		"Marker900" setMarkerColor "ColorRed";
		"Marker900" setMarkerText " Überfall";
		"Marker900" setMarkerType "mil_warning";	
	
	if (!alive player) exitWith {};
	if (player distance _rell > 5) exitWith {hint "Du hast dich zu weit entfernt!"; 5 cutText ["","PLAIN"];life_relltanke = false; publicVariable "life_relltanke";deleteMarker "Marker200"; deleteMarker "Marker900";};		
	if(_cP >= 1) exitWith {};
}; 

if (player distance _rell > 5) exitWith { hint "Du hast dich zu weit entfernt!";life_relltanke = false;publicVariable "life_relltanke";deleteMarker "Marker200"; deleteMarker "Marker900";};

5 cutText ["Du hast die Rell-Tankstelle erfolgreich ausgeraubt!","PLAIN"];
life_cash = life_cash + _kassa;
deleteMarker "Marker200"; deleteMarker "Marker900";


uisleep 600;

life_relltanke = false;
publicVariable "life_relltanke";

};
