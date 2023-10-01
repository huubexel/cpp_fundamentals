#include "../../internal_header/line.ih"

bool Line::getLine(istream &in)
{
    string line;
    getline(in, line);

    for (char character: line)
    {
        if (isspace(character))
            return true;
    }

    return false;
}