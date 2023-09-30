#include "../internal_header/main.ih"

int main()                        // A person is made here and the functions,
{                                 // extract and insert are tested
    Person jurjen{ "Jurjen Bokma", "Herestraat 104", "0697862431", 75 };
    jurjen.extract(cin);
    jurjen.insert(cout);
}

// extract and setdatamember need comments
// need to check whether references or r-value references can be used in a lot of places
