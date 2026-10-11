// Program 21
// Control Structure: If-Else
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a number and checks whether it is divisible by 5.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Number: ";
	cin >>num;
	
	if(num % 5 == 0)
	{
		cout <<"The number is divisible by 5.";
	}
	else
	{
		cout <<"The number is not divisible by 5.";
	}
	
return 0;
}