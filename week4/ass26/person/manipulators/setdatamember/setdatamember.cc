#include "../../../main/internal_header/main.ih"

void Person::setDataMember(string &&data, size_t counter)
{                                 // According to the counter, set a
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

        case 3:                     // For case 3 (mass) stoull has to be
            setMass(stoull(data));  // used to be able to convert the string
        break;                      // to a size_t
    }
}