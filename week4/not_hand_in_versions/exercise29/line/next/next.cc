#include "../internal_header/line.ih"

string Line::next()
{                                 // If the index is string::npos, return ""
    if (d_ws_index == string::npos)
        return "";                // Set the beginposition, if the first word
                                  // is found, add one to omit the whitespace
    size_t beginPosition = (d_ws_index != 0) ? d_ws_index + 1 : d_ws_index;
    d_ws_index = d_line.find_first_of(" \t\n\v\f\r", beginPosition);
                                  // Set the position of the next whitespace
    return d_line.substr(beginPosition, d_ws_index - beginPosition);
}                                 // Return the substring
