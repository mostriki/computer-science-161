/**********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           March 17, 2019
 * *    Program Name:   Number Swap
 * *    Filename:       practice-problem-03
 * *    Description:    Swaps the first and last numbers in an array of integers.
 * *
 * *    Sources:        None
 * *
 * *******************************************************************************************************************/

#include <iostream>

using namespace std;

void swapEnds(int array[], int size);
void printArray(int array[], int size);

int main () {
    const int SIZE = 10;
    int numbersArray[SIZE] = {6, -6, 1, 3, -3, 4, 8, -1, 2, 7};

    cout << "The array before: ";
    printArray(numbersArray, SIZE);

    swapEnds(numbersArray, SIZE);

    cout << "The array after: ";
    printArray(numbersArray, SIZE);

    return 0;
}


/**********************************************************************************************************************
 * *
 * *    Function:       swapEnds
 * *    Parameters:     An array of integers and its size as an integer
 * *    Description:    This function takes an array and swaps the first and last integers in that array.
 * *
 * *******************************************************************************************************************/
void swapEnds(int array[], int size) {
    int temp = 0;

    temp = array[0];
    array[0] = array[size -1];
    array[size - 1] = temp;
}

/**********************************************************************************************************************
 * *
 * *    Function:       printArray
 * *    Parameters:     An array of integers and its size as an integer
 * *    Description:    This function takes an array and prints it contents to standard out.
 * *
 * *******************************************************************************************************************/
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << "[ " << array[i] << " ]";

    cout << endl;
}
