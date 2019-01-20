/*
File Copying

A text stream is a sequence of characters divided into lines;
each line consists of zero or more characters followed by a
newline character.

read a character
    while (charater is not end-of-file indicator)
        output the character just read 
        read a character
*/

#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c; /* type is int, not char, because need to be able to hold value EOF i.e. "end of file" */
    c = getchar(); /* reads and returns next input character from a text stream */
    while (c != EOF) {
        putchar(c); /* prints a character when called */
        c = getchar();
    }
}

/* EOF is an integer defined in <stdio.h>, it's a symbolic constant */

/* copy input to output; 2nd version */ 
main()
{
    int c;

    while ((c = getchar()) != EOF) /* a common idiom to centralize input */
        putchar(c);
}

/*
note parentheses are necessary as the relational test (!=)
is done before the assignment (=) without parentheses

c = getchar() != EOF ==> c = (getchar() != EOF)
*/
