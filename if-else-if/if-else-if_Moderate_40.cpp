// Program 40
// Control Structure: If-Else-if
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a percentage and displays 
// “Distinction” for 80 or above, “First Division” for 70–79, “Second Division” for 60–69, “Third Division” for 50–59, and “Fail” below 50.
#include <iostream>
using namespace std;

int main()
{
    float per;

    cout << "Enter your percentage: ";
    cin >> per;

    if (per >= 80)
    {
        cout << "Distinction";
    }
    else if (per >= 70)
    {
        cout << "First Division";
    }
    else if (per >= 60)
    {
        cout << "Second Division";
    }
    else if (per >= 50)
    {
        cout << "Third Division";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}