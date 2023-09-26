#include <iostream>
#include <cctype>
#include <string>

using namespace std;


int main()
{
    string letters;
                                          // loops through 8-bit characters
    for (char asciiChar = -128; asciiChar != 127; ++asciiChar)
        if (isalpha(asciiChar))
            letters += asciiChar;         // selects ASCII-letters

    cout << letters << '\n';              // shows ASCII-letters
}

