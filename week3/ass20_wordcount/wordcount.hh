#include <iosfwd>

std::string const inputToString();
char const getArgument(int const argc, char **argv);
size_t const getCountRequested(
    std::string const &input,
    char const &argument);
