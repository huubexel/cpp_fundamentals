#include "../internal_header/person.ih"

// ES: CC
// ES: Looks TC there are better ways, I suggest you look into getline 
// ES: from annotations


                                  // Get data from input and put it in the
void Person::extract(istream &in) // datamembers according to interface
{                                 // order, with helper func setDatamember
    string line;                  // Line variable for data
    while (getline(in, line))     // Get data from input and put it in line
    {
        line += ',';              // Add a , to the line for easy processing
        size_t separatorPos, counter = 0;
        while ((separatorPos = line.find(',')) != string::npos)
        {                         // Send piece of data to setDataMember
            setDataMember(line.substr(0, separatorPos), counter);      
            line.erase(0, separatorPos + 1);
            ++counter;            // Erase the piece of data from line,
        }                         // including the , right behind it
    }                             // Add one to the counter, so setDataMember
}                                 // handles the input correctly


// ES: lines 18 and 20 could be simplified together