#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= (5 - i); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}