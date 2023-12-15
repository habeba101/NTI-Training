#include <stdio.h>
void nfact(int num);

int main()
{
    int x;
    printf("Enter the Number");
    scanf("%d", &x);
    nfact(x);

    return 0;
}

void nfact(int num)
{
    int i, j, fact = 1;
    float res = 0;
    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("fact is %d \n", fact);
        res += (float)i / fact;
        fact = 1;
    }
    printf("The result is %f", res);
}
