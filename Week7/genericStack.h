#ifndef genericStack
#define genericStack
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Stack_error -1
typedef struct
{
    char name[30];
    int id;
    float salary;
} emp_t;

typedef struct
{
    emp_t *emp;
    int capacity;
    int top;
} Stack_t;

void createStack(Stack_t *s, int capacity);
int pushtoStack(Stack_t *s, emp_t value);
emp_t popFromStack(Stack_t *s);
int isFull(Stack_t *s);
int isempty(Stack_t *s);
emp_t topOfStack(Stack_t *s);
int size(Stack_t *s);
void printstack(Stack_t *s);
void freeStack(Stack_t *s);
#endif