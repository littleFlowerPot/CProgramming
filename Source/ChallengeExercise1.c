#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*A C program that recieves as input height in cm, and output in feet and inches*/
int main(void)
{
	/* Declare the variables*/
	float cm;
	printf("Please enter the height in cm: ");
	scanf("%f", &cm);

	int feet = 0.0;
	int inches = 0.0;
	inches = (1/2.54)*cm;
	/*int tempVar = (1 / 2.54)*5;
	printf("tempVar = :%d\n", tempVar);*/
	printf("Checking inch conversion: %d\n", inches);
	if (inches < 12)
	{
		printf("Height is %d feet and %d inches",feet, inches);


	}
	else
	{
		feet = inches / 12;
		printf("Checking feet: %d\n", feet);
		inches = inches % 12;
		printf("Checking inches: %d\n", feet);
		printf("Height is %d feet and %d inches",feet, inches);

	}




}

