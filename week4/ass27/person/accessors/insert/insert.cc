#include "../../../main/internal_header/main.ih"

void Person::insert(ostream &out)
{
    out << "name: " << Person::name() << ", address: " << Person::address()
        << ", phone: " << Person::phone() << ", mass: " << Person::mass()
        << '\n';                  // Insert the Persons' information in the
}                                 // out (ostream) given
