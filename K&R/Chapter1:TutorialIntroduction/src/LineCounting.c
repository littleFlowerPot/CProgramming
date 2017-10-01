#include <stdio.h>

/* count lines in input */
main ()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
        {
            printf("%d\n", c);  /* With Bash, pressing enter, i.e LineFeed seems to correspond to \n. The print out is 10, ascii for LF */
            ++nl;
        }
    printf("%d\n", nl);
}
