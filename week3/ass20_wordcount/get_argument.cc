#include "wordcount.ih"

char const getArgument(int argc, char **argv)
{
    if (argc >= 2 && argv[1][1] != '\0')
        return argv[1][1];

    return 'w';
}
