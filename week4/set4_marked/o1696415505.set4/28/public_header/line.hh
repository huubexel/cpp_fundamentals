// ES: ?
#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string d_line;
    size_t d_ws_index;            // The index of a whitespace

    public:
        // accessors
        std::string next();

        // manipulators
        bool getLine();
};

#endif
