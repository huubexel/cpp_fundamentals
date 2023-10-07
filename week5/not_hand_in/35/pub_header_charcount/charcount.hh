#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <string>
#include <iostream>

struct CharInfo;

class CharCount
{

    CharInfo d_charInfoStructObject;

    public:
        CharCount();

        size_t count(std::istream &in = std::cin);
        CharInfo const &info() const;
};

#endif
