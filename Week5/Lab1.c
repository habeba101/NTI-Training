#include <stdio.h>
unsigned short rising_edge_count(unsigned char signal);

void main()
{

    unsigned char arr[12] = {0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1};
    unsigned short rising_counts = 0;

    for (int i = 0; i < 12; i++)
    {
        rising_counts = rising_edge_count(arr[i]);
    }

    printf("rising edge count = %d\n", rising_counts);
}

unsigned short rising_edge_count(unsigned char signal)
{
    static int prevSginal = 0;
    static int count = 0;
    if (prevSginal == 0 && signal == 1)
        count++;
    prevSginal = signal;
    return count;
}