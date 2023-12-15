#include <stdio.h>
void stateOne();
void stateTwo();
void stateThree();
void stateFour();
int main()
{

    int i = 1;
    void (*ptr[4])(void) = {stateOne, stateTwo, stateThree, stateFour};
    ptr[0]();
    while (getchar() == '\n')
    {
        ptr[i]();
        i++;
        if (i == 4)
            i = 0;
        continue;
    }

    return 0;
}

void stateOne()
{
    printf("Half Speed");
}
void stateTwo()
{
    printf("Stop");
}
void stateThree()
{
    printf("Full");
}
void stateFour()
{
    printf("Stop");
}