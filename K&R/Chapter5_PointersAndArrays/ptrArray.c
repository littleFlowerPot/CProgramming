#include <stdio.h>
#include <time.h>

int main (void)
{
    int a[5] = {1,2,3,4,5};
    clock_t begin = clock();
    printf("\n%d\n",a[3]);
    clock_t end = clock();
    double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("\n%0.56f\n",time_spent);

    printf("\n%d\n",*(a+3));
    time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("\n%0.56f\n",time_spent);

    
    

    return 0;
}

