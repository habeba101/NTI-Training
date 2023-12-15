#include <stdio.h>
int main()
{
    // little endian
    int x = 0x5a6b7c8d;
    char *vp;
    vp = &x;
    printf("First byte %x \n", *((char *)(vp + 0)));
    printf("Second byte %x \n", *((char *)vp + 1));

    printf("Third byte %x \n", *((char *)vp + 2));
    printf("Forth byte %x \n", *((char *)vp + 3));

    return 0;
}