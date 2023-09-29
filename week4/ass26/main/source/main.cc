#include "../internal_header/main.ih"

int main()
{
    Person jurjen{ "Jurjen Bokma", "Herestraat 104", "0697862431", 75 };
    // cout << jurjen.name() << '\n';
    // jurjen.setPhone("06 10 82 bier 20");
    // cout << jurjen.phone() << '\n';
    // jurjen.setPhone("0612435465");
    // cout << jurjen.phone() << '\n';
    // jurjen.insert(cout);

    jurjen.extract(cin);
}
