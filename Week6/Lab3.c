#include <stdio.h>
#include <stdlib.h>
int *takeArr(int size);
int *reverseArr(int *arr, int size);
void printarray(int *arr, int size);
int main()
{

    int *array = takeArr(5);
    printarray(array, 5);
    printf("\n");
    int *reverseArray = reverseArr(array, 5);
    printarray(reverseArray, 5);
    return 0;
}

int *takeArr(int size)
{

    int i, *arr = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    return arr;
}
int *reverseArr(int *arr, int size)
{
    int i, j;
    int *revArr = (int *)malloc(size * sizeof(int));
    for (i = size - 1, j = 0; i >= 0, j < size; i--, j++)
    {
        revArr[i] = arr[j];
    }

    return revArr;
}
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
