#include "../main.ih"

//'new version' named: operator new;
// Syntax            : new Type;

// Where Type is the type you want to fill the array with

void standardNew()
{
    string *s1 = new string;          // initializes one empty string pointer
    string *s2 = new string{};        // this is the same as: new string;
    string *s3 = new string("fun");   // initializes to 1 pointer with fun
    string *s4 = new string(4, 'c');  // initializes to 1 pointer with 4 c's
    cout << *s4 << '\n';

    // This also works:
    // new string(); But please don't because you might confuse yourself or
    // the compiler. Because there could be class that hass the string();
    // method implemented and than the compiler might get confused or you
    // get confused when unexpected behavior starts happening.

    // This is the delete syntax for this type of new.
    delete s1;
    delete s2;
    delete s3;
    delete s4;
}
