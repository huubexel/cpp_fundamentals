#include "../internal_header/charcount.ih"

size_t CharCount::count(istream &in)   // if no 'in' is given, this is cin
{
    size_t amounOfChars = 0;
    string line;                       // used to get the line length from

    while (getline(in, line))          // 
        amounOfChars += line.length();

    return amounOfChars;               // Return amount of chars in the file
}
