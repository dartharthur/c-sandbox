/* Arrays */

#include <stdio.h>
/* count digits, white space, others */ 
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            printf("%d\n", c);
            /*
                ASCII value for printable digit char '0' is 48.
                When c is a printagle digit char, it's integer
                value will be between 48 and 57 but our indexes
                in our ndigit array are between 0 and 9, so in
                order to figure out which at which index to
                increment our digit count, we need to subtract
                by '0' or 48.

                Note this only works if character sets have
                consecutive increasing values. Since this is
                true for all character sets, this is safe to use.

                Further note that chars are just small integers,
                so char variables and constants are identical to
                ints in arithmetic expressions.

                Thus, c-'0' is an integer expression and thus a
                valid subscript for the array ndigit.
            */
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}
