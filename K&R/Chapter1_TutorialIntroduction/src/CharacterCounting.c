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
/*******************************************************
Note here that, if EOF is encountered, nc is still set to 0.
So initilaisation occurs before the stop condition is tested for.
This is indeed mention in K&R: The initialization is done once, before
the loop is entered proper.

This example here is a good example of using for statement with an empty body
to control the program, including dealing with the case of empty input (i.e EOF
input straight away). All the work is done in the test and increment parts of the
for statement.
**********************************************************/
