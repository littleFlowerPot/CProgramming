
// Thanks to Casey Muratori for showing this method

#include <stdio.h>
#define printInt(some_integer) printf("%d\n", some_integer);
#define printDouble(some_double) printf("%f\n", some_double);


struct ReturnValues 
{
    int returnVal1;
    double returnVal2;
}; 


struct ReturnValues func1(int input1, double input2)
{
    struct ReturnValues returnVals;

    returnVals.returnVal1 = input1;
    returnVals.returnVal2= input2;

    return returnVals;
}



int main()
{
    printInt(func1(456,123.123).returnVal1);
    printDouble(func1(456,123.123).returnVal2);
     
    return 0;
}

