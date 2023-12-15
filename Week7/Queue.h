#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef queue
#define queue

// front track the first element in queue
// rear track the last element in queue
typedef int q_t;

typedef struct
{
    q_t *arr;
    int front;
    int rear;
    int capacity;
} queue_t;

queue_t *createqueue(int capacity);
int enqueue_t(queue_t *q, q_t val);
q_t dequeue_t(queue_t *q);
int front(queue_t *q);
int rear(queue_t *q);
int isFull(queue_t *q);
int isNull(queue_t *q);
void printQueue(queue_t *q);
void freequeue_t(queue_t *q);
#endif