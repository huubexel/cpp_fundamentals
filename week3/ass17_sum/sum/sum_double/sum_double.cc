#include "../../main.ih"

using namespace std;

double sum(int const &argc, char **argv, double const &&startingValue)
{
    double total = startingValue;
    for (int idx = 1; idx != argc; ++idx)
        total += stod(argv[idx]);
    return total;
}
