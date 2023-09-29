#include "../../../main.ih"

void Person::insert(ostream &out)
{
    out << "name: " << Person::name() << ", address: " << Person::address()
        << ", phone: " << Person::phone() << ", mass: " << Person::mass()
        << '\n';
}