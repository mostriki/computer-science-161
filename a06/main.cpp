/*********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           February 23, 2019
 * *    Project name:   Functions
 * *    Assignment:     06
 * *    Filename:       a06
 * *    Description:    An application to calculate a users gym membership.
 * *
 * *    Sources:        None
 * *
 * *******************************************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void information();
void getInfo(bool &senior, int &months, int &personal);
double calcCost(bool senior, int months, int personal);

int main() {
    char response;
    bool senior;
    int months = 0;
    int personal = 0;
    int membershipFee = 0;

    bool quit = false;

    cout << "Hello, this program will calculate the total cost of a gym membership." << endl;
    cout << endl;

    while (!quit) {
        // prompt the user to continue or quit the program
        cout << "Please enter 'a' to calculate cost of membership, or enter 'b' to quit the program." << endl;
        cin >> response;
        cout << endl;

        if (response == 'b') {
            cout << "Thank you for using my gym calculation program.";
            quit = true;
        } else if (response == 'a') {
            cout << "Thank you for your interest in ABC’s fitness center."
                 << endl << "Below is some information about our fitness center and the costs of membership." << endl;
            cout << endl;

            // call the information function
            information();

            // call the getInfo function using the instantiated variables
            getInfo(senior, months, personal);

            // call the calcCost function with the references from getInfo
            membershipFee = calcCost(senior, months, personal);

            cout << "Your total membership fee is $" << fixed << setprecision(2) << membershipFee << endl;
            cout << endl;

        } else {
            // throw a warning if the user enters an invalid character
            cout << "That is not a valid response. Try again." << endl;
            cout << endl;
        }
    }

    return 0;
}

/*********************************************************************************************************************
* *
* *    Function name:   information
* *    Parameters:      None
* *    Description:     A function to display the general information about the fitness center and its charge.
* *
* *******************************************************************************************************************/

 void information() {
    cout << "General Membership Fee: $50.00 / month." << endl;
    cout << endl;
    cout << "Senior Citizen Discount: 30% for any member over the age of 60." << endl;
    cout << endl;
    cout << "If you buy 12 or more months, the discount is 15% each month." << endl;
    cout << endl;
    cout << "Personal Training Session: $30.00 per session." << endl;
    cout << "If you buy 5 or more sessions, there is a 20% discount per session." << endl;
    cout << endl;

    return;
 }

/*********************************************************************************************************************
* *
* *    Function name:   getInfo
* *    Parameters:      One boolean, &senior, and two ints, &months and &personal.
* *    Description:     A function to collect all the necessary information to determine the cost of membership.
* *
* *******************************************************************************************************************/

void getInfo(bool &senior, int &months, int &personal) {
    bool flag = false;
    char input;

    cout << "Are you over the age of 60? (y or n): ";
    cin >> input;

    while (!flag) {
        if (input == 'y') {
            senior = true;
            flag = true;
        } else if (input == 'n') {
            senior = false;
            flag = true;
        } else {
            // throw a warning if the input is invalid
            cout << "Your input was not valid. Please try again.";
        }
    }

    cout << endl;

    cout << "Please enter the number of months you would like to prepay for the membership: ";
    cin >> months;
    cout << endl;

    cout << "Please enter the number of personal training sessions you would like to purchase: ";
    cin >> personal;
    cout << endl;

    return;
}

/*********************************************************************************************************************
* *
* *    Function name:   calcCost
* *    Parameters:      One boolean, senior, and two ints, months and personal.
* *    Description:     A function to determine the cost of membership.
* *
* *******************************************************************************************************************/

 double calcCost(bool senior, int months, int personal) {
    double total = 0;
    double trainerTotal = 0;

    const double membershipPrice = 50;
    const double personalTrainerPrice = 30;
    const double annualDiscount = 0.15;
    const double personalTrainerDiscount = 0.2;
    const double seniorDiscount = 0.3;

    // calculate the total cost of membership
    total = membershipPrice * months;

    // calculate the cost of membership after a senior discount
    if (senior) {
        total -= total * seniorDiscount;
    }

    // calculate the cost of membership after an annual discount
    if (months >= 12) {
        total -= total * annualDiscount;
    }

    // calculate the total cost of a personal trainer
    trainerTotal = personalTrainerPrice * personal;

    // calculate the cost of a personal trainer after the trainer discount
    if (personal >= 5) {
        trainerTotal -= trainerTotal * personalTrainerDiscount;
        total += trainerTotal;
    } else {
        total += trainerTotal;
    }

    return total;
 }