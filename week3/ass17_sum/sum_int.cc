#include <iostream>

using namespace std;

int sum(int const &argc, char **argv, int &&startingValue)
{
    int total = startingValue;
    for (int idx = 1; idx != argc; ++idx)
        total += stoi(argv[idx]); 
    return total;
}