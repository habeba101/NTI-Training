#include "App.h"
extern int counter;
node_t *Employees = NULL;
void choice(int val)
{
    switch (val)
    {
    case 1:
        system("cls");
        // works
        addEmployee();
        break;
    case 2:
        system("cls");
        // works
        modifyEmployee();
        break;
    case 3:
        system("cls");
        // works
        deleteEmployee();
        break;
    case 4:
        system("cls");
        // works
        viewEmployee();
        break;
    case 5:
        system("cls");
        // works
        viewAllEmployee(Employees);
        break;
    case 6:
        system("cls");
        // works
        Exit();
        break;
    default:
        system("cls");
        printf("wrong number, please re-enter the value");
        break;
    }
}
void addEmployee()
{
    system("cls");
    emp_t *emp = (emp_t *)malloc(sizeof(emp_t));
    if (emp == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    gotoxy(2, 0);
    printf("Enter the data of the Employee ");
    gotoxy(2, 2);
    printf("Enter the Employee id ");
    int id;
    scanf("%d", &id);
    if (checkid(&Employees, id))
    {
        emp->id = id;
        gotoxy(2, 4);
        printf("Enter the Employee Name ");
        while (getchar() != '\n')
            ;
        fgets(emp->name, 30, stdin);
        gotoxy(2, 6);
        printf("Enter the Employee age ");
        scanf("%d", &(emp->age));
        gotoxy(2, 8);
        printf("Enter the Employee salary ");
        scanf("%f", &(emp->salary));
        gotoxy(2, 10);
        printf("Enter the Employee Title");
        while (getchar() != '\n')
            ;
        fgets(emp->title, 30, stdin);
        Append(&Employees, emp);
    }
    else
    {
        printf("id already exits \n");
    }
}
void modifyEmployee()
{
    system("cls");
    printf("Enter the employee id you want to modify");
    int id;
    scanf("%d", &id);
    emp_t *emp = searchid(&Employees, id);
    emp_t *emp1 = (emp_t *)malloc(sizeof(emp_t));
    if (emp != NULL)
    {
        emp1->id = id;
        printf("Enter the Employee Name");
        while (getchar() != '\n')
            ;
        fgets(emp1->name, 30, stdin);
        printf("Enter the Employee age");
        scanf("%d", &(emp1->age));
        printf("Enter the Employee salary");
        scanf("%f", &(emp1->salary));
        printf("Enter the Employee Title");
        while (getchar() != '\n')
            ;
        gets(emp1->title);
        editVal(&Employees, emp, emp1);
    }
    else
    {
        printf("Employee not found");
    }
}

void deleteEmployee()
{
    system("cls");
    printf("Enter the employee id you want to delete");
    int id;
    scanf("%d", &id);
    emp_t *emp = searchid(&Employees, id);
    if (emp != NULL)
    {
        int delete = deleteByValueid(&Employees, id);
        if (delete)
            printf("Deleted Successfully \n");
        else
            printf("Failed \n");
    }
    else
    {
        printf("Employee not found");
    }
}
void viewEmployee()
{
    system("cls");
    printf("Enter the employee id you want to view");
    int id;
    scanf("%d", &id);
    emp_t *emp = searchid(&Employees, id);
    if (emp != NULL)
    {
        system("cls");
        gotoxy(2, 0);
        printf("Employee Name is %s ", emp->name);
        gotoxy(2, 2);
        printf("Employee Title is %s ", emp->title);
        gotoxy(2, 4);
        printf("Employee age is %d ", emp->age);
        gotoxy(2, 6);
        printf("Employee id is %d ", emp->id);
        gotoxy(2, 8);
        printf("Employee salary is %f ", emp->salary);
        gotoxy(2, 10);
    }
    else
    {
        printf("Employee not found \n");
    }
}
void viewAllEmployee(node_t *emp)
{
    system("cls");
    if (emp != NULL)
    {
        node_t *ptr = emp;
        for (int i = 0; i < counter; i++)
        {
            printf("Employee Name is %s \n", (ptr->data)->name);
            printf("Employee Title is %s \n", (ptr->data)->title);
            printf("Employee age is %d \n", (ptr->data)->age);
            printf("Employee id is %d \n", (ptr->data)->id);
            printf("Employee salary is %f  \n", (ptr->data)->salary);
            printf("\n");
            ptr = ptr->link;
        }
    }
    else
        printf("There is no Employees");
}
void Exit()
{
    system("cls");
    printf("Do you want to exist (y/n)");
    while (getchar() != '\n')
        ;
    int val = getchar();
    if (val == 'y' || val == 'Y')
    {
        exit(0);
    }
    else if (val == 'n' || val == 'N')
        return;
}
void startFun()
{
    system("cls");
    gotoxy(2, 2);
    printf("Welcome to Employee Managment System");
    gotoxy(2, 4);
    printf("\n1. ADD RECORD\n");
    gotoxy(2, 6);
    printf("\n2. MODFIY RECORD\n");
    gotoxy(2, 8);
    printf("\n3. DELETE RECORDS\n");
    gotoxy(2, 10);
    printf("\n4. VIEW A RECORD\n");
    gotoxy(2, 12);
    printf("\n5. VIEW ALL RECORS\n");
    gotoxy(2, 14);
    printf("\n6. EXIT\n");
    gotoxy(2, 16);
}
void gotoxy(int x, int y)
{
    COORD CO;
    CO.X = x;
    CO.Y = y;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE),
        CO);
}
