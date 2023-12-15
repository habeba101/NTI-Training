#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("The number is divisable by 7 and 3\n");
    }
    else if (num % 7 == 0)
    {
        printf("The Number is divisable by 7\n");
    }
    else if (num % 3 == 0)
    {
        printf("The Number is Divisable by 3\n");
    }
    else
    {
        printf("The Number is not divisable by 3 or 7\n");
    }

    return 0;
}