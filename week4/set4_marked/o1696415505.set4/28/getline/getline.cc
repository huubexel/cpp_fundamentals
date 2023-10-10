#include "../internal_header/line.ih"

bool Line::getLine()
{
    getline(cin, d_line);         // Get line from stdin
    for (char character: d_line)  // For every character in that line
    {
        if (!isspace(character))  // Check if the character is a non
            return true;          // whitespace character, if there is at
    }                             // least one non-ws characters, return true

    return false;                 // If not, return false
}


// ES: What if it is not ' ' but '\t' ? 