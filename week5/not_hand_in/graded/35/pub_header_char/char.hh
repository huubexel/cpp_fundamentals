#ifndef INClUDED_CHAR_
#define INClUDED_CHAR_

#include <cstddef>

// ML: It is OK to declar Char and CharInfo inside CharCount struct.
// Possibly preferable because Char and CharInfo do not have much use
// outside CharCount.

struct Char              // Holds the amount of one distinct char in a file
{
    char ch;             // The distinct char that is counted
    size_t count = 0;    // The amount of times that char is in the file
};

#endif
