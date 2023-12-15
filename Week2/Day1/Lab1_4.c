#include <stdio.h>
int main()
{
    int n;
    int diff;

    printf("Enter the Number");
    scanf("%d", &n);
    diff = n - 51;
    if (diff < 0)
    {
        diff *= -1;
        printf("The Absolute difference is %d", diff);
    }
    else
    {
        diff *= 3;
        printf("Triple Absolute the difference is %d", diff);
    }

    return 0;
}