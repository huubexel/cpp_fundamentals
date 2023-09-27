#include "../main.ih"

size_t const getCountRequested(string input, char argument)
{
    size_t count = 0;
    switch (argument)
    {
        case 'w':
            for (char inputChar : input)
            {
                if (inputChar == ' ')
                    ++count;
            }
            return count + 1;
        break;

        case 'c':
            return input.length();
        break;

        case 'l':
            for (char inputChar : input)
            {
                if (inputChar == '\n')
                    ++count;
            }
            return count;
        break;
    }
    return 0;
}