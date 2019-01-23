/* Variables and Arithmetic Expressions */

/* Celsius to Fahrenheit: C = (5/9)(F-32) */

#include <stdio.h>

/* print Celsius to Fahrenheit table 
for celsius = 0, 20, ... 300 floating-point version */

int main()
{
    float fahr, celsius; /* in C, all variables must be declared before they are used */
    float lower, upper, step; /* statements end in semi-colons */

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower; /* int is converted to float */
    printf("%s\t%s", "Fahrenheit", "Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0); /* decimal point in a constant indicates that it's a floating point */
         /* %3.0: three char wide, no decimal point / fraction digits */
         /* %6.1: six char wide, one digit after decimal point */
        printf("%3.0f\t%6.1f\n", fahr, celsius); /* %f for floating point */
        fahr = fahr + step; /* can augment %f with widths for prettier output */
    }
    
    return 0;
}
