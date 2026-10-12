// Program 12
// Control Structure: switch
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a month number and a year, then displays the number of days in that month, accounting for leap years.

#include <iostream>
using namespace std;

int main()
{
    int month, year;

    cout << "Enter month number (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days";
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days";
        break;

    case 2:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            cout << "29 days";
        else
            cout << "28 days";
        break;

    default:
        cout << "Invalid month number";
    }

    return 0;
}
