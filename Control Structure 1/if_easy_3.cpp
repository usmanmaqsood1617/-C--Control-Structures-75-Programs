// Program 03
// Control Structure: If
// Difficulty: Easy
// Question:
// Write a C++ program that takes a person's age and checks whether the person is 18 or older.
#include <iostream>
using namespace std;
int main ()
{
	int age;
	cout <<"Enter your Age :";
	cin >>age;
	
	if(age>=18)
	{
		cout <<"You are 18 or older";
	}
return 0;
}