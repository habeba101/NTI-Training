#include "genericStack.h"
void createStack(Stack_t *s, int capacity)
{
    s->capacity = capacity;
    s->emp = (emp_t *)malloc(s->capacity * sizeof(emp_t));
    s->top = -1;
}
int pushtoStack(Stack_t *s, emp_t value)
{
    if (isFull(s))
        return -1;
    else
    {
        s->top++;
        s->emp[s->top].id = value.id;
        s->emp[s->top].salary = value.salary;
        strcpy(s->emp[s->top].name, value.name);
        return 1;
    }
}
emp_t popFromStack(Stack_t *s)
{
    emp_t emp1;
    if (!isempty(s))
    {
        emp1.id = s->emp[s->top].id;
        emp1.salary = s->emp[s->top].salary;
        strcpy(emp1.name, s->emp[s->top].name);
        s->top--;
        return emp1;
    }
}
int isFull(Stack_t *s)
{
    if (s->top == s->capacity)
        return 1;
    else
        return 0;
}
int isempty(Stack_t *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
emp_t topOfStack(Stack_t *s)
{
    return (s->emp[s->top]);
}
int size(Stack_t *s)
{
    return s->top + 1;
}

void printstack(Stack_t *s)
{

    for (int i = 0; i <= s->top; i++)
    {
        printf("name is %s \n", s->emp[i].name);
        printf("id is %d \n", s->emp[i].id);
        printf("salary is%f \n", s->emp[i].salary);
        printf("\n");
    }
    printf("\n");
}

void freeStack(Stack_t *s)
{
    s->top = -1;
    s->capacity = 0;
    free(s);
}