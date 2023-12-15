#include <stdio.h>
#include <math.h>
int main()
{

    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FIZZBUZZ \n");
        }
        else if (i % 3 == 0)
        {
            printf("FIZZ \n");
        }
        else if (i % 5 == 0)
        {
            printf("BUZZ \n");
        }
        else
        {
            printf("%d \n", i);
        }
    }
    return 0;
}