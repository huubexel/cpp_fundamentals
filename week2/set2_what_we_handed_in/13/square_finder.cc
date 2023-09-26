#include <iostream>
#include <cmath>

using namespace std;


int main()
{                                                // checks first 3dig sqrt
                                                 // and runs to last 3dig sqr
    for (size_t root = 10, rc = sqrt(1000) ; root < rc; ++root)
    {
        size_t const diff_square = 2 * root + 1; // difference of 2 squares
        size_t const nr = root * root + 13;      // as fun smaller sqrt

        if (diff_square == 45 and nr < 1000)     // if difference is 45 and is
                                                 // 3dig then returns ok
        {
            cout << nr << " satisfies the requirements" << '\n';
            return 0;
        }
    }

    cout << "No number satisfying the requirements was found";
    return 1;                                  // if no good nr found, return 1
}

