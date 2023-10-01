#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <iosfwd>
#include <string>

class Line
{
    std::string line;

    public:
        Line() = default;  // check whether this automatically makes the line or not.
        Line(std::string line);
        bool getLine(std::istream &in);
        std::string next(string &line, size_t beginPosition);
};

#endif
