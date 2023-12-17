//===============================================================
//structure.cpp
//larry wall, 1954-09-27
//===============================================================
#include <iostream>
#include <string>
using namespace std;
struct Date {
	int year;
	int month;
	int day;
};

struct Person {
	string firstName;
	string lastName;
	Date dob;
	int age;
};
int calcAge(Person p,Date curdate); //calculate the current age
void printInfo(Person p);   //print personal information

int main() {
    Date today = {2023, 11, 15}; //yyyy,mm,dd
    Person p1;
	
    //p.dob.year, p.dob.month, p.dob.day
    //p.dob = { 1954, 9, 27 };
	
	//FIRST NAME INPUT
    cout << "Enter First Name: " << endl;
    cin >> p1.firstName;
    
	//LAST NAME INPUT
	cout << "Enter Last Name: "  << endl;
    cin >> p1.lastName;
	
	//AGE INPUT
	cout << "Enter Your Birth Year " << endl;
	cin >> p1.dob.year;
	
	cout << "Enter Your Birth Month " << endl;
	cin >> p1.dob.month;
	
	cout << "Enter Your Birth Day " << endl;
	cin >> p1.dob.day;

	
    //calcAge...
	p1.age = calcAge(p1,today);
    //printInfo...
	printInfo(p1);
    return (0);
}

//stubs...
int calcAge(Person p,Date curdate)
{
	int age;
	//age = curdate.year - p.dob.year;
	
	if((p.dob.year <= 2023) && (p.dob.year > 0))
	{
		if((curdate.month < p.dob.month) || ((curdate.month == p.dob.month) && (curdate.day < p.dob.day)))
		{
			age = (curdate.year - p.dob.year) - 1;
		}
		else
		{
			age = (curdate.year - p.dob.year);
		}
	}
	return age;
	
}


void printInfo(Person p)
{
	cout << "******************************************************************" << endl;
	cout << "First Name " << p.firstName << endl;
	cout << "Last Name " << p.lastName << endl;
	cout << "Birth Year " << p.dob.year << endl;
	cout << "Birth Month " << p.dob.month << endl;
	cout << "Day of Birth " << p.dob.day << endl;
	cout << "You Are " << p.age;


}




