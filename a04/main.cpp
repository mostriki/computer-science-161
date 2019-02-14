/*********************************************************************************************************************
 * *
 * *    Program Name:   Control Structures
 * *    Filename:       a04.cpp
 * *    Author:         Riki Montgomery
 * *    Date:           January 29, 2019
 * *    Assignment:     04
 * *    Description:
 * *
 * *    Sources:        None
 * *
 * *******************************************************************************************************************/

#include <cmath>        // std::pow, std::sqrt
#include <iostream>     // std::cout, std::cin, std::fixed
#include <iomanip>      // std::setprecision

using namespace std;

int main()
{
    double size = 0;
    int option = 0;
    double length = 0;
    double width = 0;

    // input the length of the diagonal (inches) of a screen
    cout << "Enter the screen size (the diagonal length) in inches of the TV: \n";
    cin >> size;

    // allow the user to select which type of TV the user would like to view the dimensions for
    cout << "Select the type (1, 2, or 3) of TV you'd like to view the dimension for: \n"
         << "1. Traditional TV Area\n"
         << "2. LCD TV Area\n"
         << "3. Both types of TVs Area\n";
    cin >> option;

    if ((option == 1) || (option == 3)) {

        // Use the pythagorean theorem to calculate the length and width of the rectangular diagonal
        length = 4 * sqrt(pow(size, 2) / (pow(4, 2) + pow(3, 2)));
        width = 3 * sqrt(pow(size, 2) / (pow(4, 2) + pow(3, 2)));

        // Output the results of the final calculation rounded to two decimal places
        cout << "TV type: Traditional" << endl
             << "TV size: " << size << endl
             << "Screen length: " << fixed << setprecision(2) << length << " inches\n"
             << "Screen width: " << fixed << setprecision(2) << width << " inches\n"
             // calculate and display the screen area for each type
             << "Screen area: " << fixed << setprecision(2) << length * width << " square inches\n";
    }

    if (option == 3) cout << "\n";

    if ((option == 2) || (option == 3)) {

        // Use the pythagorean theorem to calculate the length and width of the rectangular diagonal
        length = 16 * sqrt(pow(size, 2) / (pow(16, 2) + pow(9, 2)));
        width = 9 * sqrt(pow(size, 2) / (pow(16, 2) + pow(9, 2)));

        // Output the results of the final calculation rounded to two decimal places
        cout << "TV type: LCD" << endl
             << "TV size: " << size << endl
             << "Screen length: " << fixed << setprecision(2) << length << " inches\n"
             << "Screen width: " << fixed << setprecision(2) << width << " inches\n"
             << "Screen area: " << fixed << setprecision(2) << length * width << " square inches\n";
    }

    return 0;
}
