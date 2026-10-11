// Program 16
// Control Structure: If-Else
// Difficulty: Easy
// Question:
// Write a C++ program that checks whether a number is even or odd.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Numbers: ";
	cin >>num;
	
	if(num % 2 == 0)
	{
		cout <<"The Number is even.";
	}
	else
	{
		cout <<"The Number is odd.";
	}
	
return 0;
}