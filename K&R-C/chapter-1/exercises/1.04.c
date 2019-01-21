/* Fahrenheit to Celsius: F = C * (9 / 5) + 32 */

#include <stdio.h>

/* print Fahrenheit to Celsius table 
for fahr = 0, 20, ... 300 floating-point version */

int main() 
{
    float fahr, celsius;
    float step, lower, upper;

    step = 20;
    lower = 0;
    upper = 300;

    celsius = lower;
    printf("%s\t%s", "Celsius", "Fahrenheit\n");
    while (celsius <= upper) 
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
