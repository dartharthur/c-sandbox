/* Functions */

/*
A function definition has this form:

return-type function-name(parameter declarations, if any)
{
    declarations
    statements
}
*/

#include <stdio.h>

/*
    This declaration says that power is a function that expects two int arguments
    and returns an int.

    This declaration, which is called a function prototype, has to agree to with the definition and
    uses of power. It is an error if the definition of a function or any uses of it do not agree with
    its prototype.

    Note that parameter names need not agree. Parameter names are optional in a function prototype,
    so we could have written:

        int power (int, int);
    
    Well-chosen names constitute good documentation, however, so we use them often.
*/
int power(int m, int n);

/* test power function */ 
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    /* 
        return value of 0 implies normal termination
        non-zero values signal unusual or erroneous termination conditions
    */
    return 0; 
}

/* power: raise base to n-th power; n >= 0 */ 
int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base; 
    return p;
}
