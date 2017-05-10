/*program to display a horizontal bar chart using for, while and/or do-while loops.
Need a function to display (print) one bar of length, say, 7 dots.
Then create a second function to call the first multiple times, each time sending
it a different parameter that represents the length of the bar.

So you want .......
	    ...
	    ..........
	    ......

etc - do it 10 times.*/

#include <stdio.h>
#define FALSE  0;
#define TRUE  1;
/* function prototype declarations */
void printSingleBar(int lengthOfBar);
void callBarFunc(int numberOfBars);

int main (void){
    printSingleBar(10);
    callBarFunc(10);








}

/*function definitions*/
void printSingleBar(int lengthOfBar){
if (lengthOfBar == 0)
    printf("%c\n",'*');

int counter = 0;
int flag = FALSE;
while (!flag){
    printf("%c",'*');
    counter +=1;
    if(counter == lengthOfBar)
        flag = TRUE; 
}
}
void callBarFunc(int numberOfBars){
int k = 0;
int lengthOfBar = 0;
while (k <= numberOfBars){
   /* printf("How many dots does the next horizontal bar have?");
    scanf("%d", &lengthOfBar);*/
    printSingleBar(lengthOfBar);
    k++;
}
}
