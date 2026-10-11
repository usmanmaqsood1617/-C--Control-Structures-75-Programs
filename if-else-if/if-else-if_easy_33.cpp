// Program 33
// Control Structure: If-Else-if
// Difficulty: Easy
// Question:
// Write a C++ program that takes a person's age and categorizes them as a child (below 13), teenager (13–19), or adult (20 or above).
#include <iostream>
using namespace std;
int main ()
{
	int age;
	
	cout <<"Enter your age: ";
	cin >>age;
	
	if(age < 13)
	{
		cout <<"Child";
	}
	else if(age >= 13 && age < 19 )
	{
        cout <<"teenager";
	}
	else
	{
        cout <<"Adult";
	}
	
	
return 0;
}