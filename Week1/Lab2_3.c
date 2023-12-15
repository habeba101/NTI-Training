#include <stdio.h>
int main()
{
    int x, y, z;
    printf(" enter three numbers 6,2,5");
    scanf("%d %d %d", &x, &y, &z);
    x |= (1 << 0);
    y &= ~(1 << 1);
    z ^= (1 << 2);
    printf("the result is %d %d %d", x, y, z);

    return 0;
}