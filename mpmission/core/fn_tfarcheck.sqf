//TFAR - Task Force Radio - ChannelCheck:


[] spawn
{
private["_ChannelName","_ServerName","_isTeamSpeakPluginEnabled"];
sleep 5;
while{true}do
{
_ChannelName = call TFAR_fnc_getTeamSpeakChannelName;
_ServerName = call TFAR_fnc_getTeamSpeakServerName;
_isTeamSpeakPluginEnabled = call TFAR_fnc_isTeamSpeakPluginEnabled;

_DarfNixSehen = false;
_IstAdmin = ((call life_adminlevel) > 0);
_WhiteListedChannels = ["Task Force Radio", "➤ Support 1", "➤ Support 2", "Warteraum", "✪ WARTEHALLE | 1st-Level-Support", "✪ WARTEHALLE | 2nd-Level-Support", "✪ WARTEHALLE | 3rd-Level-Support", "➤ Support 3"];

if(!_IstAdmin && _ServerName != "michecortes.de - Twitch & Gaming Community"	)then{_DarfNixSehen = true;};
if(!_IstAdmin &&	!(_ChannelName in _WhiteListedChannels) )then{_DarfNixSehen = true;};
if(!_IstAdmin &&	!_isTeamSpeakPluginEnabled )then{_DarfNixSehen = true;};

if(_DarfNixSehen)	then{cutText["Falscher Channel/Server oder Plugin Disabled","BLACK FADED"];}
else{cutText ["","PLAIN"];};
sleep 1;
};
};

