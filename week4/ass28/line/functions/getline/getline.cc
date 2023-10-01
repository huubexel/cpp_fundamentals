#include "../../internal_header/line.ih"

bool Line::getLine()
{
    string line;
    for (char character: line)
    {
        if (isspace(character))
            return true;
    }

    return false;
}