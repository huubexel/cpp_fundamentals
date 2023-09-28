#include "main.ih"

Person::Person(std::string const &name, std::string const &address, 
               std::string const &phone, size_t mass)
:
    d_name(name),
    d_address(address),
    d_phone(phone),
    d_mass(mass)
{}    

void Person::setName(string const &name)
{
    d_name = name;
}

void Person::setAddress(string const &address)
{
    d_address = address;
}

void Person::setPhone(string const &phone)
{
    if (phone.empty())
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;
    else
        cout << "A phone number may only contain digits\n";
}

void Person::setMass(size_t mass)
{
    d_mass = mass;
}
