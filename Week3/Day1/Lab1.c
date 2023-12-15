#include <stdio.h>
#include <math.h>
float Avg(int a, int b, int c, int d, int e);
int main()
{
    int x, y, z, w, h;
    printf("Enter the Numbers");
    scanf("%d %d %d %d %d", &x, &y, &z, &w, &h);
    printf("The Average is %f", Avg(x, y, z, w, h));

    return 0;
}

float Avg(int a, int b, int c, int d, int e)
{
    float avg;
    avg = (a + b + c + d + e) / 5.0;
    return avg;
}