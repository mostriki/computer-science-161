/**********************************************************************************************************************
** 
**		Author:			Riki Montgomery
**		Date:			March 18, 2019
**		Program:		CS161 Final Exam
**		Filename:		main.cpp
**		Description:	Pops, pushes, and prints an array of integers from user input.
**
**		Sources:		None
**
**********************************************************************************************************************/

#include <iostream>

using namespace std;

const int SIZE = 0;

//int pop(int stack[], int &size, int val);
int push(int stack[], int &size, int val);
void printStack(int stack[], int size, int mode);

int main() {
    int size = SIZE;
    int stack[SIZE];
    char option;
    int val = 0;
    int mode = 0;
    bool quit = false;

    while (!quit) {
        cout << "Option: ";
        cin >> option;

        switch (option) {
            case 'q':
                cout << endl;
                cout << "Goodbye!";
                quit = true;
                break;
            case '+':
                cout << "Integer: ";
                cin >> val;
                size += 1;

                push(stack, size, val);
                break;
            case '-':
                // cout << "Popped: ";
                // cin >> val;
                // pop(stack, size, val);
                break;
            case 'd':
                mode = 1;
                printStack(stack, size, mode);
                break;
            case 'e':
                mode = 2;
                printStack(stack, size, mode);
                break;
            default:
                printStack(stack, size, mode);
                break;
        }
    }

    return 0;
}

/**********************************************************************************************************************
**
**		Function Name:	pop
**		Parameters:		one integer array named stack, one integer names size, and one integer named val.
**		Description:	Pops a value off of a stack of integers
**
**********************************************************************************************************************/
//int pop(int stack[], int &size, int val) {
//
//	return 0;
//}

/**********************************************************************************************************************
**
**		Function Name:	push
**		Parameters:		one integer array named stack, one integer names size, and one integer named val.
**		Description:	Pushes a value onto a stack of integers.
**
**********************************************************************************************************************/
int push(int stack[], int &size, int val) {

    return 0;
}

/**********************************************************************************************************************
**
**		Function Name:	printStack
**		Parameters:		one integer array named stack, one integer names size, and one integer named mode.
**		Description:	Prints a stack of integers in the format: [0, 1, 2] where integers 0, 1, and 2
**                      are elements on the stack.
**
**********************************************************************************************************************/
void printStack(int stack[], int size, int mode) {
    cout << "[";

    if (mode == 2) {
        for (int i = 0; i < size; i++) {
            if (stack[i] % 2 == 0) {
                stack[i] = 0;
            }
            else {
                stack[i] = 1;
            }
        }
    }

    for (int i = 0; i < size - 1; i++) {
        cout << stack[i] << ", ";
    }

    cout << stack[size - 1];

    cout << "]" << endl;
}
