#ifndef INClUDED_CHARINFO_
#define INClUDED_CHARINFO_

#include <cstddef>

struct Char;

struct CharInfo               // This points to (struct) Char Objects
{
    Char *ptr;                // Pointer to Char objects
    size_t nCharObj = 0;      // Number of Char objects pointed to
};

#endif
