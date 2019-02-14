/*
 * CS 161 - Assignment 3
 * Input/Output
 *
 * by Riki Montgomery
 *
 * Sources 1: https://www.ck12.org/book/CK-12-Middle-School-Math-Concepts-Grade-8/section/1.14/
 * Source 2: https://www.khanacademy.org/math/basic-geo/basic-geometry-pythagorean-theorem/geo-pythagorean-theorem/v/the-pythagorean-theorem
 * Source 3: http://www.cplusplus.com
 *
 * Example Run:
 * Speed for Car A: 60
 * Speed for Car A: 50
 * Elapsed time as hours and minutes: 1 30
 * Result: 117.15 miles
 *
 * */

#include <cmath>        // std::pow, std::sqrt
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

using namespace std;

int main()
{
    // Initializing all necessary variables for the program to run
    int rate1;
    int rate2;
    int hours;
    double minutes;
    double time;
    double distance1;
    double distance2;
    double distanceSquared;
    double minDistance;

    // Prompt the user for the average speed of car A
    cout << "Enter the average speed of the first car: \n";
    cin >> rate1;

    // Prompt the user for the average speed of car B
    cout << "Enter the average speed of the second car: \n";
    cin >> rate2;

    // Prompt the user for the elapsed time
    cout << "Enter the elapsed in hours and minutes (separated by a space, i.e. \"2 30\"): \n";
    cin >> hours >> minutes;

    // Convert the elapsed time to a decimal for easier calculations
    time = hours + (minutes / 60);

    // Calculate the distance that each car traveled over over the elapsed time
    distance1 = rate1 * time;
    distance2 = rate2 * time;

    // Use the pythagorean theorem to calculate the shortest distance between the two cars
    distanceSquared = pow(distance1, 2) + pow(distance2, 2);    // a^2 + b^2 = c^2

    // Find the square root of c^2
    minDistance = sqrt(distanceSquared);

    // Output the results of the final calculation rounded to two decimal places
    cout << "The shortest distance between both cars would be " << fixed << setprecision(2) << minDistance << " miles.\n";

    return 0;
}
