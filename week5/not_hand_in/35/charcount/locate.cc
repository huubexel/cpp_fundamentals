#include "charcount.ih"
//TODO to long
Action CharCount::locate(char character)
{
    if (d_charInfo.nCharObj == 0) // This only gets triggered when ptr is empty
    {
        d_location = 0;
        return Action::APPEND;
    }

    // Append
    if ((d_charInfo.ptr + (d_charInfo.nCharObj - 1))->ch < character)
        return Action::APPEND;

    // Increment
    for (size_t counter = 0; counter < d_charInfo.nCharObj; ++counter)
    {
        if ((d_charInfo.ptr + counter)->ch == character)
        {
            d_location = counter;
            return Action::INC;
        }
    }

    // Insert
    size_t counter = 0;
    while ((d_charInfo.ptr + counter)->ch < character)
        ++counter;
    
    d_location = counter;
    return Action::INSERT;
}
