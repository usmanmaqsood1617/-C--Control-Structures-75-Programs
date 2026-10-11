// Program 09
// Control Structure: If
// Difficulty:  Moderate
// Question:
//	Write a C++ program that takes a person's age and displays a message if the person is eligible for a driving license (age 18 or above).
#include <iostream>
using namespace std;
int main ()
{
	int age;
	cout <<"Enter your age: ";
	cin >>age;
	
	if(age >= 18)
    {
    	cout <<"You eligible for a driving license.";
	}
return 0;
}