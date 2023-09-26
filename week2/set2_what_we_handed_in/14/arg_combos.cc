#include<stdio.h>
#include<iostream>

using namespace std;


int main(int argc, char *argv[])
{                                         // Loop over all bit values of
                                          // 2^(# of arguments)
    for (int iteration = 0; iteration != 1 << (argc - 1) ; ++iteration)
    {
        cout << iteration + 1 << ": ";    // Prints out iteration number

        int idx = 0;                      // index of place in bit sequence

        while (iteration >> idx)          // runs until end of binary seq
        {
            if ((iteration >> idx) % 2)   // prints out nth argument if true
            cout << argv[idx + 1] << ' ';
            ++idx;
        }
        cout << '\n';                     // end line
    }
}

