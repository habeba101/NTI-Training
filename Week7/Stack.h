#ifndef Stack
#define Stack
#include <stdio.h>
#include <stdlib.h>
#define Stack_error -1
// This is Stack implementation using array of struct (Fixed size implementation)
// #define Stack_max 5
// int arr[Stack_max];
// int sp=-1;

typedef char s_t;

typedef struct
{
    s_t *arr;
    int capacity;
    int top;
} Stack_t;

void createStack(Stack_t *s, int capacity);
s_t pushtoStack(Stack_t *s, s_t value);
s_t popFromStack(Stack_t *s);
int isFull(Stack_t *s);
int isempty(Stack_t *s);
s_t topOfStack(Stack_t *s);
int size(Stack_t *s);
void printstack(Stack_t *s);
void freeStack(Stack_t *s);
#endif