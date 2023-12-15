
#include <stdio.h>

int main()
{
    int div, i, sum = 0;
    printf("Enter a number ");
    scanf("%d", &div);
    for (i = 1; i < div; i++)
    {
        if (div % i == 0)
            sum += i;
    }
    if (sum == div)
        printf("%d is a perfect number ", div);
    else
        printf("%d is not  a perfect number ", div);

    return 0;
}