// Program 36
// Control Structure: If-Else-if
// Difficulty: Moderate
// Question:
// Write a C++ program that takes marks and displays 
// “Excellent” for 90 or above, “Very Good” for 80–89, “Good” for 70–79, “Pass” for 50–69, and “Fail” below 50.
#include <iostream>
using namespace std;
int main ()
{
	int mark;
	
	cout <<"Enter your marks: ";
	cin >>mark;
	
	if(mark >= 90)
	{
		cout <<"Excellent";
	}
	else if(mark > 80)
	{
        cout <<"Very Good";
	}
	else if(mark > 70)
	{
        cout <<"Good";
	}
	else if(mark > 50)
	{
		cout<<"Pass";
	}
	else
	{
		cout<<"Fail";
	}
	
	
return 0;
}