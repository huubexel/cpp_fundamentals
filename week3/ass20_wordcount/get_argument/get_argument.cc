#include "../main.ih"

char const getArgument(int argc, char **argv)
{                                 // If an argument is set, return it
    if (argc >= 2 && argv[1][1] != '\0')
        return argv[1][1];
    return 'w';                   // If it's not set, return 'w'
}
