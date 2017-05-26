/*  
	Montrer son passeport   
@Author : Heimdall @AltisAurore.fr  
*/  

private["_target","_message"];  

_target = cursorTarget;  

if(!license_civ_swat) exitWith  
{  
    hint "Du bist nicht beim SWAT !)";  
};  

if( isNull _target) then {_target = player;};  

if( !(_target isKindOf "Man") ) then {_target = player;};  

if( !(alive _target) ) then {_target = player;};  

_message = format["<img size='10' color='#FFFFFF' image='core\papiere\polizei\swat_ausweiss.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1'>SWAT Department - Tanoa</t>", name player];  

[player, _message] remoteExec ["life_fnc_frame",_target];