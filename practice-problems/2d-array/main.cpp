#include <fstream>  // ifstream, ofstream, .open()
#include <iostream> // cout, cin
#include <string>   // string

using namespace std;

//void loadData(ifstream &infile, string months[], int temp[][2], int &rows);
//void tempHigh(string months[], int temp[][2], int rows, string &month, int &hightemp);
int main() {
    // input variable to operate on
    ifstream inFile;

    string filePath;
    int hightemp = 0;
    int lowtemp = 0;
    int rows = 12;
    int cols = 2;
    int temp[rows][cols];
    int count = 0;
    int r = 0;
    int c = 0;

    cout << "Enter the file path: \n";
    getline(cin, filePath);

    // open the input and output streams
    inFile.open(filePath);

    // throw error if the file path does not exist
    if (!inFile) {
        throw runtime_error("Could not find file!");
    }

    while (!inFile.eof()) {
//        inFile >> hightemp >> lowtemp;

        for(r = 0; r < rows; r++) {
            for(c = 0; c < cols; c++) {
                inFile >> temp[r][c];
            }
        }
    }

    for (int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            cout << "[" << temp[r][c] << "] ";
        }
        cout << endl;
    }

    inFile.close();

    return 0;
}