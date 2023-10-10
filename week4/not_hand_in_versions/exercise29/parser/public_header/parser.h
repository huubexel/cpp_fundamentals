#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_

#include <string>
#include "../../line/public_header/line.hh"
class Parser
{
                                         // Data types
    Line d_object;
    bool d_integral;
    enum Return
    {
        NO_NUMBER,
        NUMBER,
        EOLN
    };
                                         // Internal functions, kept private
    Return convert(double *dest, std::string const &str);
    bool pureDouble(double *dest, std::string const &str);

    public:
        Parser();

        bool reset();
        Return number(double *dest);
        bool isIntegral();
};

#endif
