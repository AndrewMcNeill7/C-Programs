//==========================================================
// riddler_pseudocode.cpp
//==========================================================
#include <iostream>
using namespace std;

int main() {

    int address;
    int thousands = 0;
	int hundreds = 0;
	int tens = 0;
	int ones = 0;
	bool correctAddress = false;
	char playAgain;
	char upperCasePlayAgain;
	


	while (correctAddress != true)
	{
		printf("*****************************************************************\n");
		printf("Enter A 4 Digit Number Address To Solve The Riddle\n");
		printf("The Answer To The Riddle Must Have:\n1. The Sum Of All The Digits Equals 27\n");
		printf("2. The Number Must Be Odd\n");
		printf("3. The Digit In The Thousands Place Is Three Times The Digit In The Tens Place\n");
		printf("4. Four different digits\n");
		printf("\n");
	
		cin >> address;
		
		//INPUT VALIDATION
		while((address > 9999) || (address < 1000))
		{
			printf("Please Enter A Value That Is Four Digits\n");
			cin >> address;
		}
	
		//GET INDIVIDUAL VALUES FROM THE ADDRESS
		thousands = address/1000;
		hundreds = address%1000/100;
		tens = address%100/10;
		ones = address%10;
		
		
		

		//ANSWER CONDITIONALS
		if (thousands + hundreds + tens + ones != 27)
		{
			printf("1. The Sum Of Your Digits Is Not 27\n");
		}
		if (ones%2==0)
		{
			printf("2. The Number Is Not Odd\n");
		}
		if (tens*3 != thousands)
		{
			printf("3. The Thousands Place Value Is Not Three Times The Tens Place Value\n");
		}
		if ((ones == tens) || (ones == hundreds) || (ones == thousands) || (tens == hundreds) || (hundreds == thousands))
		{
			printf("4. Each Value Is Not Different\n");
		}
		else
		{
			printf("Holy Digits ! You Solved The Riddle !\n");
		}
		
		
		
		//PLAY AGAIN CONDITIONAL
		printf("Do You Care To Play Again Y/N?\n");
		cin >> playAgain;
		upperCasePlayAgain = toupper(playAgain);
		
		if (upperCasePlayAgain == 'Y')
		{
			continue;
		}
		else if (upperCasePlayAgain == 'N')
		{
			break;
		}

	}
      

        //printf("\n\tMCXI=%d %d %d %d", m, c, x, i);
        //printf("\tholy digits batman...\n\n");


    return 0;
}
