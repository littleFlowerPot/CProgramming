#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Celcius = 0;
	double Fahrenheit = 0;
	int Kelvin = 0;
	/* Capital letters for variable names as these are names of
	people (Celcius too?)*/
	
	/*Do the boiling point*/
	Celcius = 100;
	printf("\nThe boiling point of water in Fahrenheit is"
		": %.2f\n", Fahrenheit=Celcius*9/5 + 32);
	printf("The boiling point of water in Kelvin is: %d\n", Kelvin=Celcius + 273);

	/*Do the freezing point*/
	Celcius = 0;
	printf("The freezing point of water in Fahrenheit is"
		": %.2f\n", Fahrenheit=Celcius*9/5 + 32);
	printf("The freezing point of water in Kelvin is: %d\n", Kelvin=Celcius + 273);

	

}