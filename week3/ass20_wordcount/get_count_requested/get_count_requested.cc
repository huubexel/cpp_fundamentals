#include "../main.ih"

size_t const getCountRequested(string const &input, char const &argument)
{
    size_t count = 0;             // Initiate counter
    switch (argument)             // switch with either a for loop or .length
    {
        case 'w':                 // If words need to be counted
            for (char inputChar : input)
            {                     // Loop over all the characters
                if (inputChar == ' ')
                    ++count;      // If char is space, add one to the counter
            }                     // At the end, return the counter + 1,
            return count + 1;     // the + 1 is the missing space.
        break;

        case 'c':                 // If the characters need to be counted
            return input.size();  // Return the amount of characters
        break;

        case 'l':                 // If newlines need to be counted
            for (char inputChar : input)
            {                     // Loop over all the characters
                if (inputChar == '\n')
                    ++count;      // If the character is a newline, ++count
            }
            return count;         // Return the amount of newlines counted
        break;
    }                             // If for some reason,
    return 0;                     // something went wrong, return 0
}
