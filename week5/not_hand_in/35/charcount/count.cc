#include "charcount.ih"

size_t CharCount::count(istream &in)   // if no 'in' is given, this is cin
{
    size_t amounOfChars = 0;
    char ch;
    while ((ch = in.get()) != EOF)
    {
        switch (locate(ch))
        {
            case Action::APPEND:
                append(ch);
            break;

            case Action::INSERT:
                insert(ch);
            break;

            case Action::INC:
                inc();
            break;
        }
        ++amounOfChars;
    }

    return amounOfChars;               // Return amount of chars in the file
}
