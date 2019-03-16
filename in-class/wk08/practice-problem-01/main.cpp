#include <iostream>

using namespace std;

void printArray(int numList[], int size);

int main() {
    const int SIZE = 4;
    int numList[SIZE] = {2, -8, 8, 33};

    cout << endl;

    cout << "Practice Problem #1: ";
    printArray(numList, SIZE);

    cout << endl;

    return 0;
}

void printArray(int numList[], int size) {
    for (int i = 0; i < size; i++)
        cout << "[ " << numList[i] << " ]";

    cout << endl;
}

