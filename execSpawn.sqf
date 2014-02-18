
_SpAry = [[4444.03,4087.92,0],
		[6821.11,983.155,0],
		[7948.16,2263.27,0],
		[7196.71,3160.1,0],
		[8352.94,4730.57,0],
		[6812.41,4693.99,0],
		[6426.35,6157.17,0],
		[6355.85,7227.71,0],
		[5058.59,6422.73,0],
		[4136.85,8026.41,0],
		[1755.35,9141.12,0],
		[3404.76,6640.26,0],
		[4825.04,5113.48,0],
		[3112.96,4573.18,0],
		[5486.38,3784.54,0],
		[4720.98,2200.54,0],
		[2810.14,3400.8,0]];
SPS = -1;
cutText ["","BLACK OUT"];
_ok = createDialog "DRN_DIALOG";
waitUntil { SPS == 1};
if (!SPZ) then {SPZ = floor (random 16)};
_SPP = _SpAry select SPZ;
if (SPM) then
	{
		_position =[_SPP select 0,_SPP select 1,800];
		player setPosATL _position;
		player spawn BIS_fnc_halo;
		player setvelocity [0,120*0.8,0];
		player setdir 0;
	} else {
		_findSpot = true;
		_mkr = "";
		while {_findSpot} do {
			_counter = 0;
			while {_counter < 20 and _findSpot} do {
				_position = ([(_SPP),0,2000,10,0,2000,1] call BIS_fnc_findSafePos);
				_isNear = count (_position nearEntities ["Man",100]) == 0;
				_isZero = ((_position select 0) == 0) and ((_position select 1) == 0);
				//Island Check
				_pos 		= _position;
				_isIsland	= false;		//Can be set to true during the Check
				for [{_w=0},{_w<=150},{_w=_w+2}] do {
					_pos = [(_pos select 0),((_pos select 1) + _w),(_pos select 2)];
					if(surfaceisWater _pos) exitWith {
						_isIsland = true;
					};
				};
				if ((_isNear and !_isZero) || _isIsland) then {_findSpot = false};
				_counter = _counter + 1;
			};
		};
		_isZero = ((_position select 0) == 0) and ((_position select 1) == 0);
		_position = [_position select 0,_position select 1,0];
		diag_log("DEBUG: spawning new player at" + str(_position));
		if (!_isZero) then {
			player setPosATL _position;
		};
	};
cutText ["","BLACK IN"];