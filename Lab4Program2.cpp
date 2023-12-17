//getmax42.cpp
#include <iostream>
using namespace std;

double max(double d1, double d2);
double max(double d1, double d2, double d3);
double max(double d1, double d2, double d3, double d4);

int main()
{
    double result;
    result = max(10.0, 20.0);
    cout << "Max(10.0, 20.0) = "<< result << endl;

    result = max(11.5, 21.2, 5.3);
    cout << "Max(11.5, 21.2, 5.3) = " << result << endl;
    
    result = max(1.8, 2.2, 1.7, 2.1);
    cout << "Max(1.8, 2.2, 1.7, 2.1) = " << result << endl;
    
    return 0;
}

double max(double d1, double d2){
    double num1 = d1;
	double num2 = d2;
	double max = 0;
	
	if(num1 > num2)
	{
		max = max + num1;
		
	}
	else 
	{
		max = max + num2;
	}
	
	return max;
}

double max(double d1, double d2, double d3)
{
   return max(max(d1,d2),d3);
}

double max(double d1, double d2, double d3, double d4)
{
	return max(max(d1,d2,d3),d4);
}
