#include <stdio.h>
int main()
{
    float x, y, res;
    char op;
    printf("enter Two Numbers");
    scanf("%f %f", &x, &y);
    printf("Enter the Operation");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        res = x + y;
        break;
    case '-':
        res = x - y;
        break;
    case '*':
        res = x * y;
        break;
    case '/':
        res = x / y;
        break;
    case '%':
        res = (int)x % (int)y;
        break;
    default:

        break;
    }

    printf("The result is %f", res);
    return 0;
}