#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <string>
#include <iostream>

class CharCount
{

    CharInfo d_charInfoStructObject;

    public:
        CharCount(CharInfo charInfoObject = CharInfo{});

        size_t count(std::istream &in = std::cin);
        CharInfo const &info() const;  // accessor d_charInfoStructObject

};

#endif
