// Program 18
// Control Structure: If-Else
// Difficulty: Easy
// Question:
// Write a C++ program that takes two numbers and displays the greater number, or reports that both are equal
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2;
	
	cout <<"Enter Two numbers: ";
	cin >>num1 >>num2;
	
	if(num1 > num2)
	{
		cout <<"First Number is Greater."<<num1;
	}
	else if(num2 > num1)
	{
		cout <<"Second Number is Greater."<<num2;
	}
	else
	{
		cout <<"Both Numbers are Equal.";
	}
return 0;
}