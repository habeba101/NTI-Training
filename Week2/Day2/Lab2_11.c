#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, Num;
    printf("Enter a number ");
    scanf("%d", &Num);
    while (Num != 0)
    {
        Num /= 10;
        i++;
    }

    printf("The Number of digits is %d", i);

    return 0;
}