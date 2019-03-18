#include <iostream>

using namespace std;

bool dividesSelf(int num);

int main() {
    double number = 0;
    bool positive = false;
    bool divisible;

    cout << endl;

    while (!positive) {
        cout << endl << "Enter a positive integer to find out if it is divisible by itself: ";
        cin >> number;

        if (number >= 0) {
            positive = true;
        } else {
            cout << endl << "Make sure you enter a positive integer. Try again." << endl;
        }
    }

    divisible = dividesSelf(number);

    cout << endl;

    if (divisible == true) {
        cout << number << " is divisible by itself." << endl;
    } else {
        cout << "Sorry, " << number << " is not divisible by itself." << endl;
    }


    return 0;
}

bool dividesSelf(int num) {
    int sum = 0;
    bool result;

    for(int i = num; i > 0; i /=10) {
        sum = i % 10;

        if (sum == 0) {
            result = false;
            break;
        } else if (num % sum != 0) {
            result = false;
            break;
        } else {
            result = true;
        }
    }

    return result;
}
