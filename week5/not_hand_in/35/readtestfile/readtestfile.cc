#include "../internal_header/charcount.cc"

string readTestFile()
{
    ifstream inputFile("lorem.txt");

    if (!inputFile.is_open()) 
        cerr << "Error opening the file.\n";

    string fileContents, line;
    while (getline(inputFile, line))
        fileContents += line + '\n';

    inputFile.close();

    return fileContents;
}