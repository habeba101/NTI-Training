#include <stdio.h>
int main()
{
    int a[10];
    int evenNum = 0, oddNum = 0;
    int i;
    printf("Enter Array Elements");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            evenNum++;
        else
            oddNum++;
    }
    printf("The number of even numbers is %d , The Number of odd Numbers is %d", evenNum, oddNum);

    return 0;
}