// Program 07
// Control Structures: nestedif
// Difficulty Level: moderate
// Question:
// Write a C++ program that checks whether a number is divisible by 2 and, if it is, checks whether it is also divisible by 4.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        if (num % 4 == 0)
            cout << "The number is divisible by both 2 and 4.";
        else
            cout << "The number is divisible by 2 but not by 4.";
    }
    else
    {
        cout << "The number is not divisible by 2.";
    }

    return 0;
}
