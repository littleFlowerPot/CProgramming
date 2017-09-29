/* Character Counting K&R 2nd Version: My notes and experiments */

#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
    double nc = 4.0;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
} 

