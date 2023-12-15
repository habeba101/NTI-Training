#include <stdio.h>
#define M_PI 3.141592
int main()
{

    double r;
    double area = 0;
    double cir = 0;

    printf("enter the radius");
    scanf("%lf", &r);
    area = r * r * M_PI;
    cir = 2 * M_PI * r;
    printf("Area is %lf \nCircumference is %lf", area, cir);

    return 0;
}