#include "main.ih"

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        for (int idx = 1; idx != argc; ++idx)
        {
            if (static_cast<string>(argv[idx]).find('.') != string::npos)
            {
                cout << sum(argc, argv, 0.0) << '\n';
                exit(1);
            }
        }

        cout << sum(argc, argv, 0) << '\n';
    }
}