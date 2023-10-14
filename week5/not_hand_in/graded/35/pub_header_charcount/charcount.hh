// ML: NAE, the class should also count and keep track of character frequencies
// (stored in CharInfo).
// ML: The organization seems off. You should use a single folder per class and put
// the header and relevant source files + .ih file in there.
#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <string>
#include <iostream>

class CharCount
{

    CharInfo d_charInfoStructObject;

    public:
        CharCount(CharInfo charInfoObject = CharInfo{});    // ML: <-- default argument seems SF,
                                                            // default constructor already runs
                                                            // default constructor of composite objects.
        size_t count(std::istream &in = std::cin);
        CharInfo const &info() const;  // accessor d_charInfoStructObject

};

#endif
