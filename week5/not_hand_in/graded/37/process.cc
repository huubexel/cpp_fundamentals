#include <cstddef>

void process(size_t begin, size_t end, char const *const *args)
{
    for
    (
        // ML: Correct, but mind the const order -> char const not const char.
        const char *const *argsBegin = args + begin, *const *argsEnd = args + end;
            argsBegin != argsEnd;
                ++argsBegin
    )
        process(begin, end, argsBegin);
}
