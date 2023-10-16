#include "../charcount/charcount.ih"

int main()
{
    CharCount cc{};
    cc.count();
    for (size_t counter = 0; counter != cc.info().nCharObj; ++counter)
    {
        showChar((cc.info().ptr + counter)->ch);
        cout << (cc.info().ptr + counter)->count << '\n';
    }
}
