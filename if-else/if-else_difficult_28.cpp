// Program 28
// Control Structure: If-Else
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a student's marks in three subjects and checks whether the student passes all subjects
// assuming 40 is the passing mark in each.
#include <iostream>
using namespace std;
int main ()
{
	int m1, m2,m3;
	
	cout <<"Enter the marks in Three subjects: ";
	cin >>m1 >>m2 >>m3;
	
	if(m1 >= 40 && m3 >= 40 && m2 >= 40 )
	{
		cout <<"Student passes all three subjects.";
	}
	else
	{
        cout <<"Student fails in one or more subjects.";
	}
	
return 0;
}