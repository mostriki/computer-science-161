/*********************************************************************************************************************
 **
 **     Program Name:   Loops
 **     Filename:       a05.cpp
 **     Author:         Riki Montgomery
 **     Date:           February 10, 2019
 **     Assignment:     05
 **     Description:    Calculate how many dishes can be prepared within the time limit, given a fixed interval.
 **
 **     Sources:        None
 **
 * *******************************************************************************************************************/

#include <fstream>  // ifstream, ofstream, .open()
#include <iostream> // cout, cin
#include <iomanip>  // setw
#include <string>   // string


using namespace std;

int main() {

    // input stream variable to operate on
    ifstream inFile;

    // output stream variable to operate on
    ofstream outFile;

    string filePath;
    int firstDish = 0;      // minutes to prepare the first dish
    int timeInterval = 0;   // minutes longer than the previous dish
    int timeLimit = 0;      // time to prepare all of the dishes

    cout << "Enter the file path: \n";
    getline(cin, filePath);

    // open the input and output streams
    inFile.open(filePath);
    outFile.open("output.txt");

    // throw error if the file path does not exist
    if (!inFile) {
        throw runtime_error("Could not find file!");
    }

    cout << "Processing data from: " << filePath << endl << endl;
    outFile << "Dinner Counter" << endl;
    outFile << "------------------------" << endl;

    // while infFile.eof() = false do

    while (!inFile.eof())
    {
        int sumPrepTime = 0;
        int dishes = 0;
        inFile >> firstDish >> timeInterval >> timeLimit;

        // echo input stream data
        cout << firstDish << " " << timeInterval << " " << timeLimit << endl;

        // iterate over input data and calculate the number of dishes that can be prepared within the time limit
        for (int i = firstDish; sumPrepTime < timeLimit; i += timeInterval) {
            sumPrepTime += i;

            if (sumPrepTime <= timeLimit) {
                dishes += 1;
            }
        }

        // print calculations to output stream
        outFile << left << setw(6) << firstDish << setw(6) << timeInterval << setw(6) << timeLimit << setw(6) << dishes << endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}
