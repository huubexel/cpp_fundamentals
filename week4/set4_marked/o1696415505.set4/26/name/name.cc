#include "../internal_header/person.ih"

string const &Person::name() const
{                            // Return this persons' name
    return d_name;
}
