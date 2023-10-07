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
        CharInfo charInfoStructObject();


        size_t count(std::istream &in = std::cin);
        //CharInfo const &info();
};

void showChar(char const &ch);
std::string readTestFile();

#endif
