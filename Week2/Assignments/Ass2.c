#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, val;
    printf("Enter the number of rows");
    scanf("%d", &val);
    k = val;
    for (i = 0; i <= val; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf(" ");
        }
        k--;

        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}