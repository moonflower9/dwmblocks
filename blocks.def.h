// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    /* home partition size (used / total) */
    {"󰋜 ", "df -h / | awk 'NR==2 {print $3 \"/\" $2}'", 30, 0},

    /* date + time */
    {"󰥔 ", "date '+%a, %b %d  %I:%M %p'", 5, 0},
};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[] = "   ";
static unsigned int delimLen = 3;
