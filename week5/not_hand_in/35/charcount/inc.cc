#include "charcount.ih"

void CharCount::inc()
{
    ++(d_charInfo.ptr + d_location)->count;
}
