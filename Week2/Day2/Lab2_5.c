#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 2; i <= 99; i += 2)
    {
        printf("The Value of i is %d \n", i);
        sum += i;
    }
    printf("The sum is %d", sum);

    return 0;
}