// Program 26
// Control Structure: If-Else
// Difficulty: Difficult
// Question:
// Write a C++ program that takes three numbers and checks whether the first number is the largest; otherwise, display that it is not the largest
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, num3;
	
	cout <<"Enter Threes Numbers: ";
	cin >>num1 >>num2 >>num3;
	
	if(num1 > num2 && num1 > num3)
	{
		cout <<"first number is the largest";
	}
	else
	{
        cout <<"first number is not the largest";
	}
	
return 0;
}