#include <stdio.h>
int main()
{
    int i, Factorial = 1;
    unsigned long long Num;
    printf("Enter The Number");
    scanf("%llu", &Num);
    for (i = 1; i <= Num; i++)
    {
        Factorial *= i;
    }
    printf("The Factorial of %llu is %d", Num, Factorial);

    return 0;
}