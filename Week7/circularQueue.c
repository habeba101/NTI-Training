#include "circularQueue.h"

cirqueue_t *createqueue(int capacity)
{
    cirqueue_t *q = malloc(1 * sizeof(cirqueue_t));

    q->arr = (q_t *)malloc(sizeof(q_t) * capacity);
    q->capacity = capacity;
    q->front = -1;
    q->rear = -1;

    return q;
}
int enqueue(cirqueue_t *q, q_t val)
{
    if (q->front == -1)
        q->front++;
    if (!isFull(q))
    {
        if (q->rear == q->capacity)
            q->rear = 0;
        else
            q->rear++;
        q->arr[q->rear] = val;
        return 1;
    }

    return -1;
}
q_t dequeue(cirqueue_t *q)
{
    if (!isNull(q))
    {
        int val = q->arr[q->front];

        if (q->front == q->rear)
            q->front = q->rear = -1;
        else if (q->front == q->capacity)
            q->front = 0;
        else
            q->front++;
        if (q->front > q->rear)
            q->front = q->rear = -1;

        return val;
    }

    return -1;
}
int front(cirqueue_t *q)
{
    if (!isNull(q))
        return (q->arr[q->front]);
}
int rear(cirqueue_t *q)
{
    if (!isNull(q))
        return (q->arr[q->rear]);
}
int isFull(cirqueue_t *q)
{
    if (q->rear == q->capacity - 1)
        return 1;
    else
        return 0;
}
int isNull(cirqueue_t *q)
{
    if (q->front == -1)
        return 1;
    else
        return 0;
}

void printQueue(cirqueue_t *q)
{
    for (int i = q->front; i < q->rear + 1; i++)
    {
        printf("%d \n", q->arr[i]);
    }
    printf("\n");
}
void freequeue_t(cirqueue_t *q)
{
    q->capacity = 0;
    q->rear = -1;
    q->front = -1;
    free(q);
}
