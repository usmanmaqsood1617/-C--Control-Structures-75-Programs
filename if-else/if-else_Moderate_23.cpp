// Program 23
// Control Structure: If-Else
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a purchase amount and applies a 10% discount if the amount is at least 5,000; otherwise, no discount is given.
#include <iostream>
using namespace std;
int main ()
{
	int a, d, fa;
	
	cout <<"Enter purchase amount: ";
	cin >>a;
	
	if(a >= 5000)
	{
		d = a * 10 / 100;
		fa = a - d;
		
		cout <<"Discount = "<<d<<endl;
		cout <<"Final amount = "<<fa;
	}
	else
	{
        cout <<"No distcount"<<endl;
        cout <<"Final amount = "<<a;
	}
	
return 0;
}