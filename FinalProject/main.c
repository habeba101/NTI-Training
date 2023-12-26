#include "App.h"

int main()
{

        int val = 0;
        int i = 1000;
        startFun();

        while (i)
        {
                printf("\n");
                printf("please enter your choice \n");
                printf("1-add ,2-modify ,3-delete,4-view employee,5-view all employee,6-exit");
                scanf("%d", &val);
                choice(val);
                i--;
        }

        return 0;
}
