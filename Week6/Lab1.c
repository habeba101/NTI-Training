#include <stdio.h>
enum calcFun
{
    sumval,
    subval,
    mulval,
    divval
} st_calc;
float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main()
{

    float (*ptrFun[4])(float, float) = {sum, sub, mul, div};

    st_calc = mulval;
    switch (st_calc)
    {
    case sumval:
        printf("%f", ptrFun[sumval](5, 6));
        break;
    case subval:
        printf("%f", ptrFun[subval](5, 6));
        break;
    case mulval:
        printf("%f", ptrFun[mulval](5, 6));
        break;
    case divval:
        printf("%f", ptrFun[divval](5, 6));
        break;

    default:
        break;
    }

    return 0;
}

float sum(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }
