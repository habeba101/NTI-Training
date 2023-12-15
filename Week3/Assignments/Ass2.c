#include <stdio.h>

int main()
{

    int limit1, limit2, num, val, i, cubicsum = 0;
    printf("Enter a number ");
    scanf("%d %d", &limit1, &limit2);
    for (i = limit1; i <= limit2; i++)
    {
        num = i;
        while (num != 0)
        {
            val = num % 10;
            cubicsum += (val * val * val);
            num /= 10;
        }

        if (cubicsum == i)
            printf("The Number %d is an armstrong Number \n", i);
        else if (cubicsum != i)
            printf("The Number %d is an  not armstrong Number\n ", i);
        cubicsum = 0;
    }

    return 0;
}