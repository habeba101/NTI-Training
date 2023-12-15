#include <stdio.h>

int main()
{
    int i, j, check, arr[10];
    int count = 1;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        check = arr[i];
        for (j = i + 1; j < size; j++)
        {
            if (check == arr[j])
                count++;
        }
        if (count > 1)
            printf("The element %d is repeated %d times \n ", check, count);
        count = 1;
    }

    return 0;
}