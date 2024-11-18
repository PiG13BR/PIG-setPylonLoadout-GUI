player addAction ["Open Air Service Menu", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	if ((vehicle _target) isKindOf "Air") then {
		[(vehicle _target)] call PIG_fnc_setPylonLoadout;
	};
	},
	nil,
	1.5,
	true,
	true,
	"",
	toString {
		(_target isKindOf 'Air') 
		&& {(typeOf cursorObject) in PIG_offerService}
	},
	30,
	false,
	"",
	""
];