#include "Stack.h"

int main()
{
    char arr[] = "EAS*Y*QUE***ST***IO*N***";
    int i = 0;
    Stack_t s;
    createStack(&s, sizeof(arr));
    while (arr[i] != '\0')
    {
        if (arr[i] == '*')
            printf("%c", popFromStack(&s));

        else
            pushtoStack(&s, arr[i]);
        i++;
    }
    return 0;
}