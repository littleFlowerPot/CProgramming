#include <stdio.h>
void printNumbers(int a, int b, int counter);
int main (void)
{
printf("\nPlease enter two integers, comma seperated:\n");
int a = 0;
int b = 0;
int lowerBound = 0;
int upperBound = 0;
scanf("%d, %d",&a, &b);
printf("\nThe two integers you have entered are: %d and %d\n\n",a, b);
int counter = 0;
if(a<b){
 lowerBound = a;
 upperBound = b;
}
if(a>b){
 lowerBound = b;
 upperBound = a;
}
printNumbers(lowerBound, upperBound, counter); /* Recursive Function with a display of recusrive call counter */











}
void printNumbers(int a, int b, int counter)
{
printf("a = %d, b =  %d, recursive call count =  %d\n", a,b,counter);
if (a+1<=b)
printNumbers((a+1), b, (counter+1));
}

