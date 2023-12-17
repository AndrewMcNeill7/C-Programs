#include <iostream>
#include <cmath>
using namespace std;


int main() {

	double x = 22;
	double exponent = 2;
	double y = 22.22;
	
	double absoluteValue = abs(x);
	double power = pow(x,exponent);
	double squareRoot = sqrt(x);
	double rounded = round(y);
	double ceiling = ceil(y);
	double roundFloor = floor(y);
	
	
	
	
	//PRINT STATEMENTS OF ALL FUNCTIONS
	printf("|22| =  %.3f\n",absoluteValue);
	printf("22^2 = %.3f\n", power);
	printf("The Square Root of 22 = %.3f\n", squareRoot);
	printf("22.22 Rounded = %.3f\n", rounded);
	printf("22.22 Rounding Up = %.3f\n", ceiling);
	printf("22.22 Rounded To The Nearest Integer = %.3f", roundFloor);

    return 0;
}