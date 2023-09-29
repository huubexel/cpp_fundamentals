#include "../../../main.ih"

bool const Person::hasOnly(string const &&charsAllowed, string const &stringToCheck)
{
    for (char charToCheck: stringToCheck)
    {
        if (charsAllowed.find(charToCheck) == string::npos)
            return false;
    }
    return true;
}