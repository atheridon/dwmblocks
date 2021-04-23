//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/	/*Update Signal*/
	//{"", 		"~/nextcloud/Linux/dwmblocks/scripts/weather.sh",	3600,			0},
	//{"", 		"~/nextcloud/Linux/dwmblocks/scripts/gpu.sh",		5,			0},
	{"", 		"~/nextcloud/Linux/dwmblocks/scripts/cpu.sh",		5,			0},
	{"", 		"~/nextcloud/Linux/dwmblocks/scripts/memory.sh",		5,			0},
	//{"", 		"~/nextcloud/Linux/dwmblocks/scripts/vpn.sh",		5,			0},
	//{"", 		"~/nextcloud/Linux/dwmblocks/scripts/network.sh",	5,			0},
	{"", 		"~/nextcloud/Linux/dwmblocks/scripts/audio.sh",		0,			1},
	{"", 		"~/nextcloud/Linux/dwmblocks/scripts/xbacklight.sh",	0,			2},
	{"", 		"~/nextcloud/Linux/dwmblocks/scripts/battery.sh",	5,			0},
	{"", 		"~/nextcloud/Linux/dwmblocks/scripts/date.sh",		5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
