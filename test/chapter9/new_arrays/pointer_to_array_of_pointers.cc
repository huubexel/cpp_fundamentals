#include "../main.ih"

void pointerToArrayOfPointers()
{
    // This is a pointer to an array with 5 pointers, that point to string
    string **sp = new string *[5];

    // pointers are of primitive type, they are not objects, so this means 
    // that if you delete the pointer, the things that is pointed at, isn't
    // automatically deleted by that delete statement. That is why the
    // following does not work.
    // for (size_t idx = 0; idx != 5; ++idx)
    //     sp[idx] = new string;
    // delete[] sp;            // MEMORY LEAK !

    // What you should do is the following:
    for (size_t idx = 0; idx != 5; ++idx)
        delete sp[idx];
    delete[] sp;

    // For each index this deletes the object, and because those object are 
    // not arrays themselves, delete is enough (instead of delete[])
    // And than you delete the whole array.
}
