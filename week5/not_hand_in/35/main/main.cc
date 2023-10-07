#include "../internal_header/charcount.cc"

int main()
{
    string textString = readTestFile();
    for (char ch: textString)
        showChar(ch);
}