/*
 * 272 - TEX Quotes
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    bool in_quote = false;
    char c;

    while ((c = getchar()) != EOF)  {
        if (c == '"')  {
            if (in_quote)  {
                putchar('\'');
                putchar('\'');
                in_quote = false;
            } else  {
                putchar('`');
                putchar('`');
                in_quote = true;
            }
        } else  {
            putchar(c);
        }
    }

    return 0;
}