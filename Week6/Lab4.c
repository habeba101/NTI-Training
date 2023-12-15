#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int* arrfib(int size);
void printarray(int *arr, int size);
int main()
{
    int *arrAns=arrfib(5);
    printarray(arrAns, 5);
    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int* arrfib(int size){
int * array=(int*)malloc((size+1)*sizeof(int));
for(int i=0 ;i<=size;i++){
    array[i]=fib(i);
}

return array;
}

void printarray(int *arr, int size)
{
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
}
