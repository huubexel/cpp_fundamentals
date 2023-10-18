#include "../main.ih"

//'new version' named: operator new[];
// Syntax            : new Type[n];

// Where Type is the type you want to fill the array with
// Where n is the amount of elements you want the array to have

void newArrays()
{
    // These are called: dynamic arrays or dynamically allocated arrays
    size_t intArrElement = 20;
    int *intArr = new int[intArrElement];             // allocates 20 ints
    string *stringArr = new string[10];               // allocates 10 strings
    int *intArrWithZeros = new int[intArrElement]();  // check explanation

    // With non class types, you may not assume that the elements are set to
    // 0, for things like strings, you may assume that you get an empty
    // string. So the intArray has random values here and the stringarr
    // doesn't. To set all elements of an intArray to 0, do this:
    // int *intArray = new int[20](); -> This gives you an intArray with 20
    // elements, all set to 0.


    // As you can see, one big difference between a local array and a 
    // dynamically allocated array is that you should keep track of the 
    // size of the array yourselves, there is not way to get this with code

    for (int counter = 0; counter != intArrElement; ++counter)
        intArr[counter] = counter * 2;

    for (int counter = 0; counter != intArrElement; ++counter)
        cout << intArr[counter] << ' ';
    cout << '\n';

    for (int counter = 0; counter != intArrElement; ++counter)
        cout << intArrWithZeros[counter] << ' ';
    cout << '\n';

    
    // This is the delete syntax for this type of new.
    delete[] intArr;
    delete[] stringArr;
    delete[] intArrWithZeros;
}
