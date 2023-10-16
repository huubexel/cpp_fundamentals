#include "charcount.ih"
// TODO comments
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

// We know this is longer than 20 lines for a function, but Jurjen and Frank
// told us that we can make an exception for a small switch statement
