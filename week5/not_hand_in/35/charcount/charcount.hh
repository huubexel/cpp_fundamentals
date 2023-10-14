#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <iostream>

struct CharInfo;
struct Char;

struct CharCount
{
    // Fields
    CharInfo d_charInfoObject;

    // Functions
    size_t count(std::istream &in = std::cin);
    CharInfo const &info() const;  // Accessor charInfoObject
};

#endif
