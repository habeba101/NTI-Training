#include <stdio.h>

void opArr(int *[3]);
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ip[3] = {&arr[0], &arr[1]};
    opArr(ip);
    return 0;
}

void opArr(int *p[3])
{

    int i, j, max, min;
    max = min = p[0][0];
    float avg;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if (p[i][j] >= max)
                max = p[i][j];
            if (p[i][j] <= min)
                min = p[i][j];
            avg += p[i][j];
        }
    }

    avg /= (float)6;

    printf("The max is %d", max);
    printf("The min is %d", min);
    printf("The avg is %f", avg);
}