#include <stdio.h>

int main()
{
    float salary, grossSalary;
    int status;
    printf("Enter the Salary");
    scanf("%f", &salary);
    printf("Enter the Marital Status (single =1,married =2,married with kids=3)");
    scanf(" %d", &status);
    switch (status)
    {
    case 1:
        grossSalary = salary;
        break;
    case 2:
        grossSalary = salary + (salary * 0.01);
        break;
    case 3:
        grossSalary = salary + (salary * 0.02);

        break;
    default:
        break;
    }
    printf("The gross salary is %f", grossSalary);

    return 0;
}