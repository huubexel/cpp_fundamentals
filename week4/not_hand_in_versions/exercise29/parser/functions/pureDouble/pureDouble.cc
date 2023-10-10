//#define XERR
#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
    *dest = std::stod(str);

    if (std::to_string(dest) != str)    // if converting back to str
        return true;                   // is lossless, then all char
    else                               // were used and is true
        return false;

    if (!(str.contains('.') or         // Only check for true, since
          str.contains('e') or         // d_integral false by default
          str.contains('E')))
        Parser::d_integral = true;
}
