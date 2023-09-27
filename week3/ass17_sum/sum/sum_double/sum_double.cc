#include "../../main.ih"

double sum(int const &argc, char **argv, double const &&startingValue)
{
    double total = startingValue;         // Put the startingValue in total
    for (int idx = 1; idx != argc; ++idx) // For each argument that is given,
        total += stod(argv[idx]);         // add the argument to the total
    return total;                         // return the total (double)
}
