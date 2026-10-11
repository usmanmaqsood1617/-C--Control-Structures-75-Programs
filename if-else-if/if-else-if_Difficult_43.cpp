// Program 43
// Control Structure: If-Else-if
// Difficulty: Difficult 
// Question:
// Write a C++ program that takes a year and identifies whether it is a leap year, a century year that is not a leap year, or an ordinary year.

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else if (year % 100 == 0)
    {
        cout << "Century Year (Not a Leap Year)";
    }
    else if (year % 4 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Ordinary Year";
    }

    return 0;
}
