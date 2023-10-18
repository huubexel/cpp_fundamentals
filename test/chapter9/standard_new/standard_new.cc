#include "../main.ih"

void standardNew()
{
    string *s1 = new string{};          // This is the same as: new string;
    string *s2 = new string(4, 'c');    // initializes to 4 c's.
}
