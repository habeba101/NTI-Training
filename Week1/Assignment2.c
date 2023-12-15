#include <stdio.h>
int main()
{
    int Num;
    printf("enter number");
    scanf("%d", &Num);
    Num % 2 == 0 ? printf("Even") : printf("Odd");
    return 0;
}