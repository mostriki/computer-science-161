/**********************************************************************************************************************
**	Program Name:   ID Validator
**	Author:         Riki Montgomery
**	Date: 			February 13, 2019
**	Filename: 		main.cpp
**	Assignment: 	Midterm Proficiency Exam
**	Description: 	Validate the users id.
**
**	Sources: None
**
**********************************************************************************************************************/

#include <iostream>

using namespace std;

int main() {

	int id = 0;
	int sumOfDigits = 0;
	bool flag = false;

	// continue prompting the user until they enter a valid id, a.k.a., the sentinal
	while (!flag) {

		// prompt the user for an id number (must be a positive integer)
		cout << "Please enter a valid id number: " << endl;
		cin >> id;

		// throw error if the number is not a positive integer
		if (id <= 0) {
			throw invalid_argument("The number must be an positive integer.");
		}

		// calculate the sum of the digits
		for (int i = id; i > 0; i /= 10) {
			sumOfDigits += i % 10;
		}

		// check if the sum of the digits is divisible by 7 and output a message
		if (sumOfDigits % 7 == 0) {
			cout << "Thank you. The id number " << id << " is valid." << endl;
			flag = true;
		}
		else {
			cout << "The id number " << id << " was not valid. Please try again." << endl;
		}
        sumOfDigits = 0;
	}

	return 0;
}
