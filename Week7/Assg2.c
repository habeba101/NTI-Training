#include "Queue.h"

int main()
{
    char arr[] = "EAS*Y*QUE***ST***IO*N***";
    int i = 0;
    queue_t *q = createqueue(sizeof(arr));
    while (arr[i] != '\0')
    {
        if (arr[i] == '*')
            printf("%c", dequeue_t(q));

        else
            enqueue_t(q, arr[i]);
        i++;
    }
    return 0;
}