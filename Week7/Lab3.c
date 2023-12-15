#include "Stack.h"
int main()
{
    s_t name[] = "Mohamed";
    // int arrNum[5] = {1, 2, 3, 5, 4};
    // int Size = sizeof(arrNum) / sizeof(int);
    Stack_t stack;
    Stack_t *stack1;
    createStack(&stack, 8);
    // createStack(stack1, Size);
    int i = 03;

    while (name[i] != '\0')
    {
        pushtoStack(&stack, name[i]);
        i++;
    }
    // while (i < Size)
    // {
    //     pushtoStack(stack1, arrNum[i]);
    //     i++;
    // }
    while (!(isempty(&stack)))
    {
        printf("%c\n", popFromStack(&stack));
    }
    // while (!(isempty(stack1)))
    // {
    //     printf("%d\n", popFromStack(stack1));
    // }
    return 0;
}
