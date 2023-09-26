#include <iostream>

using namespace std;

double sum(int const &argc, char **argv, double &&startingValue)
{
    double total = startingValue;
    for (int idx = 1; idx != argc; ++idx)
        total += stod(argv[idx]);
    return total;
}