#include "circularQueue.h"

int main()
{

    cirqueue_t *q = createqueue(5);
    enqueue(q, 5);
    enqueue(q, 1);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 7);
    printf("%d \n", front(q));
    printf("%d \n", rear(q));

    printQueue(q);

    printf("%d \n", dequeue(q));
    printf("%d \n", dequeue(q));
    printf("%d \n", dequeue(q));
    printf("%d \n", dequeue(q));
    printf("%d \n", dequeue(q));

    freequeue_t(q);

    return 0;
}