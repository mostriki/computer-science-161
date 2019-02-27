#include <iostream>

using namespace std;

void printArray(int n[], int size);
void addTwo(int n[], int size);

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    printArray(data, 5);
    addTwo(data, 5);
    printArray(data, 5);
    // data[0] = 10;
    // data[1] = 20;
    // data[2] = 30;
    // data[3] = -40;
    // data[4] = 50;

    // cout << data << endl;
    // cout << data[0] << endl;
    // cout << data[1] << endl;
    // cout << data[2] << endl;
    // cout << data[3] << endl;
    // cout << data[4] << endl;

    // for (int i = 0; i < 5; i++ ) {
    //   cout << data[i] << endl;
    // }

}

void addTwo(int n[], int size) {
    for (int i = 0; i < size; i++) {
      n[i] = n[i] + 2;
    }
}

void printArray(int n[], int size) {
    for (int i = 0; i < size; i++) {
      cout << "[" << n[i] << "] ";
    }

    cout << endl;
}