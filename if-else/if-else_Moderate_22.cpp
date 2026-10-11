// Program 22
// Control Structure: If-Else
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a person's age and displays “Child” if the age is below 18; otherwise, display “Adult.”
#include <iostream>
using namespace std;
int main ()
{
	int age;
	
	cout <<"Enter your age: ";
	cin >>age;
	
	if(age < 18)
	{
		cout <<"Child.";
	}
	else
	{
		cout <<"Adult.";
	}
	
return 0;
}