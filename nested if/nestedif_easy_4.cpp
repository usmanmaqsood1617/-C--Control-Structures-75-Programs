// Program 04
// Control Structures: nestedif
// Difficulty Level: Easy
// Question:
// Write a C++ program that checks whether a user enters the correct PIN and, if correct, displays “Access Granted.”

#include <iostream>
using namespace std;

int main()
{
    int pin;

    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin == 1234)
        cout << "Access Granted.";
    else
        cout << "Incorrect PIN.";

    return 0;
}
