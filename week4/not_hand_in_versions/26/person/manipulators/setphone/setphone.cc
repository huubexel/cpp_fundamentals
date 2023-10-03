#include "../../internal_header/person.ih"

void Person::setPhone(string const &phone)
{                            // Set this persons' phonenumber
    if (phone.empty())       // If phone is empty, set not available
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;     // If phone has something that isn't a number,
    else                     // print a message
        cout << "A phone number may only contain digits\n";
}
