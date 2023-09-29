#include "../../../main/internal_header/main.ih"

void Person::setDataMember(string &&data, size_t counter)
{
    switch (counter)
    {
        case 0:
            setName(data);
        break;

        case 1:
            setAddress(data);
        break;

        case 2:
            setPhone(data);
        break;

        case 3:
            setMass(stoull(data));
        break;
    }
}