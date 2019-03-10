/**********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           March 5, 2019
 * *    Project:        Week 8 warm up problem
 * *    Filename:       wk8-warmup
 * *    Description:
 * *
 * *    Sources:     None
 * *
 *********************************************************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name[100];
    int quantity[100];
    double price[100];
    int count = 0;
    char done = 'n';
    double total = 0;

    cout << "Welcome to AwesomeShopping.com! Let's make a shopping list: \n";
    cout << endl;

    while (done == 'n' || done == 'N') {

        cout << "Enter an item name: ";
        cin >> name[count];

        cout << "How many would you like? ";
        cin >> quantity[count];

        while (cin.fail()) {
            cout "Try entering a valid number.\n";
            cin.clear();
            cin.ignore(256,'\n');
            cin >> quantity[count];
        }

        cout << "How much does it cost? $ ";
        cin >> price[count];

        cout << "All done (y/n)? \n";
        cin >> done;
        count++;
    }

    cout << "Grocery List: \n";
    cout << "---\n";

    for (int i = 0; i < count; i++) {
        cout << setw(6) << left << name[i]
             << setw(6) << left << quantity[i]
             << fixed << setprecision(2) << "$" << price[i]
             << endl;
    }

    cout << endl;

    for (int i = 0; i < count; i++){
        total += price[i];
    }

    cout << "Total: " << fixed << setprecision(2) << "$" << total << endl;

    cout << endl;
    cout << "That's a great list!";
    return 0;
}