//#define XERR
#include "parser.ih"

Parser::Return Parser::convert(double *dest, string const &str)
{
    try
    {
        return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
    }
    catch (const std::invalid_argument)
    {
        return NO_NUMBER;
    }
}
