#include <stdio.h>
void CountFun(int *arr, int size, int *ptr1, int *ptr2);

int main()
{
    int countOnes = 0, countNegOnes = 0;
    int *ptrCountOnees = &countOnes;
    int *ptrCountNegOnees = &countNegOnes;

    int arr[6] = {1, -1, 1, -1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    CountFun(arr, size, ptrCountNegOnees, ptrCountOnees);
    printf("The number of negative ones is %d , The number of ones is %d", *ptrCountNegOnees, *ptrCountOnees);

    return 0;
}

void CountFun(int *arr, int size, int *ptr1, int *ptr2)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (*(arr + i) == -1)
            (*ptr1)++;
        if (*(arr + i) == 1)
            (*ptr2)++;
    }
}