class RscButton
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {0.8784,0.8471,0.651,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {1,0.537,0,0.5};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBackgroundActive[] = {1,0.537,0,1};
	colorFocused[] = {1,0.537,0,1};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class DRN_DIALOG
{
	idd=1200;
	movingenable=true;
	class Controls
	{
	class SPGUI : RscPicture
	{
		idc = -1;
		text = "addons\map.paa";
		x = 0.35544 * safezoneW + safezoneX;
		y = 0.268125 * safezoneH + safezoneY;
		w = 0.279458 * safezoneW;
		h = 0.468875 * safezoneH;
	};
	class spimg : RscPicture
	{
		idc=-1;
		text = "";
		x = 0;
		y = 0;
		w = 0.0118254 * safezoneW;
		h = 0.0169998 * safezoneH;
	};
	class spimg0 : spimg
	{
		idc = 1200;
		text = "addons\sel.paa";
		x = 0.546494 * safezoneW + safezoneX;
		y = 0.295 * safezoneH + safezoneY;
		
	};
	class spimg1 : spimg
	{
		idc = 1201;
		text = "addons\def.paa";
		x = 0.54962 * safezoneW + safezoneX;
		y = 0.69625 * safezoneH + safezoneY;
	};
	class spimg2 : spimg
	{
		idc = 1202;
		text = "addons\def.paa";
		x = 0.580095 * safezoneW + safezoneX;
		y = 0.635 * safezoneH + safezoneY;
	};
	class spimg3 : spimg
	{
		idc = 1203;
		text = "addons\def.paa";
		x = 0.559778 * safezoneW + safezoneX;
		y = 0.586875 * safezoneH + safezoneY;
	};
	class spimg4 : spimg
	{
		idc = 1204;
		text = "addons\def.paa";
		x = 0.59416 * safezoneW + safezoneX;
		y = 0.50625 * safezoneH + safezoneY;
	};
	class spimg5 : spimg
	{
		idc = 1205;
		text = "addons\def.paa";
		x = 0.548838 * safezoneW + safezoneX;
		y = 0.513125 * safezoneH + safezoneY;
	};
	class spimg6 : spimg
	{
		idc = 1206;
		text = "addons\def.paa";
		x = 0.541805 * safezoneW + safezoneX;
		y = 0.4425 * safezoneH + safezoneY;
	};
	class spimg7 : spimg
	{
		idc = 1207;
		text = "addons\def.paa";
		x = 0.542196 * safezoneW + safezoneX;
		y = 0.395 * safezoneH + safezoneY;
	};
	class spimg8 : spimg
	{
		idc = 1208;
		text = "addons\def.paa";
		x = 0.496875 * safezoneW + safezoneX;
		y = 0.428125 * safezoneH + safezoneY;
	};
	class spimg9 : spimg
	{
		idc = 1209;
		text = "addons\def.paa";
		x = 0.473432 * safezoneW + safezoneX;
		y = 0.355625 * safezoneH + safezoneY;
	};
	class spimg10 : spimg
	{
		idc = 1210;
		text = "addons\def.paa";
		x = 0.399589 * safezoneW + safezoneX;
		y = 0.300625 * safezoneH + safezoneY;
	};
	class spimg11 : spimg
	{
		idc = 1211;
		text = "addons\def.paa";
		x = 0.451162 * safezoneW + safezoneX;
		y = 0.423125 * safezoneH + safezoneY;
	};
	class spimg12 : spimg
	{
		idc = 1212;
		text = "addons\def.paa";
		x = 0.491014 * safezoneW + safezoneX;
		y = 0.4925 * safezoneH + safezoneY;
	};
	class spimg13 : spimg
	{
		idc = 1213;
		text = "addons\def.paa";
		x = 0.443348 * safezoneW + safezoneX;
		y = 0.52125 * safezoneH + safezoneY;
	};
	class spimg14 : spimg
	{
		idc = 1214;
		text = "addons\def.paa";
		x = 0.510158 * safezoneW + safezoneX;
		y = 0.55625 * safezoneH + safezoneY;
	};
	class spimg15 : spimg
	{
		idc = 1215;
		text = "addons\def.paa";
		x = 0.487888 * safezoneW + safezoneX;
		y = 0.6325 * safezoneH + safezoneY;
	};
	class spimg16 : spimg
	{
		idc = 1216;
		text = "addons\def.paa";
		x = 0.43358 * safezoneW + safezoneX;
		y = 0.57375 * safezoneH + safezoneY;
	};
	class spbtn : RscButton
	{
		w = 0.00987168 * safezoneW;
		h = 0.015125 * safezoneH;
		colorText[] = {0,0,0,0};
		colorBackground[] = {0,0,0,0};
		colorFocused[] = {0,0,0,0};
		colorBackgroundActive[] = {0,0,0,0};
		colorDisabled[] = {0,0,0,0};
		colorBackgroundDisabled[] = {0,0,0,0};
		colorShadow[] = {0,0,0,0};
		tooltip = "Spawn here";
	};
	class spbtn0: spbtn
	{
		idc = 1616;
		x = 0.546494 * safezoneW + safezoneX;
		y = 0.295 * safezoneH + safezoneY;
		action = "1200 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn1: spbtn
	{
		idc = 1600;
		x = 0.54962 * safezoneW + safezoneX;
		y = 0.69625 * safezoneH + safezoneY;
		action = "1201 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn2: spbtn
	{
		idc = 1601;
		x = 0.580485 * safezoneW + safezoneX;
		y = 0.63375 * safezoneH + safezoneY;
		action = "1202 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn3: spbtn
	{
		idc = 1602;
		x = 0.560559 * safezoneW + safezoneX;
		y = 0.586875 * safezoneH + safezoneY;
		action = "1203 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn4: spbtn
	{
		idc = 1603;
		x = 0.59455 * safezoneW + safezoneX;
		y = 0.505625 * safezoneH + safezoneY;
		action = "1204 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn5: spbtn
	{
		idc = 1604;
		x = 0.548447 * safezoneW + safezoneX;
		y = 0.5125 * safezoneH + safezoneY;
		action = "1205 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn6: spbtn
	{
		idc = 1605;
		x = 0.541806 * safezoneW + safezoneX;
		y = 0.4425 * safezoneH + safezoneY;
		action = "1206 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn7: spbtn
	{
		idc = 1606;
		x = 0.541805 * safezoneW + safezoneX;
		y = 0.394375 * safezoneH + safezoneY;
		action = "1207 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn8: spbtn
	{
		idc = 1607;
		x = 0.496875 * safezoneW + safezoneX;
		y = 0.426875 * safezoneH + safezoneY;
		action = "1208 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn9: spbtn
	{
		idc = 1608;
		x = 0.473432 * safezoneW + safezoneX;
		y = 0.355 * safezoneH + safezoneY;
		action = "1209 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn10: spbtn
	{
		idc = 1609;
		x = 0.399198 * safezoneW + safezoneX;
		y = 0.3 * safezoneH + safezoneY;
		action = "1210 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn11: spbtn
	{
		idc = 1610;
		x = 0.451162 * safezoneW + safezoneX;
		y = 0.424375 * safezoneH + safezoneY;
		action = "1211 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn12: spbtn
	{
		idc = 1611;
		x = 0.491014 * safezoneW + safezoneX;
		y = 0.4925 * safezoneH + safezoneY;
		action = "1212 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn13: spbtn
	{
		idc = 1612;
		x = 0.444129 * safezoneW + safezoneX;
		y = 0.520625 * safezoneH + safezoneY;
		action = "1213 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn14: spbtn
	{
		idc = 1613;
		x = 0.510158 * safezoneW + safezoneX;
		y = 0.55625 * safezoneH + safezoneY;
		action = "1214 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn15: spbtn
	{
		idc = 1614;
		x = 0.487888 * safezoneW + safezoneX;
		y = 0.6325 * safezoneH + safezoneY;
		action = "1215 execVM 'addons\selectSpawn.sqf'";
	};
	class spbtn16: spbtn
	{
		idc = 1615;
		x = 0.433189 * safezoneW + safezoneX;
		y = 0.573125 * safezoneH + safezoneY;
		action = "1216 execVM 'addons\selectSpawn.sqf'";
	};
	class RscText_1000: RscText
	{
		idc = 1000;
		text = "Random spawn point";
		x = 0.562903 * safezoneW + safezoneX;
		y = 0.295 * safezoneH + safezoneY;
		w = 0.0923103 * safezoneW;
		h = 0.016375 * safezoneH;
	};
	class sptgl: RscButton
	{
		idc = 1199;
		text = "Land";
		x = 0.598457 * safezoneW + safezoneX;
		y = 0.32625 * safezoneH + safezoneY;
		w = 0.0380025 * safezoneW;
		h = 0.01825 * safezoneH;
		colorBackground[] = {0.314,0.376,0.227,1};
		action = "1199 execVM 'addons\selectSpawn.sqf'";
		tooltip = "Toggle spawn mode";
	};
	class spgo: RscButton
	{
		idc = 1617;
		text = "Spawn";
		x = 0.598457 * safezoneW + safezoneX;
		y = 0.3575 * safezoneH + safezoneY;
		w = 0.0380025 * safezoneW;
		h = 0.01825 * safezoneH;
		colorBackground[] = {0.314,0.376,0.227,1};
		action = "closeDialog 0;DRNSpawn = 1;";
	};
	};
};
