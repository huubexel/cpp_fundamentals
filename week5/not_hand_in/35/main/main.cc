#include "../charcount/charcount.ih"

int main()
{
    CharCount cc { { new Char, 0 }, 0 };
    cout << cc.count() << '\n';
}
