#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
        printf("%d ", c != EOF);
    }
    printf("\n%d\n", c != EOF);
    return 0;
}

/*
gcc 1.6.c -o eof.out && ./eof.out < afile
c1 o1 n1 t1 e1 n1 t1 s1
0
*/
