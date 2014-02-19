private ["_clr","_newimg","_SPI","_display","_ctrl","_img","_null"];
_SPI = _this-1200;
disableSerialization;
_display = findDisplay 1200;
_ctrl = _display displayCtrl _this;
_img = ctrlText _ctrl;
_null = if (_SPI > 0) then
	{
	SPZ=_SPI;
	_newimg = if (_img == "addons\def.paa") then {"addons\sel.paa"} else {"addons\def.paa"};
	for "_i" from 1200 to 1216 do
		{
		_clr=_display displayctrl _i;
		_clr ctrlSetText "addons\def.paa";
		};
	_ctrl ctrlSetText "addons\clk.paa";
	sleep 0.2;
	_ctrl ctrlSetText _newimg;
	}
	else
	{
	SPM = if (_img == "Land") then {1} else {0};
	_newimg = if (_img == "Land") then {"HALO"} else {"Land"};
	_ctrl ctrlSetText _newimg;
	};
