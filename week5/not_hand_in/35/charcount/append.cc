#include "charcount.ih"

void CharCount::append(char character)
{
    // Make a new array, copy the old values and put the new Char at the end
    CharInfo::Char *arr = new CharInfo::Char[d_charInfo.nCharObj + 1];
    for (size_t idx = 0; idx < d_charInfo.nCharObj; ++idx)
        *(arr + idx) = *(d_charInfo.ptr + idx);
    *(arr + d_charInfo.nCharObj) = { character, 1 };

    ++d_charInfo.nCharObj;   // Add one to the amount Char Objects

    delete[] d_charInfo.ptr; // Delete the old array

    d_charInfo.ptr = arr;    // Put the new array at the old memory position
}
