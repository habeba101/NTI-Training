#include <stdio.h>
int isPrime(int a);
int main()
{
    int x;
    printf("Enter the Number");
    scanf("%d", &x);
    printf("Prime is one and not Prime is zero = %d", isPrime(x));

    return 0;
}
int isPrime(int a)
{
    int i;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0 && a != i)
        {
            return 0;
        }
    }
    return 1;
}