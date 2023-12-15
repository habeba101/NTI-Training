#include <stdio.h>
#define n_max 10
int main()
{
    int arr[10], copyarr[10];
    int i, size, sum, sumones;
    int max, min;
    size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            printf("%d ", arr[i]);
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
        sum += arr[i];
        if (arr[i] == 1)
            sumones += arr[i];

        copyarr[i] = arr[i];
    }
    for (i = n_max - 1; i >= 0; i--)
    {
        printf("The reversed Array is ");
        printf(" %d ", arr[i]);
    }
    for (i = 0; i < size; i++)

    {
        printf("The reversed Array is ");
        printf(" %d ", arr[i]);
    }
    printf("The Total Sum is %d, The Sum of All ones is %d ", sum, sumones);
    printf("The max number is %d , The min Number is %d", max, min);

    return 0;
}