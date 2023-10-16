#include "charcount.ih"

void CharCount::insert(char character)
{                            // Add one to the amount Char Objects
    ++d_charInfo.nCharObj;
                             // Make a new array and put the old values and
                             // the new Char in the array
    CharInfo::Char *arr = new CharInfo::Char[d_charInfo.nCharObj];
    for (size_t idx = 0, newIdx = 0;
         idx != d_charInfo.nCharObj - 1; ++idx, ++newIdx)
    {
        if (idx == d_location)
        {
            *(arr + d_location) = { character, 1 };
            ++newIdx;        // When the new Char gets put into the new array
        }                    // the new array index should increment with one
                             // but the values from the old array shouldn't
        *(arr + newIdx) = *(d_charInfo.ptr + idx);
    }

    delete[] d_charInfo.ptr; // Delete the old array
    d_charInfo.ptr = arr;    // Put the new array at the old memory position
}
