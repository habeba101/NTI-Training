#include "LinkedList.h"
int counter = 0;
void insertatTheBegining(node_t **head, emp_t *data)
{
    node_t *ptr = (node_t *)malloc(sizeof(node_t));
    ptr->data = data;
    ptr->link = (*head);
    counter++;
    (*head) = ptr;
}

void insertatNthnode(node_t **head, emp_t *data, int pos)
{
    node_t *ptr = (node_t *)malloc(sizeof(node_t));
    ptr->data = data;
    ptr->link = NULL;
    if (pos == 1)
    {
        ptr->link = (*head);
        (*head) = ptr;
        return;
    }
    node_t *ptr2 = *head;
    pos--;
    while (pos > 1 && ptr2 != NULL)
    {
        ptr2 = ptr2->link;
        pos--;
    }
    if (ptr2 == NULL)
    {
        free(ptr);
        return;
    }
    ptr->link = ptr2->link;
    ptr2->link = ptr;
    counter++;
}
void Append(node_t **head, emp_t *data)
{
    node_t *ptr = (node_t *)malloc(sizeof(node_t));
    ptr->data = data;
    ptr->link = NULL;
    if ((*head) == NULL)
    {
        (*head) = ptr;
        counter++;
        return;
    }
    node_t *traptr = (*head);
    while (traptr->link != NULL)
    {
        traptr = traptr->link;
    }
    traptr->link = ptr;
    counter++;
}
void display(node_t *head)
{
    if (head != NULL)
    {
        node_t *ptr = head;
        while (ptr != NULL)
        {
            printf("Employee Name is %s \n", (ptr->data)->name);
            printf("Employee Title is %s \n", (ptr->data)->title);
            printf("Employee age is %d \n", (ptr->data)->age);
            printf("Employee id is %d \n", (ptr->data)->id);
            printf("Employee salary is %f \n", (ptr->data)->salary);
            printf("\n");
            ptr = ptr->link;
        }
    }
    else
        printf("There is no List");
}

int getNumOfElements(node_t *head)
{
    int counter = 0;
    node_t *ptr = head;
    while (ptr != NULL)
    {
        counter++;
        ptr = ptr->link;
    }
    return counter;
}

int deleteAtTheBegining(node_t **head)
{
    if (*head == NULL)
    {
        return 0;
    }
    else
    {
        node_t *temp = *head;
        *head = (*head)->link;
        free(temp);
        temp = NULL;
        counter--;
        return 1;
    }
}
int deleteAtTheEnd(node_t **head)
{
    if (*head == NULL)
    {
        return 0;
    }
    else if ((*head)->link == NULL)
    {
        free((*head));
        (*head) = NULL;
        counter--;
        return 1;
    }
    else
    {
        node_t *temp = (*head);
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
        counter--;
        return 1;
    }
}
int deleteAtACertainnode(node_t **head, int pos)
{
    node_t *current = *head;
    node_t *previous = *head;
    if (*head == NULL)
    {
        return 0;
    }
    else if (pos == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
        counter--;
        return 1;
    }
    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
        counter--;
        return 1;
    }
}
void ReverseList(node_t **head)
{
    node_t *prev = NULL;
    node_t *next = NULL;
    while ((*head) != NULL)
    {
        next = (*head)->link;
        (*head)->link = prev;
        prev = (*head);
        (*head) = next;
    }
    (*head) = prev;
}

emp_t *searchid(node_t **head, int val)
{
    node_t *ptr = *head;
    while (ptr != NULL)
    {
        if ((int)((ptr->data)->id) == val)
            return ptr->data;
        ptr = ptr->link;
    }
    return NULL;
}

void freeList(node_t **head)
{
    node_t *temp = NULL;
    while ((*head) != NULL)
    {
        temp = (*head);
        (*head) = (*head)->link;
        counter--;
        free(temp);
    }
}

int deleteByValueid(node_t **head, int valid)
{
    if (*head == NULL)
    {
        return 0;
    }
    node_t *current = (*head);
    node_t *previous = current;
    if ((current->data)->id == valid)
    {
        (*head) = (*head)->link;
        free(current);
        counter--;
        return 1;
    }
    while (current != NULL && ((current->data)->id) != valid)
    {
        previous = current;
        current = current->link;
    }
    if (current == NULL)
    {
        printf("node_t not found\n");
        return 0;
    }
    previous->link = current->link;
    free(current);
    current = NULL;
    counter--;
    return 1;
}
int checkid(node_t **head, int id)
{
    node_t *ptr = *head;
    while (ptr != NULL)
    {
        if ((int)((ptr->data)->id) == id)
            return 0;
        ptr = ptr->link;
    }
    return id;
}
node_t *search(node_t **head, emp_t *emp)
{

    node_t *ptr = *head;
    while (ptr != NULL)
    {
        if ((ptr->data) == emp)
            return ptr;
        ptr = ptr->link;
    }
    return NULL;
}
int editVal(node_t **head, emp_t *oldVal, emp_t *NewVal)
{
    node_t *current = NULL;
    current = search(head, oldVal);
    if (current != NULL)
    {
        current->data = NewVal;
        return 1;
    }
    return 0;
}