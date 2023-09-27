#include "main.ih"

int main(int argc, char **argv)
{                                    // Get input from user
    string input = inputToString();  // Get argument given
    char argument = getArgument(argc, argv);
    cout << getCountRequested(input, argument) << '\n';
}                                    // Get and print the count requested

/*
To compile use (without the newlines in between):
g++ main.cc get_argument/get_argument.cc
get_count_requested/get_count_requested.cc
input_to_string/input_to_string.cc --std=c++23 -Wall -Werror -o a.out
*/
