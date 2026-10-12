// Program 06
// Control Structure: switch
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a menu choice (1–4) and performs addition, subtraction, multiplication, or division on two numbers.

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice)
    {
    case 1:
        cout << "Result = " << a + b;
        break;
    case 2:
        cout << "Result = " << a - b;
        break;
    case 3:
        cout << "Result = " << a * b;
        break;
    case 4:
        if (b != 0)
            cout << "Result = " << a / b;
        else
            cout << "Cannot divide by zero";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}
