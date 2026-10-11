// Program 30
// Control Structure: If-Else
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a shopping bill and applies a 20% discount if the bill is above 20,000; otherwise, apply a 5% discount
#include <iostream>
using namespace std;
int main ()
{
	float bill, dis, fa;
	
	cout <<"Enter Shoping bill: ";
	cin >>bill;
	
	if(bill > 20000 )
	{
		dis = bill * 20 /100;
	}
	else
	{
        dis = bill * 5 / 100;
	}
	     fa = bill - dis;
	
	cout <<"Discount = "<<dis<<endl;
	cout <<"final amount = "<<fa;
	
	
return 0;
}