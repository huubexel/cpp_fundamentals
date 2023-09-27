#include "../../main.ih"

int sum(int const &argc, char **argv, int const &&startingValue)
{
    int total = startingValue;            // Put the startingValue in total
    for (int idx = 1; idx != argc; ++idx) // For each argument that is given,
        total += stoi(argv[idx]);         // add the argument to the total
    return total;                         // return the total (double)
}
