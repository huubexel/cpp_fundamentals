#include "charcount.ih"

void CharCount::append(char character)
{
    // make a temporary array and put the new value inside.
    CharInfo::Char *arr = new CharInfo::Char[d_charInfo.nCharObj + 1];
    for (size_t idx = 0; idx < d_charInfo.nCharObj; ++idx)
        *(arr + idx) = *(d_charInfo.ptr + idx);
    *(arr + d_charInfo.nCharObj) = { character, 1 };

    // add one to the amount Char Objects
    ++d_charInfo.nCharObj;

    // Delete the old array
    delete[] d_charInfo.ptr;

    // swap the memory position
    d_charInfo.ptr = arr;
}
