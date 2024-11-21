player addAction [format ["<img size='2' image='a3\modules_f_curator\data\portraitcasmissile_ca.paa'/><t size='1.3' color='#50DA00'>Open Air Service Menu</t>"], {
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
