#ifndef StructAlgorithm
#define StructAlgorithm

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
    int id;
    float salary;

} emp_t;

emp_t *takeEmp(emp_t *emp, int size);
void printEmp(emp_t *emp, int size);

int linearSearchEmp(emp_t *emp, int size, int id);
int binarySearchEmp(emp_t *emp, int size, int id);

void swap(emp_t *arr, emp_t *arr1);
void bubbleSortAsc(emp_t *emp, int size);
#endif