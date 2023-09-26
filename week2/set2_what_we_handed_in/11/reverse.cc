#include <iostream>
#include <string>

using namespace std;


int main()
{
    string inText;

    while (getline(cin, inText))          // reads input line by line
    {
        for (auto revBegin = inText.rbegin(), revEnd = inText.rend();
                  revBegin != revEnd;
                      ++revBegin)         // iterates over input backwards

                 cout << *revBegin;       // prints input in reverse

        cout << '\n';                     // ends line after reading it
    }

}

