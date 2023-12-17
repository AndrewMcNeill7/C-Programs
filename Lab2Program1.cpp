// **********************************************
// COSC 501 LAB #2
// ANDREW MCNEILL SEPTEMBER 18TH, 2023
// PROGRAM-NAME: Lab2_1
// A simple description of the program
//***********************************************
#include <iostream>


using namespace std;
int main() {
 int input;
 cout << "Enter an integer: " << endl;;
 cin >> input;
 // if-else statement
 
	if (input > 0) {
		cout << "The Integer Value You Entered is Positive !" << endl;
	}
	else if (input < 0) {
		cout << "The Integer Value You Entered is Negative !" << endl;
	}
	else {
		cout << "The Integer Value You Entered is Zero !" << endl;
	}


	if (input % 2 == 0){
		cout << "The Integer Value You Entered is Even !" << endl;
	}
	else {
		cout << "The Integer Value You Entered is Odd !" << endl;
	}
	return 0;
}
