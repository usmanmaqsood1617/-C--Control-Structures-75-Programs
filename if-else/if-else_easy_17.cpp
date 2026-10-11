// Program 17
// Control Structure: If-Else
// Difficulty: Easy
// Question:
// Write a C++ program that checks whether a person is eligible to vote based on age (18 or above).
#include <iostream>
using namespace std;
int main ()
{
	int age;
	
	cout <<"Enter your age: ";
	cin >>age;
	
	if(age >= 18)
	{
		cout <<"You are eligible to vote.";
	}
	else
	{
		cout <<"You are not eligible to vote.";
	}
	
return 0;
}