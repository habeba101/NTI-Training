#include "Algorithm.h"

// Acending order
void selectionSortAsc(int arr[], int size)
{
    int min_index = 0;
    for (int i = 0; i < size; i++)
    {
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            if (i != min_index)
            {
                swap(arr + i, arr + min_index);
            }
        }
    }
}

// Descending order
void selectionSortDec(int arr[], int size)
{
    int max_index = 0;
    for (int i = 0; i < size; i++)
    {
        max_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
            if (i != max_index)
            {
                swap(arr + i, arr + max_index);
            }
        }
    }
}

// Acending order
void bubbleSortAsc(int arr[], int size)
{
    int SWAP_FLAG = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + (j + 1));
                SWAP_FLAG = 1;
            }
        }
        if (!SWAP_FLAG)
            break;
    }
}

// decending order
void bubbleSortDec(int arr[], int size)
{
    int SWAP_FLAG = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {

            if (arr[j] < arr[j + 1])
            {
                swap(arr + j, arr + (j + 1));
                SWAP_FLAG = 1;
            }
        }
        if (!SWAP_FLAG)
            break;
    }
}
void swap(int *arr, int *arr1)
{
    int *temp;
    temp = *arr;
    *arr = *arr1;
    *arr1 = temp;
}

int linearSearch(int *arr, int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}
int binarySearch(int *arr, int size, int num)
{
    int low = 0, high = size - 1, middle;

    for (int i = low; i <= high; i++)
    {
        middle = (low + high) / 2;
        if (arr[middle] == num)
            return middle;
        else
        {
            if (arr[middle] > num)
            {
                low = middle + 1;
            }
            else if (arr[middle] < num)
            {
                high = middle - 1;
            }
        }
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


