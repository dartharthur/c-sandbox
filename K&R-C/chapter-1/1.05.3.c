/* Line Counting */

/*
    The standard library ensures that an input text stream appears as
    a sequence of lines, each terminated by a newline. So counting lines
    is just counting newlines.
*/

#include <stdio.h>

/* count lines in input */ 
main() 
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        /*
            A character written between single quotes represents an
            integer value equal to the numerical value of the character
            in the machine's character set. This is called a character
            constant, which is another way to write a small integer.

            For example: 'A' is a character constant, in the ASCII
            character set its value is 65.
        */
        if (c == '\n') /* 10 in ASCII */
        {
            ++nl;
        }
    }
    printf("%d\n", nl); 
}
