// Program 31
// Control Structure: If-Else-if
// Difficulty: Easy
// Question:
// Write a C++ program that takes marks and displays a grade: A for 80 or above, B for 70–79, C for 60–69, D for 50–59, and F below 50.
#include <iostream>
using namespace std;
int main ()
{
	int mark;
	
	cout <<"Enter your marks: ";
	cin >>mark;
	
	if(mark >= 80)
	{
		cout <<"Grade A";
	}
	else if(mark >= 70)
	{
        cout <<"Grade B";
	}
	else if(mark >= 60)
	{
        cout <<"Grade C";
    }
	else if(mark >= 50)
	{
        cout <<"Grade D";
	}
	else
	{
        cout <<"Grade F";
	}
	
	
return 0;
}