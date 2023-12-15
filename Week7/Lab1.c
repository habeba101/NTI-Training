
#include "Algorithm.h"

int main()
{
    int ascending;
    printf("enter the order you want Asc=0,Dec=1");
    scanf("%d", &ascending);
    int arr[5] = {10, 15, 20, -2, 9};
    int arr1[5] = {20, 15, 35, -2, -9};

    if (!ascending)
    {
        selectionSortDec(arr, 5);
        bubbleSortDec(arr1, 5);
        printArr(arr1, 5);
        printArr(arr, 5);
    }
    else
    {
        selectionSortAsc(arr, 5);
        bubbleSortAsc(arr1, 5);
        printArr(arr1, 5);
        printArr(arr, 5);
    }

    printf("%d \n", arr[linearSearch(arr, 5, 10)]);

    printf("%d \n", arr1[binarySearch(arr1, 5, 35)]);

    return 0;
}