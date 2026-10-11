// Program 12
// Control Structure: If
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a student's marks in three subjects and displays the total only if every subject's marks are at least 40.
#include <iostream>
using namespace std;
int main ()
{
	int m1 ,m2, m3, total;
	
	cout <<"Enter Marks in first subject: ";
	cin >>m1;
	
	cout <<"Enter Marks in Sceond subject: ";
	cin >>m2;
	
	cout <<"Ente Marks in third subject: ";
	cin >>m3;
	
	if(m1 >= 40 && m2 >= 40 && m3 >= 40)
	{
		total = m1+m2+m3;
		cout <<"Total Marks: "<<total;
	}
	
return 0;
}