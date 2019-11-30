/*int strlen_mine(char s[])
{
    int n;
    for (n=0;*s!='\0';s++)
        n++;
    return n;
} */

/*See pg 99 to see why
 * this is equivalent: an
 * array name is not a 
 * variable, so locally in 
 * the strlen_mine function
 * the array name parameter is
 * a pointer, which is a 
 * variable
 */
int strlen_mine(char *s )
{
    int n;
    for (n=0;*s!='\0';s++)
        n++;
    return n;
} 


