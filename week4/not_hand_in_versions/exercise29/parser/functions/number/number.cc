//#define XERR
#include "parser.ih"

Parser::Return Parser::number(std::string const &dest)
{
    if (dest = std::string.npos)       // If input empty, return end of line
        return EOLN

    else
    {
        for (i : dest)
        {
            if (isdigit(i))            // If any char in dest is a digit
                                       // return NUMBER
            {
                return NUMBER;
            }
        }
        else                           // If no digit found, return NO_NUMBER
            return NO_NUMBER
    }
}
