// **********************************************
// COSC 501 LAB #2
// ANDREW MCNEILL SEPTEMBER 18TH, 2023
// PROGRAM-NAME: Lab2_4.1
// A simple description of the program
//***********************************************
#include <iostream>
using namespace std;
	int main() {
	
	int month;
	int birthday;
	int february = 2;
	int april = 4;
	int june = 6;
	int september = 9;
	int november = 11;
	int attempts = 0;
	
	cout << "Enter Your Birthday Month Number " << endl;
	cin >> month;
	cout << "Enter Your Birth Day Number " << endl;
	cin >> birthday;
	
	
	if ((birthday > 31 || month > 12) || (birthday < 1 || month < 1)){
		cout << "Please Enter a Valid Birth Month or Birthday" << endl;
		exit(0);
	}
		
	if ((month == april || month == june || month == september || month == november)){
		cout << "Beware This Month Has 30 Days" << endl;
		if (birthday > 30){
			cout << "The month you entered does not have 31 days !" << endl;
			exit(0);
		}
	}
	
	

	while (attempts < 3){
		
		
		
			if ((month ==1 && birthday >= 20) || (month == 2 && birthday <= 18)){
				cout << "Your Horoscope Sign is a Aquarius !" << endl;
			}
			else if ((month == 2 && birthday >= 19) || (month == 3 && birthday <= 20)) {
				cout << "Your Horoscope Sign is a Pisces !" << endl;
			}
			else if ((month == 3 && birthday >= 21) || (month == 4 && birthday <= 19)){
				cout << "Your Horoscope Sign is a Aries ! " << endl;
			}
			else if ((month == 4 && birthday >= 20) || (month == 5 && birthday <= 20)){
				cout << "Your Horoscope Sign is a Taurus ! " << endl;
			}
			else if ((month == 5 && birthday >= 21) || (month == 6 && birthday <= 20)){
				cout << "Your Horoscope Sign is a Gemini ! " << endl;
			}
			else if ((month == 6 && birthday >= 21) || (month == 7 && birthday <= 22)){
				cout << "Your Horoscope Sign is a Cancer ! " << endl;
			}
			else if ((month == 7 && birthday >= 23) || (month == 8 && birthday <= 22)){
				cout << "Your Horoscope Sign is a Leo ! " << endl;
			}
			else if ((month == 8 && birthday >= 23) || (month == 9 && birthday <= 22)){
				cout << "Your Horoscope Sign is a Virgo ! " << endl;
			}
			else if ((month == 9 && birthday >= 23) || (month == 10 && birthday <= 22)){
				cout << "Your Horoscope Sign is a Libra ! " << endl;
			}
			else if ((month == 10 && birthday >= 23) || (month == 11 && birthday <= 21)){
				cout << "Your Horoscope Sign is a Scorpio ! " << endl;
			}
			else if ((month == 11 && birthday >= 22) || (month == 12 && birthday <= 21)){
				cout << "Your Horoscope Sign is a Sagittarius ! " << endl;
			}
			else if ((month == 12 && birthday >= 22) || (month == 1 && birthday <= 19)){
				cout << "Your Horoscope Sign is a Capricorn ! " << endl;
			}
			else {
				cout << "Please Enter A Valid Birthday" << endl;
			}
		
		
		cout << "Enter Your Birthday Month Number " << endl;
		cin >> month;
		cout << "Enter Your Birth Day Number " << endl;
		cin >> birthday;
		attempts++;
	}
	
	return 0;
}
