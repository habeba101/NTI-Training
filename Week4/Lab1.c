#include <stdio.h>
// int (*p)(int(*)[2],int(*)void)
// pointer to function that takes two parameters and return int one which is a pointer to array of two elements
// the second is pointer to function that takes nothing and return int
float sum(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main()
{
    float (*fp[4])(float, float) = {sum, sub, mul, div};
    int i;
    float res, no1, no2;
    printf("Enter two numbers ");
    scanf("%f %f", &no1, &no2);
    for (i = 0; i < 4; i++)
    {
        res = fp[i](no1, no2);
        printf("The result is %f", res);
    }
    return 0;
}
float sum(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return b != 0 ? a / b : 0;
}
