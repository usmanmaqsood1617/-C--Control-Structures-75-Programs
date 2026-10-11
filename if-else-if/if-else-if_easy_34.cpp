// Program 34
// Control Structure: If-Else-if
// Difficulty: Easy
// Question:
// Write a C++ program that takes two numbers and displays which number is greater or whether they are equal.
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2;
	
	cout <<"Enter two Numbers: ";
	cin >>num1 >>num2;
	
	if(num1 > num2)
	{
		cout <<"First number is greater";
	}
	else if(num2 > num1 )
	{
        cout <<"Secound number is greater";
	}
	else
	{
        cout <<"Both are Equal";
	}
	
	
return 0;
}