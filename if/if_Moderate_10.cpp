// Program 10
// Control Structure: If
// Difficulty:  Moderate
// Question:
// Write a C++ program that takes a number and displays its cube if the number is negative
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Number: ";
	cin >>num;
	
	if(num < 0)
	{
		cout <<"cube: "<<num*num*num;
	}
	
return 0;
}