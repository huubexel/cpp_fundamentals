#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_


#include <string> // for some reason it doesn't work with iosfwd, ask in class.

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t      d_mass;         // the mass in kg.

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

        // static
        static bool const hasOnly(std::string const charsAllowed,
                                  std::string const &stringToCheck);

        // other
        void insert(std::ostream &out);
};

#endif
