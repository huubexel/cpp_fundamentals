#include "charcount/charcount.ih"

void showChar(char const &ch)
{
    if (!isprint(ch))                 // Check if character isn't printable
    {
        if (ch == 9)                  // if tab, print it with '\t'
            cout << "char '\\t' ";
        else if (ch == 10)            // if newline, print it with '\n'
            cout << "char '\\n' ";
        else                          // if not printable, print ASCII number
            cout << "char " << static_cast<int>(ch) << ' ';
        return;
    }

    cout << "char '" << ch << "' ";   // If char is printable, print
}                                     // with single quotes around it
