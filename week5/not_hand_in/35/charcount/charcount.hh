#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <iostream>

enum class Action;

struct Char;
struct CharInfo;

struct CharCount
{
    struct CharInfo        // This points to (struct) Char Objects
    {
        struct Char        // Holds the amount of one distinct char in a file
        {
            char ch;       // The distinct char that is counted
            size_t count;  // The amount of times that char is in the file
        };

        Char *ptr;         // Pointer array to Char objects
        size_t nCharObj;   // Number of Char objects pointed to
    };

    // Fields
    CharInfo d_charInfo;
    size_t d_location;     // set in the locate function

    // Functions
    size_t count(std::istream &in = std::cin);
    CharInfo const &info() const;
    Action locate(char character);

    void append(char character);
    void insert(char character);
    void inc();
};

#endif
