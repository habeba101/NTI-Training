#include <stdio.h>
int main()
{

    int no1, no2;
    printf("enter two numbers");
    scanf("%d %d", &no1, &no2);
    (no1 != no2) ? (no1 > no2) ? printf("First Number is bigger") : printf("Second Number is bigger") : printf("num1 = num2");

    return 0;
}