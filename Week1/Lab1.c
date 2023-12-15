#include <stdio.h>
int main()
{
    // Signed datatypes
    char c = -126;
    short s = -6;
    int i = -20;
    long l = -234678901;
    // unSigned datatypes
    unsigned char uc = 'a';
    unsigned short us = 6;
    unsigned int ui = 20;
    unsigned long ul = 234678901;
    // float,double & long double
    float f = 67.8;
    double d = 98765.98624;

    // printf statements
    printf("char is %c, size is %d \n", c, sizeof(c));
    printf("short is %d, size is %d \n", s, sizeof(s));
    printf("int is %d , size is %d \n", i, sizeof(i));
    printf("long is %ld, size is %d \n", l, sizeof(l));
    printf("unsigned char is %c, size is %d \n", uc, sizeof(uc));
    printf("unsigned short is %i, size is %d \n", us, sizeof(us));
    printf("unsigned int is %u, size is %d \n", ui, sizeof(ui));
    printf("unsigned long is %lu, size is %d \n", ul, sizeof(ul));
    printf("float is %f, size is %d \n", f, sizeof(f));
    printf("double is %lf, size is %d \n", d, sizeof(d));

    printf("scan values");
    // scanf statements
    scanf("%c", &c);
    scanf("%d", &s);
    scanf("%d", &i);
    scanf("%ld", &l);
    scanf(" %c", &uc);
    scanf("%u", &us);
    scanf("%u", &ui);
    scanf("%lu", &ul);
    scanf("%f", &f);
    scanf("%lf", &d);

    int x;
    char cr;
    printf("scan a number \n");
    scanf("%d", &x);
    printf("the octal value is %o , the hexadecimal is %x \n", x, x);

    printf("scan a character \n");
    scanf("%d", &cr);
    printf("the value is %c, the ascii is %d \n", cr, cr);

    return 0;
}