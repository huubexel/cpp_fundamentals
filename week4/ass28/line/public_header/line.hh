#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <iosfwd>
#include <string>

class Line
{
    public:
        Line() = default;
        bool getLine(std::istream &in);
        std::string next();
};

#endif
