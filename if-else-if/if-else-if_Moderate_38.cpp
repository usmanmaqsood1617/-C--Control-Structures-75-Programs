// Program 38
// Control Structure: If-Else-if
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a person's electricity units and calculates the bill using these rates: 
// Rs. 5 per unit up to 100 units, Rs. 8 per unit for 101–200 units, and Rs. 10 per unit above 200 units. Use the applicable rate for all units.
#include <iostream>
using namespace std;
int main ()
{
	int unit, bill;

    cout << "Enter electricity units: ";
    cin >> unit;

    if (unit <= 100)
    {
        bill = unit * 5;
    }
    else if (unit <= 200)
    {
        bill = unit * 8;
    }
    else
    {
        bill = unit * 10;
    }
    cout << "Your bill = Rs."<<bill<<endl;

	
	
return 0;
}