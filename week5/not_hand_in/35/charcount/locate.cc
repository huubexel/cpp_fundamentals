#include "charcount.ih"

Action CharCount::locate(char character)
{
    // if ptr is empty
    if (d_charInfo.nCharObj == 0)
    {
        d_location = 0;
        return Action::APPEND;
    }

    // increment
    for (size_t counter = 0; counter < d_charInfo.nCharObj; ++counter)
    {
        if ((d_charInfo.ptr + counter)->ch == character)
        {
            d_location = counter;
            return Action::INC;
        }
    }

    // append
    if ((d_charInfo.ptr + (d_charInfo.nCharObj - 1))->ch < character)
        return Action::APPEND;

    // insert
    size_t counter = 0;
    while ((d_charInfo.ptr + counter)->ch < character)
        ++counter;
    
    d_location = counter;
    return Action::INSERT;
}
