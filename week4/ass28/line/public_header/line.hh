#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <iostream>
#include <string>

class Line
{
    std::string d_line;

    public:
        // Constructors
        Line() = default;
        Line(std::string line);

        // Other functions
        bool getLine(std::istream &in = std::cin);
        //std::string next(string &line, size_t beginPosition);
};

#endif
