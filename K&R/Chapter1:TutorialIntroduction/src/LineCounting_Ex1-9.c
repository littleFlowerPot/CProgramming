#include <stdio.h>

/* Exercise 1-9 */
main ()
{
    int c, bl;
    
    bl = 0;
    
    while ((c = getchar()) != EOF)
    {
        /* Deals with tab - sets the input char to be a blank */
        if (c == '\t')
            c = ' '; 

        if (c == ' ')
        {
            ++bl;
            if (bl >= 2)
                ;
            if (bl < 2)
                putchar(c);
        }

        if (c != ' ')
        {
            putchar(c);
            bl = 0;
        }
    }




}








/*******************************************************
Observations

printf(" &d ", c) will print a blank before and a blank after value of c.
This pertains to escape sequences used in string constants. So I could do
"\t&d" Hmmm.....K&R mentioned this with their farenhiet example!! So the blank
makes perfect sense.


if I write while ((c == getchar()) != EOF) with empty body (;), and then putchar(c), or
printf c , then the values I will get respectively are (as I will need supply EOF once I am finished with
input) the EOF character symbol on screen, or -1 on my machine.
So the last character input. Constrast this to putchar and printf waiting for the LF command before executing.

********************************************************************/       
