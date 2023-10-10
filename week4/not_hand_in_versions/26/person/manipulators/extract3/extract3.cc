#include "../../internal_header/person.ih"

void Person::extract3(istream &in)
{
    string line;
    for (size_t counter = 0; counter != 3; counter++)
    {
        getline(in, line, ',');
        setDataMember(line, counter);
    }

    getline(in, line);
    setMass(stoull(line));
}
