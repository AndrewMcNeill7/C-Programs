#include <iostream>
using namespace std;
	int main() {
	int const password = 1123;
	int attempt;
	int starter = 0;
	 // while loop statement
	cout << "Enter the 4 digit password below (or -1 to exit) ! " << endl;
	cin >> attempt;
	
	while (attempt != -1){
		//cout << "Enter the 4 digit password below (or -1 to exit) ! " << endl;
		//cin >> attempt;
		
		if (attempt == 1123){
			cout << "Password is Correct ! " << endl; 
			break;
		}
		else{
			cout << "Password is incorrect ! " << endl;
		}
		
		cout << "Enter the 4 digit password below (or -1 to exit) ! " << endl;
		cin >> attempt;
	}
	cout << "You Have Exited The Program" << endl;
	return 0;
}
