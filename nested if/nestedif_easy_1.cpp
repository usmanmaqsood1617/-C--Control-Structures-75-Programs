// Program 01
// Control Structures: nestedif
// Difficulty Level: Easy
// Question
// Write a C++ program that checks whether a person is at least 18 years old and, if so, checks whether they have a valid identity card.

#include <iostream>
using namespace std;

int main()
{
    int age;
    char idCard;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Do you have a valid identity card? (Y/N): ";
        cin >> idCard;

        if (idCard == 'Y' || idCard == 'y')
            cout << "You are eligible.";
        else
            cout << "Valid identity card required.";
    }
    else
    {
        cout << "You must be at least 18 years old.";
    }

    return 0;
}
