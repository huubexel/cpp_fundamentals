#ifndef INClUDED_CHAR_
#define INClUDED_CHAR_

#include <cstddef>

struct Char                  // This holds the amount of one char in a file
{
    char ch;                 // The char that is counted
    size_t count = 0;        // The amount of times that char is counted
};

#endif
