// Program 19
// Control Structure: If-Else
// Difficulty: Easy
// Question:
// Write a C++ program that checks whether a number is positive or not positive.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a numbers: ";
	cin >>num;
	
	if(num >= 0)
	{
		cout <<"Entered Number is positive.";
	}
	else
	{
		cout <<"Entered Number is not Positive.";
	}
	
return 0;
}