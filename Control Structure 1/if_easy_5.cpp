// Program 05
// Control Structure: If
// Difficulty: Easy
// Question:
// Write a C++ program that takes two numbers and displays the first number if it is greater than the second number.
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2;
	
	cout <<"Enter first number: ";
	cin >>num1;
	
	cout <<"Enter Second number: ";
	cin >>num2;
	
	if(num1>num2)
	{
		cout <<"First Number is Greater: "<<num1;
	}
	
return 0;
}