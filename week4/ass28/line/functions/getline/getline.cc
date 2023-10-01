#include "../../internal_header/line.ih"

// a member bool getLine() returning true if the line read from cin contains non-ws (spaces, tabs) characters;

void Line::getLine(istream &in)
{
    string line;
    while (getline(in, line))
        cout << line;
}