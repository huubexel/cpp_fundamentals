#include "../internal_header/main.ih"

int main()
{
    Person jurjen{ "Jurjen Bokma", "Herestraat 104", "0697862431", 75 };
    jurjen.extract(cin);     // A person object is created here and,
    jurjen.insert(cout);     // the functions: extract and insert are tested
}
