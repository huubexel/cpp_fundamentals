#include "../../internal_header/line.ih"

// a member std::string next() returning the next substring from the line retrieved by getLine()
// consisting of non-ws characters, and an empty string if no such substring is available anymore.

// make sure that at every call of next() the begin position of the next substring is already known, 
//and that his begin position is equal to string::npos if there are no more substrings.

string Line::next()
{
    if (d_index == string::npos)
        return "";
    
    size_t beginPosition = (d_index != 0) ? d_index + 1 : d_index;
    d_index = d_line.find_first_of(" \t\n\v\f\r", beginPosition);

    return d_line.substr(beginPosition, d_index - beginPosition);
}
