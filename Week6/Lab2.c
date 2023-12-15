#include <stdio.h>
#include "bit_manipulation.h"
int main()
{
    int val = SET_BIT(5, 2);
    printf("%d \n", val);
    val = TOGGLE_BIT(6, 2);
    printf("%d \n", val);
    val = CLEAR_BIT(5, 2);
    printf("%d \n", val);
    val = SHIFT_LEFT(5, 2);
    printf("%d \n", val);
    val = SHIFT_RIGHT(5, 2);
    printf("%d \n", val);
    return 0;
}