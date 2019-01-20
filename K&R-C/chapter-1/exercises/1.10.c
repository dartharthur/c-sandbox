#include <stdio.h>

int main()
{
    int c, bl, t, nl;
    bl = 0;
    t = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        switch(c) 
        {
            case '\t': putchar('\\'); putchar('t'); break;
            case '\b': putchar('\\'); putchar('b'); break;
            case '\\': putchar('\\'); putchar('\\'); break;
            default: putchar(c);
        }
    }
    return 0;
}
