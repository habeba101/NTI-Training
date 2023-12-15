#include "genericStack.h"

int main()
{

    emp_t e1 = {"Mohamed", 10, 1000};
    emp_t e2 = {"hussein", 8, 2000};
    emp_t e3 = {"ahmed", 6, 3000};
    emp_t e4 = {"amin", 19, 4000};
    emp_t res;
    Stack_t stack;
    createStack(&stack, 4);
    pushtoStack(&stack, e1);
    pushtoStack(&stack, e2);
    pushtoStack(&stack, e3);
    pushtoStack(&stack, e4);
    printstack(&stack);
    res = popFromStack(&stack);
    printf("%s %d %f ", res.name, res.id, res.salary);
    res = popFromStack(&stack);
    printf("%s %d %f ", res.name, res.id, res.salary);
    res = popFromStack(&stack);
    printf("%s %d %f ", res.name, res.id, res.salary);
    res = popFromStack(&stack);
    printf("%s %d %f ", res.name, res.id, res.salary);
    return 0;
}