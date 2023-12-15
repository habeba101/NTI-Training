#include <stdio.h>
int main()
{
    int ID;
    printf("enter your ID");
    scanf("%d", &ID);

    switch (ID)
    {
    case 1234:
        printf("Hello ,Amr");
        break;
    case 5678:
        printf("Hello ,Maha");
        break;
    case 9101:
        printf("Hello ,Ahmed");
        break;
    default:
        printf("Wrong ID number");
        break;
    }
    return 0;
}