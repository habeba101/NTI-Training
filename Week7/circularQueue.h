#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef circularQueue
#define circularQueue

// front track the first element in queue
// rear track the last element in queue
typedef int q_t;

typedef struct
{
    q_t *arr;
    int front;
    int rear;
    int capacity;
} cirqueue_t;

cirqueue_t *createqueue(int capacity);
int enqueue(cirqueue_t *q, q_t val);
q_t dequeue(cirqueue_t *q);
int front(cirqueue_t *q);
int rear(cirqueue_t *q);
int isFull(cirqueue_t *q);
int isNull(cirqueue_t *q);
void printQueue(cirqueue_t *q);
void freequeue_t(cirqueue_t *q);
#endif