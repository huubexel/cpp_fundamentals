#include "wordcount.ih"

string const inputToString()
{
    string line, allLines;

    while (getline(cin, line))
        allLines += line + '\n';
    return allLines;
}
