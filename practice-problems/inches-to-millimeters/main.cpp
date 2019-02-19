#include <iostream>

using namespace std;

float convert(float inches){
    return inches * 25.4;
};

int main(){

    float in = 0;
    float mm = 0 ;

    cout << "Enter the number of inches: ";
    cin >> in;

    mm = convert(in);

    cout << in << " inches converts to " << mm << "mm";

    return 0;
}

