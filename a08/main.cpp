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

struct Temperature {
    string month;
    int highTemp;
    int lowTemp;
};

void loadData(ifstream &infile, Temperature [], int &size);
Temperature averageHigh(Temperature [], int size);
Temperature averageLow(Temperature [], int size);

int main() {
    // input variable to operate on
    ifstream infile;

    int size = 12;
    string filePath;
    Temperature data[size];
    string month;
    int high = 0;
    int low = 0;

    cout << "Enter the file path: \n";
    getline(cin, filePath);

    // open the input and output streams
    infile.open(filePath);

    // throw error if the file path does not exist
    if (!infile) {
        throw runtime_error("Could not find file!");
    }

    loadData(infile, data, size);

    cout << endl;

    month = averageHigh(data, size).month;
    high = averageHigh(data, size).highTemp;

    cout << "At a scorching "
         << high << " degrees Fahrenheit, "
         << month << " was the hottest month on record." << endl;

    cout << endl;

    month = averageLow(data, size).month;
    low = averageLow(data, size).lowTemp;

    cout << "At a chilly "
         << low << " degrees Fahrenheit, "
         << month << " was the coolest month on record." << endl;

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
void loadData(ifstream &infile, Temperature data[], int &size) {
    // while loop to read all lines of text from input file
    while (!infile.eof()) {

        for (int i = 0; i < size; i++) {
            infile >> data[i].month;
            infile >> data[i].highTemp;
            infile >> data[i].lowTemp;
        }
    }
}

/**********************************************************************************************************************
 * *
 * *    Function Name:  averageHigh
 * *    Parameters:     One struct, Temperature, and one integer, size.
 * *    Description:    Calculates and returns that record that has the high temperature. From that, you can print
 * *                    the high temperature and the corresponding month in main.
 * *
 *********************************************************************************************************************/
Temperature averageHigh(Temperature data[], int size) {
    int temp = data[0].highTemp;

    for(int i = 1; i < size; i++) {
        if (data[i].highTemp > temp) {
            temp = data[i].highTemp;
        }
    }

    for(int j = 0; j < size; j++) {
        if (data[j].highTemp == temp) {
            return data[j];
        }
    }
}

/**********************************************************************************************************************
 * *
 * *    Function Name:  averageLow
 * *    Parameters:     One struct, Temperature, and one integer, size.
 * *    Description:    Calculates and returns that record that has the low temperature. From that, you can print the
 * *                    low temperature and the corresponding month in main.
 * *
 *********************************************************************************************************************/
Temperature averageLow(Temperature data[], int size) {
    int temp = data[0].lowTemp;

    for(int i = 1; i < size; i++) {
        if (data[i].lowTemp < temp) {
            temp = data[i].lowTemp;
        }
    }

    for(int j = 0; j < size; j++) {
        if (data[j].lowTemp == temp) {
            return data[j];
        }
    }
}
