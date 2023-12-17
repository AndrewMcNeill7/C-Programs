#include <iostream>
using namespace std;
void inputValidation (char c);

int main() {
	
	char c;
	int digsum = 0;
	
	
	printf("Enter A Series of Random Text\n");
	cin.get(c);
	inputValidation(c);
	
	while(c != '\n')
	{
		
		if((c >= '0') && (c <= '9'))
		{
			digsum = digsum + (c - '0');
			printf("%c ", c);
		}
		cin.get(c);
		
	}
	printf("The Total ASCI Sum Of Your Character Is %d\n", digsum);

	return (0);
}

void inputValidation (char c)
{
	
	while(c == '\n')
	{
		printf("You Entered A New Line Character. The Program Can Not Run Properly\n");
		printf("The Program Is Terminating. Try Again !\n");
		abort();
		
	}

}