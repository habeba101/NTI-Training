#include <stdio.h>
int main()
{
    int i, Num;
    int Mul;
    printf("Enter a number 1-9");
    scanf("%d", &Num);
    for (i = 1; i <= 10; i++)
    {
        Mul = Num * i;
        printf("%d * %d = %d \n", i, Num, Mul);
    }

    return 0;
}