/* Variables and Arithmetic Expressions */

/* Celsius to Fahrenheit: C = (5/9)(F-32) */

#include <stdio.h>

/* print Celsius to Fahrenheit table for celsius = 0, 20, ... 300 */

int main()
{
    int fahr, celsius; /* in C, all variables must be declared befor they are used */
    int lower, upper, step; /* statements end in semi-colons */

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) 
    {
        celsius = 5 * (fahr - 32) / 9; /* mult by 5 first bc integer division discards fraction, 5/9 truncates to zero */
        printf("%3d\t%6d\n", fahr, celsius); /* %d substituted positionally with integer arguments */
        fahr = fahr + step; /* can augment %d with widths for prettier output */
    }

    return 0;
}

/* problem: we have used integer arithmetic, so Celsius temperatures are inaccurate */
