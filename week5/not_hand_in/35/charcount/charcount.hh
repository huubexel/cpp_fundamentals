#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <iostream>

struct CharCount
{

    struct CharInfo               // This points to (struct) Char Objects
    {
        struct Char              // Holds the amount of one distinct char in a file
        {
            char ch;             // The distinct char that is counted
            size_t count = 0;    // The amount of times that char is in the file
        };

        Char *ptr;                // Pointer to Char objects
        size_t nCharObj = 0;      // Number of Char objects pointed to
    };

    // Fields
    CharInfo d_charInfo;

    // Functions
    size_t count(std::istream &in = std::cin);
    CharInfo const &info() const;  // Accessor charInfoObject
};

#endif
