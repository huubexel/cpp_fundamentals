#include "main.ih"

int main(int argc, char **argv)
{
    string input = inputToString();
    char argument = getArgument(argc, argv);
    cout << getCountRequested(input, argument) << '\n';
}

// To compile use:
// g++ *.cc get_argument/*.cc get_count_requested/*.cc input_to_string/*.cc --std=c++23 -Wall -Werror -o a.out