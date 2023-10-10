//#define XERR
#include "internal_header/parser.ih"

bool Parser::reset()
{
    std::string input;
    std::cin >> input;

    d_object.d_line += input;
                                       // return true if input is not empty,
                                       // otherwise returns false
    return (input != std::string.npos) ? true : false;
}
