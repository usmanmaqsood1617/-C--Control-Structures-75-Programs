// Program 06
// Control Structure: If
// Difficulty:  Moderate
// Question:
// Write a C++ program that takes a salary and displays a bonus if the salary is less than 50,000.
#include <iostream>
using namespace std;
int main ()
{
	float salary;
	
	cout <<"Enter your salary: ";
	cin >> salary;
	
	if(salary < 50000)
	{
		cout <<"You are eligible for a bonus.";
	}
	
return 0;
}