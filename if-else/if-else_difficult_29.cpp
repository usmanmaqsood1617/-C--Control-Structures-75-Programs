// Program 29
// Control Structure: If-Else
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a number and checks whether it is a three-digit number or not.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Number: ";
	cin >>num;
	
	if(num >= 100 && num <= 999 )
	{
		cout <<"it is a three digit number.";
	}
	else
	{
        cout <<"it is not a three digit number.";
	}
	
return 0;
}