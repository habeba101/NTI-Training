#include <stdio.h>
int main()
{
    int num1, num2;
    int sum = 0;

    printf("Enter Two Numbers");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        sum = num1 * 6;
    }
    else
    {
        sum = num1 + num2;
    }

    printf("the sum is %d", sum);

    return 0;
}