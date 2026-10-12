// Program 15
// Control Structure: switch
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a menu choice to calculate simple interest, compound interest, or total amount using the principal, rate, and time provided by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float p, r, t, si, ci, amount;

    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest\n";
    cout << "3. Total Amount (Compound)\n";

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;

    switch (choice)
    {
    case 1:
        si = (p * r * t) / 100;
        cout << "Simple Interest = " << si;
        break;

    case 2:
        amount = p * pow(1 + r / 100, t);
        ci = amount - p;
        cout << "Compound Interest = " << ci;
        break;

    case 3:
        amount = p * pow(1 + r / 100, t);
        cout << "Total Amount = " << amount;
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}
