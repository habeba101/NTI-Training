#include <stdio.h>
int isEven(int a);
int main()
{
    int x;
    printf("Enter the Number");
    scanf("%d", &x);
    printf("Even is one and odd is zero = %d", isEven(x));

    return 0;
}

int isEven(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}