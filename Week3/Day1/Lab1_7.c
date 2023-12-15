#include <stdio.h>
void fizzBuzz(int a);
int main()
{
    int x;
    printf("Enter the Number");
    scanf("%d", &x);
    fizzBuzz(x);

    return 0;
}

void fizzBuzz(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FIZZBUZZ \n");
        }
        else if (i % 3 == 0)
        {
            printf("FIZZ \n");
        }
        else if (i % 5 == 0)
        {
            printf("BUZZ \n");
        }
        else
        {
            printf("%d \n", i);
        }
    }
}