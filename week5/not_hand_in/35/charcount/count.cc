#include "charcount.ih"

size_t CharCount::count(istream &in)   // If no 'in' is given, this is cin
{
    size_t amounOfChars = 0;           // Total amount of characters in file
    char ch;
    while ((ch = in.get()) != EOF)     // Go through all the chars in a file
    {
        switch (locate(ch))            // Locate(ch) returns an Action that
        {                              // needs to be performed, this switch
            case Action::APPEND:       // case will make sure that the
                append(ch);            // corresponding Action get performed
            break;

            case Action::INSERT:
                insert(ch);
            break;

            case Action::INC:
                inc();
            break;
        }
        ++amounOfChars;                // Increment amount of characters by 1
    }

    return amounOfChars;               // Return amount of chars in the file
}

// We know this is longer than 20 lines for a function, but Jurjen and Frank
// told us that we can make an exception for a small switch statement
