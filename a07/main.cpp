#include <iostream>
#include <fstream>

using namespace std;

void loadData(ifstream &infile, string months[], int temp[][2], int &rows);
void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp);
void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp);

int main() {

//    Maximum temp was 81 degrees in July.

//    Minimum temp was 35 degrees in December.


    return 0;
}

// Function loadData:  The function reads and stores data in the parallel array and 2D array from a text file (temps.txt).
void loadData(ifstream &infile, string months[], int temp[][2], int &rows) {

//    while loop to read all lines of text from input file
//    ifstream inFile;
//    inFile.open("temps.txt");
//    inFile.close();

}

// Function tempeHigh:  This function finds and updates the high temperature and the corresponding month of the year.
void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp) {

}


// Function tempLow:  This function finds and updates the low temperature and the corresponding month of the year.
void tempLow(string months[], int temp[][2], int rows, string &month, int &lowtemp) {

}