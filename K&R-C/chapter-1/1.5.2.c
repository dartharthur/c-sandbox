/* Character Counting */

#include <stdio.h>

/* count characters in input; 1st version */
/*
int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
*/

/* count characters in input; 2nd version */ 
int main()
{
    double nc;
    /*
        Rules of C require that a for statement have a body,
        even if all work done is in the test. A null statement
        (the isolated semi-colon) satisfies this requirement.
        We put it on a separate line for visibility.
    */
    for (nc = 0; getchar() != EOF; ++nc)
    {
        ;
    }
         
    printf("%.0f\n", nc); 
}

/*
    Seems that there's a difference between having this program read
    from a file (e.g. eof.out < exercises/afile) and reading from stdin
    i.e. accepting character strings via the terminal.

    When reading from stdin, we never exit the loop. Stdin never returns EOF
    because the end of the file is never reached, the stream is continuous.

    When reading from a file, we will exit the loop. We will eventually hit
    the end of the file and getChar() will equal EOF. Any print statements
    after the loop will then run.

    Reference: https://bytes.com/topic/c/answers/941322-why-does-printf-not-print-after-while-loop-c
*/
