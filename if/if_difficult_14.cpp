// Program 14
// Control Structure: If
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a number and displays it only if it is divisible by both 3 and 7.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	
	cout <<"Enter a Number: ";
	cin >>num;
	
	if(num % 3 == 0 && num % 7 == 0)
	{
		cout <<"Number = "<<num;
	}
	
return 0;
}