#include <stdio.h>

/*Exercise 1-12 */

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main()
{
    int c, state, numberOfOuts;
    state = OUT;
    numberOfOuts = 0;
    while((c = getchar()) != EOF)
    {
       if (c == ' ' || c == '\n' || c == '\t')
       {   
          state = OUT;
          ++numberOfOuts;
       }
       else if (state == OUT)
       { 
          state = IN;
          numberOfOuts = 0;
       }             
       if (state == IN) 
          putchar(c);
       else if (state == OUT && numberOfOuts == 1)
       {
          printf("\n");
       }
    }
}
     
