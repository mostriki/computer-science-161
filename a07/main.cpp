#include <fstream>  // ifstream, ofstream, .open()
#include <iostream> // cout, cin
#include <string>   // string

using namespace std;

//void loadData(ifstream &infile, string months[], int temp[][2], int &rows);
//void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp);
//void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp);

int main() {
    // input variable to operate on
    ifstream inFile;

    int hightemp = 0;
    int lowtemp = 0;
    string filePath;
    string month;

    cout << "Enter the file path: \n";
    getline(cin, filePath);

    // open the input and output streams
    inFile.open(filePath);

    // throw error if the file path does not exist
    if (!inFile) {
        throw runtime_error("Could not find file!");
    }

    //    while loop to read all lines of text from input file
    while (!inFile.eof()) {
        inFile >> month >> hightemp >> lowtemp;

        cout << month << " " << hightemp << " " << lowtemp << endl;
    }


    inFile.close();

    return 0;
}




//// Function loadData:  The function reads and stores data in the parallel array and 2D array from a text file (temps.txt).
//void loadData(ifstream &infile, string months[11], int temp[][2], int &rows) {
//
//}
//
//// Function tempeHigh:  This function finds and updates the high temperature and the corresponding month of the year.
//void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp) {
//
//}
//
//
//// Function tempLow:  This function finds and updates the low temperature and the corresponding month of the year.
//void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp) {
//
//}