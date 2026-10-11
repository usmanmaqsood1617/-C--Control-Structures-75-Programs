// Program 27
// Control Structure: If-Else
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a year and checks whether it is a leap year or not.
#include <iostream>
using namespace std;
int main ()
{
	int year;
	
	cout <<"Enter a year: ";
	cin >>year;
	
	if(year % 4 == 0)
	{
		cout <<"It is a leap year";
	}
	else
	{
        cout <<"It is not a leap year";
	}
	
return 0;
}