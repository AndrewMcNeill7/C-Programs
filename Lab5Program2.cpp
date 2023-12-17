#include <iostream>
#include <limits>
using namespace std;
int getNumber();
int reversingNumber(int num);

int main() {
	
	int num;
	int reverseNum;
	
	num = getNumber();
	reverseNum = reversingNumber(num);
	printf("%d", reverseNum);

	return (0);
}

int getNumber()
{
	int num;
	
	printf("Enter A Whole Number To See It Outputted Backwards\n");
	
	while(!(cin >> num))
	{
		printf("Enter An Valid Integer Value\n");
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		
	}
	
	return num;
}

int reversingNumber(int num)
{
	int n = 0;
	int reverseNum = 0;
	
	while (num > 0)
	{
		
		n = (num % 10);
		num = num/10;
		reverseNum = (reverseNum * 10) + n;
	}

	return reverseNum;
}

