    
bool CharCount::incCheck(char character)
{
    // This function checks whether the character is already stored in the
    // pointer and if that is true, this function sets the d_location and
    // returns true, if that is not true, false gets returned.
    for (size_t counter = 0; counter < d_charInfo.nCharObj; ++counter)
    {
        if ((d_charInfo.ptr + counter)->ch == character)
        {
            d_location = counter;
            return true;
        }
    }

    return false;
}
