# NTI-Training
National Telecommunication Institute (NTI) Training in C and Embedded C.



| Week  | Content |
| ------------- | ------------- |
| Week 1 | data types,variables, operators and casting  in c |
| Week 2 | control flow(branching, looping,jumping) |
| Week 3 | functions, arrays ,variables scope and lifetime  |
| Week 4 | Pointers in c  |
| Week 5 | data modifiers,constant and volatile variables, typedef and structures in c |
| Week 6 | bit-fields,unions ,Enumerations,preprocessor and memory managment in c |
| Week 7 | software Engineering intro. ,Algorithms, data Structure (Stack,queue,circular queue) |
| Week 8 | singly and doubly linked list  |
| Week 9 |Embedded system Concepts and Embedded C concepts  |
| Week 10 |  flashing technique, boatloader,make file, configuration file,vcs and Final Exam |
Final Project



# Week 1:

• Introduction to embedded systems. 

• Some of the possible career tracks of embedded system. 

• Programming languages overview. 

• C programming intro. And history. 

• Why C Programming for embedded apps. 

• Writing first program in c and make the proper setups. 

• C file structure. 

• Data types in C. 

• Variables. 

• C Operators. (Arithmetic-bitwise-logic...etc). 

• Casting in C.
--------------------------------
# Week 2:

• Control flow statements (condition branching, looping, and jumping)

--------------------------------
# Week 3:

• Memory layout of C programs. 

• Functions. 

• Variables scope and lifetime. 

• Arrays

--------------------------------
# Week 4:

• Pointers in C.

--------------------------------
# Week 5:

• Data modifiers in C ( sign, size, storage, etc).

• Constant and Volatile keywords. 

• Typedef. 
 
• Strings in C. 

• Structures in C.

--------------------------------
# Week 6:

• Bit-fields. 

• Unions. 

• Enumerations. 

• Preprocessor directives. 

• Memory management in C.

--------------------------------
# Week 7:

• Software Engineering intro. (SDLCs). 

• Algorithms (searching and sorting). 

• Data Structures (Stack- queue- Circular Queue).

--------------------------------
# Week 8:

• Data Structures (Singly linked lists). 

• Data Structures (Doubly linked lists).

--------------------------------
# Week 9:

• Embedded system concepts. 

• Computer architecture. 

• Memory types. 

• Embedded C concepts. 

• Interrupt concept. 
 
• Startup code. 

• Embedded software architecture. 

• Software layering. (MCAL, HAL, service layer..etc). 

• SOLID principles. 

• Embedded C building Process.

--------------------------------
# Week 10:

• Flashing techniques 

• Bootloader. 

• Makefiles. 

• Configuration types. 

• Version control introduction using (git). 

• Final Exam.

# Final Project

## The project is an Employee Managment System using Linked list Data Structure

### Problem Statement:

A simple software for the Employee Management system which can perform the following operations.

1- Add an Employee Record.

2- Modify an Employee Record.

3- Delete an Employee Record.

4- View an Employee Record.

5- View All Employees Records.

6- Exits.

### Approach:

The idea is to form individual functions for every operation, the system data structure is based on the implementation of the single linked list .

1- Add an Employee Record from the user (manually).

2- Modify an Employee Record based on the employee id.

3- Delete an Employee Record based on the employee id.

4- View an Employee Record based on the employee id.

5- View All Employees Records.

6- Exits.

### Idea:

The software consists of 5 files LinkedList.h LinkedList.c App.h App.c main.c.

The main contains the calling functions.

The LinkedList.h contains the declarations of Linked List functions.

The LinkedList.c contains the implementations of Linked List functions.

The App.h contains the declarations of EMS functions.

The App.c contains the implementations of EMS functions.

### Main.c:

The main contains the calling of the functions startfun and choice which has the calling of all functions as the user choose from 1-6 to call the function they want.

### LinkedList.c:

1-	insertatTheBegining

The function has the implementation steps to insert a node at the beginning of the list.

2-	insertatNthnode

The function has the implementation steps to insert a node at a certain position given by the user.

3-	Append

The function has the implementation steps to insert a node at the end of the list.

4-	Display

The function is used to display the data of the employee stored in linked list which are the name, title, age, id and salary.

5-	getNumOfElements

The function iterates over the list to know the number of nodes in the list.

6-	deleteAtTheBegining

The function has the implementation steps to delete a node at the beginning of the list.

7-	deleteAtTheEnd

The function has the implementation steps to delete a node at the end of the list.

8-	deleteAtACertainnode

The function has the implementation steps to delete a node at a certain position given by the user.

9-	searchid

The function has the implementation steps to search for a node based on the id given by the user.

10-	search

The function has the implementation steps to search for an employee given by the user.

11-	ReverseList

The function has the implementation steps to reverse the list

12-	freeList

The function has the implementation steps to free(de-allocate) the list after working with it to avoid memory leak.

13-	deleteByValueid

The function has the implementation steps to delete a node with a given id by the user.

14-	editVal

The function has the implementation steps to change old value stored in the list with a new value.

15-	checkid

The function has the implementation steps to check if a certain employee data is stored in the list based on their id.

### App.c:

1-	choice

The function has the implementation steps to check the choice entered by the user and call the function based on the number.

2-	addEmployee

The function has the implementation steps to take the data of the Employee from the user and add it to the list.

3-	modifyEmployee

The function has the implementation steps to modify the data of an employee stored in the system based on the id entered by the user, if the id not found the function prints employee not found.


4-	deleteEmployee

The function has the implementation steps to delete an employee based on the id entered by the user, if the id not found the function prints employee not found.

5-	viewEmployee

The function has the implementation steps to view an employee based on the id entered by the user, if the id is not find the function prints employee not found.

6-	viewAllEmployee

The function has the implementation steps to view all Employees stored in the list, if the list is empty the function prints there is no employees.

7-	Exit

The function has the implementation steps to exit from the application and it asks the user to make sure that they want to exit if they press ‘y’ or ‘Y’ it exits if they entered ‘n’ or ‘N’ it returns to the application again.

8-	 startFun

The function has the implementation steps to Welcome the user into the application explain its function and their number so the user know which number to press to do a certain function.

9-	Gotoxy

The function is based on on “wincon” library to organize how the text is shown in the application based on the x coordinate and y coordinate.

[Final Project report.pdf](https://github.com/habeba101/NTI-Training/files/13780804/Final.Project.report.pdf)
