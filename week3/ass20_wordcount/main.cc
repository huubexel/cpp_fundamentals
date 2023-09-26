#include "wordcount.ih"

int main(int argc, char **argv)
{
    string input = inputToString();
    char argument = getArgument(argc, argv);
    cout << getCountRequested(input, argument) << '\n';
}
