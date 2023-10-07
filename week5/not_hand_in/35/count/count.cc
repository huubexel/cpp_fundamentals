#include "../internal_header/charcount.ih"

size_t CharCount::count(istream &in)
{
    size_t amounOfCharacters = 0;
    string line;

    while (getline(in, line))
        amounOfCharacters += line.length();

    return amounOfCharacters;
}