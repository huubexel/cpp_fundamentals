#include "../../../main/internal_header/main.ih"

bool const Person::hasOnly(string const &&charsAllowed,
                           string const &stringToCheck)
{
    for (char charToCheck: stringToCheck) // For every char in stringToCheck,
    {                                     // check if it is in charsAllowed
        if (charsAllowed.find(charToCheck) == string::npos)
            return false;                 // If not, return false
    }
    return true;                          // If all characters are in
}                                         // charsAllowed, return true
