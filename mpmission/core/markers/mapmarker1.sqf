_markername1="bar_1";
_terrainobjects1=nearestTerrainObjects [(getMarkerPos _markername1),[],(getmarkersize _markername1)select 0];
{hideObjectGlobal _x} foreach _terrainobjects1;