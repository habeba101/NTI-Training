#include "Queue.h"

int main()
{

    queue_t *q1 = createqueue(5);
    enqueue_t(q1, 1);
    enqueue_t(q1, 2);
    enqueue_t(q1, 3);
    printf("Front points %d \n", front(q1));
    printf("Rear points %d \n", rear(q1));
    enqueue_t(q1, 4);
    enqueue_t(q1, 5);
    printf(" is it full ? %d \n", isFull(q1));
    printQueue(q1);
    printf("Front points %d \n", front(q1));
    printf("Rear points %d \n", rear(q1));
    printf("dequeue %d \n", dequeue_t(q1));
    printQueue(q1);

    printf("dequeue %d \n", dequeue_t(q1));
    printf("dequeue %d \n", dequeue_t(q1));
    printf("dequeue %d \n", dequeue_t(q1));
    printf("dequeue %d \n", dequeue_t(q1));

    printf("is it null %d \n", isNull(q1));

    freequeue_t(q1);

    return 0;
}
