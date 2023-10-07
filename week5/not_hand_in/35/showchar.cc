#include "internal_header/charcount.ih"

void showChar(char const &ch)
{
    if (!isprint(ch))
    {
        if (ch == 9)
            cout << "char '\\t'\n";
        else if (ch == 10)
            cout << "char '\\n'\n";
        else
            cout << "char " << static_cast<int>(ch) << "\n";
        return;
    }

    cout << "char '" << ch << "'\n";
}
