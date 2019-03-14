/**********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           March 5, 2019
 * *    Project:        Practice Problem 1
 * *    Filename:       wk8-practice-problem1
 * *    Description:
 * *
 * *    Sources:     None
 * *
 *********************************************************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int countClumps(int arr[], int size);

int main() {
    const int SIZE = 11;
    int array[SIZE] = {7, 8, 8, 3, 4, 4, 6, -7, -12, -13, -13};

    int clumps = countClumps(array, SIZE);

    cout << "There are "<< clumps << " clumps in the array." << endl;

    return 0;
}

int countClumps(int arr[], int size) {
    int count = 0;

    int current = arr[0];
    bool counted = false;

    for (int i = 1; i < size; ++i) {
        if (current == arr[i] && !counted) {
            count++;
            counted = true;
        }
        else {
            current = arr[i];
            counted = false;
        }
    }
    return count;
}