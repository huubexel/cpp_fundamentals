#include "../../../main.ih"

void Person::insert(ostream &out)
{
    out << Person::name() << " weighs " << Person::mass() << " kg.\n";
}