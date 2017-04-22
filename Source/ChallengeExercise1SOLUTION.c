#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double cm;
	int feet = 0.0;
	double inches = 0.0;
	printf("Please enter the height in cm: ");
	scanf("%lf", &cm);
	inches = cm/2.54;
	feet = inches / 12;
	double delta = inches - (feet * 12);
	printf("Height is %d feet and %.1f inches", feet, delta);

}



