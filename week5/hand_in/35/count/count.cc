#include "../internal_header/charcount.ih"

size_t CharCount::count(istream &in)   // if no 'in' is given, this is cin
{
    string line;

    while (getline(in, line))          // Append the lenght of the lines to 
        amounOfChars += line.length(); // the total

    return amounOfChars;               // Return amount of chars in the file
}
