#include "SructAlgorithm.h"

int linearSearchEmp(emp_t *emp, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (emp[i].id == id)
            return i;
    }
    return -1;
}
int binarySearchEmp(emp_t *emp, int size, int id)
{
    int low = 0, high = size - 1, middle;

    for (int i = low; i <= high; i++)
    {
        middle = (low + high) / 2;
        if (emp[i].id == id)
            return middle;
        else
        {
            if (emp[i].id > id)
            {
                low = middle + 1;
            }
            else if (emp[i].id < id)
            {
                high = middle - 1;
            }
        }
    }
}

void swap(emp_t *arr, emp_t *arr1)
{
    emp_t temp;
    temp.id = arr->id;
    strcpy(temp.name, arr->name);
    temp.salary = arr->salary;
    arr->id = arr1->id;
    strcpy(arr->name, arr1->name);
    arr->salary = arr1->salary;
    arr1->id = temp.id;
    strcpy(arr1->name, temp.name);
    arr1->salary = temp.salary;
}

void bubbleSortAsc(emp_t *emp, int size)
{
    int SWAP_FLAG = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {

            if (emp[j].id > emp[j + 1].id)
            {
                swap(emp + j, emp + (j + 1));
                SWAP_FLAG = 1;
            }
        }
        if (!SWAP_FLAG)
            break;
    }
}
emp_t *takeEmp(emp_t *emp, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Enter user id ");
        scanf("%d", &emp[i].id);
        printf("Enter user salary");
        scanf("%f", &emp[i].salary);
        printf("Enter user name ");
        while (getchar() != '\n')
            ;

        fgets(emp[i].name, sizeof(emp[i].name), stdin);
    }
    return emp;
}

void printEmp(emp_t *emp, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Emp name is %s ,Emp id is %d , Emp salary is %f \n", emp[i].name, emp[i].id, emp[i].salary);
    }
}