// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    /* CPU Temperature */
    {"",
     "sed 's/.$//' /sys/class/thermal/thermal_zone0/temp | awk '{printf "
     "\"%.1f°C\", $1/1000}'",
     5, 0},

    /* Home partition size (used / total) */
    {"", "df -h / | awk 'NR==2 {print $3 \"/\" $2}'", 30, 0},

    /* Date */
    {"", "date '+%a %b %d'", 60, 0},

    /* Time */
    {"", "date '+%H:%M'", 5, 0},
};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
