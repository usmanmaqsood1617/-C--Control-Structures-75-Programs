// Program 13
// Control Structure: If
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a year and displays a message if it is a leap year.
#include <iostream>
using namespace std;
int main ()
{
	int year;
	
	cout <<"Enter a year: ";
	cin >>year;
	
	if(year % 4 == 0)
	{
		cout <<"It is a leap year.";
	}
	
return 0;
}