// **********************************************
// COSC 501 LAB #2
// ANDREW MCNEILL SEPTEMBER 18TH, 2023
// PROGRAM-NAME: Lab2_3
// A simple description of the program
//***********************************************
#include <iostream>


using namespace std;
	int main() {
		char user1;
		char user2;
		char rock = 'R';
		char paper = 'P';
		char scissors = 'S';
		
		cout << "Player 1: Enter R for Rock P for Paper or S for Scissors !" << endl;
		cin >> user1;
		cout << "Player 2: Enter R for Rock P for Paper or S for Scissors !" << endl;
		cin >> user2;
		
		char converted_user1 = toupper(user1);
		char converted_user2 = toupper(user2);
		
		if (converted_user1 != 'R' && converted_user1 != 'P' && converted_user1 != 'S'){
			(converted_user2 != 'R' && converted_user2 != 'P' && converted_user2 != 'S');{
				cout << "Invalid Selection From Both Users Try Again !" << endl;
			}
		}
		
		
		switch (converted_user1){
			case 'R':
				if (converted_user2 == 'P'){
					cout << "Paper Covers Rock; Player 2 Wins & Player 1 Losses !" << endl;
					break;
				}
				else if (converted_user2 == 'S'){
					cout << "Rock Breaks Scissor; Player 1 Wins & Player 2 Losses !" << endl;
					break;
				}
				else if (converted_user2 == 'R'){
					cout << "Nobody Wins" << endl;
					break;
				}
				else {
					cout << "A user entered a invalid input";
					break;
				}
				
			case 'P':
				if (converted_user2 == 'R'){
					cout << "Paper Covers Rock; Player 1 Wins & Player 2 Losses !" << endl;
					break;
				}
				else if (converted_user2 == 'S'){
					cout << "Scissors Cut Paper; Player 1 Losses & Player 2 Wins !" << endl;
					break;
				}
				else if (converted_user2 == 'P'){
					cout << "Nobody Wins" << endl;
					break;
				}
				else {
					cout << "A User Entered A Invalid Input";
					break;
				}
				
			case 'S':
				if (converted_user2 == 'R'){
					cout << "Rock Breaks Scissors; Player 2 Wins & Player 1 Losses !" << endl;
					break;
				}
				else if (converted_user2 == 'P'){
					cout << "Scissors cut Paper; Player 1 Wins & Player 2 Losses !" << endl;
					break;
				}
				else if (converted_user2 == 'S'){
					cout << "Nobody Wins" << endl;
					break;
				}
				else {
					cout << "A User Entered A Invalid Input";
					break;
				}
		}
	return 0;
	}
