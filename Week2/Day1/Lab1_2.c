#include <stdio.h>
int main()
{
    int grade;
    printf("Enter the gade");
    scanf("%d", &grade);
    if (grade >= 0 && grade < 50)
    {
        printf("Fail");
    }
    else if (grade >= 50 && grade < 65)
    {
        printf("pass");
    }
    else if (grade >= 65 && grade < 75)
    {
        printf("good");
    }
    else if (grade >= 75 && grade < 85)
    {
        printf("very good");
    }
    else if (grade >= 85 && grade < 100)
    {
        printf("Excellent");
    }
    else
    {
        printf("Enter grade correctelly");
    }
    return 0;
}