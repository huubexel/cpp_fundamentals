#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string d_line;
    size_t substringIndex;

    public:
        // Constructors
        Line() = default;
        Line(std::string line);

        // Other functions
        bool getLine();
        std::string next();
};

#endif
