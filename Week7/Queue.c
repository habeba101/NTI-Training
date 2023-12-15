#include "queue.h"

queue_t *createqueue(int capacity)
{
    queue_t *q = malloc(1 * sizeof(queue_t));
    ;
    q->arr = (q_t *)malloc(sizeof(q_t) * capacity);
    q->capacity = capacity;
    q->front = -1;
    q->rear = -1;

    return q;
}
int enqueue_t(queue_t *q, q_t val)
{
    if (q->front == -1)
        q->front++;
    if (!isFull(q))
    {
        q->rear++;
        q->arr[q->rear] = val;
        return 1;
    }
    return -1;
}
q_t dequeue_t(queue_t *q)
{
    if (!isNull(q))
    {
        int val = q->arr[q->front];
        q->front++;
        if (q->front > q->rear)
            q->front = q->rear = -1;

        return val;
    }

    return -1;
}
int front(queue_t *q)
{
    if (!isNull(q))
        return (q->arr[q->front]);
}
int rear(queue_t *q)
{
    if (!isNull(q))
        return (q->arr[q->rear]);
}
int isFull(queue_t *q)
{
    if (q->rear == q->capacity - 1)
        return 1;
    else
        return 0;
}
int isNull(queue_t *q)
{
    if (q->front == -1)
        return 1;
    else
        return 0;
}

void printQueue(queue_t *q)
{
    for (int i = q->front; i < q->rear + 1; i++)
    {
        printf("%d \n", q->arr[i]);
    }
    printf("\n");
}
void freequeue_t(queue_t *q)
{
    q->capacity = 0;
    q->rear = -1;
    q->front = -1;
    free(q);
}
