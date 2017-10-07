#include<stdio.h>

#define IN 1    /* inside a word */
#define OUT 0    /* outside a word */

/* count lines, words and characters in input */

/* PR commentary */
main()
{
    int c, nl ,nw, nc, state;

    state = OUT; /* Initially we are out of a word as we have not started */

    nl = nw = nc = 0; /* This is equivalent to nl = (nw = (nc = 0)); An assignment is an expression with a value, and assignments associate RIGHT FROM LEFT.*/

    while ((c = getchar()) != EOF)
    {
        /* Initially we are waiting for input at the terminal. Our first character is there (blank is a character too, the first thing on the screen)
          On subsequent loops we are counting the number of characters (spaces, tabs, newlines included) in the whole input (read the rest of the commentary
          to the end to make this clearer, after words are counted*/ 
        ++nc;
        
        /* Now what if the next character is a LineFeed, that is a newline? */
        if (c == '\n')
            ++nl;

        /* What if instead the next or (first which I guess can be seen of as "next") is a blank? what if the next character is one of a newline or tab also? */
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT; /* then we are out of a word */
        /* If the next character is not one of the above, we must be in a word. If STATE is OUT we need to set it to IN */
        else if (state == OUT)
        {
            state = IN;
            ++nw; /* The first character of a word (which I think in this context word = letter too) is encounterd, so increase the number of words */
        }
        /* Note thet in the else keyword, the statement associated with the else is an if statement that has its own two statements */
    }
    
    /* We have reached end of file. Lets print out the number of lines, words, and characters in the input. Note number of characters will include newline, tabs and blanks */ 
    printf("%d %d %d\n", nl, nw, nc);








    }   





