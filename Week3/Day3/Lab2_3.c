#include <stdio.h>
int main()
{
    int a[10];
    int max, max_1;
    int i;
    printf("Enter Array Elements");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = max_1 = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max_1 = max;
            max = a[i];
        }
        else if (a[i] > max_1 && a[i] != max)
            max_1 = a[i];
    }
    printf("The Second Max is %d", max_1);

    return 0;
}