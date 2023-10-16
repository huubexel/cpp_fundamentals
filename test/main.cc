#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int[5];
    *(ptr + 4) = 4;

    cout << *(ptr + 4);
}
