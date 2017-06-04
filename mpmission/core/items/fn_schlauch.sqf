/*
	Datei:	fn_schlauch.sqf
	Datum:   -
	Ersteller: "PSEUDONYM" Shriver Basdekis
	Kontakt: http://steamcommunity.com/profiles/76561198107872048/
	Disclaimer: Niemand ist berechtigt meine Scripts zu verwenden oder zu editieren, außer ICH gebe die Erlaubnis dazu !
	Ich behalte mir jederzeit das Recht die Erlaubnis zu entziehen.
	
	Beschreibung:
	Benzinschlauch
*/

private["_ui","_progress","_fahrzeug","_pgText","_cp","_this"];

_fahrzeug_aus_Garage = param [0,objNull,[objNull]];
_fahrzeug = cursorTarget;

	if (playerSide != civilian) exitWith { hint "Du bist kein Zivilist."; };
	if (player distance _fahrzeug > 3) exitWith { hint "Du bist zu weit vom Tank entfernt!"; };
	if (vehicle player != player) exitWith { hint "Nicht ausm Fahrzeug raus."; };
	if (isNull player OR isNull _fahrzeug) exitWith {};
	if (!(_fahrzeug isKindOF "LandVehicle") && !(_fahrzeug isKindOf "Air") && !(_fahrzeug isKindOf "Ship")) exitWith { hint "Kein Fahrzeug";};
	if (life_inv_FuelEmpty == 0) exitWith {	titleText["Du hast keinen Leeren Benzinkanister","PLAIN"]; }; 
	if (!alive player) exitWith {};
	
_absaugen = [
    localize "Willst du wirklich das Benzin des Fahrzeugs absaugen ?", // ToDo : Str Einträge machen ^^
    localize " ",
    localize "Ja",
    localize "Nein"
] call BIS_fnc_guiMessage;
	
if (_absaugen) then {
	
_ring = 1 + round(random 50);
_random = 1 + round(random 9);

if (_random == 2) then {[false,"schlauch",1] call life_fnc_handleInv; hint "Der Benzinschlauch ist abgebrochen"; };

life_action_inUse = true;

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Benzinschlauch anbringen (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do
{
            if(animationState player != "AinvPknlMstpsnonWnonDnon_medic_1" ) then 
            {
                player action ["SwitchWeapon", player, player, 100];   //by stolzerrabe
                player playMove "AinvPknlMstpsnonWnonDnon_medic_1";
                player playActionNow "stop";
                player playMove "AinvPknlMstpsnonWnonDnon_medic_1";
                player playActionNow "stop";
                player playMove "AinvPknlMstpsnonWnonDnon_medic_1";
            };
			
	sleep 0.2;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["Benzinschlauch anbringen (%1%2)...",round(_cP * 100),"%"];
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	if (!alive player) exitWith {};
	if (player distance _fahrzeug > 5) exitWith {hint "Du hast dich zu weit entfernt!"; 5 cutText ["","PLAIN"];};		
	if(_cP >= 1) exitWith {};
}; 

if (player distance _fahrzeug > 5) exitWith { hint "Du hast dich zu weit entfernt!";};

5 cutText ["","PLAIN"];

_tank = fuel _fahrzeug;
_tankMax = 0.3;
        
if(_tank <= _TankMax) exitWith { titleText["Das Fahrzeug hat zu wenig Benzin","PLAIN"]; };  

// ERFOLGREICH!
[false,"FuelEmpty",1] call life_fnc_handleInv;
[true,"FuelFull",1] call life_fnc_handleInv;

		//Gibt EXP fürs Benzin absaugen (Maverick)
        if (playerSide isEqualTo civilian) then {
		
            if (_fahrzeug_aus_Garage in life_vehicles) then {
                hint "Du hast von deinem eigenen Fahrzeug Benzin abgesaugt & erhälst nun kein EXP";
		    } else {
				["absuagen"] spawn mav_ttm_fnc_addExp;
				hint "Du hast 1 EXP für das Absaugen von Benzin bekommen !";
				
			};
		};
		
if (_ring == 2) then {[true,"ring",1] call life_fnc_handleInv; hint parseText format ["<t color='#FF0000'><t size='2'>Im Tank gefunden</t></t><br/><t color='#FFD700'><t size='1.5'>" + "</t></t><br/>Ehering"]; };

_fahrzeug setFuel 0.3;
sleep 1;

	titleText["Du hast Benzin abgesaugt! Sieh zu, dass du weg kommst.","PLAIN"];

life_action_inUse = false;

if(_random == 7) then { 
    // Effekte einschalten - Effect by stolzerrabe
    "chromAbberation" ppEffectEnable true;
    "radialBlur" ppEffectEnable true;
    "colorCorrections" ppEffectEnable true;
    hint "Du hast zu fest angesaugt und etwas Benzin verschluckt. Dir wird schlecht...";
    sleep 1;
    
    // Damage geben
    _damage = damage player;
    _damageNew = _damage + 0.15; // 15 HP schaden!
    player setdamage _damageNew; 
    sleep 1;
    
    "chromAberration" ppEffectAdjust[0,random 0.15, false];
    "chromAberration" ppEffectCommit 1; 
    "radialBlur" ppEffectAdjust [random 0.1,random 0.1,0.3,0.3];
    "radialBlur" ppEffectCommit 1;
    "colorCorrections" ppEffectAdjust[ 0.44, 0.76, 0.7, [0.1, -0.57, 0, 0.05],[1.8, 1.3, 0.3, 0.7],[0.2, 0.59, 0.11, 0]];
    "colorCorrections" ppEffectCommit 1;
    sleep 3;
    
    
    //Stoppe ppEffects
    "chromAberration" ppEffectAdjust [0,0,true];
    "chromAberration" ppEffectCommit 5;
    "colorCorrections" ppEffectAdjust[ 1, 1, 0, [0, 0, 0, 0],[1.8, 1.8, 0.3, 0.7],[0.2, 0.59, 0.11, 0]];
    "colorCorrections" ppEffectCommit 5;
    "radialBlur" ppEffectAdjust [0,0,0,0];
    "radialBlur" ppEffectCommit 5;
    sleep 3;
    //Deaktiviere ppEffects
    "chromAberration" ppEffectEnable false;
    "radialBlur" ppEffectEnable false;
    "colorCorrections" ppEffectEnable false;
};

[false,"schlauch",1] call life_fnc_handleInv;

} else { hint "Absaugen abgebrochen"; };

