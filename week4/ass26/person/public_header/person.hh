#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>

class Person
{
    std::string d_name;         // Name of person
    std::string d_address;      // Address field
    std::string d_phone;        // Telephone number
    size_t      d_mass;         // The mass in kg

    public:
        // constructors
        Person(
            std::string const &name,
            std::string const &address,
            std::string const &phone,
            size_t mass);

        // accessors
        std::string const &name()    const;
        std::string const &address() const;
        std::string const &phone()   const;
        size_t mass()                const;

        // manipulators
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);

        void setDataMember(std::string &&data, size_t counter);

        // static
        static bool const hasOnly(std::string const &&charsAllowed,
                                  std::string const &stringToCheck);

        // other
        void insert(std::ostream &out);
        void extract(std::istream &in);
};

#endif
