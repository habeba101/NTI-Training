#include <stdio.h>

#ifndef Algorithm
#define Algorithm

void selectionSortAsc(int arr[], int size);
void bubbleSortAsc(int arr[], int size);

void selectionSortDec(int arr[], int size);
void bubbleSortDec(int arr[], int size);

int linearSearch(int *arr, int size, int num);
int binarySearch(int *arr, int size, int num);

void swap(int *arr, int *arr1);
void printArr(int arr[], int size);

#endif