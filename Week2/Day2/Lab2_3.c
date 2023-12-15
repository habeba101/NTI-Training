#include <stdio.h>

int main()
{
    int Number;
    printf("Enter the Number");
    scanf("%d", &Number);

    switch (Number > 0)
    {
    case 1:
        printf("Positve");
        break;
    case 0:
        switch (Number < 0)
        {
        case 1:
            printf("Negative");
            break;
        default:
            printf("Zero");
            break;
        }
    }

    return 0;
}