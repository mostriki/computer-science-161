/**********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           March 10, 2019
 * *    Project:        Practice Problem 2
 * *    Filename:       wk9-practice-problem2
 * *    Description:
 * *
 * *    Sources:     None
 * *
 *********************************************************************************************************************/

#include <iostream>

using namespace std;

void fix34(int array[], int size);

int main() {
    const int SIZE = 11;
    int arr[SIZE] = {3, 1, 3, 1, 4, 4, 3, 1, 4, 3, 4};

    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i];

    cout << endl;

    cout << "New array: ";
    fix34(arr, SIZE);

    return 0;
}

void fix34(int array[], int size) {
    int newArray[size];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] != 3 && array[i] != 4) {
            newArray[count] = array[i];
            count++;
        } else if (array[i] == 3) {
            newArray[count] = array[i];
            newArray[count + 1] = 4;
            count += 2;
        }

    }

    for (int i = 0; i < size; i++)
        cout << newArray[i];
}
