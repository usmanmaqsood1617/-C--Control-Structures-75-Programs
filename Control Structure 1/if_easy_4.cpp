// Program 04
// Control Structure: If
// Difficulty: Easy
// Question:
// Write a C++ program that takes a number and checks whether it is even.
#include <iostream>
using namespace std;
int main ()
{
	int num;
	cout <<"Enter a number :";
	cin >>num;
	
	if(num % 2 == 0)
	{
		cout<<"Number is even";
	}
return 0;
}