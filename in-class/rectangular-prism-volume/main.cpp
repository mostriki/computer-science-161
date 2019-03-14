/*********************************************************************************************************************
 * *
 * *    Program Name: Volume of a Rectangular Prism
 * *    Filename: main.cpp
 * *    Author: Riki Montgomery
 * *    Date: February 12, 2019
 * *    Assignment:
 * *
 * *    Description:
 * *
 * *    Sources: None
 * *
*********************************************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double length = 0.0;
    double height = 0.0;
    double width = 0.0;
    double volume = 0.0;

    cout << "Enter the length width and height of a rectangular prism in inches (e.g., 96 36 9): " << endl;
    cin >> length >> width >> height;

    volume = (length * width * height) / 1728;

    cout << "The prism is " << volume << " cubic feet" << endl;

    return 0;
}