#include "SructAlgorithm.h"

int main()
{
       emp_t empArr[5];
       takeEmp(empArr, 5);
       bubbleSortAsc(empArr, 5);
       printEmp(empArr, 5);

       printf("The emp name is %s,id % d,salary %f \n", empArr[linearSearchEmp(empArr, 5, 5)].name,
              empArr[linearSearchEmp(empArr, 5, 5)].id,
              empArr[linearSearchEmp(empArr, 5, 5)].salary);

       printf("The emp name is %s , id % d, salary %f \n", empArr[binarySearchEmp(empArr, 5, 8)].name,
              empArr[binarySearchEmp(empArr, 5, 8)].id,
              empArr[binarySearchEmp(empArr, 5, 8)].salary);

       return 0;
}