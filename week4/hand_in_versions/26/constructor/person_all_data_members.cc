#include "../internal_header/person.ih"

Person::Person(string const &name, string const &address,
               string const &phone, size_t mass)
:                            // Set all the data members of this person
    d_name(name),
    d_address(address),
    d_phone(phone),
    d_mass(mass)
{}
