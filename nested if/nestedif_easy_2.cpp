// Program 02
// Control Structures: nestedif
// Difficulty Level: Easy
// Question:
// Write a C++ program that checks whether a number is positive and, if it is, checks whether it is even.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        if (num % 2 == 0)
            cout << "The number is positive and even.";
        else
            cout << "The number is positive but odd.";
    }
    else
    {
        cout << "The number is not positive.";
    }

    return 0;
}
