#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
                                               // input time 1 through 10
    for (size_t mult = 1, inVal = stoul(argv[1]); mult <= 10; ++mult)

        cout << mult << " * " << inVal
             << " = " << mult * inVal << '\n'; // prints multiplication table
}

