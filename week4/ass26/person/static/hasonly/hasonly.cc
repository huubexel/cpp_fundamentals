#include "../../../main.ih"

static bool const hasOnly(string const charsAllowed, string const &stringToCheck)
{
    for (char charToCheck: stringToCheck)
    {
        if (charsAllowed.find(charToCheck) == string::npos)
            return false;
    }
    return true;
}