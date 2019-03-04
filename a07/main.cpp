/**********************************************************************************************************************
 * *
 * *    Author: Riki Montgomery
 * *    Date: March 01, 2019
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
//    int hightemp = 0;
//    int lowtemp = 0;
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
    while (!infile.eof()) {
        int r, c;

        for (r = 0; r < rows; r++) {
            infile >> months[r];

            for (c = 0; c < 2; c++) {
                infile >> temp[r][c];
            }
        }
    }

    // print months array
    for (int i = 0; i < rows; i++) {
        cout << "[" << months[i] << "] " << endl;
    }

    // print temp 2D array
    for (int r = 0; r < rows; r++) {
        for(int c = 0; c < 2; c++) {
            cout << "[" << temp[r][c] << "] ";
        }
        cout << endl;
    }
}

/**********************************************************************************************************************
 * *
 * *    Function Name:  tempHigh
 * *    Parameters:
 * *    Description:    Finds and updates the high temperature and the corresponding month of the year
 * *
 *********************************************************************************************************************/
//void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp) {
//
//}

/**********************************************************************************************************************
 * *
 * *    Function Name:  tempLow
 * *    Parameters:
 * *    Description:    Finds and updates the low temperature and the corresponding month of the year
 * *
 *********************************************************************************************************************/
//void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp) {
//
//}