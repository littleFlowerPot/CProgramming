#include<stdio.h>
#include "calc.h"
int main (void)
{
    extern int bufp;
    printf("%d",bufp);
  ungetch(bufp); 
}
