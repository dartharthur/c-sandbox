/*
Symbolic Constants

Bad practice to bury "magic" numbers in a program i.e.
numbers that don't have any meaning out of context.

Can use Symbolic Constants to give magic numbers
meaningful names.

Symbolic Constants are NOT variables, 
so they don't appear in declarations.

Symbolic Constants are written in upper case and
have no semicolon at the end of a #define line.
*/

#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Fahrenheight-Celsius table */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
