/* program to print a horizontal histogram of the lengths of words in its input */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_INDEX_WLENGTHS 9 /* max length of a word that we'll track */

int main() {
    int c, i, wlength, pstate, state;
    int wlengths[10];

    pstate = state = OUT;
    wlength = 0;
    for (i = 0; i < 10; ++i)
        wlengths[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
            state = IN;

        if (state == IN) {
            ++wlength;
            putchar(c);
        } else if (pstate != state) {
            // can be made into a function
            if (wlength >= MAX_INDEX_WLENGTHS) {
                ++wlengths[MAX_INDEX_WLENGTHS];
                printf(" Word length was: %d", wlength);
                wlength = 0;
                putchar('\n');
            } else {
                ++wlengths[wlength];
                printf(" ==> Word length was: %d", wlength);
                wlength = 0;
                putchar('\n');
            }
        }

        pstate = state;
    }

    // can be made into a function
    if (state == IN) {
        if (wlength >= MAX_INDEX_WLENGTHS) {
            ++wlengths[MAX_INDEX_WLENGTHS];
            printf(" Word length was: %d", wlength);
            wlength = 0;
            putchar('\n');
        } else {
            ++wlengths[wlength];
            printf(" ==> Word length was: %d", wlength);
            wlength = 0;
            putchar('\n');
        }
    }

    // can be made into a function
    printf("\n");
    for (i = 1; i < 10; ++i)
        printf("  Words with %d character(s): %d \n", i, wlengths[i]);
    printf("\n");

    // can be made into a function
    for (i = 1; i < 9; ++i) {
        int j, temp;
        j = wlengths[i];
        temp = 0;
        printf("  Words with %d character(s): ", i);
        while (temp < j) {   
            printf("|");
            ++temp;    
        }
        printf("\n");
    }

    // can be made into a function (could be same one as above)
    int j, temp;
    j = wlengths[9];
    temp = 0;
    printf(" Words with %d+ character(s): ", 9);
    while (temp < j) {
        printf("|");
        ++temp;    
    }
    printf("\n");

    return 0;
}
