#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, dis, x1, x2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b * b - 4 * a * c;

    if (dis > 0)
    {
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", x1, x2);
    }

    else if (dis == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", x1);
    }

    else
    {
        real = -b / (2 * a);
        imag = sqrt(-dis) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, imag, real, imag);
    }

    return 0;
}