#include "../../internal_header/line.ih"

bool Line::getLine(istream &in)
{
    getline(in, d_line);
    for (char character: d_line)
    {
        if (isspace(character))
            return true;
    }

    return false;
}