#include "../../../main/internal_header/main.ih"

void Person::extract(istream &in)
{
    string line;
    while (getline(in, line))
    {
        line += ',';
        size_t separatorPosition, counter = 0;
        while ((separatorPosition = line.find(',')) != string::npos)
        {
            Person::setDataMember(line.substr(0, separatorPosition), counter);
            line.erase(0, separatorPosition + 1);
            ++counter;
        }
    }
}
