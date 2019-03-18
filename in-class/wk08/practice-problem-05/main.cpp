#include <iostream>

using namespace std;

int centeredAverage(int array[], int size);
int findMin(int array[], int size);
int findMax(int array[], int size);

int main() {
    const int SIZE = 10;
    int numbersArray[SIZE] = {6, -6, 1, 3, -3, 4, 8, -1, 2, 7};
    int output = 0;

    output = centeredAverage(numbersArray, SIZE);

    cout << "Practice Problem #5: " << output;

    return 0;
}

int centeredAverage(int array[], int size) {
    int division = 0;
    int sum = 0;
    int smallest = findMin(array, size);
    int largest = findMax(array, size);

    for (int i = 0; i < size; i++)
        sum += array[i];

    division = ((sum - largest - smallest) / (size - 2));

    return division;
}

int findMin(int array[], int size) {
    int min = 0;

    for (int i = 0; i < size; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}

int findMax(int array[], int size) {
    int max = 0;

    for (int i = 0; i < size; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}
