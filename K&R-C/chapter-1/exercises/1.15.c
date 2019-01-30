/* Celsius to Fahrenheit: C = (5/9)(F-32) */

#include <stdio.h>

/* print Celsius to Fahrenheit table 
for celsius = 0, 20, ... 300 floating-point version */

float fahr_to_celsius(float f);

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower; /* int is converted to float */
    printf("%s\t%s", "Fahrenheit", "Celsius\n");
    while (fahr <= upper) {
        celsius = fahr_to_celsius(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}

float fahr_to_celsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
