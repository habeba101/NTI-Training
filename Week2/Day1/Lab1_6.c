#include <stdio.h>
int main()
{
    int Num1, Num2;
    int dis1, dis2;

    printf("Enter Two Numbers");
    scanf("%d %d", &Num1, &Num2);
    dis1 = 100 - Num1;
    dis2 = 100 - Num2;
    if (dis1 < 0)
    {
        dis1 *= -1;
    }
    if (dis2 < 0)
    {
        dis2 *= -1;
    }
    if (dis1 < dis2)
    {
        printf("The first number is nearest");
    }
    else if (dis2 < dis1)
    {
        printf("The Second Number is nearest");
    }
    else
    {
        printf("Same Number");
    }

    return 0;
}