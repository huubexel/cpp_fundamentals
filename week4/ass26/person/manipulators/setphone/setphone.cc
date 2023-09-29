#include "../../../main/internal_header/main.ih"

void Person::setPhone(string const &phone)
{                            // Set this persons' phonenumber,
    if (phone.empty())       // if it only has numbers
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;
    else
        cout << "A phone number may only contain digits\n";
}
