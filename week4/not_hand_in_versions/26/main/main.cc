#include "../person/internal_header/person.ih"

int main()
{
    Person p{ "bier", "nogmeerbier", "01231238", 75 };
    p.insert(cout);
    p.extract3(cin);
    p.insert(cout);
}