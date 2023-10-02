#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string d_line;
    size_t d_index;

    public:
        // temporary, ONLY FOR TESTING PURPOSES
        Line(std::string str, size_t index); // temporary constructor
        std::string line(); // temporary accessor


        // accessor
        std::string next();

        // manipulator
        bool getLine();
};

#endif
