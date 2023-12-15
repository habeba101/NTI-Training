#include <stdio.h>
int main()
{
    int arr[3][4], arr1[3][4];
    int i, j, num, flagN;
    int max, min;
    printf("Enter a Number to multiple with the array");
    scanf("%d", &num);
    printf("Enter the First array");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the Second array");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    max = arr[0][0];
    min = arr[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (arr[i][j] > max)
                max = arr[i][j];

            if (arr[i][j] < min)
                min = arr[i][j];

            if (arr[i][j] != arr1[i][j])
                flagN = 1;
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf(" %d * %d = %d \n", num, arr[i][j], num * arr[i][j]);
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf("array of no [%d] [%d] is %d \n", i, j, arr[i][j]);
            }
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf(" %d + %d = %d \n", arr1[i][j], arr[i][j], arr[i][j] + arr1[i][j]);
            }
        }
    }
    if (flagN)
        printf("The arrays are not Equal\n");
    else
        printf("The arrays are equal\n");

    printf("The Max number is %d \n , The min Number is %d \n", max, min);
}