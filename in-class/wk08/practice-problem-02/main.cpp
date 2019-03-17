/**********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           March 17, 2019
 * *    Program:        Find min and max
 * *    Filename:       Practice Problem #2
 * *    Description:    Find the minimum and maximum numbers in an array of numbers.
 * *    Sources:        None
 * *
 * *******************************************************************************************************************/

#include <iostream>

using namespace std;

int findMin(int array[], int size);
int findMax(int array[], int size);

int main() {
    const int SIZE = 1000;
    int numbersArray[SIZE] = {6, -6, 1, 3, -3, 4, 8, -1, 2};
    int minimumNumber = 0;
    int maximumNumber = 0;

    minimumNumber = findMin(numbersArray, SIZE);

    cout << minimumNumber << endl;

    maximumNumber = findMax(numbersArray, SIZE);

    cout << maximumNumber << endl;

    return 0;
}

/**********************************************************************************************************************
 * *
 * *    Function:       findMin
 * *    Parameters:     One array of integers and it's size in integers
 * *    Description:    Finds the smallest number in an array of numbers and returns that number.
 * *
 * *******************************************************************************************************************/
int findMin(int array[], int size) {
    int min = 0;

    for (int i = 0; i < size; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}

/**********************************************************************************************************************
 * *
 * *    Function:       findMax
 * *    Parameters:     One array of integers and it's size in integers
 * *    Description:    Finds the largest number in an array of numbers and returns that number.
 * *
 * *******************************************************************************************************************/
int findMax(int array[], int size) {
    int max = 0;

    for (int i = 0; i < size; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}
