#include <stdio.h>
int main()
{
    double no1, no2;
    char op;
    double res;
    printf("enter two numbers");
    scanf("%lf %lf", &no1, &no2);
    printf("enter operation");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        res = no1 + no2;
        printf("result is %lf", res);
        break;
    case '-':
        res = no1 - no2;
        printf("result is %lf", res);

        break;
    case '/':
        if (no2 == 0)
        {
            printf("division by zero");
        }
        else
        {
            res = no1 / no2;
            printf("result is %lf", res);
        }

        break;
    case '*':
        res = no1 * no2;
        printf("result is %lf", res);
        break;
    case '%':

        res = (int)no1 % (int)no2;
        printf("result is %lf", res);
        break;
    }
    return 0;
}