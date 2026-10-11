// Program 35
// Control Structure: If-Else-if
// Difficulty: Easy
// Question:
// Write a C++ program that takes a temperature in Celsius and displays “Cold” below 15, “Moderate” from 15 to 30, or “Hot” above 30.
#include <iostream>
using namespace std;
int main ()
{
	int tem;
	
	cout <<"Enter temperature in Celsius: ";
	cin >>tem;
	
	if(tem < 15)
	{
		cout <<"Cold";
	}
	else if(tem > 15 && tem < 30 )
	{
        cout <<"Moderate";
	}
	else
	{
        cout <<"Hot";
	}
	
	
return 0;
}