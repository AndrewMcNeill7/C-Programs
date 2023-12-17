#include <iostream>
#include <limits>
using namespace std;
double calculateScore(double assignment, double lab, double midterm, double final);
void letterGradeScale(double total);
double getScore(string prompt);
int main() {

	double assignmentScore;
	double labScore;
	double midtermScore;
	double finalScore;
	double total = 0;

	
	printf("**************************************************************\n");
	printf("Grade Calculator\n");
	assignmentScore = getScore("Enter Your Assignment Score\n");
	labScore = getScore("Enter Your Lab Score\n");
	midtermScore = getScore("Enter Your Midterm Score\n");
	finalScore = getScore("Enter Your Final Score\n");
	

	while(total == 0)
	{
		total = calculateScore(assignmentScore, labScore, midtermScore, finalScore);
		printf("Total Score = %.2f ", total);
		letterGradeScale(total);
		
	}
	
	return (0);
}
double getScore(string prompt)
{
	double score;
	
	printf(prompt.c_str());
	
	while(!(cin >> score) || (score < 0) || (score > 100))
	{
		
		printf("Enter An Valid Integer Value Between 0 & 100\n");
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	
	return (score);
}



double calculateScore(double assignment, double lab, double midterm, double final)
{
	double assignmentWeight;
	double labWeight;
	double midtermWeight;
	double finalWeight;
	double totalGrade = 0;
	
	assignmentWeight = (assignment * .2);
	labWeight = (lab * .2);
	midtermWeight = (midterm * .3);
	finalWeight = (final * .3);
	totalGrade = totalGrade + assignmentWeight + labWeight + midtermWeight + finalWeight;
	
	return totalGrade;
	
}

void letterGradeScale(double total)
{
	if((total >= 90) && (total <= 100))
	{
		printf("& Your Grade is A");
	}
	else if((total >= 80) && (total <=89))
	{
		printf("& Your Grade is B");
	}
	else if((total >= 70) && (total <=79))
	{
		printf("& Your Grade is C");
	}
	else if((total >= 60) && (total <=69))
	{
		printf("& Your Grade is D");
	}
	else if(total < 59)
	{
		printf("& Your Grade is F");
	}
}



