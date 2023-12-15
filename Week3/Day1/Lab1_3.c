#include <stdio.h>
int bigNum(int a, int b, int c);
int main()
{
    int x, y, z;
    printf("Enter the Numbers");
    scanf("%d %d %d", &x, &y, &z);
    printf("The biggest Number is %d", bigNum(x, y, z));

    return 0;
}

int bigNum(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;

    else if (b >= a && b >= c)

        return b;

    else if (c >= a && c >= b)

        return c;
    else
        return 0;
}
