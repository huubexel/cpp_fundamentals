#include "../main.ih"

//'new version' named: raw memory
// Syntax            : operator new OR operator new[];

// The word, 'operator' is part of the syntax here.

void rawMemory()
{
                                // room for 5 ints:
    int *ip = static_cast<int *>(operator new(5 * sizeof(int)));
                                // same as the previous example:
    int *ip2 = static_cast<int *>(operator new[](5 * sizeof(int)));
                                // room for 5 strings:
    string *sp = static_cast<string *>(operator new(5 * sizeof(string)));

    // These is raw memory, because raw memory returns void *, a static cast 
    // needs to be done. These raw memory parts should not be seen as an 
    // array, but should be seen as a series of memory locations that 
    // dynamically have been made available. No initialization has been done
    // by this kind of new.

    // This is the delete syntax for this type of new.
    operator delete(ip);
    operator delete[](ip2);
    operator delete(sp);
}
