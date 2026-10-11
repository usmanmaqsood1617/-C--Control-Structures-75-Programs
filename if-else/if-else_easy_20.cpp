// Program 20
// Control Structure: If-Else
// Difficulty: Easy
// Question:
// Write a C++ program that takes marks and displays “Pass” if marks are 50 or above; otherwise, display “Fail.”
#include <iostream>
using namespace std;
int main ()
{
	int marks;
	
	cout <<"Enter your Marks: ";
	cin >>marks;
	
	if(marks >= 50)
	{
		cout <<"Pass.";
	}
	else
	{
		cout <<"Fail.";
	}
	
return 0;
}