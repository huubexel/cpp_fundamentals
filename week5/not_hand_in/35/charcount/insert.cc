#include "charcount.ih"

void CharCount::insert(char character)
{
    // add one to the amount Char Objects
    ++d_charInfo.nCharObj;

    // make a temporary array and put the new value inside.
    CharInfo::Char *arr = new CharInfo::Char[d_charInfo.nCharObj];
    for (size_t idx = 0, newIdx = 0; idx != d_charInfo.nCharObj - 1; ++idx, ++newIdx)
    {
        if (idx == d_location)
        {
            *(arr + d_location) = { character, 1 };
            ++newIdx;
        }

        *(arr + newIdx) = *(d_charInfo.ptr + idx);
    }

    // Delete the old array
    delete[] d_charInfo.ptr;

    // swap the memory position
    d_charInfo.ptr = arr;
}
