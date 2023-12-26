#include <windows.h>
#include <conio.h>
#include <wincon.h>
#include "LinkedList.h"

#ifndef App
#define App

void choice(int val);
// add a new employee
void addEmployee();
// modify employee by id
void modifyEmployee();
// delete employee by id
void deleteEmployee();
// view employee based on the id
void viewEmployee();
// view all employee
void viewAllEmployee(node_t *emp);
// exit from the program
void Exit();
// start function
void startFun();
// x,y cordinate
void gotoxy(int x, int y);
#endif
