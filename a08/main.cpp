/**********************************************************************************************************************
 * *
 * *    Author:         Riki Montgomery
 * *    Date:           March 5, 2019
 * *    Project:        Structs
 * *    Filename:       a08
 * *    Description:
 * *
 * *    Sources:     None
 * *
 *********************************************************************************************************************/

#include <fstream>  // ifstream, ofstream, .open()
#include <iostream> // cout, cin
#include <string>   // string

using namespace std;

void loadData(ifstream &infile, Temperature [], int &size);
Temperature averageHigh(Temperature [], int size);
Temperaure averageLow(Temperature [], int size);

int main() {
    // input variable to operate on
    ifstream infile;

    int rows = 12;
    string filePath;
    string month;
    string months[rows];
    int temp[rows][2];

    cout << "Enter the file path: \n";
    getline(cin, filePath);

    // open the input and output streams
    infile.open(filePath);

    // throw error if the file path does not exist
    if (!infile) {
        throw runtime_error("Could not find file!");
    }

    // while loop to read all lines of text from input file
    loadData(infile, months, temp, rows);



    infile.close();

    return 0;
}

/**********************************************************************************************************************
 * *
 * *    Function Name:  loadData
 * *    Parameters:     one ifstream, &infile, one struct, Temperature, and one int, size.
 * *    Description:    The function reads and stores data in the array of struct from a text file (temps.txt).
 * *
 *********************************************************************************************************************/
void loadData(ifstream &infile, Temperature [], int &size) {

}

/**********************************************************************************************************************
 * *
 * *    Function Name:  averageHigh
 * *    Parameters:     One struct, Temperature, and one integer, size.
 * *    Description:    Calculates and returns that record that has the high temperature. From that, you can print
 * *                    the high temperature and the corresponding month in main.
 * *
 *********************************************************************************************************************/
void averageHigh(Temperature [], int size) {

}

/**********************************************************************************************************************
 * *
 * *    Function Name:  averageLow
 * *    Parameters:     One struct, Temperature, and one integer, size.
 * *    Description:    Calculates and returns that record that has the low temperature. From that, you can print the
 * *                    low temperature and the corresponding month in main.
 * *
 *********************************************************************************************************************/
void averageLow(Temperature [], int size) {

}
