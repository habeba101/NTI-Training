#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = i; j <= 10; j++)
        {
            printf("%d * %d = %d   ", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}