#include "charcount.ih"

void CharCount::inc()
{                            // Increase the count of the char by one
    ++(d_charInfo.ptr + d_location)->count;
}
