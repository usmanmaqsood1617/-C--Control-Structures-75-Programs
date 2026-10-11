// Program 15
// Control Structure: If
// Difficulty: Difficult
// Question:
// Write a C++ program that takes the price of a product and displays a 15% discount amount if the price is greater than 10,000.
#include <iostream>
using namespace std;
int main ()
{
	float price, dis;
	
	cout <<"Enter the price of a product: ";
	cin >>price;
	
	if(price > 10000)
	{
		dis = price * 15 / 100;
		cout <<"Discount = "<<dis; 
	}
	
	
return 0;
}