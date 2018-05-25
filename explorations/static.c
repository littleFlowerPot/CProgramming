#include <stdio.h>

int func();
int func2();
int main()
{
    printf("%d\n",func());
    printf("%d\n",func());
    printf("%d\n",func());

    printf("%d\n",func2());
    printf("%d\n",func2());
    printf("%d\n",func2());
   




    return 0;
}

int func()
{
    static int number_of_calls = 0;
    return ++number_of_calls;
}

int func2()
{
    int number_of_calls = 0;
    return ++number_of_calls;
}
