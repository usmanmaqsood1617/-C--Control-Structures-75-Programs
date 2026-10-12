// Program 05
// Control Structures: nestedif
// Difficulty Level: Easy
// Question:
// Write a C++ program that checks whether two numbers are positive and, if both are positive, checks whether they are equal.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > 0 && b > 0)
    {
        if (a == b)
            cout << "Both numbers are positive and equal.";
        else
            cout << "Both numbers are positive but not equal.";
    }
    else
    {
        cout << "Both numbers must be positive.";
    }

    return 0;
}
