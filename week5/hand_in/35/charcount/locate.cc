#include "charcount.ih"

Action CharCount::locate(char character)
{
    if (d_charInfo.nCharObj == 0)
        return APPEND;

    if ((d_charInfo.ptr + (d_charInfo.nCharObj - 1))->ch < character)
        return APPEND; // Append

    if (incCheck(character) == true)    // Increment
        return INC;

    size_t counter = 0;
    while ((d_charInfo.ptr + counter)->ch < character)
        ++counter;             // When APPEND or INC is not an option
                               // the char needs to be inserted, these
    d_location = counter;      // few lines take care of that
    return INSERT;
}
