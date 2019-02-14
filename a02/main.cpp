#include <iostream>

using namespace std;

/*
 * CS 161 - Assignment 02
 * Basic Elements of C++
 * Name: Riki Montgomery
 * Sources: Wikipedia (https://en.wikipedia.org/wiki/Ohm%27s_law)
 *
 * Example Run:
 * ---
 * Input resistance: 500
 * Input current: .018
 * Voltage: 9
 * */

int main() {

    float current;
    float resistance;
    float voltage;

    cout << "Enter the current in Amps and the resistance in Ohms (separate your input with spaces): \n";
    cin >> current >> resistance;

    voltage = current * resistance;

    cout <<  "The voltage is: " << voltage << "V" << endl;

    return 0;
}
