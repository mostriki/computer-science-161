#include <iostream>

using namespace std;

void prompt(int &num);
void message(int minimum, int minNumber, int maximum, int maxNumber);

int main() {

  int number = 0;
  int counter = 0;
  int maximum;
  int minimum;
  int minNumber = 1;
  int maxNumber = 1;

  while (number != -1) {

      prompt(number);

      if (number != -1) {
         counter ++;

          if (counter == 1) {
              minimum = number;
              maximum = number;
          }

          if (number > maximum) {
              maximum = number;
              maxNumber = counter;
          }

          if (number < minimum) {
              minimum = number;
              minNumber = counter;
          }
      }
  }

  message(minimum, minNumber, maximum, maxNumber);

}

void prompt(int &num) {

    cout << "Enter a positive number (-1 to quit): ";
    cin >> num;

    if (num < -1) {
        cout << "Nice try, but that was a negative number!" << endl;

        cout << "Enter a positive number (-1 to quit): ";
        cin >> num;
    }
}

void message(int min, int minNum, int max, int maxNum) {
    cout << "Minimum = " << min << endl
         << "Ordinal = " << minNum<< endl;

    cout << "Maximum = " << max << endl
         << "Ordinal = " << maxNum << endl;
}