/*  
@Author : Heimdall @AltisAurore.fr  
*/  

private["_target","_message"];  

_target = cursorTarget;  

if( isNull _target) then {_target = player;};  

if( !(_target isKindOf "Man") ) then {_target = player;};  

if( !(alive _target) ) then {_target = player;};  

_message = format["<img size='10' color='#FFFFFF' image='core\papiere\scheine\ausweiss.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1'>Bürger von Tanoa</t>", name player];  

[player, _message] remoteExec ["life_fnc_frame",_target];