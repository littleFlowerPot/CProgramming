#include <stdio.h>
int main (void)
{
printf("\nPlease enter two integers, comma seperated:\n");
int a = 0;
int b = 0;
scanf("%d, %d",&a, &b);
printf("\nThe two integers you have entered are: %d and %d\n\n",a, b);

printNumbers(a,b); /* Recursive Function with a display of recusrive call counter */











}
