//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/adrian/scripts/statusbar/spotify.sh",			0,		14},
	
	{"", "/home/adrian/scripts/statusbar/playing.sh",			10,		14},
	
	{"", "/home/adrian/scripts/statusbar/cpu.sh",				1,		0},
	
	{"", "/home/adrian/scripts/statusbar/temp.sh",				5,		0},

	{"", "/home/adrian/scripts/statusbar/ram.sh",				5,		0},

	{"", "/home/adrian/scripts/statusbar/uptime.sh",			60,		0},

	{"", "/home/adrian/scripts/statusbar/volume.sh",			0,		11},

	{"", "/home/adrian/scripts/statusbar/new_weather.sh",			60,		0},

	{"", "/home/adrian/scripts/statusbar/clock.sh",				1,		0},
	
	{"", "/home/adrian/scripts/statusbar/upgrades.sh",			30,		13},
	
	{"", "/home/adrian/scripts/statusbar/posture.sh",			1,		16},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
