#ifndef INClUDED_CHARCOUNT_
#define INClUDED_CHARCOUNT_

#include <iostream>

enum Action
{
    APPEND,
    INSERT,
    INC
};

struct Char;
struct CharInfo;

struct CharCount
{
    struct CharInfo        // This points to (struct) Char Objects
    {
        struct Char        // Holds the amount of one distinct char in a file
        {
            char ch = 0;       // The distinct char that is counted
            size_t count = 0;  // The amount of times that char is in the file
        };

        Char *ptr = 0;         // Pointer array to Char objects
        size_t nCharObj = 0;   // Number of Char objects pointed to by ptr
    };

    private:
        // Fields
        CharInfo d_charInfo;
        size_t d_location = 0;     // This gets set in the locate function

        Action locate(char character);

    public:
        CharInfo const &info() const;
        size_t count(std::istream &in = std::cin);

    private:
        // Action functions
        void append(char character);
        void insert(char character);
        void inc();
        bool incCheck(char character);
};

#endif
