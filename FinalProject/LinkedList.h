#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Note That insertion part is done
#ifndef LinkedList
#define LinkedList

typedef struct
{
    char name[30];
    char title[30];
    int id;
    int age;
    float salary;

} emp_t;
typedef struct node
{
    emp_t *data;
    struct node *link;

} node_t;

// insert at the begining
void insertatTheBegining(node_t **head, emp_t *data);
// insert a node at a given position
void insertatNthnode(node_t **head, emp_t *data, int pos);
// add element at the end of the list
void Append(node_t **head, emp_t *data);
// print the elements and their addresses
void display(node_t *head);
// counts the elements of the list
int getNumOfElements(node_t *head);
// delete a node from the begining
int deleteAtTheBegining(node_t **head);
// delete a node from the end
int deleteAtTheEnd(node_t **head);
// delete at a certain node
int deleteAtACertainnode(node_t **head, int pos);
// search for a value in linked list
emp_t *searchid(node_t **head, int val);
// search for a data in linked list
node_t *search(node_t **head, emp_t *emp);
// reverese the list
void ReverseList(node_t **head);
// delete the list
void freeList(node_t **head);
// delete by value
int deleteByValueid(node_t **head, int valid);
//  edit an old value with a new value
int editVal(node_t **head, emp_t *oldVal, emp_t *NewVal);
// check id;
int checkid(node_t **head, int id);
#endif