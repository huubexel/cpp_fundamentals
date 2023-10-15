#include "charcount.ih"

size_t CharCount::count(istream &in)   // if no 'in' is given, this is cin
{
    size_t amounOfChars = 0;
    char ch;
    while ((ch = in.get()) != EOF)
    {   
        Action action = locate(ch);
        ++amounOfChars;
    }

    return amounOfChars;               // Return amount of chars in the file
}
