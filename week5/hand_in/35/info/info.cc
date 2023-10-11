#include "../internal_header/charcount.ih"

CharInfo const &CharCount::info() const
{
    return d_charInfoStructObject; // Returns the data member of type
}                                  // CharInfo (which is a struct)
