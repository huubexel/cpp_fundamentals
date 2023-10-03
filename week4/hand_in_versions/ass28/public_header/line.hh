#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string d_line;
    size_t d_index;

    public:
        // accessors
        std::string next();

        // manipulators
        bool getLine();
};

#endif
