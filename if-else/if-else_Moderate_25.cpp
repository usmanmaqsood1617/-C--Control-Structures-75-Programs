// Program 25
// Control Structure: If-Else
// Difficulty: Moderate
// Question:
// Write a C++ program that takes two numbers and checks whether their sum is even or odd.
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, sum;
	
	cout <<"Enter first Number: ";
	cin >>num1;
	cout <<"Enter Second Number: ";
	cin >>num2;
	
	sum = num1 + num2;
	if(sum % 2 == 0)
	{
		cout <<"Sum is Even.";
	}
	else
	{
        cout <<"Sum is odd.";
	}
	
return 0;
}