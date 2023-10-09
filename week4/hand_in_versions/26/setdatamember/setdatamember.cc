#include "../internal_header/person.ih"

void Person::setDataMember(string &data, size_t counter)
{                                   // According to the counter, set a
    switch (counter)                // datamember everytime this function is
    {                               // called
        case 0:
            setName(data);
        break;

        case 1:
            setAddress(data);
        break;

        case 2:
            setPhone(data);
        break;
    }
}
