/*
Autor : Maximum
Umgeschrieben in 4.4r3+ : powerafro
*/
private ["_backupmsg"];
_msgBck = format["SOS! Officer %1 Ben�tigt dringend Hilfe %2 !", name player, getPos player];
[0,"%1 ben�tigt dringende Unterst�tzung!",true,[profileName]] remoteExec ["life_fnc_broadcast",west];
[ObjNull,_msgBck,player,1] remoteExec ["TON_fnc_handleMessages"];
_backupmsg = createMarker [("_backupmsg" + name player), getPos player];
_backupmsg setmarkertype "mil_warning";
_backupmsg setmarkercolor "colorRed";
_backupmsg setmarkertext format ["Officer in Not",name player];
sleep 60;
deletemarker _backupmsg;
hint "Marker wurde entfernt";
sleep 320;
hint format ["%1, Du kannst jetzt Verst�rkung rufen",name player];