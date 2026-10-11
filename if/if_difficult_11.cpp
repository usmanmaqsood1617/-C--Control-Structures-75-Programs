// Program 11
// Control Structure: If
// Difficulty: Difficult
// Question:
// Write a C++ program that takes three numbers and displays the largest number only if it is greater than 100.
#include <iostream>
using namespace std;
int main ()
{
	int num1 ,num2, num3, largest;
	
	cout <<"Enter first Number";
	cin >>num1;
	
	cout <<"Enter Sceond Number";
	cin >>num2;
	
	cout <<"Enter third Number";
	cin >>num3;
	
	largest = num1;
	
	if(num2 > largest)
	{
	   largest = num2;
	}
	if(num3 > largest)
	{
		largest = num3;
	}
	if(largest > 100)
	{
		cout <<"largest Number = "<<largest;
	}
	
return 0;
}