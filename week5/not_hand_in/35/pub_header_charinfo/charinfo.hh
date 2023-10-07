#ifndef INClUDED_CHARINFO_
#define INClUDED_CHARINFO_

#include <cstddef>

struct Char;

struct CharInfo
{
    Char *ptr;
    size_t nCharObj = 0;          // number of CharObjects pointed to
};

#endif
