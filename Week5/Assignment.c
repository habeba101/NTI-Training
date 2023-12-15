#include <stdio.h>

typedef struct
{
    char name[30];
    int grade;
    int id;

} student;

void getdata(student ptr[], int size);
void average_highest_lowset_grade(student ptr[], int size, float *ptravg, int *ptrHighest, int *ptrLowest);

int main()
{
    student arr[10];
    int idexHigh = 0, indexLow = 0;
    float Avg = 0;
    getdata(arr, 10);
    average_highest_lowset_grade(arr, 10, &Avg, &idexHigh, &indexLow);

    printf("The average is %f \n", Avg);
    printf("The highest grade is %s %d , The Lowest Grade is  %s %d ", arr[idexHigh].name, arr[idexHigh].grade, arr[indexLow].name, arr[indexLow].grade);

    return 0;
}
// Take data from 10 students (Done)
void getdata(student ptr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        fflush(stdin);
        printf("Enter the name");
        gets(ptr[i].name);
        fflush(stdin);
        printf("Enter the grade");
        scanf("%d", &(ptr[i].grade));
        fflush(stdin);
        printf("Enter the id");
        scanf("%d", &(ptr[i].id));
    }
}
void average_highest_lowset_grade(student ptr[], int size, float *ptravg, int *ptrHighest, int *ptrLowest)
{
    *ptrHighest = 0;
    *ptrLowest = 0;

    for (int i = 0; i < size; i++)
    {
        *ptravg = *ptravg + ptr[i].grade;
        if (ptr[*ptrLowest].grade < ptr[i].grade)
        {
            *ptrLowest = i;
        }

        if (ptr[*ptrHighest].grade > ptr[i].grade)
        {
            *ptrHighest = i;
        }
    }
}
