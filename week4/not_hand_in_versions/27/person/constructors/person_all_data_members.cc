#include "../../main/internal_header/main.ih"

Person::Person(std::string const &name, std::string const &address,
               std::string const &phone, size_t mass)
:                            // Set all the data members of this person
    d_name(name),
    d_address(address),
    d_phone(phone),
    d_mass(mass)
{}
