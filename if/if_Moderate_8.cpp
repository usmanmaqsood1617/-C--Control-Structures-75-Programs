// Program 08
// Control Structure: If
// Difficulty:  Moderate
// Question:
//	Write a C++ program that takes a student's marks and displays “Excellent” if the marks are 90 or above.
#include <iostream>
using namespace std;
int main ()
{
	int marks;
	
	cout <<"Enter student's marks: ";
	cin >>marks;
	
	if(marks >= 90)
	{
		cout <<"Excellent";
	}
	
return 0;
}