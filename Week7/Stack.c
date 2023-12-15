#include "Stack.h"
void createStack(Stack_t *s, int capacity)
{
    s->capacity = capacity;
    s->arr = (s_t *)malloc(s->capacity * sizeof(s_t));
    s->top = -1;
}
s_t pushtoStack(Stack_t *s, s_t value)
{
    if (isFull(s))
        return -1;
    else
    {
        s->top++;
        s->arr[s->top] = value;
        return 1;
    }
}
s_t popFromStack(Stack_t *s)
{
    if (isempty(s))
        return Stack_error;
    else
    {
        s_t val = s->arr[s->top];
        s->top--;
        return val;
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
s_t topOfStack(Stack_t *s)
{
    return (s->arr[s->top]);
}
int size(Stack_t *s)
{
    return s->top + 1;
}

void printstack(Stack_t *s)
{

    for (int i = 0; i <= s->top; i++)
    {
        printf("%c", s->arr[i]);
    }
    printf("\n");
}

void freeStack(Stack_t *s)
{
    s->top = -1;
    s->capacity = 0;
    free(s);
}