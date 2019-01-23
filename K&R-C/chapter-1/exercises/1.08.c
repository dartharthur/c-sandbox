#include <stdio.h>

int main()
{
    int c, bl, t, nl;
    bl = 0;
    t = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        switch(c) {
            case ' ': ++bl; break;
            case '\t': ++t; break;
            case '\n': ++nl; break;
        }
    }
    printf("%d Blanks %d Tabs %d Newlines\n", bl, t, nl);
    return 0;
}
