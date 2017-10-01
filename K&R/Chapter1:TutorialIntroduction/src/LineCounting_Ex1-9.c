#include <stdio.h>

/* Exercise 1-9 */
main ()
{
    int c, bl, nl, tb;
    
    bl = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++bl;
        if (bl == 1
        if (c != ' ')
            putchar(c);

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
