#include "main.ih"

int main(int argc, char **argv)
{
    if (argc >= 2)                // If arguments are given,
    {                             // loop through all the arguments
        for (int idx = 1; idx != argc; ++idx)
        {                         // If one of them has a . (is a double)
            if (static_cast<string>(argv[idx]).find('.') != string::npos)
            {                     // call the sum function for doubles
                cout << sum(argc, argv, 0.0) << '\n';
                return 0;
            }
        }                         // If not one of the arguments is a double,
                                  // call the sum function for integers only
        cout << sum(argc, argv, 0) << '\n';
    }
}

/* 
To compile run the following command (without the newline):
g++ main.cc sum/sum_double/sum_double.cc 
sum/sum_int/sum_int.cc --std=c++23 -Wall -Werror -o a.out
*/
