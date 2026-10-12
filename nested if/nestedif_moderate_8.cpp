// Program 08
// Control Structures: nestedif
// Difficulty Level: moderate
// Question:
// ⁠Write a C++ program that checks whether a person meets the minimum age requirement for a driving license and, if so, checks whether they have passed the driving test.

#include <iostream>
using namespace std;

int main()
{
    int age;
    char test;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Have you passed the driving test? (Y/N): ";
        cin >> test;

        if (test == 'Y' || test == 'y')
            cout << "Eligible for driving license.";
        else
            cout << "You must pass the driving test.";
    }
    else
    {
        cout << "You are underage for a driving license.";
    }

    return 0;
}
