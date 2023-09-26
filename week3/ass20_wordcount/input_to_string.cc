#include "wordcount.ih"

string const inputToString()
{
    string line;
    string allLines; 

    while (getline(cin, line))
        allLines += line;
    return allLines;
}