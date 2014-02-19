Spawn-select
============

GUI spawn select for Dayz Panthera.  Works only for Panthera.

Place the files within your addons folder.

disable antihack.sqf (Just before the includes section) or place a fixed version of antihack.sqf with line 89 checking for  SPM=1
e.g if ((_speed > _topSpeed) && (alive player) && (SPM=1) etc etc

at the bottom of your init.sqf (after "#include "\z\addons\dayz_code\system\BIS_Effects\init.sqf") place;

waitUntil {!isNil ("PVDZE_plr_LoginRecord")};
if (dayzPlayerLogin2 select 2) then
{
    [] execVM "addons\execSpawn.sqf";
};

Next, at the bottom of your description.ext insert #include "addons\DRNdialogs.hpp"

The next step is within your server.pbo

Locate, server_playerSetup.sqf within the compiles folder, and look for dayzPlayerLogin2 = [_worldspace,_state]; (it's about line 236)

Change that to dayzPlayerLogin2 = [_worldspace,_state,_randomSpot];

Repack your PBOs (don't forget the path property for the server.pbo) and you're done.
