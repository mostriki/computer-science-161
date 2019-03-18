#include <iostream>

using namespace std;

void printArray(int array[], int size);
void shiftLeft(int array[], int size);

int main() {
    const int SIZE = 10;
    int numbersArray[SIZE] = {6, -6, 1, 3, -3, 4, 8, -1, 2, 7};

    cout << "Before: ";
    printArray(numbersArray, SIZE);

    shiftLeft(numbersArray, SIZE);

    cout << "After: ";
    printArray(numbersArray, SIZE);

    return 0;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << "[ " << array[i] << " ]";

    cout << endl;
}

void shiftLeft(int array[], int size) {
    int temp = array[0];

    for (int i = 0; i < size; i++)
        array[i] = array[i + 1];

    array[size - 1] = temp;
}
