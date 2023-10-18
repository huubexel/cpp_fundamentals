#include "../main.ih"

// Placement new needs #include <memory>

//'new version' named: placement new;
// Syntax            : Type *new(void *memory) Type{ arguments };

// Where Type is the type you want to fill the array with
// Where n is the amount of elements you want the array to have
// memory is the memory address,
// Type{ arguments }, is the constructor plus the parameters you give it.
// so for Type{ arguments }, you are basically making an object.

void placementNew()
{
    // Placement new is passed an existing block of memory
    // into which new initializes an object or value. The block of memory 
    // should be large enough to contain the object, but apart from that 
    // there are no further requirements.
    // By using sizeof(Type), you can get the amount of bytes the type 
    // needs to be made. The memory that the object needs to be able to 
    // execute certain things that are not the object itself will be
    // gathered by the object self and should not be taken into account for
    // placement new. So only account for the object itself! 

    // Placement new is when classes have already set memory aside to be used
    // later on, placement new than goes and takes that memory. An example is
    // string, which has some spare memory allocated for itself that it can 
    // use later on, this is so that if you enlarge the string, the string
    // object doesn't need to allocate for every single char, but can
    // allocate for more than a few characters at the same time. Which saves
    // time.

    // The amount is the space that is reserved, so that is the space the 
    // the object has. Needed is the space it is using right now, and
    // normally you can set that with d_normally, but this is not a class.
    // This is a mere example.

    //size_t amount = 9;
    //size_t needed = 5;
    //string *newMemory = static_cast<string *>(
    //                        operator new(amount * sizeof(string)));
    //for (size_t idx = 0; idx != needed; ++idx)
    //    new (newMemory + idx) string{ d_memory[idx] };

    // Now the object has space for 4 more strings, that is memory that 
    // it can use at any moment.


    // Placement new is special when it comes to memory.
    // Because placement new means that objects themselves will allocate
    // memory for things that they themselves use. And because you cannot
    // check which objects the parent object allocated or did not allocate,
    // you cannot call a simple delete[]. Delete is not possible either,
    // because delete will try to get rid the memory of the object itself.
    // Which wasn't dynamically allocated so a new wasn't used. 
    
    // So what do you have to use then, the answer is, specifically call the
    // constructor of the object.

    //for (std::string *sp = amount; sp-- != d_memory; )
    //    sp->~string();

    //operator delete(d_memory);

    // So what is happening here, well to keep it short, the same amount as
    // there has been made free for this object, has been deleted.
    // All the objects in the big piece of memory have been deleted by hand.
    // In the end only the big piece of memory is left, so that also needs to
    // be deleted by using operator delete.
    // This works! But it only works for 1 object.

    // But what if we want multiple objects, how should we do this?
    char buffer[3 * sizeof(string)];
    string *sp = new(buffer) string [3];

    for (size_t idx = 0; idx < 3; ++idx)
        sp[idx].~string();

    // here is the answer. You need to try this yourselves.
}
