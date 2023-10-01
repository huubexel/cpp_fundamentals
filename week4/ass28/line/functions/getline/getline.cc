#include "../../internal_header/line.ih"

bool Line::getLine()
{
    getline(cin, d_line);
    for (char character: d_line)
    {
        if (isspace(character))
            return true;
    }

    return false;
}
