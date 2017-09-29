/* Exercise 1-6 */

#include <stdio.h>

main()
{
    int c;

    c = getchar() != EOF; /* != has higher precedence than = */
    
    printf("%d\n", c);
}
