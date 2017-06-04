_markername="police1";
_terrainobjects=nearestTerrainObjects [(getMarkerPos _markername),[],(getmarkersize _markername)select 0];
{hideObjectGlobal _x} foreach _terrainobjects;

_markername1="bar_1";
_terrainobjects1=nearestTerrainObjects [(getMarkerPos _markername1),[],(getmarkersize _markername1)select 0];
{hideObjectGlobal _x1} foreach _terrainobjects1;