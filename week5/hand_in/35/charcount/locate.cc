#include "charcount.ih"

Action CharCount::locate(char character)
{
    if (d_charInfo.nCharObj == 0)
    {                          // This only gets triggered when ptr is empty
        d_location = 0;        // Which is on the very first locate call.
        return Action::APPEND;
    }

    if ((d_charInfo.ptr + (d_charInfo.nCharObj - 1))->ch < character)
        return Action::APPEND; // Append

    if (incCheck(character) == true)    // Increment
        return Action::INC;

    size_t counter = 0;
    while ((d_charInfo.ptr + counter)->ch < character)
        ++counter;             // When APPEND or INC is not an option
                               // the char needs to be inserted, these
    d_location = counter;      // few lines take care of that
    return Action::INSERT;
}
