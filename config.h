#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
// The signal of a block is also used to refresh it from outside, e.g.
// volume.sh runs `pkill -RTMIN+2 dwmblocks`. Keep the numbers in sync.
#define BLOCKS(X)              \
    X("", "sb-term", 0, 5)     \
    X("", "sb-music", 5, 6)    \
    X("", "sb-wifi", 10, 1)    \
    X("", "sb-volume", 30, 2)  \
    X("", "sb-battery", 30, 3) \
    X("", "sb-date", 5, 4)

#endif  // CONFIG_H
