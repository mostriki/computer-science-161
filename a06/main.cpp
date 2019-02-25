/*********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           February 23, 2019
 * *    Project name:   Functions
 * *    Assignment:     06
 * *    Filename:       a06
 * *    Description:
 * *
 * *    Sources:        None
 * *
 * *******************************************************************************************************************/

#include <iostream>

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

            information();

            cout << "-1-" << endl;// dont forget to delete this
            cout << senior << endl;// dont forget to delete this
            cout << months << endl;// dont forget to delete this
            cout << personal << endl;// dont forget to delete this
            cout << "---" << endl;// dont forget to delete this

            getInfo(senior, months, personal);

            cout << "-2-" << endl;// dont forget to delete this
            cout << senior << endl;// dont forget to delete this
            cout << months << endl;// dont forget to delete this
            cout << personal << endl;// dont forget to delete this
            cout << "---" << endl;// dont forget to delete this

            membershipFee = calcCost(senior, months, personal);

            cout << "Your total membership fee is" << membershipFee << endl;
            cout << endl;

        } else {
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
            "Your input was not valid. Please try again.";
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
    int membershipFee = 0;
    const int membershipPrice = 50;
    const int personalTrainePrice = 30;
    const int seniorDiscount = 0.3;
    const int annualDiscount = 0.15;
    const int personalTrainerDiscount = 0.2;

    

    return membershipFee;
 }