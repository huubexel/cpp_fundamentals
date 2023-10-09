#include "../internal_header/person.ih"

void Person::extract(istream &in)
{
    string line;
    for (size_t counter = 0; counter != 3; counter++)
    {                                 // For the first three datamembers,
        getline(in, line, ',');       // Get the substring
        setDataMember(line, counter); // Set the substring as the value for 
    }                                 // the corresponding datamember

    getline(in, line);                // Get the mass from the last substring
    setMass(stoull(line));            // Set the mass as the datamember value
}

// In the for loop, counter++ is implemented, this is because the
// increment needs to happen after the loop has been done.
