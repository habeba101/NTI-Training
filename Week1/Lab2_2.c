#include <stdio.h>
int main()
{
    int x = 5, y = 2;
    int z, k, l, m, n;
    z = x & y;
    k = x | y;
    l = x >> 1;
    m = x ^ y;
    n = x << 2;
    printf("the results are%d %d %d %d %d", z, k, l, m, n);

    return 0;
}