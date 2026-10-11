// Program 07
// Control Structure: If
// Difficulty:  Moderate
// Question:
// Write a C++ program that takes a number and displays its square if it is divisible by 5.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Number: ";
	cin >>num;
	
	if (num % 5 == 0)
	{
		cout <<"Square = "<< num * num;
	}
	
return 0;
}