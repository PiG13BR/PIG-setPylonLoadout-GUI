class PIG_RscAirServiceMenu
{
	idd = 7777;
	movingEnable = true;
    controlsBackground[] = {};
	onLoad = "";
	onUnload = "";
	class controls 
	{
		class serviceMenuPylonsFrame: RscFrame
		{
			style = 80;

			idc = 1800;
			x = 0.0342282 * safezoneW + safezoneX;
			y = 0.219938 * safezoneH + safezoneY;
			w = 0.170564 * safezoneW;
			h = 0.692149 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class serviceMenuPresetsFrame: RscFrame
		{
			style = 80;

			idc = 1801;
			x = 0.775527 * safezoneW + safezoneX;
			y = 0.219938 * safezoneH + safezoneY;
			w = 0.203365 * safezoneW;
			h = 0.4481 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,0.8};
		};
		class ServiceMenuPylonsLb: RscListBox
		{
			idc = 1501;

			x = 0.0473485 * safezoneW + safezoneX;
			y = 0.27595 * safezoneH + safezoneY;
			w = 0.144324 * safezoneW;
			h = 0.266059 * safezoneH;
		};
		class serviceMenuMagazinesLb: RscListBox
		{
			idc = 1502;

			x = 0.0539087 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.131203 * safezoneW;
			h = 0.266059 * safezoneH;
		};
		class serviceMenuPresetsLb: RscListBox
		{
			idc = 1503;

			x = 0.788647 * safezoneW + safezoneX;
			y = 0.287944 * safezoneH + safezoneY;
			w = 0.104963 * safezoneW;
			h = 0.266059 * safezoneH;
		};
		class serviceMenuPresetsSaveButton: RscButton
		{
			idc = 1601;

			text = "Save";
			x = 0.90017 * safezoneW + safezoneX;
			y = 0.287944 * safezoneH + safezoneY;
			w = 0.0656017 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuPresetsLoadButton: RscButton
		{
			idc = 1602;

			text = "Load";
			x = 0.90017 * safezoneW + safezoneX;
			y = 0.329953 * safezoneH + safezoneY;
			w = 0.0656017 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuPresetsDeleteButton: RscButton
		{
			idc = 1603;

			text = "Delete";
			x = 0.90017 * safezoneW + safezoneX;
			y = 0.371963 * safezoneH + safezoneY;
			w = 0.0656017 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuPresetsRenameButton: RscButton
		{
			idc = 1604;

			text = "Rename";
			x = 0.90673 * safezoneW + safezoneX;
			y = 0.568006 * safezoneH + safezoneY;
			w = 0.0656017 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuPresetsSaveNewButton: RscButton
		{
			idc = 1605;

			text = "Save new preset";
			x = 0.801768 * safezoneW + safezoneX;
			y = 0.610016 * safezoneH + safezoneY;
			w = 0.0918423 * safezoneW;
			h = 0.0420094 * safezoneH;
		};
		class serviceMenuAngleButton: RscButton
		{
			idc = 1606;

			text = "Change Angle";
			x = 0.454079 * safezoneW + safezoneX;
			y = 0.878084 * safezoneH + safezoneY;
			w = 0.104963 * safezoneW;
			h = 0.0420094 * safezoneH;
		};
		class serviceMenuTitle: RscText
		{
			idc = 1000;
			style = ST_CENTER;

			text = "Air Service Menu";
			x = 0.349116 * safezoneW + safezoneX;
			y = 0.0238938 * safezoneH + safezoneY;
			w = 0.288647 * safezoneW;
			h = 0.0420094 * safezoneH;
			sizeEx = 0.08;
		};
		class serviceMenuPylonsTitle: RscText
		{
			idc = 1002;
			style = ST_CENTER;

			text = "Hardpoints";
			x = 0.0473485 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.144324 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuMagazinesTitle: RscText
		{
			idc = 1003;
			style = ST_CENTER;

			text = "Ordnances";
			x = 0.0539087 * safezoneW + safezoneX;
			y = 0.570016 * safezoneH + safezoneY;
			w = 0.131203 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuPresetsTitle: RscText
		{
			idc = 1004;
			style = ST_CENTER;

			text = "Presets";
			x = 0.788647 * safezoneW + safezoneX;
			y = 0.231931 * safezoneH + safezoneY;
			w = 0.177125 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuPresetsEditBox: RscEdit
		{
			idc = 1400;

			x = 0.788647 * safezoneW + safezoneX;
			y = 0.568006 * safezoneH + safezoneY;
			w = 0.111523 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
		class serviceMenuAircraftName: RscText
		{
			idc = 1008;
			style = ST_CENTER;
			x = 0.342556 * safezoneW + safezoneX;
			y = 0.107913 * safezoneH + safezoneY;
			w = 0.288647 * safezoneW;
			h = 0.0280062 * safezoneH;
		};
	}
}