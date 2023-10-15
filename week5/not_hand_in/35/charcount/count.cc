#include "charcount.ih"

size_t CharCount::count(istream &in)   // if no 'in' is given, this is cin
{
    size_t amounOfChars = 0;
    char ch;
    while ((ch = in.get()) != EOF)
    {
        switch (locate(ch))
        {
            case APPEND:
                append(ch);
            break;

            case INSERT:
                insert(ch);
            break;

            case INC:
                inc(ch);
            break;
        }
        ++amounOfChars;
    }

    return amounOfChars;               // Return amount of chars in the file
}
