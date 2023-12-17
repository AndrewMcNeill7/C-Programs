//==========================================================
// var_types.cpp
// variable types and operations
//==========================================================
#include <iostream>
#include <string>
#include <climits>
#include <typeinfo>
using namespace std;

int main()
{
    double PI = 3.14;
	double radius;
	
	
	// FORMULAS FOR CIRCLE
	// double area = PI *(radius * radius);
	// double circumference = 2 * PI *radius;
	// double diameter = 2 * radius;
	

    // THE USER ENTERS THE RADIUS
	cout << "Enter The Radius of a Circle" << endl;
	cin >> radius;
	
	
	// FORMULA OUTPUTS PRESENTED
	double area = PI *(radius * radius);
	cout << "The Area of the Circle with your provided Radius is " << area 
	<< endl;
	
	double circumference = 2 * PI * radius;
	cout << "The Circumference of the Circle with your provided Radius is "
	<< circumference << endl;
	
	double diameter = 2 * radius;
	cout << "The Diamter of the Circle with your provided Radius is "
	<< diameter << endl;


	
	
	return 0;
}
