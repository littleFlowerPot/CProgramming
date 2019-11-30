#include <stdio.h>

/* Exercise 1-8 */
main ()
{
    int c, nl, tb, bl;
    
    nl = 0;
    tb = 0;
    bl = 0;
    while ((c = getchar()) != EOF)   /* I am not using || as that has not been covered yet.*/
    {
        if (c == ' ')
        {
            ++bl;
            printf("%d\n", c);
        }

        if (c == '\t')
        {
            ++tb;
            printf("%d\n", c);
        }

        if (c == '\n')
        {
            ++nl;
            printf("%d\n", c);
        }
}
    
    printf("%d\n", bl);
    printf("%d\n", tb);
    printf("%d\n", nl);

}
/*****************************************
Note interesting observation. In bash
ctrl d to indicate EOF, if pressed on
first line of input in the console,
need to be pressed twice. I.E it looks like,
if LF has not been detected, require EOF signal to be sent again.
******************************************************************/
