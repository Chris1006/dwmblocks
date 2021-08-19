//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
// {"", "~/.local/bin/statusbar/moonphase", 3600, 0},
// {"", "~/.local/bin/statusbar/weather", 60, 0},
// {"", "~/.local/bin/statusbar/cpu_temp", 15, 0},
// {"", "~/.local/bin/statusbar/cpu_usage", 15, 0},
// {"", "~/.local/bin/statusbar/memory", 60, 0},
// {"", "~/.local/bin/statusbar/free_disk_space", 60, 0},
    {"", "~/.local/bin/statusbar/ip_addr", 20, 0},
    {"", "~/.local/bin/statusbar/battery", 5, 0},
//    {"", "~/.local/bin/statusbar/mailbox", 0, 19},
//    {"", "~/.local/bin/statusbar/news", 0, 14},
//    {"", "~/.local/bin/statusbar/pacman", 0, 13},
    {"", "~/.local/bin/statusbar/volume-new", 0, 10},
    {"", "~/.local/bin/statusbar/calendar", 60, 0},
    {"", "~/.local/bin/statusbar/clock", 30, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 2;
