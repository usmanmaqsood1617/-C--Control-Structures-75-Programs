// Program 32
// Control Structure: If-Else-if
// Difficulty: Easy
// Question:
// Write a C++ program that takes a number and displays whether it is positive, negative, or zero.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Number: ";
	cin >>num;
	
	if(num < 0)
	{
		cout <<"Negative";
	}
	else if(num > 0)
	{
        cout <<"positive";
	}
	else
	{
        cout <<"Zero";
	}
	
	
return 0;
}