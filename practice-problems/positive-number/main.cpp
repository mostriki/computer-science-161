#include <iostream>

using namespace std;

int main() {
    int number = 0; // 5
    int count = 1;

    cout << "Give me a positive number: \n";
    cin >> number;

    for (int i = number; i > 0; i--) {
        count = count * i;
    }

    cout << "Factorial = " << count << endl;
    return 0;
}