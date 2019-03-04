/**********************************************************************************************************************
 * *
 * *    Author: Riki Montgomery
 * *    Date: March 04, 2019
 * *    Project: Arrays and Strings
 * *    Filename: a07
 * *    Description:
 * *
 * *    Sources: None
 * *
 *********************************************************************************************************************/

#include <fstream>  // ifstream, ofstream, .open()
#include <iostream> // cout, cin
#include <string>   // string

using namespace std;

void loadData(ifstream &infile, string months[], int temp[][2], int &rows);
void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp);
void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp);

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
 * *    Parameters:     one ifstream, &infile, one array of strings, months, one 2D array of integers, temp, one int, rows
 * *    Description:    Reads and stores data in the parallel array and 2D array from a text file (temps.txt)
 * *
 *********************************************************************************************************************/
void loadData(ifstream &infile, string months[], int temp[][2], int &rows) {
    int hightemp = 0;
    int lowtemp = 0;
    string month = "MONTH";

    while (!infile.eof()) {
        int r, c;

        for (r = 0; r < rows; r++) {
            infile >> months[r];

            for (c = 0; c < 2; c++) {
                infile >> temp[r][c];
            }
        }
    }

    tempHigh(months, temp, rows, month, hightemp);

    cout << endl;

    cout << "Maximum temp was " << hightemp << " degrees in " << month << "." << endl;

    cout << endl;

    tempLow(months, temp, rows, month, lowtemp);

    cout << "Minimum temp was " << lowtemp << " degrees in " << month << "." << endl;

}

/**********************************************************************************************************************
 * *
 * *    Function Name:  tempHigh
 * *    Parameters:
 * *    Description:    Finds and updates the high temperature and the corresponding month of the year
 * *
 *********************************************************************************************************************/
void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp) {
    int highestHigh = 0;

    for (int i = 0; i < rows ; i++) {
        for (int j = 0; j < 2; j++) {
            if (highestHigh < temp[i][0]) {
                highestHigh = temp[i][0];
                month = months[i];
            }
        }
    }
    hightemp = highestHigh;
}

/**********************************************************************************************************************
 * *
 * *    Function Name:  tempLow
 * *    Parameters:
 * *    Description:    Finds and updates the low temperature and the corresponding month of the year
 * *
 *********************************************************************************************************************/
void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp) {
    int lowestLow = temp[0][1];

    for (int i = 0; i < rows ; i++) {
        for (int j = 0; j < 2; j++) {
            if (lowestLow > temp[i][1]) {
                lowestLow = temp[i][1];
                month = months[i];
            }
        }
    }
    lowtemp = lowestLow;
}