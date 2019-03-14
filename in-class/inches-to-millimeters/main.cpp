#include <iostream>

using namespace std;

//float convert(float inches){
//    return inches * 25.4;
//};
//
//int main(){
//
//    float in = 0;
//    float mm = 0 ;
//
//    cout << "Enter the number of inches: ";
//    cin >> in;
//
//    mm = convert(in);
//
//    cout << in << " inches converts to " << mm << "mm";
//
//    return 0;
//}

// call by reference example

void convert(float inches, float &mils);

int main() {
    float in;
    float mm;

    cout << "Enter the number of inches: ";
    cin >> in;

    convert(in, mm);

    cout << in << " inches converts to " << mm << "mm";

    return 0;
}

void convert(float inches, float & mils) {
    mils = 25.4 * inches;
}