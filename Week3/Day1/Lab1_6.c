
#include <stdio.h>
void toBinary(unsigned int num);
int main()
{
    unsigned int x;
    printf("Enter the Number");
    scanf("%u", &x);
    toBinary(x);

    return 0;
}

void toBinary(unsigned int num)
{
    unsigned int i;
    for (i = 1 << 31; i > 0; i = i / 2)
    {
        (num & i) ? printf("1") : printf("0");
    }
}
