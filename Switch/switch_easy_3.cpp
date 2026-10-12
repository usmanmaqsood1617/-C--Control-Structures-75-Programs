// Program 03
// Control Structure: switch
// Difficulty: Easy
// Question:
// Write a C++ program that takes an arithmetic operator (+, -, *, /) and two numbers, then performs the selected operation.

#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "Result = " << num1 + num2;
        break;

    case '-':
        cout << "Result = " << num1 - num2;
        break;

    case '*':
        cout << "Result = " << num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Cannot divide by zero";
        break;

    default:
        cout << "Invalid operator";
    }

    return 0;
}
